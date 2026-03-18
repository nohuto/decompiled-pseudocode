/*
 * XREFs of FxLibraryGlobalsCommission @ 0x1C002E278
 * Callers:
 *     FxLibraryCommonCommission @ 0x1C002E7B8 (FxLibraryCommonCommission.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C002E89C (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     FxInitializeBugCheckDriverInfo @ 0x1C002EAB0 (FxInitializeBugCheckDriverInfo.c)
 *     FxLibraryGlobalsVerifyVersion @ 0x1C002EBEC (FxLibraryGlobalsVerifyVersion.c)
 *     ?MxGetSystemRoutineAddress@Mx@@SAPEAXPEBG@Z @ 0x1C002ECC4 (-MxGetSystemRoutineAddress@Mx@@SAPEAXPEBG@Z.c)
 *     FxLibraryGlobalsQueryRegistrySettings @ 0x1C002ED04 (FxLibraryGlobalsQueryRegistrySettings.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __fastcall FxLibraryGlobalsCommission()
{
  unsigned __int8 (__fastcall *SystemRoutineAddress)(unsigned int); // rax
  void (__fastcall *v1)(_OSVERSIONINFOEXW *); // rax
  NTSTATUS result; // eax
  wil_ReportingKind v3; // [rsp+30h] [rbp-20h]
  wil_ReportingKind v4; // [rsp+30h] [rbp-20h]
  wil_ReportingKind v5; // [rsp+30h] [rbp-20h]
  unsigned __int64 v6; // [rsp+38h] [rbp-18h]
  unsigned __int64 v7; // [rsp+38h] [rbp-18h]
  unsigned __int64 v8; // [rsp+38h] [rbp-18h]
  _UNICODE_STRING funcName; // [rsp+40h] [rbp-10h] BYREF

  *(_WORD *)&FxLibraryGlobals.IsUserModeFramework = 0;
  *(_WORD *)&FxLibraryGlobals.IfrDisabled = 0;
  wil_details_FeatureReporting_ReportUsageToService(
    (wil_details_FeatureReportingCache *)&WPP_GLOBAL_WDF_Control.Queue.Wcb.DmaWaitEntry.Blink,
    0x132D035u,
    0,
    0,
    &Feature_WdfUseWdfTimerForPofx_logged_traits,
    0,
    v3,
    v6);
  FxLibraryGlobals.WdfDirectedPowerTransitionEnabled = 0;
  wil_details_FeatureReporting_ReportUsageToService(
    (wil_details_FeatureReportingCache *)&WPP_GLOBAL_WDF_Control.Queue,
    0x11D68E7u,
    0,
    0,
    &Feature_WdfAllowBindToPreReleaseVersion_logged_traits,
    1,
    v4,
    v7);
  FxLibraryGlobals.AllowBindToPreReleaseVersion = 1;
  wil_details_FeatureReporting_ReportUsageToService(
    (wil_details_FeatureReportingCache *)&WPP_GLOBAL_WDF_Control.DeviceType,
    0x18B174Du,
    0,
    0,
    &Feature_WdfUseWdfTimerForPofx_logged_traits,
    0,
    v5,
    v8);
  FxLibraryGlobals.UseWdfTimerForPofx = 0;
  FxLibraryGlobalsQueryRegistrySettings();
  funcName = 0LL;
  RtlInitUnicodeString(&funcName, L"IoConnectInterruptEx");
  FxLibraryGlobals.IoConnectInterruptEx = (int (__fastcall *)(_IO_CONNECT_INTERRUPT_PARAMETERS *))MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"IoDisconnectInterruptEx");
  FxLibraryGlobals.IoDisconnectInterruptEx = (int (__fastcall *)(_IO_DISCONNECT_INTERRUPT_PARAMETERS *))MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"KeQueryActiveProcessors");
  FxLibraryGlobals.KeQueryActiveProcessors = (unsigned __int64 (__fastcall *)())MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"KeSetTargetProcessorDpc");
  FxLibraryGlobals.KeSetTargetProcessorDpc = (void (__fastcall *)(_KDPC *, char))MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"KeQueryActiveGroupCount");
  if ( MmGetSystemRoutineAddress(&funcName) )
    FxLibraryGlobals.ProcessorGroupSupport = 1;
  RtlInitUnicodeString(&funcName, L"KeSetCoalescableTimer");
  FxLibraryGlobals.KeSetCoalescableTimer = (unsigned __int8 (__fastcall *)(_KTIMER *, _LARGE_INTEGER, unsigned int, unsigned int, _KDPC *))MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"IoUnregisterPlugPlayNotificationEx");
  FxLibraryGlobals.IoUnregisterPlugPlayNotificationEx = (int (__fastcall *)(void *))MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"PoFxRegisterDevice");
  FxLibraryGlobals.PoxRegisterDevice = (int (__fastcall *)(_DEVICE_OBJECT *, _PO_FX_DEVICE_V1 *, POHANDLE__ **))MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"PoFxStartDevicePowerManagement");
  FxLibraryGlobals.PoxStartDevicePowerManagement = (void (__fastcall *)(POHANDLE__ *))MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"PoFxUnregisterDevice");
  FxLibraryGlobals.PoxUnregisterDevice = (void (__fastcall *)(POHANDLE__ *))MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"PoFxActivateComponent");
  FxLibraryGlobals.PoxActivateComponent = (int (__fastcall *)(POHANDLE__ *, unsigned int, unsigned int))MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"PoFxIdleComponent");
  FxLibraryGlobals.PoxIdleComponent = (int (__fastcall *)(POHANDLE__ *, unsigned int, unsigned int))MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"PoFxReportDevicePoweredOn");
  FxLibraryGlobals.PoxReportDevicePoweredOn = (void (__fastcall *)(POHANDLE__ *))MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"PoFxCompleteIdleState");
  FxLibraryGlobals.PoxCompleteIdleState = (void (__fastcall *)(POHANDLE__ *, unsigned int))MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"PoFxCompleteIdleCondition");
  FxLibraryGlobals.PoxCompleteIdleCondition = (void (__fastcall *)(POHANDLE__ *, unsigned int))MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"PoFxCompleteDevicePowerNotRequired");
  FxLibraryGlobals.PoxCompleteDevicePowerNotRequired = (void (__fastcall *)(POHANDLE__ *))MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"PoFxSetDeviceIdleTimeout");
  FxLibraryGlobals.PoxSetDeviceIdleTimeout = (void (__fastcall *)(POHANDLE__ *, unsigned __int64))MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"IoReportInterruptActive");
  FxLibraryGlobals.IoReportInterruptActive = (void (__fastcall *)(_IO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS *))MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"IoReportInterruptInactive");
  FxLibraryGlobals.IoReportInterruptInactive = (void (__fastcall *)(_IO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS *))MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"VfCheckNxPoolType");
  FxLibraryGlobals.VfCheckNxPoolType = (void (__fastcall *)(_POOL_TYPE, void *, unsigned int))MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"VfIsRuleClassEnabled");
  SystemRoutineAddress = (unsigned __int8 (__fastcall *)(unsigned int))MmGetSystemRoutineAddress(&funcName);
  FxLibraryGlobals.OsVersionInfo.dwOSVersionInfoSize = 284;
  FxLibraryGlobals.VfIsRuleClassEnabled = SystemRoutineAddress;
  v1 = (void (__fastcall *)(_OSVERSIONINFOEXW *))Mx::MxGetSystemRoutineAddress(L"RtlGetVersion");
  v1(&FxLibraryGlobals.OsVersionInfo);
  FxLibraryGlobalsVerifyVersion();
  FxLibraryGlobals.FxDriverGlobalsListLock.m_Lock = 0LL;
  *(_WORD *)FxLibraryGlobals.MachineSleepStates = 0;
  FxLibraryGlobals.MachineSleepStates[2] = 0;
  FxLibraryGlobals.FxDriverGlobalsList.Blink = &FxLibraryGlobals.FxDriverGlobalsList;
  FxLibraryGlobals.FxDriverGlobalsList.Flink = &FxLibraryGlobals.FxDriverGlobalsList;
  FxLibraryGlobals.FxDriverGlobalsListLock.m_DbgFlagIsInitialized = 1;
  FxInitializeBugCheckDriverInfo();
  FxLibraryGlobals.DriverTracker.m_DriverUsage = 0LL;
  FxLibraryGlobals.DriverTracker.m_PoolToFree = 0LL;
  *(_QWORD *)&FxLibraryGlobals.DriverTracker.m_EntrySize = 0LL;
  FxLibraryGlobals.VerifierSectionHandle = 0LL;
  FxLibraryGlobals.VerifierSectionHandleRefCount = 0;
  result = WmiQueryTraceInformation(WdfNotifyRoutinesClass, &FxLibraryGlobals.PerfTraceRoutines, 8u, 0LL, 0LL);
  if ( result < 0 )
  {
    *(_OWORD *)&FxLibraryGlobals.DummyPerfTraceRoutines.Size = 0LL;
    FxLibraryGlobals.PerfTraceRoutines = &FxLibraryGlobals.DummyPerfTraceRoutines;
    result = 0;
    FxLibraryGlobals.DummyPerfTraceRoutines.Size = 32;
    *(_OWORD *)&FxLibraryGlobals.DummyPerfTraceRoutines.InterruptNotifyRoutine = 0LL;
  }
  return result;
}
