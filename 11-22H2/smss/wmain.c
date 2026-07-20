/*
 * XREFs of wmain @ 0x140001BC0
 * Callers:
 *     NtProcessStartupW_AfterSecurityCookieInitialized @ 0x1400018A0 (NtProcessStartupW_AfterSecurityCookieInitialized.c)
 * Callees:
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x1400010B0 (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 *     WppInitUm @ 0x1400023BC (WppInitUm.c)
 *     SmpDereferenceKnownSubSys @ 0x140002444 (SmpDereferenceKnownSubSys.c)
 *     SmpWaitForSubSysStartup @ 0x1400024F0 (SmpWaitForSubSysStartup.c)
 *     SmpSearchKnownSubSysDatabase @ 0x140003734 (SmpSearchKnownSubSysDatabase.c)
 *     SmpUnlockKnownSubSysList @ 0x140003800 (SmpUnlockKnownSubSysList.c)
 *     SmpWaitForSingleSubSys @ 0x140003B70 (SmpWaitForSingleSubSys.c)
 *     SmscMain @ 0x1400048D8 (SmscMain.c)
 *     SmpGetFirstSessionId @ 0x1400063F4 (SmpGetFirstSessionId.c)
 *     SmpReadyBootSync @ 0x14000A8A0 (SmpReadyBootSync.c)
 *     SmpInit @ 0x14000DDE0 (SmpInit.c)
 *     SmpGetCoreProcessIds @ 0x1400109BC (SmpGetCoreProcessIds.c)
 *     __security_check_cookie @ 0x140010ED0 (__security_check_cookie.c)
 *     SmpGetSoftBootStatus @ 0x140011FBC (SmpGetSoftBootStatus.c)
 *     SmpTerminate @ 0x14001AB9C (SmpTerminate.c)
 *     SmpUnhandledExceptionFilter @ 0x14001AC44 (SmpUnhandledExceptionFilter.c)
 */

