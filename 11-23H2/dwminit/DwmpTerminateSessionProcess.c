/*
 * XREFs of DwmpTerminateSessionProcess @ 0x18000CA60
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@54@Z @ 0x18000114C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U3@U2@@-$_.c)
 *     IsDwmMonitorExtDwmProcessCreatedPresent @ 0x180002B50 (IsDwmMonitorExtDwmProcessCreatedPresent.c)
 *     ?ReportAggregatedValues@_unnamed_type_gDwmInitTelemetryAggregator_@@QEAAXXZ @ 0x18000B628 (-ReportAggregatedValues@_unnamed_type_gDwmInitTelemetryAggregator_@@QEAAXXZ.c)
 *     ?TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z @ 0x18000B97C (-TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z.c)
 *     ?UnmapDwmVirtualAccount@@YAJXZ @ 0x18000BA5C (-UnmapDwmVirtualAccount@@YAJXZ.c)
 *     ?WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z @ 0x18000BBE4 (-WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000CEAC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     DwmpRequestProcessShutdown @ 0x18000D01C (DwmpRequestProcessShutdown.c)
 */

__int64 __fastcall DwmpTerminateSessionProcess(int a1)
{
  int v2; // eax
  unsigned int v3; // ecx
  int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _unnamed_type_gDwmInitTelemetryAggregator_ *v10; // rcx
  void *v12; // [rsp+28h] [rbp-48h]
  GUID *v13; // [rsp+50h] [rbp-20h] BYREF
  GUID *v14; // [rsp+58h] [rbp-18h] BYREF
  __int64 v15; // [rsp+60h] [rbp-10h] BYREF
  DWORD ExitCode; // [rsp+98h] [rbp+28h] BYREF
  int v17; // [rsp+A0h] [rbp+30h] BYREF
  unsigned int v18; // [rsp+A8h] [rbp+38h] BYREF

  ExitCode = 0;
  AcquireSRWLockExclusive(&gDwmStateLock);
  dword_18001A4E8 = GetCurrentThreadId();
  if ( ghDwmProcess )
  {
    v2 = DwmpRequestProcessShutdown();
    if ( v2 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v3, &dword_180011A68, 2u, v2, 0x6ABu, v12);
    WaitForDwmExit(&ExitCode, 0LL);
  }
  v4 = UnmapDwmVirtualAccount();
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_180011A68, 2u, v4, 0x6B0u, v12);
  }
  else if ( IsDwmMonitorExtDwmProcessCreatedPresent() )
  {
    DwmMonitorExtCleanup();
  }
  dword_18001A4E8 = 0;
  ReleaseSRWLockExclusive(&gDwmStateLock);
  if ( (unsigned int)dword_180016000 > 5
    && (qword_180016010 & 0x400000000000LL) != 0
    && (qword_180016018 & 0x400000000000LL) == qword_180016018 )
  {
    v17 = a1;
    v13 = &gDwmInitTargetAppSessionGuid;
    v18 = v6;
    v14 = &gDwmInitTelemetryActivityId;
    v15 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
      v7,
      (int)&unk_1800125C7,
      v8,
      v9,
      (__int64)&v15,
      (__int64 *)&v14,
      (__int64)&v18,
      (__int64)&v17,
      (__int64 *)&v13);
  }
  TraceLoggingWriteEtw(9, v6, 0);
  _unnamed_type_gDwmInitTelemetryAggregator_::ReportAggregatedValues(v10);
  return v6;
}
