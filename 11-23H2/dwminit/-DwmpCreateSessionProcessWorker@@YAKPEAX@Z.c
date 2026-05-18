/*
 * XREFs of ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x18000A7C0
 * Callers:
 *     DwmpCreateSessionProcess @ 0x18000C160 (DwmpCreateSessionProcess.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800010A8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlg.c)
 *     memset_0 @ 0x180002688 (memset_0.c)
 *     IsWaitForInputIdlePresent @ 0x180002824 (IsWaitForInputIdlePresent.c)
 *     IsDwmLockScreenUpdatesPresent @ 0x1800029E4 (IsDwmLockScreenUpdatesPresent.c)
 *     IsDwmMonitorExtDwmProcessCreatedPresent @ 0x180002B50 (IsDwmMonitorExtDwmProcessCreatedPresent.c)
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x18000A454 (-CleanupOldDwmProcess@@YAJXZ.c)
 *     ?LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z @ 0x18000AE1C (-LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z.c)
 *     ?MapDwmVirtualAccountAndAdjustPrivileges@@YAJXZ @ 0x18000B308 (-MapDwmVirtualAccountAndAdjustPrivileges@@YAJXZ.c)
 *     ?ReportAggregatedValues@_unnamed_type_gDwmInitTelemetryAggregator_@@QEAAXXZ @ 0x18000B628 (-ReportAggregatedValues@_unnamed_type_gDwmInitTelemetryAggregator_@@QEAAXXZ.c)
 *     ?TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z @ 0x18000B97C (-TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z.c)
 *     ?WaitForLsa@@YAJXZ @ 0x18000BD94 (-WaitForLsa@@YAJXZ.c)
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000CD8C (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     DwmpSignalSessionShutdown @ 0x18000D0CC (DwmpSignalSessionShutdown.c)
 */

