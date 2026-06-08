/*
 * XREFs of WPP_RECORDER_SF_d @ 0x1C00045A0
 * Callers:
 *     PepPerfCheckComplete @ 0x1C00021F0 (PepPerfCheckComplete.c)
 *     PepParkMask @ 0x1C0002860 (PepParkMask.c)
 *     AcpiNotifyCallback @ 0x1C0002AB0 (AcpiNotifyCallback.c)
 *     EvtDeviceD0Entry @ 0x1C0004390 (EvtDeviceD0Entry.c)
 *     PepNotifyFeedbackRead @ 0x1C000A74C (PepNotifyFeedbackRead.c)
 *     PepNotifyPerfConstraints @ 0x1C000A7B8 (PepNotifyPerfConstraints.c)
 *     PepNotifyPerfSet @ 0x1C000A85C (PepNotifyPerfSet.c)
 *     PepPerfStateControlHandler @ 0x1C000AA40 (PepPerfStateControlHandler.c)
 *     PepUpdatePerformanceConstraint @ 0x1C000AC9C (PepUpdatePerformanceConstraint.c)
 *     PepParkPreference @ 0x1C000AF20 (PepParkPreference.c)
 *     EvtDevicePrepareHardware @ 0x1C0022020 (EvtDevicePrepareHardware.c)
 *     EvtDriverDeviceAdd @ 0x1C0022300 (EvtDriverDeviceAdd.c)
 *     InitAcpiCpc @ 0x1C0023728 (InitAcpiCpc.c)
 *     RegisterHvCStates @ 0x1C0024058 (RegisterHvCStates.c)
 *     RegisterHvFeedbackCountersCallback @ 0x1C0024300 (RegisterHvFeedbackCountersCallback.c)
 *     RegisterHvIdleStates @ 0x1C0024720 (RegisterHvIdleStates.c)
 *     RegisterHvLpiStates @ 0x1C002484C (RegisterHvLpiStates.c)
 *     RegisterSubspace @ 0x1C0025094 (RegisterSubspace.c)
 *     RegisterWmi @ 0x1C00252FC (RegisterWmi.c)
 *     AcpiEval_CSD @ 0x1C0025FD0 (AcpiEval_CSD.c)
 *     AcpiEval_CST @ 0x1C00262D8 (AcpiEval_CST.c)
 *     AcpiEval_PPC @ 0x1C0026E60 (AcpiEval_PPC.c)
 *     AcpiEval_PSS @ 0x1C002731C (AcpiEval_PSS.c)
 *     AcpiEval_TPC @ 0x1C00276C4 (AcpiEval_TPC.c)
 *     AcpiEval_TSS @ 0x1C0027824 (AcpiEval_TSS.c)
 *     AcpiEval_XPSS @ 0x1C0027B30 (AcpiEval_XPSS.c)
 *     Display_CPC @ 0x1C00299E0 (Display_CPC.c)
 *     Display_CSD @ 0x1C0029BA8 (Display_CSD.c)
 *     Display_CST @ 0x1C0029EB8 (Display_CST.c)
 *     Display_LPI @ 0x1C002A154 (Display_LPI.c)
 *     Display_PSS @ 0x1C002A704 (Display_PSS.c)
 *     Display_TSS @ 0x1C002A9FC (Display_TSS.c)
 *     Display_xSD @ 0x1C002ACB0 (Display_xSD.c)
 *     DisplayKernelPerfStates @ 0x1C002B710 (DisplayKernelPerfStates.c)
 *     ProcLibDeviceCreate @ 0x1C002B958 (ProcLibDeviceCreate.c)
 *     ProcLibDeviceStart @ 0x1C002BB68 (ProcLibDeviceStart.c)
 *     InitAcpiIdleDomain @ 0x1C002D018 (InitAcpiIdleDomain.c)
 *     InitAcpiPerfDomain @ 0x1C002D180 (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x1C002D3F8 (InitAcpiThrottleDomain.c)
 *     ValidateAcpiCPC @ 0x1C002D828 (ValidateAcpiCPC.c)
 *     ValidateAcpiThrottleStates @ 0x1C002DEB0 (ValidateAcpiThrottleStates.c)
 *     ValidateCoordinatedState @ 0x1C002E6D0 (ValidateCoordinatedState.c)
 *     ValidateLpiState @ 0x1C002E8DC (ValidateLpiState.c)
 *     ValidatePccEntry @ 0x1C002EBA4 (ValidatePccEntry.c)
 *     ValidatePlatformIdleState @ 0x1C002F38C (ValidatePlatformIdleState.c)
 *     Validate_PCT_PTC @ 0x1C002F934 (Validate_PCT_PTC.c)
 *     GetNtProcessorNumber @ 0x1C002FE70 (GetNtProcessorNumber.c)
 *     RegisterKernelCoordinatedLpiStates @ 0x1C003279C (RegisterKernelCoordinatedLpiStates.c)
 *     RegisterKernelCoordinatedStates @ 0x1C003290C (RegisterKernelCoordinatedStates.c)
 *     RegisterKernelIdleStates @ 0x1C0032C70 (RegisterKernelIdleStates.c)
 *     RegisterKernelPepIdleStates @ 0x1C0033620 (RegisterKernelPepIdleStates.c)
 *     RegisterKernelPepPerf @ 0x1C0033D20 (RegisterKernelPepPerf.c)
 *     RegisterKernelPerfStatesCallback @ 0x1C00342C0 (RegisterKernelPerfStatesCallback.c)
 *     RegisterKernelPlatformStates @ 0x1C0034324 (RegisterKernelPlatformStates.c)
 *     UpdateKernelCoordinatedStates @ 0x1C00346D4 (UpdateKernelCoordinatedStates.c)
 *     UpdateKernelIdleDomains @ 0x1C003475C (UpdateKernelIdleDomains.c)
 *     UpdateKernelPlatformStates @ 0x1C00348DC (UpdateKernelPlatformStates.c)
 *     InitAcpi3ThrottleStates @ 0x1C0034F18 (InitAcpi3ThrottleStates.c)
 *     InitAcpiPerfStates @ 0x1C003505C (InitAcpiPerfStates.c)
 *     InitAcpiThrottleStates @ 0x1C00353E0 (InitAcpiThrottleStates.c)
 *     InitAcpi2CStates @ 0x1C0035B34 (InitAcpi2CStates.c)
 *     InitPepIdleStates @ 0x1C0035D5C (InitPepIdleStates.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C00367B8 (PepNotifyQueryProcessorIdleStates.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C0036A58 (PepNotifyQueryProcessorIdleStatesV2.c)
 *     PepNotifyReportCStates @ 0x1C0036E8C (PepNotifyReportCStates.c)
 *     HwDebugCreateRegisterGroup @ 0x1C0037568 (HwDebugCreateRegisterGroup.c)
 *     HwDebugInitializeProcessorSupport @ 0x1C0037968 (HwDebugInitializeProcessorSupport.c)
 *     HwDebugInitializeRegistryDebugParameter @ 0x1C0037B34 (HwDebugInitializeRegistryDebugParameter.c)
 *     HwDebugInitializeRegistryDebugRegister @ 0x1C0037F10 (HwDebugInitializeRegistryDebugRegister.c)
 *     HwDebugInitializeRegistryDebugRegisters @ 0x1C0038430 (HwDebugInitializeRegistryDebugRegisters.c)
 *     HwDebugSetKeyNotification @ 0x1C0038714 (HwDebugSetKeyNotification.c)
 *     InitPepPerfStates @ 0x1C00395E4 (InitPepPerfStates.c)
 *     PepNotifyQueryFeedbackCounters @ 0x1C0039DC0 (PepNotifyQueryFeedbackCounters.c)
 *     PepNotifyQueryPerfCapabilities @ 0x1C0039EB0 (PepNotifyQueryPerfCapabilities.c)
 *     PepQueryPerfDomainInfo @ 0x1C0039FAC (PepQueryPerfDomainInfo.c)
 *     InitPep @ 0x1C003A2B8 (InitPep.c)
 *     PepGetParkingPageInfo @ 0x1C003A460 (PepGetParkingPageInfo.c)
 *     PepNotifyQueryCapabilities @ 0x1C003A514 (PepNotifyQueryCapabilities.c)
 *     PepRegisterSpmSettings @ 0x1C003A664 (PepRegisterSpmSettings.c)
 *     QueryPepCapabilites @ 0x1C003A718 (QueryPepCapabilites.c)
 *     RegisterPepDevice @ 0x1C003A9F4 (RegisterPepDevice.c)
 *     InitAcpiLegacyPcc @ 0x1C003AB2C (InitAcpiLegacyPcc.c)
 *     InitAcpiLpiStates @ 0x1C003ADAC (InitAcpiLpiStates.c)
 *     DriverEntry @ 0x1C003C178 (DriverEntry.c)
 *     CollectAcpiBiosInfo @ 0x1C003C460 (CollectAcpiBiosInfo.c)
 *     ProcLibGlobalInit @ 0x1C003D384 (ProcLibGlobalInit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000BB10 (_guard_dispatch_icall_nop.c)
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
