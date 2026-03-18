/*
 * XREFs of Win32kBaseDriverEntry @ 0x1C02DEBC0
 * Callers:
 *     <none>
 * Callees:
 *     RetrieveCurrentDisplayState @ 0x1C000FB18 (RetrieveCurrentDisplayState.c)
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1C0037ECC (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     PrivateAPI::_anonymous_namespace_::IsValidGuiContext @ 0x1C0048218 (PrivateAPI--_anonymous_namespace_--IsValidGuiContext.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     RtlLoadStringOrError @ 0x1C0061FA0 (RtlLoadStringOrError.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     CreateKernelSemaphore @ 0x1C0074CE0 (CreateKernelSemaphore.c)
 *     CreateKernelEventObject @ 0x1C0077484 (CreateKernelEventObject.c)
 *     DCEInUseCountTelemetryInit @ 0x1C007BC48 (DCEInUseCountTelemetryInit.c)
 *     InputInitialize @ 0x1C00814D4 (InputInitialize.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1C008BA00 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0BFAAA@$0BFA@@2@V?$CTypeIsolation@$0BEAAA@$0KA@@2@V?$CTypeIsolation@$0GAAA@$0GA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@@@SA_NPEAPEAE@Z @ 0x1C008CCC8 (-Create@-$TypeIsolationFactory@V-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V-$CTypeIsolati.c)
 *     InitializeWin32KSyscallFilter @ 0x1C0097170 (InitializeWin32KSyscallFilter.c)
 *     InitializeWin32kCall @ 0x1C00A6260 (InitializeWin32kCall.c)
 *     RIMInitialize @ 0x1C00A7FE0 (RIMInitialize.c)
 *     CreateKernelEvent @ 0x1C00AEA20 (CreateKernelEvent.c)
 *     InitializeTelemetryAssertsKMByName @ 0x1C00AECBC (InitializeTelemetryAssertsKMByName.c)
 *     ?InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z @ 0x1C00B5150 (-InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z.c)
 *     OPMInitialize @ 0x1C00B8DA4 (OPMInitialize.c)
 *     ?InitializePowerGlobals@@YAJXZ @ 0x1C00BBC54 (-InitializePowerGlobals@@YAJXZ.c)
 *     CoreMsgInitialize @ 0x1C00BDB70 (CoreMsgInitialize.c)
 *     ?EnsureRequiredApiSetExtensions@@YAXXZ @ 0x1C00BE650 (-EnsureRequiredApiSetExtensions@@YAXXZ.c)
 *     ?InitializeWin32CrossSessionGlobals@@YAJW4XSessionGlobalAccess@@@Z @ 0x1C00C0050 (-InitializeWin32CrossSessionGlobals@@YAJW4XSessionGlobalAccess@@@Z.c)
 *     ?CheckInitialSessions@@YAJXZ @ 0x1C00C02B8 (-CheckInitialSessions@@YAJXZ.c)
 *     GetWin32kDriverObject @ 0x1C00C0680 (GetWin32kDriverObject.c)
 *     Win32AllocPagedLookasideList @ 0x1C00C0C60 (Win32AllocPagedLookasideList.c)
 *     ?VerifyDWMApiSetImplementation@@YAJXZ @ 0x1C00C18D8 (-VerifyDWMApiSetImplementation@@YAJXZ.c)
 *     IsUserkTraceLoggingSupported @ 0x1C00C49BC (IsUserkTraceLoggingSupported.c)
 *     IsTelemetryAssertsSupported @ 0x1C00C49E8 (IsTelemetryAssertsSupported.c)
 *     AllocIndex @ 0x1C00C50E8 (AllocIndex.c)
 *     McGenEventRegister_EtwRegister @ 0x1C00C5150 (McGenEventRegister_EtwRegister.c)
 *     SysEntryGetW32pServiceLimitFilter @ 0x1C00C5660 (SysEntryGetW32pServiceLimitFilter.c)
 *     ?InitializeWin32PoolTracking@@YAHXZ @ 0x1C00C5B00 (-InitializeWin32PoolTracking@@YAHXZ.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     ?ReportUsageForAllVelocityKeys@@YAXXZ @ 0x1C00D0D28 (-ReportUsageForAllVelocityKeys@@YAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0134470 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     TlgRegisterAggregateProviderEx @ 0x1C02BF4F8 (TlgRegisterAggregateProviderEx.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C02BF5EC (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     wil_InitializeFeatureStaging @ 0x1C02DB078 (wil_InitializeFeatureStaging.c)
 *     InitializeGre @ 0x1C02DB800 (InitializeGre.c)
 *     Win32UserInitialize @ 0x1C02DBF90 (Win32UserInitialize.c)
 *     InitCreateUserCrit @ 0x1C02DD5E0 (InitCreateUserCrit.c)
 */

