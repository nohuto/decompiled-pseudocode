/*
 * XREFs of ?CleanupOldDwmProcess@@YAJXZ @ 0x18000A454
 * Callers:
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x18000A7C0 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800010A8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlg.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@54@Z @ 0x18000114C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U3@U2@@-$_.c)
 *     __security_check_cookie @ 0x180001CB0 (__security_check_cookie.c)
 *     memset_0 @ 0x180002688 (memset_0.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180008AB4 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?GetPrimaryDisplayDeviceInfo@@YA_NPEAU_DISPLAY_DEVICEW@@@Z @ 0x18000AD88 (-GetPrimaryDisplayDeviceInfo@@YA_NPEAU_DISPLAY_DEVICEW@@@Z.c)
 *     ?ReportAggregatedValues@_unnamed_type_gDwmInitTelemetryAggregator_@@QEAAXXZ @ 0x18000B628 (-ReportAggregatedValues@_unnamed_type_gDwmInitTelemetryAggregator_@@QEAAXXZ.c)
 *     ?ShouldRestartSession@@YA_NU_FILETIME@@@Z @ 0x18000B7CC (-ShouldRestartSession@@YA_NU_FILETIME@@@Z.c)
 *     ?TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z @ 0x18000B97C (-TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z.c)
 *     ?WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z @ 0x18000BBE4 (-WaitForDwmExit@@YAJPEAKPEAU_FILETIME@@@Z.c)
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000CD8C (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     DwmpSignalSessionShutdown @ 0x18000D0CC (DwmpSignalSessionShutdown.c)
 */

__int64 CleanupOldDwmProcess(void)
{
  int v0; // eax
  unsigned int v1; // ebx
  bool restarted; // si
  _unnamed_type_gDwmInitTelemetryAggregator_ *v3; // rcx
  HANDLE v4; // rdi
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // eax
  unsigned __int16 *v8; // rcx
  int v9; // eax
  unsigned __int16 *v10; // rcx
  DWORD v11; // eax
  _unnamed_type_gDwmInitTelemetryAggregator_ *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  DWORD ExitCode; // [rsp+58h] [rbp-B0h] BYREF
  DWORD v17; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v18; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+68h] [rbp-A0h] BYREF
  GUID *v20; // [rsp+70h] [rbp-98h] BYREF
  __int64 v21; // [rsp+78h] [rbp-90h] BYREF
  struct _FILETIME ExitTime; // [rsp+80h] [rbp-88h] BYREF
  _DISPLAY_DEVICEW DisplayDevice; // [rsp+88h] [rbp-80h] BYREF
  LPCWSTR Strings[3]; // [rsp+3D8h] [rbp+2D0h] BYREF
  unsigned __int16 v25[12]; // [rsp+3F0h] [rbp+2E8h] BYREF
  unsigned __int16 v26[12]; // [rsp+408h] [rbp+300h] BYREF

  ExitCode = 0;
  ExitTime = 0LL;
  v0 = WaitForDwmExit(&ExitCode, &ExitTime);
  v1 = v0;
  if ( v0 < 0 )
  {
    DoStackCaptureDirect(v0, 0x435u);
LABEL_19:
    DwmpSignalSessionShutdown();
    v1 = -2147467259;
    ++HIDWORD(qword_180016C84);
    ++HIDWORD(qword_180016C8C);
    if ( SHIDWORD(qword_180016C8C) > 10 )
    {
      _unnamed_type_gDwmInitTelemetryAggregator_::ReportAggregatedValues(v12);
      HIDWORD(qword_180016C8C) = 0;
    }
    if ( (unsigned int)dword_180016000 > 5
      && (qword_180016010 & 0x400000000000LL) != 0
      && (qword_180016018 & 0x400000000000LL) == qword_180016018 )
    {
      v17 = gDwmNumRetriesSoFar;
      v21 = (__int64)&gDwmInitTargetAppSessionGuid;
      v20 = &gDwmInitTelemetryActivityId;
      v19 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
        (__int64)v12,
        (int)&unk_18001218D,
        v13,
        v14,
        (__int64)&v19,
        (__int64 *)&v20,
        (__int64)&v17,
        &v21);
    }
    _unnamed_type_gDwmInitTelemetryAggregator_::ReportAggregatedValues(v12);
    TraceLoggingWriteEtw(3LL, 2147500037LL, (unsigned int)gDwmNumRetriesSoFar);
    return v1;
  }
  restarted = ShouldRestartSession(ExitTime);
  v4 = RegisterEventSourceW(0LL, L"Dwminit");
  if ( v4 )
  {
    memset_0(&DisplayDevice, 0, sizeof(DisplayDevice));
    v7 = StringCchPrintfW(v25, 11LL, L"0x%08x", ExitCode);
    v8 = v25;
    if ( v7 < 0 )
      v8 = 0LL;
    Strings[0] = v8;
    v9 = StringCchPrintfW(v26, 12LL, L"%i", (unsigned int)gDwmNumRetriesSoFar);
    v10 = v26;
    if ( v9 < 0 )
      v10 = 0LL;
    Strings[1] = v10;
    Strings[2] = (LPCWSTR)((unsigned __int64)DisplayDevice.DeviceString & -(__int64)GetPrimaryDisplayDeviceInfo(&DisplayDevice));
    ReportEventW(v4, 2u, 0, 0x80020000, 0LL, 3u, 0, Strings, 0LL);
    DeregisterEventSource(v4);
  }
  ++gDwmInitTelemetryAggregator;
  ++HIDWORD(qword_180016C8C);
  if ( SHIDWORD(qword_180016C8C) > 10 )
  {
    _unnamed_type_gDwmInitTelemetryAggregator_::ReportAggregatedValues(v3);
    HIDWORD(qword_180016C8C) = 0;
  }
  if ( (unsigned int)dword_180016000 > 5
    && (qword_180016010 & 0x400000000000LL) != 0
    && (qword_180016018 & 0x400000000000LL) == qword_180016018 )
  {
    LODWORD(v18) = gDwmNumRetriesSoFar;
    v17 = ExitCode;
    v19 = (__int64)&gDwmInitTargetAppSessionGuid;
    v20 = &gDwmInitTelemetryActivityId;
    v21 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
      (__int64)v3,
      (int)&unk_180012121,
      v5,
      v6,
      (__int64)&v21,
      (__int64 *)&v20,
      (__int64)&v17,
      (__int64)&v18,
      &v19);
  }
  v11 = ExitCode;
  if ( (int)ExitCode > 0 )
    v11 = (unsigned __int16)ExitCode | 0x80070000;
  TraceLoggingWriteEtw(0LL, v11, (unsigned int)gDwmNumRetriesSoFar);
  if ( restarted )
    goto LABEL_19;
  return v1;
}