__int64 __fastcall DwmpCreateSessionProcessWorker(PVOID Parameter)
{
  unsigned int v1; // esi
  HANDLE v2; // rdi
  signed int v3; // ebx
  int v4; // eax
  unsigned int v5; // edx
  int v6; // eax
  signed int LastError; // eax
  int v8; // ecx
  _unnamed_type_gDwmInitTelemetryAggregator_ *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _PROCESS_INFORMATION ProcessInformation; // [rsp+60h] [rbp-59h] BYREF
  struct _STARTUPINFOW StartupInfo; // [rsp+80h] [rbp-39h] BYREF
  HANDLE hToken; // [rsp+120h] [rbp+67h] BYREF
  GUID *v16; // [rsp+128h] [rbp+6Fh] BYREF
  GUID *v17; // [rsp+130h] [rbp+77h] BYREF
  __int64 v18; // [rsp+138h] [rbp+7Fh] BYREF

  v1 = (unsigned int)Parameter;
  memset(&ProcessInformation, 0, sizeof(ProcessInformation));
  memset_0(&StartupInfo, 0, sizeof(StartupInfo));
  StartupInfo.cb = 104;
  StartupInfo.lpDesktop = L"Winsta0\\Default";
  hToken = 0LL;
  v2 = 0LL;
  AcquireSRWLockExclusive(&gDwmStateLock);
  dword_18001A4E8 = GetCurrentThreadId();
  if ( v1 && (!ghDwmProcess || GetProcessId(ghDwmProcess) != v1) )
  {
    v3 = 1;
    goto LABEL_34;
  }
  if ( ghDwmProcess )
  {
    v4 = CleanupOldDwmProcess();
    v3 = v4;
    if ( v4 < 0 )
    {
      v5 = 1214;
LABEL_32:
      v8 = v4;
LABEL_33:
      DoStackCaptureDirect(v8, v5);
      goto LABEL_34;
    }
  }
  if ( gDwmFirstLaunch )
  {
    v4 = WaitForLsa();
    v3 = v4;
    if ( v4 < 0 )
    {
      v5 = 1229;
      goto LABEL_32;
    }
    if ( IsDwmMonitorExtDwmProcessCreatedPresent() )
      DwmMonitorExtInitialize();
  }
  if ( IsDwmLockScreenUpdatesPresent() )
    DwmLockScreenUpdates(1LL);
  v4 = MapDwmVirtualAccountAndAdjustPrivileges();
  v3 = v4;
  if ( v4 < 0 )
  {
    v5 = 1247;
    goto LABEL_32;
  }
  v6 = LogonDwmAccountAndSetTokenIntegrityLevel(&hToken);
  v3 = v6;
  if ( v6 < 0 )
  {
    DoStackCaptureDirect(v6, 0x4E2u);
    v2 = hToken;
    goto LABEL_34;
  }
  SetLastError(0);
  v2 = hToken;
  if ( !CreateProcessAsUserW(
          hToken,
          L"dwm.exe",
          0LL,
          0LL,
          0LL,
          0,
          0x4000420u,
          0LL,
          0LL,
          &StartupInfo,
          &ProcessInformation) )
  {
    LastError = GetLastError();
    v3 = LastError;
    if ( LastError > 0 )
      v3 = (unsigned __int16)LastError | 0x80070000;
    v5 = 1270;
    if ( v3 >= 0 )
      v3 = -2003304445;
    v8 = v3;
    goto LABEL_33;
  }
  if ( ProcessInformation.hProcess )
  {
    if ( IsWaitForInputIdlePresent() )
      WaitForInputIdle(ProcessInformation.hProcess, 0xFFFFFFFF);
    if ( WaitForSingleObject(ProcessInformation.hProcess, 0) )
    {
      ghDwmProcess = ProcessInformation.hProcess;
      ProcessInformation.hProcess = 0LL;
      if ( IsDwmMonitorExtDwmProcessCreatedPresent() )
        DwmMonitorExtDwmProcessCreated(ghDwmProcess);
    }
    else
    {
      v3 = -2147467259;
      TraceLoggingWriteEtw(4LL, 2147500037LL, 0LL);
      DwmpSignalSessionShutdown();
    }
  }
LABEL_34:
  gDwmFirstLaunch = 0;
  if ( ProcessInformation.hProcess )
  {
    CloseHandle(ProcessInformation.hProcess);
    ProcessInformation.hProcess = 0LL;
  }
  if ( ProcessInformation.hThread )
  {
    CloseHandle(ProcessInformation.hThread);
    ProcessInformation.hThread = 0LL;
  }
  if ( v2 )
    CloseHandle(v2);
  if ( IsDwmLockScreenUpdatesPresent() )
    DwmLockScreenUpdates(0LL);
  if ( v3 < 0 )
  {
    LODWORD(qword_180016C8C) = qword_180016C8C + 1;
    ++HIDWORD(qword_180016C8C);
    if ( SHIDWORD(qword_180016C8C) > 10 )
    {
      _unnamed_type_gDwmInitTelemetryAggregator_::ReportAggregatedValues(v9);
      HIDWORD(qword_180016C8C) = 0;
    }
    if ( (unsigned int)dword_180016000 > 5
      && (qword_180016010 & 0x400000000000LL) != 0
      && (qword_180016018 & 0x400000000000LL) == qword_180016018 )
    {
      LODWORD(hToken) = v3;
      v16 = &gDwmInitTargetAppSessionGuid;
      v18 = 0x1000000LL;
      v17 = &gDwmInitTelemetryActivityId;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
        (__int64)v9,
        (int)&unk_180012557,
        v10,
        v11,
        (__int64)&v18,
        (__int64 *)&v17,
        (__int64)&hToken,
        (__int64 *)&v16);
    }
    _unnamed_type_gDwmInitTelemetryAggregator_::ReportAggregatedValues(v9);
    TraceLoggingWriteEtw(2LL, (unsigned int)v3, 0LL);
  }
  dword_18001A4E8 = 0;
  ReleaseSRWLockExclusive(&gDwmStateLock);
  if ( v3 < 0 )
  {
    DwmpSignalSessionShutdown();
    DoStackCaptureDirect(v3, 0x586u);
  }
  TraceLoggingWriteEtw(10LL, (unsigned int)v3, v1);
  return 0LL;
}