__int64 __fastcall Win32kBaseDriverEntry(__int64 a1)
{
  int CurrentProcessSessionId; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // esi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // r14
  unsigned __int8 v16; // di
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  int CurrentDisplayState; // ebx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // r8d
  NTSTATUS InformationJobObject; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  struct _DRIVER_OBJECT *v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  bool v47; // al
  PVOID v48; // rax
  __int64 v49; // rcx
  _QWORD *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  unsigned int *v60; // rax
  struct _KEVENT *Pool2; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rsi
  unsigned int v71; // ebx
  PVOID v72; // r15
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rbx
  unsigned int W32pServiceLimitFilter; // eax
  PVOID v79; // r15
  unsigned int v80; // esi
  __int64 v81; // rax
  struct tagTHREADINFO *v82; // rax
  __int64 v83; // rcx
  __int64 v84; // rax
  __int64 *v85; // rbx
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  bool v98; // sf
  int v99; // eax
  __int64 v100; // rcx
  PVOID KernelEventObject; // rbx
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r8
  __int64 v109; // r9
  __int64 v110; // rcx
  __int64 v111; // rcx
  __int64 KernelEvent; // rbx
  __int64 v113; // rcx
  __int64 v114; // rcx
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // r8
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // r8
  __int64 v121; // r9
  __int64 v122; // rcx
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // r8
  __int64 v126; // r9
  HANDLE CurrentProcessId; // rax
  __int64 v128; // [rsp+58h] [rbp-B0h] BYREF
  struct _CLIENT_ID JobInformation; // [rsp+60h] [rbp-A8h] BYREF
  struct _CLIENT_ID JobInformation_8[2]; // [rsp+68h] [rbp-A0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v133[208]; // [rsp+C8h] [rbp-40h] BYREF
  _WORD v134[80]; // [rsp+198h] [rbp+90h] BYREF

  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v133);
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  *(_DWORD *)SGDGetUserSessionState(v4, v3, v5, v6) = CurrentProcessSessionId;
  gServiceSessionId = RtlGetCurrentServiceSessionId();
  KeQueryPerformanceCounter(&gliQpcFreq);
  JobInformation.UniqueProcess = 0LL;
  if ( (int)wil_InitializeFeatureStaging() < 0 )
  {
    if ( g_wil_details_featureChangeNotification )
    {
      RtlUnregisterFeatureConfigurationChangeNotification();
      g_wil_details_featureChangeNotification = 0LL;
    }
    v10 = -1073741823;
LABEL_24:
    g_wil_details_isFeatureStagingInitialized = 0;
    CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v133);
    return (unsigned int)v10;
  }
  v10 = InitializeWin32kCall(v8, v7, v9);
  if ( v10 < 0 )
  {
    if ( g_wil_details_featureChangeNotification )
    {
      RtlUnregisterFeatureConfigurationChangeNotification();
      g_wil_details_featureChangeNotification = 0LL;
    }
    goto LABEL_24;
  }
  v15 = 1;
  if ( *(_DWORD *)SGDGetUserSessionState(v12, v11, v13, v14) == gServiceSessionId && !gServiceSessionId )
  {
    v16 = 1;
LABEL_11:
    v17 = 200;
    goto LABEL_12;
  }
  v16 = 0;
  if ( !gServiceSessionId )
    goto LABEL_11;
  memset(JobInformation_8, 0, sizeof(JobInformation_8));
  InformationJobObject = ZwQueryInformationJobObject(
                           0LL,
                           JobObjectEndOfJobTimeInformation|0x20,
                           JobInformation_8,
                           0x20u,
                           0LL);
  if ( InformationJobObject < 0 )
    KeBugCheckEx(0x164u, InformationJobObject, 0LL, 0LL, 0LL);
  v17 = BYTE4(JobInformation_8[0].UniqueThread);
