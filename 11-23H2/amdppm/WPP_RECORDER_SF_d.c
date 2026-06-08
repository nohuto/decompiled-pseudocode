/*
 * XREFs of WPP_RECORDER_SF_d @ 0x1C0004990
 * Callers:
 *     PepPerfCheckComplete @ 0x1C0001E00 (PepPerfCheckComplete.c)
 *     PepParkMask @ 0x1C0002460 (PepParkMask.c)
 *     AcpiNotifyCallback @ 0x1C0002A20 (AcpiNotifyCallback.c)
 *     ProcLibOnD0StateChangeWorker @ 0x1C00047A0 (ProcLibOnD0StateChangeWorker.c)
 *     PepNotifyFeedbackRead @ 0x1C000B0EC (PepNotifyFeedbackRead.c)
 *     PepNotifyPerfConstraints @ 0x1C000B158 (PepNotifyPerfConstraints.c)
 *     PepNotifyPerfSet @ 0x1C000B1FC (PepNotifyPerfSet.c)
 *     PepPerfStateControlHandler @ 0x1C000B400 (PepPerfStateControlHandler.c)
 *     PepUpdatePerformanceConstraint @ 0x1C000B67C (PepUpdatePerformanceConstraint.c)
 *     PepParkPreference @ 0x1C000B900 (PepParkPreference.c)
 *     EvtDevicePrepareHardware @ 0x1C0022C40 (EvtDevicePrepareHardware.c)
 *     EvtDriverDeviceAdd @ 0x1C0022F20 (EvtDriverDeviceAdd.c)
 *     InitAcpi2CStates @ 0x1C0024270 (InitAcpi2CStates.c)
 *     InitAcpiCpc @ 0x1C0024C48 (InitAcpiCpc.c)
 *     RegisterHvCStates @ 0x1C0025518 (RegisterHvCStates.c)
 *     RegisterHvFeedbackCountersCallback @ 0x1C00257C0 (RegisterHvFeedbackCountersCallback.c)
 *     RegisterHvIdleStates @ 0x1C0025BA0 (RegisterHvIdleStates.c)
 *     RegisterHvLpiStates @ 0x1C0025CDC (RegisterHvLpiStates.c)
 *     RegisterSubspace @ 0x1C0026594 (RegisterSubspace.c)
 *     RegisterWmi @ 0x1C002679C (RegisterWmi.c)
 *     AcpiEval_CSD @ 0x1C0027470 (AcpiEval_CSD.c)
 *     AcpiEval_CST @ 0x1C0027778 (AcpiEval_CST.c)
 *     AcpiEval_PPC @ 0x1C0028304 (AcpiEval_PPC.c)
 *     AcpiEval_PSS @ 0x1C00287C0 (AcpiEval_PSS.c)
 *     AcpiEval_TPC @ 0x1C0028B68 (AcpiEval_TPC.c)
 *     AcpiEval_TSS @ 0x1C0028CC8 (AcpiEval_TSS.c)
 *     AcpiEval_XPSS @ 0x1C0028FD4 (AcpiEval_XPSS.c)
 *     Display_CPC @ 0x1C002B040 (Display_CPC.c)
 *     Display_CSD @ 0x1C002B208 (Display_CSD.c)
 *     Display_CST @ 0x1C002B518 (Display_CST.c)
 *     Display_LPI @ 0x1C002B7B4 (Display_LPI.c)
 *     Display_PSS @ 0x1C002BD64 (Display_PSS.c)
 *     Display_TSS @ 0x1C002C05C (Display_TSS.c)
 *     Display_xSD @ 0x1C002C310 (Display_xSD.c)
 *     DisplayKernelPerfStates @ 0x1C002CD6C (DisplayKernelPerfStates.c)
 *     ProcLibDeviceCreate @ 0x1C002CFB4 (ProcLibDeviceCreate.c)
 *     ProcLibDeviceStart @ 0x1C002D1C4 (ProcLibDeviceStart.c)
 *     ValidateAcpiCPC @ 0x1C002E738 (ValidateAcpiCPC.c)
 *     ValidateAcpiThrottleStates @ 0x1C002EE20 (ValidateAcpiThrottleStates.c)
 *     ValidateCoordinatedState @ 0x1C002F640 (ValidateCoordinatedState.c)
 *     ValidateLpiState @ 0x1C002F84C (ValidateLpiState.c)
 *     ValidatePccEntry @ 0x1C002FB14 (ValidatePccEntry.c)
 *     ValidatePlatformIdleState @ 0x1C00302E8 (ValidatePlatformIdleState.c)
 *     Validate_PCT_PTC @ 0x1C0030884 (Validate_PCT_PTC.c)
 *     GetNtProcessorNumber @ 0x1C0030DD0 (GetNtProcessorNumber.c)
 *     RegisterKernelCoordinatedLpiStates @ 0x1C0033710 (RegisterKernelCoordinatedLpiStates.c)
 *     RegisterKernelCoordinatedStates @ 0x1C0033880 (RegisterKernelCoordinatedStates.c)
 *     RegisterKernelIdleStates @ 0x1C0033BF0 (RegisterKernelIdleStates.c)
 *     RegisterKernelPepIdleStates @ 0x1C00345D8 (RegisterKernelPepIdleStates.c)
 *     RegisterKernelPepPerf @ 0x1C0034CD0 (RegisterKernelPepPerf.c)
 *     RegisterKernelPerfStatesCallback @ 0x1C0035290 (RegisterKernelPerfStatesCallback.c)
 *     RegisterKernelPlatformStates @ 0x1C00352F4 (RegisterKernelPlatformStates.c)
 *     UpdateKernelCoordinatedStates @ 0x1C00356A4 (UpdateKernelCoordinatedStates.c)
 *     UpdateKernelIdleDomains @ 0x1C003572C (UpdateKernelIdleDomains.c)
 *     UpdateKernelPlatformStates @ 0x1C00358AC (UpdateKernelPlatformStates.c)
 *     InitAcpiIdleDomain @ 0x1C0035DE0 (InitAcpiIdleDomain.c)
 *     InitAcpiPerfDomain @ 0x1C0035F48 (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x1C00361C0 (InitAcpiThrottleDomain.c)
 *     InitAcpi3ThrottleStates @ 0x1C0036668 (InitAcpi3ThrottleStates.c)
 *     InitAcpiPerfStates @ 0x1C00367AC (InitAcpiPerfStates.c)
 *     InitAcpiThrottleStates @ 0x1C0036B30 (InitAcpiThrottleStates.c)
 *     InitPepIdleStates @ 0x1C0036C90 (InitPepIdleStates.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C00376EC (PepNotifyQueryProcessorIdleStates.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C0037994 (PepNotifyQueryProcessorIdleStatesV2.c)
 *     PepNotifyReportCStates @ 0x1C0037DC0 (PepNotifyReportCStates.c)
 *     HwDebugCreateRegisterGroup @ 0x1C0038498 (HwDebugCreateRegisterGroup.c)
 *     HwDebugInitializeProcessorSupport @ 0x1C003889C (HwDebugInitializeProcessorSupport.c)
 *     HwDebugInitializeRegistryDebugParameter @ 0x1C0038A68 (HwDebugInitializeRegistryDebugParameter.c)
 *     HwDebugInitializeRegistryDebugRegister @ 0x1C0038E44 (HwDebugInitializeRegistryDebugRegister.c)
 *     HwDebugInitializeRegistryDebugRegisters @ 0x1C0039364 (HwDebugInitializeRegistryDebugRegisters.c)
 *     HwDebugSetKeyNotification @ 0x1C0039648 (HwDebugSetKeyNotification.c)
 *     InitPepPerfStates @ 0x1C003A558 (InitPepPerfStates.c)
 *     PepNotifyQueryFeedbackCounters @ 0x1C003AD60 (PepNotifyQueryFeedbackCounters.c)
 *     PepNotifyQueryPerfCapabilities @ 0x1C003AE50 (PepNotifyQueryPerfCapabilities.c)
 *     PepQueryPerfDomainInfo @ 0x1C003AF4C (PepQueryPerfDomainInfo.c)
 *     InitPep @ 0x1C003B258 (InitPep.c)
 *     PepGetParkingPageInfo @ 0x1C003B408 (PepGetParkingPageInfo.c)
 *     PepNotifyQueryCapabilities @ 0x1C003B4BC (PepNotifyQueryCapabilities.c)
 *     PepRegisterSpmSettings @ 0x1C003B608 (PepRegisterSpmSettings.c)
 *     QueryPepCapabilites @ 0x1C003B6BC (QueryPepCapabilites.c)
 *     RegisterPepDevice @ 0x1C003B98C (RegisterPepDevice.c)
 *     InitAcpiLegacyPcc @ 0x1C003BAC4 (InitAcpiLegacyPcc.c)
 *     InitAcpiLpiStates @ 0x1C003BD3C (InitAcpiLpiStates.c)
 *     DriverEntry @ 0x1C003F178 (DriverEntry.c)
 *     CollectAcpiBiosInfo @ 0x1C003F608 (CollectAcpiBiosInfo.c)
 *     ProcLibGlobalInit @ 0x1C004052C (ProcLibGlobalInit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000C510 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_d(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v7; // rdi
  unsigned int v8; // esi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-38h]
  va_list va; // [rsp+88h] [rbp+30h] BYREF

  va_start(va, a5);
  v7 = (unsigned __int64)a3 >> 16;
  v8 = a2;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v7 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v7 + 1) >= a2 )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v7),
      43LL,
      a5,
      a4,
      va,
      4LL,
      0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, v8, a3, a5, v12, va);
}
