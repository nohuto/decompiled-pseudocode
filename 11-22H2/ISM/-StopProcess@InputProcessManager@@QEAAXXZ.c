/*
 * XREFs of ?StopProcess@InputProcessManager@@QEAAXXZ @ 0x180076E14
 * Callers:
 *     ?RegisterInputProcess@InputProcessManager@@MEAAJPEAVBamoInputProcessManagerStub@@PEAVBamoInputProcessProxy@@@Z @ 0x1801C2100 (-RegisterInputProcess@InputProcessManager@@MEAAJPEAVBamoInputProcessManagerStub@@PEAVBamoInputPr.c)
 *     ??1HeatProcessor@@MEAA@XZ @ 0x1801E7814 (--1HeatProcessor@@MEAA@XZ.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x18006DB30 (MicrosoftTelemetryAssertTriggeredArgs.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1800B2A70 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?Provider@InputTraceLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1800B4E40 (-Provider@InputTraceLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800E5B4C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

void __fastcall InputProcessManager::StopProcess(InputProcessManager *this)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // rcx
  bool v4; // zf
  BOOL v5; // eax
  __int64 v6; // rcx
  int v7; // [rsp+50h] [rbp+8h] BYREF
  BOOL v8; // [rsp+58h] [rbp+10h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF

  v2 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v2 > 4u )
  {
    v3 = 512LL;
    if ( (*((_DWORD *)v2 + 4) & 0x200LL) != 0 && (*((_QWORD *)v2 + 3) & 0x200LL) == *((_QWORD *)v2 + 3) )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        v2,
        &unk_1802377BE,
        0LL,
        0LL);
  }
  *((_BYTE *)this + 64) = 0;
  if ( !*((_QWORD *)this + 10) )
  {
    v7 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgs(v3, 0x20000, 133);
  }
  if ( (unsigned int)dword_180275498 > 5
    && (qword_1802754A8 & 0x400000000000LL) != 0
    && (qword_1802754B0 & 0x400000000000LL) == qword_1802754B0 )
  {
    v4 = *((_QWORD *)this + 10) == 0LL;
    v9 = 0x1000000LL;
    v5 = !v4;
    v4 = *((_QWORD *)this + 7) == 0LL;
    v7 = v5;
    v8 = !v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_180275498,
      (unsigned int)&unk_1802376A5,
      0,
      0,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v7);
  }
  v6 = *((_QWORD *)this + 7);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v6 + 8) + 24LL))(v6 + 8);
}