LABEL_12:
  gCallerKernelAbiVersion = v17;
  InitializeTelemetryAssertsKMByName();
  CurrentDisplayState = InitializeWin32CrossSessionGlobals(v16 ^ 1u, v18);
  if ( CurrentDisplayState < 0 )
  {
    v24 = 2106;
LABEL_21:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, v24);
    if ( g_wil_details_featureChangeNotification )
    {
      RtlUnregisterFeatureConfigurationChangeNotification();
      g_wil_details_featureChangeNotification = 0LL;
    }
    v10 = CurrentDisplayState;
    goto LABEL_24;
  }
  if ( v16 )
  {
    CurrentDisplayState = AllocIndex(v20, v19, v22, v23);
    if ( CurrentDisplayState < 0 )
    {
      v24 = 2121;
      goto LABEL_21;
    }
  }
  EnsureRequiredApiSetExtensions();
  *(_QWORD *)(SGDGetUserSessionState(v28, v27, v29, v30) + 13840) = KbdTablesFallback;
  *(_QWORD *)(SGDGetUserSessionState(KbdTablesFallback, v31, v32, v33) + 13872) = &ausMouseVKey;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Driver\\Win32k");
  if ( *(_DWORD *)SGDGetUserSessionState(v35, v34, v36, v37) )
  {
    if ( gpWin32kDriverObject )
      goto LABEL_32;
    GetWin32kDriverObject(v39, v38, v40, v41);
  }
  else
  {
    gDriverObjectTimes = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    CurrentDisplayState = IoCreateDriver(&DestinationString, Win32kPnPDriverEntry);
    dword_1C029038C = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( CurrentDisplayState < 0 )
      CurrentDisplayState = 0;
  }
  if ( !gpWin32kDriverObject )
    CurrentDisplayState = -1073741823;