__int64 __fastcall wmain(int a1, PCWSTR *a2, __int64 a3, unsigned int a4)
{
  int v7; // eax
  REGHANDLE v8; // rcx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(_QWORD); // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned int i; // ebx
  unsigned int FirstSessionId; // eax
  unsigned int v21; // eax
  void *v22; // r14
  __int64 v23; // rax
  NTSTATUS v24; // ebx
  NTSTATUS InformationProcess; // eax
  NTSTATUS v26; // [rsp+30h] [rbp-118h]
  int v27; // [rsp+30h] [rbp-118h]
  int v28; // [rsp+30h] [rbp-118h]
  int v29; // [rsp+30h] [rbp-118h]
  int v30; // [rsp+30h] [rbp-118h]
  int v31; // [rsp+30h] [rbp-118h]
  int v32; // [rsp+30h] [rbp-118h]
  int v33; // [rsp+34h] [rbp-114h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-110h] BYREF
  int v35; // [rsp+48h] [rbp-100h] BYREF
  _DWORD v36[3]; // [rsp+4Ch] [rbp-FCh] BYREF
  _DWORD ProcessInformation[2]; // [rsp+58h] [rbp-F0h] BYREF
  __int64 v38; // [rsp+60h] [rbp-E8h] BYREF
  __int128 v39; // [rsp+68h] [rbp-E0h] BYREF
  __int64 v40; // [rsp+78h] [rbp-D0h]
  __int64 v41; // [rsp+80h] [rbp-C8h] BYREF
  _BYTE v42[16]; // [rsp+88h] [rbp-C0h] BYREF
  int v43; // [rsp+98h] [rbp-B0h] BYREF
  _BYTE *v44; // [rsp+A0h] [rbp-A8h]
  int v45; // [rsp+A8h] [rbp-A0h]
  _BYTE v46[16]; // [rsp+B0h] [rbp-98h] BYREF
  NTSTATUS v47[12]; // [rsp+C0h] [rbp-88h] BYREF
  unsigned __int64 Parameters; // [rsp+F0h] [rbp-58h] BYREF
  __int64 v49; // [rsp+F8h] [rbp-50h]
  __int64 v50; // [rsp+100h] [rbp-48h]
  __int64 v51; // [rsp+108h] [rbp-40h]

  ProcessInformation[0] = 2;
  ProcessInformation[1] = 1;
  NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie|ProcessUserModeIOPL, ProcessInformation, 8u);
  v35 = 1;
  NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCycleTime|ProcessUserModeIOPL, &v35, 4u);
  RtlSetHeapInformation(0LL, HeapEnableTerminationOnCorruption, 0LL, 0LL);
  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation();
  v7 = EtwEventRegister(&SmssEventProvider, 0LL, 0LL, &SmpTraceHandle);
  v8 = SmpTraceHandle;
  if ( v7 )
    v8 = 0LL;
  SmpTraceHandle = v8;
  qword_14002B610 = 0LL;
  WPP_MAIN_CB = 0LL;
  qword_14002B618 = 1LL;
  WPP_REGISTRATION_GUIDS = (__int64)&WPP_ThisDir_CTLGUID_Smss;
  WPP_GLOBAL_Control = &WPP_MAIN_CB;
  WppInitUm();
  SmpHostSmss = (unsigned int)RtlGetCurrentServiceSessionId() == 0;
  SmpGetSoftBootStatus();
  if ( a1 <= 1 )
  {
    SmpPrimarySmss = 1;
    SmpReadyBootSync();
    RtlInitUnicodeStringEx(&SmpHelperCmd, *a2);
    RtlSetThreadIsCritical(1u, 0LL, 0);
    v36[0] = 11;
    NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessBasePriority, v36, 4u);
    Parameters = (unsigned __int64)&DestinationString;
    v49 = 0LL;
    v50 = 0LL;
    v51 = 0LL;
    if ( (MEMORY[0x7FFE02F0] & 0x20) != 0 )
    {
      v33 = 3;
      v26 = NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessAffinityUpdateMode, &v33, 4u);
      if ( v26 < 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"Session Manager failed to set affinity update mode");
        v10 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
        SmpGlobalLog[2 * v10 + 2] = 367;
        SmpGlobalLog[2 * v10 + 3] = v26;
        *(_QWORD *)&SmpGlobalLog[2 * v10 + 4] = a2;
        v49 = (unsigned int)v26;
        goto LABEL_39;
      }
    }
    v11 = SmpDebug;
    if ( a4 )
      v11 = a4;
    SmpDebug = v11;
    v41 = 0LL;
    v38 = 0LL;
    v39 = 0LL;
    v40 = 0LL;
    RtlInitializeSRWLock(&v39);
    v27 = TpAllocPool((char *)&v39 + 8, 0LL);
    if ( v27 < 0 )
    {
      v12 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
      SmpGlobalLog[2 * v12 + 2] = 394;
      v13 = (unsigned int)v27;
      SmpGlobalLog[2 * v12 + 3] = v27;
      *(_QWORD *)&SmpGlobalLog[2 * v12 + 4] = a2;
      RtlInitUnicodeString(&DestinationString, L"Thread pool allocation");
      SmpInitProgressByLine = 404;
      SmpInitReturnStatus = v27;
      v14 = (__int64 (__fastcall *)(_QWORD))TpAllocPool;
      goto LABEL_12;
    }
    LODWORD(v40) = SmpNumberInitialSessions;
    v28 = TpSetPoolMinThreads(*((_QWORD *)&v39 + 1), (unsigned int)(SmpNumberInitialSessions + 1));
    if ( v28 < 0 )
    {
      v15 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
      SmpGlobalLog[2 * v15 + 2] = 425;
      v13 = v28;
      SmpGlobalLog[2 * v15 + 3] = v28;
      *(_QWORD *)&SmpGlobalLog[2 * v15 + 4] = a2;
      RtlInitUnicodeString(&DestinationString, L"Configuring thread pool minimum thread number");
      SmpInitProgressByLine = 435;
      SmpInitReturnStatus = v28;
      v14 = (__int64 (__fastcall *)(_QWORD))TpSetPoolMinThreads;
      goto LABEL_12;
    }
    SmpCallbackEnviron = 3;
    xmmword_14002B648 = 0LL;
    qword_14002B658 = 0LL;
    xmmword_14002B660 = 0LL;
    qword_14002B670 = 0LL;
    dword_14002B678 = 0;
    dword_14002B67C = 1;
    dword_14002B680 = 72;
    *(_QWORD *)&xmmword_14002B648 = *((_QWORD *)&v39 + 1);
    v29 = SmpInit();
    if ( v29 < 0 )
    {
      v16 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
      SmpGlobalLog[2 * v16 + 2] = 451;
      v13 = (unsigned int)v29;
      SmpGlobalLog[2 * v16 + 3] = v29;
      *(_QWORD *)&SmpGlobalLog[2 * v16 + 4] = a2;
      RtlInitUnicodeString(&DestinationString, L"Session Manager Initialization");
      goto LABEL_13;
    }
    v30 = TpAllocAlpcCompletion(&v41, SmpApiConnectionPort, SmpApiCallback, &v39, &SmpCallbackEnviron);
    if ( v30 < 0 )
    {
      v17 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
      SmpGlobalLog[2 * v17 + 2] = 473;
      v13 = (unsigned int)v30;
      SmpGlobalLog[2 * v17 + 3] = v30;
      *(_QWORD *)&SmpGlobalLog[2 * v17 + 4] = a2;
      RtlInitUnicodeString(&DestinationString, L"ALPC Completion object allocation");
      SmpInitProgressByLine = 483;
      SmpInitReturnStatus = v30;
      v14 = (__int64 (__fastcall *)(_QWORD))TpAllocAlpcCompletion;
      goto LABEL_12;
    }
    v31 = TpAllocWork(&v38, SmpCreateInitialSession, 0LL, &SmpCallbackEnviron);
    if ( v31 < 0 )
    {
      v18 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
      SmpGlobalLog[2 * v18 + 2] = 508;
      v13 = v31;
      SmpGlobalLog[2 * v18 + 3] = v31;
      *(_QWORD *)&SmpGlobalLog[2 * v18 + 4] = a2;
      RtlInitUnicodeString(&DestinationString, L"Thread pool work object allocation.");
      SmpInitProgressByLine = 518;
      SmpInitReturnStatus = v31;
      v14 = (__int64 (__fastcall *)(_QWORD))TpAllocWork;
      goto LABEL_12;
    }
    for ( i = 0; ; ++i )
    {
      v36[1] = i;
      if ( i >= SmpNumberInitialSessions )
        break;
      TpPostWork(v38);
      if ( (unsigned int)SmpNumberInitialSessions > 1 && !i )
      {
        v43 = 1;
        v44 = v42;
        v45 = 2;
        do
        {
          FirstSessionId = SmpGetFirstSessionId();
          SmpWaitForSubSysStartup(FirstSessionId, 2LL, 0LL, v42);
          v21 = SmpGetFirstSessionId();
          v22 = (void *)SmpSearchKnownSubSysDatabase(v21, &v43);
          SmpUnlockKnownSubSysList(v42);
        }
        while ( !v22 );
        v32 = SmpWaitForSingleSubSys(v22);
        if ( v32 < 0 )
        {
          v23 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
          SmpGlobalLog[2 * v23 + 2] = 569;
          v13 = v32;
          SmpGlobalLog[2 * v23 + 3] = v32;
          *(_QWORD *)&SmpGlobalLog[2 * v23 + 4] = a2;
          RtlInitUnicodeString(&DestinationString, L"Failed to locate core GUI process.");
          SmpInitProgressByLine = 575;
          SmpInitReturnStatus = v32;
          v14 = SmpWaitForSingleSubSys;
LABEL_12:
          SmpInitLastCall = (__int64)v14;
LABEL_13:
          v49 = v13;
LABEL_39:
          SmpTerminate(&Parameters, 1u, 4u);
          JUMPOUT(0x1400023B6LL);
        }
        SmpDereferenceKnownSubSys(v22);
      }
    }
    SmpGetCoreProcessIds(0LL, v46);
    v24 = NtWaitForMultipleObjects(1u, SmpCoreSubsysProcess, WaitAny, 0, 0LL);
    if ( v24 )
    {
      RtlInitUnicodeString(&DestinationString, L"Unexpected error code from NtWaitForMultipleObjects");
      v47[0] = v24;
      InformationProcess = 0;
    }
    else
    {
      RtlInitUnicodeString(&DestinationString, L"Master Subsystem Process");
      InformationProcess = NtQueryInformationProcess(SmpCoreSubsysProcess[0], ProcessBasicInformation, v47, 0x30u, 0LL);
      v24 = v47[0];
    }
    if ( InformationProcess < 0 )
      v49 = -1073741823LL;
    else
      v49 = v24;
    goto LABEL_39;
  }
  SmscMain((unsigned int)a1, a2, a4);
  return 0LL;
}
