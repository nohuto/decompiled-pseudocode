/*
 * XREFs of WPP_RECORDER_SF_d @ 0x1C0004950
 * Callers:
 *     PepPerfCheckComplete @ 0x1C0001E50 (PepPerfCheckComplete.c)
 *     PepParkMask @ 0x1C00024B0 (PepParkMask.c)
 *     AcpiNotifyCallback @ 0x1C0002A00 (AcpiNotifyCallback.c)
 *     ProcLibOnD0StateChangeWorker @ 0x1C0004760 (ProcLibOnD0StateChangeWorker.c)
 *     PepNotifyFeedbackRead @ 0x1C000B04C (PepNotifyFeedbackRead.c)
 *     PepNotifyPerfConstraints @ 0x1C000B0B8 (PepNotifyPerfConstraints.c)
 *     PepNotifyPerfSet @ 0x1C000B15C (PepNotifyPerfSet.c)
 *     PepPerfStateControlHandler @ 0x1C000B360 (PepPerfStateControlHandler.c)
 *     PepUpdatePerformanceConstraint @ 0x1C000B5DC (PepUpdatePerformanceConstraint.c)
 *     PepParkPreference @ 0x1C000B860 (PepParkPreference.c)
 *     EvtDevicePrepareHardware @ 0x1C0022C40 (EvtDevicePrepareHardware.c)
 *     EvtDriverDeviceAdd @ 0x1C0022F20 (EvtDriverDeviceAdd.c)
 *     InitAcpiCpc @ 0x1C0024398 (InitAcpiCpc.c)
 *     RegisterHvCStates @ 0x1C0024C68 (RegisterHvCStates.c)
 *     RegisterHvFeedbackCountersCallback @ 0x1C0024F10 (RegisterHvFeedbackCountersCallback.c)
 *     RegisterHvIdleStates @ 0x1C00252F0 (RegisterHvIdleStates.c)
 *     RegisterHvLpiStates @ 0x1C002542C (RegisterHvLpiStates.c)
 *     RegisterSubspace @ 0x1C0025CE4 (RegisterSubspace.c)
 *     RegisterWmi @ 0x1C0025EEC (RegisterWmi.c)
 *     AcpiEval_CSD @ 0x1C0026BC0 (AcpiEval_CSD.c)
 *     AcpiEval_CST @ 0x1C0026EC8 (AcpiEval_CST.c)
 *     AcpiEval_PPC @ 0x1C0027A54 (AcpiEval_PPC.c)
 *     AcpiEval_PSS @ 0x1C0027F10 (AcpiEval_PSS.c)
 *     AcpiEval_TPC @ 0x1C00282B8 (AcpiEval_TPC.c)
 *     AcpiEval_TSS @ 0x1C0028418 (AcpiEval_TSS.c)
 *     AcpiEval_XPSS @ 0x1C0028724 (AcpiEval_XPSS.c)
 *     Display_CPC @ 0x1C002A790 (Display_CPC.c)
 *     Display_CSD @ 0x1C002A958 (Display_CSD.c)
 *     Display_CST @ 0x1C002AC68 (Display_CST.c)
 *     Display_LPI @ 0x1C002AF04 (Display_LPI.c)
 *     Display_PSS @ 0x1C002B4B4 (Display_PSS.c)
 *     Display_TSS @ 0x1C002B7AC (Display_TSS.c)
 *     Display_xSD @ 0x1C002BA60 (Display_xSD.c)
 *     DisplayKernelPerfStates @ 0x1C002C4BC (DisplayKernelPerfStates.c)
 *     ProcLibDeviceCreate @ 0x1C002C704 (ProcLibDeviceCreate.c)
 *     ProcLibDeviceStart @ 0x1C002C914 (ProcLibDeviceStart.c)
 *     InitAcpiIdleDomain @ 0x1C002DD88 (InitAcpiIdleDomain.c)
 *     InitAcpiPerfDomain @ 0x1C002DEF0 (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x1C002E168 (InitAcpiThrottleDomain.c)
 *     ValidateAcpiCPC @ 0x1C002E600 (ValidateAcpiCPC.c)
 *     ValidateAcpiThrottleStates @ 0x1C002ECE8 (ValidateAcpiThrottleStates.c)
 *     ValidateCoordinatedState @ 0x1C002F508 (ValidateCoordinatedState.c)
 *     ValidateLpiState @ 0x1C002F714 (ValidateLpiState.c)
 *     ValidatePccEntry @ 0x1C002F9DC (ValidatePccEntry.c)
 *     ValidatePlatformIdleState @ 0x1C00301B0 (ValidatePlatformIdleState.c)
 *     Validate_PCT_PTC @ 0x1C003074C (Validate_PCT_PTC.c)
 *     GetNtProcessorNumber @ 0x1C0030CA0 (GetNtProcessorNumber.c)
 *     RegisterKernelCoordinatedLpiStates @ 0x1C00335E0 (RegisterKernelCoordinatedLpiStates.c)
 *     RegisterKernelCoordinatedStates @ 0x1C0033750 (RegisterKernelCoordinatedStates.c)
 *     RegisterKernelIdleStates @ 0x1C0033AC0 (RegisterKernelIdleStates.c)
 *     RegisterKernelPepIdleStates @ 0x1C00344A8 (RegisterKernelPepIdleStates.c)
 *     RegisterKernelPepPerf @ 0x1C0034BA0 (RegisterKernelPepPerf.c)
 *     RegisterKernelPerfStatesCallback @ 0x1C0035160 (RegisterKernelPerfStatesCallback.c)
 *     RegisterKernelPlatformStates @ 0x1C00351C4 (RegisterKernelPlatformStates.c)
 *     UpdateKernelCoordinatedStates @ 0x1C0035574 (UpdateKernelCoordinatedStates.c)
 *     UpdateKernelIdleDomains @ 0x1C00355FC (UpdateKernelIdleDomains.c)
 *     UpdateKernelPlatformStates @ 0x1C003577C (UpdateKernelPlatformStates.c)
 *     InitAcpi3ThrottleStates @ 0x1C0035DC0 (InitAcpi3ThrottleStates.c)
 *     InitAcpiPerfStates @ 0x1C0035F04 (InitAcpiPerfStates.c)
 *     InitAcpiThrottleStates @ 0x1C0036288 (InitAcpiThrottleStates.c)
 *     InitAcpi2CStates @ 0x1C0036A68 (InitAcpi2CStates.c)
 *     InitPepIdleStates @ 0x1C0036C98 (InitPepIdleStates.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C00376F4 (PepNotifyQueryProcessorIdleStates.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C003799C (PepNotifyQueryProcessorIdleStatesV2.c)
 *     PepNotifyReportCStates @ 0x1C0037DC8 (PepNotifyReportCStates.c)
 *     HwDebugCreateRegisterGroup @ 0x1C00384A8 (HwDebugCreateRegisterGroup.c)
 *     HwDebugInitializeProcessorSupport @ 0x1C00388AC (HwDebugInitializeProcessorSupport.c)
 *     HwDebugInitializeRegistryDebugParameter @ 0x1C0038A78 (HwDebugInitializeRegistryDebugParameter.c)
 *     HwDebugInitializeRegistryDebugRegister @ 0x1C0038E54 (HwDebugInitializeRegistryDebugRegister.c)
 *     HwDebugInitializeRegistryDebugRegisters @ 0x1C0039374 (HwDebugInitializeRegistryDebugRegisters.c)
 *     HwDebugSetKeyNotification @ 0x1C0039658 (HwDebugSetKeyNotification.c)
 *     InitPepPerfStates @ 0x1C003A568 (InitPepPerfStates.c)
 *     PepNotifyQueryFeedbackCounters @ 0x1C003AD70 (PepNotifyQueryFeedbackCounters.c)
 *     PepNotifyQueryPerfCapabilities @ 0x1C003AE60 (PepNotifyQueryPerfCapabilities.c)
 *     PepQueryPerfDomainInfo @ 0x1C003AF5C (PepQueryPerfDomainInfo.c)
 *     InitPep @ 0x1C003B268 (InitPep.c)
 *     PepGetParkingPageInfo @ 0x1C003B418 (PepGetParkingPageInfo.c)
 *     PepNotifyQueryCapabilities @ 0x1C003B4CC (PepNotifyQueryCapabilities.c)
 *     PepRegisterSpmSettings @ 0x1C003B618 (PepRegisterSpmSettings.c)
 *     QueryPepCapabilites @ 0x1C003B6CC (QueryPepCapabilites.c)
 *     RegisterPepDevice @ 0x1C003B99C (RegisterPepDevice.c)
 *     InitAcpiLegacyPcc @ 0x1C003BAD4 (InitAcpiLegacyPcc.c)
 *     InitAcpiLpiStates @ 0x1C003BD4C (InitAcpiLpiStates.c)
 *     DriverEntry @ 0x1C003F178 (DriverEntry.c)
 *     CollectAcpiBiosInfo @ 0x1C003F608 (CollectAcpiBiosInfo.c)
 *     ProcLibGlobalInit @ 0x1C004052C (ProcLibGlobalInit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000C450 (_guard_dispatch_icall_nop.c)
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