LABEL_32:
  if ( (int)IsTelemetryAssertsSupported() >= 0 && qword_1C02961D0 )
    qword_1C02961D0();
  if ( CurrentDisplayState >= 0 )
  {
    CurrentDisplayState = InitializeWppLogging(v42);
    if ( CurrentDisplayState >= 0 )
    {
      if ( (unsigned int)InitializeWin32PoolTracking(v44, v43, v45, v46) )
      {
        if ( !(unsigned int)InitCreateUserCrit() )
          goto LABEL_40;
        LODWORD(JobInformation.UniqueProcess) = 8;
        CurrentDisplayState = ZwQuerySystemInformation(
                                MaxSystemInfoClass|SystemProcessInformation,
                                &JobInformation,
                                8u,
                                0LL);
        v47 = 0;
        if ( CurrentDisplayState >= 0 )
          v47 = (BYTE4(JobInformation.UniqueProcess) & 2) != 0;
        gbOSTestSigningEnabled = v47;
        WdInitialize();
        TlgRegisterAggregateProviderEx(&dword_1C0283098);
        McGenEventRegister_EtwRegister();
        DCEInUseCountTelemetryInit();
        if ( (int)IsUserkTraceLoggingSupported() >= 0 && qword_1C02961B8 )
          qword_1C02961B8();
        if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
                    (char *)&dword_1C02883D8,
                    (__int64)W32kTraceLoggingEnableCallback,
                    0LL) < 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2275);
        if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_1C02883A0, 0LL, 0LL) < 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2279);
        if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_1C0288330, 0LL, 0LL) < 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2283);
        if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
                    (char *)&dword_1C02882F8,
                    (__int64)W32kBaseInputEnableCallback,
                    0LL) < 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2287);
        if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
                    (char *)&dword_1C0289810,
                    (__int64)InputCoreProviderCallback,
                    0LL) < 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2291);
        WPP_MAIN_CB.Dpc.SystemArgument2 = (PVOID)Win32AllocPagedLookasideList(
                                                   (NSInstrumentation::CLeakTrackingAllocator *)0x48,
                                                   0x616C7355u,
                                                   0x6C6F7355u,
                                                   0x10u);
        if ( !WPP_MAIN_CB.Dpc.SystemArgument2 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2295);
        TlgRegisterAggregateProviderEx(&dword_1C0288368);
        gbTraceLoggingInitialized = 1;
      }
      else
      {
        CurrentDisplayState = -1073741801;
      }
    }
  }
  v48 = MmPageEntireDriver(Win32kBaseDriverEntry);
  hModuleWinKernel = v48;
  if ( v48 )
  {
    if ( CurrentDisplayState >= 0 )
      CurrentDisplayState = InitializeGraphicsInfrastructure(v48);
  }
  else
  {
    CurrentDisplayState = -1073741801;
  }
  gdwHydraHint |= 1u;
  v49 = 64LL;
  WPP_MAIN_CB.Dpc.DpcData = *(PVOID *)(a1 + 24);
  qword_1C02936E8 = (__int64)&gtmrListHead;
  gtmrListHead = (__int64)&gtmrListHead;
  qword_1C02936D8 = (__int64)&gtmrAdjustmentListHead;
  gtmrAdjustmentListHead = (__int64)&gtmrAdjustmentListHead;
  v50 = &gTimerHashTable;
  do
  {
    v50[1] = v50;
    *v50 = v50;
    v50 += 2;
    --v49;
  }
  while ( v49 );
  memset(&gTimerId, 0, 0xFE0uLL);
  qword_1C02922E0 = (__int64)&gPendingNotifiesList;
  gPendingNotifiesList = (__int64)&gPendingNotifiesList;
  if ( qword_1C0296478 && (int)qword_1C0296478() >= 0 && qword_1C0296480 )
    qword_1C0296480();
  if ( qword_1C0295148 && (int)qword_1C0295148() >= 0 && qword_1C0295150 )
    qword_1C0295150();
  if ( qword_1C0295158 && (int)qword_1C0295158() >= 0 && qword_1C0295160 )
    qword_1C0295160();
  if ( BCryptGenRandom(0LL, (PUCHAR)&WPP_MAIN_CB.Dpc.DeferredContext, 8u, 2u) < 0 )
    goto LABEL_41;
  WPP_MAIN_CB.Dpc.DeferredContext = (PVOID)((unsigned __int64)WPP_MAIN_CB.Dpc.DeferredContext & ~0x8000000000000000uLL);
  if ( qword_1C02951B8 && (int)qword_1C02951B8() >= 0 && qword_1C02951C0 )
    qword_1C02951C0(1LL);
  if ( CurrentDisplayState < 0 )
    goto LABEL_41;
  v55 = CheckInitialSessions(v52, v51, v53, v54);
  CurrentDisplayState = v55;
  if ( v55 && v55 != -1073741771 )
  {
    if ( v55 >= 0 )
      CurrentDisplayState = -1073741823;
    goto LABEL_41;
  }
  if ( !gbNonServiceSession || gbFirstInteractiveSession )
  {
    v60 = (unsigned int *)SGDGetUserSessionState(v57, v56, v58, v59);
    RtlSetActiveConsoleId(*v60);
  }
  if ( qword_1C0294F88 )
    qword_1C0294F88(Win32KDriverUnload);
  gcmsLastTimer = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  Pool2 = (struct _KEVENT *)ExAllocatePool2(64LL, 56LL, 1716220757LL);
  gpW32FastMutex = Pool2;
  if ( !Pool2 )
    goto LABEL_40;
  Pool2->Header.LockNV = 1;
  Pool2->Header.WaitListHead.Flink = 0LL;
  LODWORD(Pool2->Header.WaitListHead.Blink) = 0;
  KeInitializeEvent(Pool2 + 1, SynchronizationEvent, 0);
  gpStackRefLookAside = (void *)Win32AllocPagedLookasideList(
                                  (NSInstrumentation::CLeakTrackingAllocator *)0x10,
                                  0x616C7355u,
                                  0x6C6F7355u,
                                  0xFFFEu);
  if ( !gpStackRefLookAside )
    goto LABEL_40;
  WPP_MAIN_CB.Dpc.ProcessorHistory = ExAllocatePool2(260LL, 48LL, 1869834581LL);
  if ( !WPP_MAIN_CB.Dpc.ProcessorHistory
    || !TypeIsolationFactory<NSInstrumentation::CTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<86016,336>,NSInstrumentation::CTypeIsolation<81920,160>,NSInstrumentation::CTypeIsolation<24576,96>,NSInstrumentation::CTypeIsolation<28672,112>>::Create() )
  {
    goto LABEL_40;
  }
  if ( !*(_DWORD *)SGDGetUserSessionState(v63, v62, v64, v65) )
  {
    if ( qword_1C0294F50 )
      v70 = qword_1C0294F50();
    else
      v70 = 0LL;
    if ( qword_1C0294F48 )
      v71 = qword_1C0294F48();
    else
      v71 = 0;
    v72 = gpCountTable;
    if ( qword_1C0294F40 )
      v73 = qword_1C0294F40(0LL);
    else
      v73 = 0LL;
    KeAddSystemServiceTable(v73, v72, v71, v70, 1);
  }
  if ( !*(_DWORD *)SGDGetUserSessionState(v67, v66, v68, v69) )
  {
    if ( qword_1C0294F70 )
      v77 = qword_1C0294F70();
    else
      v77 = 0LL;
    W32pServiceLimitFilter = (unsigned int)SysEntryGetW32pServiceLimitFilter();
    v79 = gpCountTable;
    v80 = W32pServiceLimitFilter;
    if ( qword_1C0294F60 )
      v81 = qword_1C0294F60(0LL);
    else
      v81 = 0LL;
    KeAddSystemServiceTable(v81, v79, v80, v77, 2);
  }
  v82 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterCritInternal(0LL, v74, v75, v76);
  gptiCurrent = v82;
  if ( v82 )
  {
    *((_DWORD *)v82 + 387) = 1;
    if ( PrivateAPI::_anonymous_namespace_::IsValidGuiContext(v83) )
    {
      while ( 1 )
      {
        v85 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
        if ( !gpSharedUserCritDeferredUnlockListHead )
          break;
        gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                     + 2);
        v84 = *v85;
        v85[2] = 0LL;
        if ( !*(_DWORD *)(v84 + 8) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
        HMUnlockObject(*v85);
      }
    }
  }
  CurrentDisplayState = InitializeWin32KSyscallFilter();
  if ( CurrentDisplayState < 0 )
  {
    UserSessionSwitchLeaveCrit(v87, v86, v88, v89);
    goto LABEL_41;
  }
  UserSessionSwitchLeaveCrit(v87, v86, v88, v89);
  if ( !*(_DWORD *)SGDGetUserSessionState(v91, v90, v92, v93) && qword_1C0294F78 )
    qword_1C0294F78();
  if ( !*(_DWORD *)SGDGetUserSessionState(v95, v94, v96, v97) )
    DbgkLkmdRegisterCallback(W32pLkmdDataCollectionCallback, 0LL, 5LL);
  if ( (int)RtlIsApiSetImplemented("ext-ms-win-composition-init-l1-1-0") < 0
    || (v98 = (int)VerifyDWMApiSetImplementation() < 0, v99 = 1, v98) )
  {
    v99 = 0;
  }
  gDWMCapable = v99;
  RIMInitialize();
  CurrentDisplayState = CoreMsgInitialize();
  if ( CurrentDisplayState < 0 )
    goto LABEL_41;
  if ( qword_1C0295168 && (int)qword_1C0295168() >= 0 && qword_1C0295170 )
    qword_1C0295170(&gMagnContext);
  if ( qword_1C0295178 && (int)qword_1C0295178() >= 0 && qword_1C0295180 )
    qword_1C0295180();
  if ( qword_1C0295188 && (int)qword_1C0295188() >= 0 && qword_1C0295190 )
    qword_1C0295190();
  KernelEventObject = CreateKernelEventObject(v100, 0);
  *(_QWORD *)(SGDGetUserSessionState(v103, v102, v104, v105) + 16824) = KernelEventObject;
  if ( !*(_QWORD *)(SGDGetUserSessionState(v107, v106, v108, v109) + 16824) )
    goto LABEL_40;
  gpevtSynthesizedContainerMouseInput = CreateKernelEventObject(v110, 0);
  if ( !gpevtSynthesizedContainerMouseInput )
    goto LABEL_40;
  gpevtDesktopDestroyed = (void *)CreateKernelEvent(SynchronizationEvent, 0);
  if ( !gpevtDesktopDestroyed )
    goto LABEL_40;
  gpevtVideoInitialized = (PRKEVENT)CreateKernelEvent(NotificationEvent, 0);
  if ( !gpevtVideoInitialized )
    goto LABEL_40;
  gpevtQueueReadyForCallout = (PRKEVENT)CreateKernelEvent(NotificationEvent, 0);
  if ( !gpevtQueueReadyForCallout )
    goto LABEL_40;
  gpevtVideoportCallout = (PRKEVENT)CreateKernelEvent(NotificationEvent, 1u);
  if ( !gpevtVideoportCallout )
    goto LABEL_40;
  gpevtRitReadyForCallOut = (void *)CreateKernelEvent(NotificationEvent, 0);
  if ( !gpevtRitReadyForCallOut )
    goto LABEL_40;
  *(_BYTE *)(SGDGetUserGdiSessionState(v111) + 1) = 0;
  KernelEvent = CreateKernelEvent(NotificationEvent, 1u);
  *(_QWORD *)(SGDGetUserGdiSessionState(v113) + 8) = KernelEvent;
  if ( !*(_QWORD *)(SGDGetUserGdiSessionState(v114) + 8)
    || (gcSwitchInProgressWaiters = 0,
        (gpsemSwitchInProgressWaiters = (PRKSEMAPHORE)CreateKernelSemaphore(0, 0x7FFFFFFF)) == 0LL)
    || (gcDITLuidHitTestWaiters = 0, (gpsemDITLuidHitTestWaiters = (void *)CreateKernelSemaphore(0, 0x7FFFFFFF)) == 0LL)
    || (RtlLoadStringOrError(0x268u, v134, 80, 0),
        hModuleWin = MmUserProbeAddress,
        !InitializeGre((Gre::Base *)MmUserProbeAddress)) )
  {
LABEL_40:
    CurrentDisplayState = -1073741801;
LABEL_41:
    if ( WPP_MAIN_CB.Queue.ListEntry.Flink )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v15 = 0;
      }
      if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v15,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
          2u,
          0xEu,
          0x11u,
          (__int64)&WPP_ac18f6c865c032c1f7ac00466daa9397_Traceguids,
          CurrentDisplayState);
    }
    Win32KDriverUnload(0LL);
    if ( CurrentDisplayState == -1073741822 )
      CurrentDisplayState = -1073741637;
    CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v133);
    return (unsigned int)CurrentDisplayState;
  }
  CurrentDisplayState = Win32UserInitialize(v116, v115, v117);
  if ( CurrentDisplayState < 0 )
    goto LABEL_41;
  gSessionCreationTime = MEMORY[0xFFFFF78000000008];
  if ( ZwPowerInformation(ProcessorInformation|0x40, 0LL, 0, &gPlatformRole, 4u) < 0 )
    gPlatformRole = 1;
  CurrentDisplayState = InitializePowerGlobals();
  if ( CurrentDisplayState < 0 )
    goto LABEL_41;
  if ( !gbNonServiceSession || gbFirstInteractiveSession )
  {
    CurrentDisplayState = RetrieveCurrentDisplayState();
    if ( CurrentDisplayState < 0 )
      goto LABEL_41;
    HIDWORD(v128) = *(_DWORD *)(SGDGetUserSessionState(v119, v118, v120, v121) + 2952) != 0 ? 3 : 0;
    ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, (char *)&v128 + 4, 4LL, 0LL, 0LL);
  }
  ExInitializeRundownProtection(&gWinstaRunRef);
  if ( (int)InputInitialize() < 0 )
    goto LABEL_41;
  CurrentDisplayState = OPMInitialize(v122);
  if ( CurrentDisplayState < 0 )
    goto LABEL_41;
  if ( qword_1C0295198 && (int)qword_1C0295198() >= 0 )
  {
    if ( !qword_1C02951A0 )
      goto LABEL_193;
    CurrentDisplayState = qword_1C02951A0();
    if ( CurrentDisplayState < 0 )
      goto LABEL_41;
  }
  if ( qword_1C02951A8 && (int)qword_1C02951A8() >= 0 )
  {
    if ( !qword_1C02951B0 )
      goto LABEL_193;
    CurrentDisplayState = qword_1C02951B0();
    if ( CurrentDisplayState < 0 )
      goto LABEL_41;
  }
  if ( !qword_1C0296190 || (int)qword_1C0296190() < 0 )
    goto LABEL_189;
  if ( !qword_1C0296198 )
  {
LABEL_193:
    CurrentDisplayState = -1073741637;
    goto LABEL_41;
  }
  CurrentDisplayState = qword_1C0296198();
  if ( CurrentDisplayState < 0 )
    goto LABEL_41;
LABEL_189:
  if ( *(_DWORD *)SGDGetUserSessionState(v124, v123, v125, v126) )
  {
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    CurrentProcessId = PsGetCurrentProcessId();
    JobInformation_8[0].UniqueThread = 0LL;
    JobInformation_8[0].UniqueProcess = CurrentProcessId;
    if ( ZwOpenProcess(&ghSMSS, 0x1000u, &ObjectAttributes, JobInformation_8) < 0 )
      ghSMSS = 0LL;
  }
  ReportUsageForAllVelocityKeys();
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v133);
  return 0LL;
}
