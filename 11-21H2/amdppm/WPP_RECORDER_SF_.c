/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C00029DC
 * Callers:
 *     AcpiNotifyCallback @ 0x1C0002AB0 (AcpiNotifyCallback.c)
 *     EvtDeviceD0Entry @ 0x1C0004390 (EvtDeviceD0Entry.c)
 *     GetProcessorStatusInfo @ 0x1C00056A0 (GetProcessorStatusInfo.c)
 *     DecodeMWaitIdleState @ 0x1C001FB90 (DecodeMWaitIdleState.c)
 *     CpcConnectNativeInterrupt @ 0x1C0022F74 (CpcConnectNativeInterrupt.c)
 *     InitAcpiCpc @ 0x1C0023728 (InitAcpiCpc.c)
 *     AcpiCStateNotifyWorker @ 0x1C0025640 (AcpiCStateNotifyWorker.c)
 *     AcpiEval_CPC @ 0x1C00258DC (AcpiEval_CPC.c)
 *     AcpiEval_CSD @ 0x1C0025FD0 (AcpiEval_CSD.c)
 *     AcpiEval_CST @ 0x1C00262D8 (AcpiEval_CST.c)
 *     AcpiEval_PCCP @ 0x1C0026958 (AcpiEval_PCCP.c)
 *     AcpiEval_PPC @ 0x1C0026E60 (AcpiEval_PPC.c)
 *     AcpiEval_PSS @ 0x1C002731C (AcpiEval_PSS.c)
 *     AcpiEval_TPC @ 0x1C00276C4 (AcpiEval_TPC.c)
 *     AcpiEval_TSS @ 0x1C0027824 (AcpiEval_TSS.c)
 *     AcpiEval_XPSS @ 0x1C0027B30 (AcpiEval_XPSS.c)
 *     AcpiOSCNotifyWorker @ 0x1C0028320 (AcpiOSCNotifyWorker.c)
 *     AcpiPStateNotifyWorker @ 0x1C0028380 (AcpiPStateNotifyWorker.c)
 *     AcpiParseCore @ 0x1C0028560 (AcpiParseCore.c)
 *     AcpiParseRegister @ 0x1C00291F0 (AcpiParseRegister.c)
 *     AcpiParseRegisterOrQword @ 0x1C00292B0 (AcpiParseRegisterOrQword.c)
 *     AcpiParseULong64 @ 0x1C00293F0 (AcpiParseULong64.c)
 *     AcpiTStateNotifyWorker @ 0x1C0029480 (AcpiTStateNotifyWorker.c)
 *     Display_CPC @ 0x1C00299E0 (Display_CPC.c)
 *     Display_CSD @ 0x1C0029BA8 (Display_CSD.c)
 *     Display_CST @ 0x1C0029EB8 (Display_CST.c)
 *     Display_LPI @ 0x1C002A154 (Display_LPI.c)
 *     Display_PCT_PTC @ 0x1C002A598 (Display_PCT_PTC.c)
 *     Display_PSS @ 0x1C002A704 (Display_PSS.c)
 *     Display_TSS @ 0x1C002A9FC (Display_TSS.c)
 *     Display_xSD @ 0x1C002ACB0 (Display_xSD.c)
 *     DisplayKernelIdleStates @ 0x1C002B594 (DisplayKernelIdleStates.c)
 *     DisplayKernelPerfStates @ 0x1C002B710 (DisplayKernelPerfStates.c)
 *     ProcLibDeviceStart @ 0x1C002BB68 (ProcLibDeviceStart.c)
 *     InitAcpiIdleDomain @ 0x1C002D018 (InitAcpiIdleDomain.c)
 *     InitAcpiPerfDomain @ 0x1C002D180 (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x1C002D3F8 (InitAcpiThrottleDomain.c)
 *     RegisterXsdDomain @ 0x1C002D548 (RegisterXsdDomain.c)
 *     ValidateAcpiCStates @ 0x1C002DB68 (ValidateAcpiCStates.c)
 *     ValidateLpiState @ 0x1C002E8DC (ValidateLpiState.c)
 *     ValidatePccEntry @ 0x1C002EBA4 (ValidatePccEntry.c)
 *     ValidatePccHeader @ 0x1C002EC7C (ValidatePccHeader.c)
 *     InitCpcStatesInternal @ 0x1C0030214 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C00316E0 (InitPerfFeedbackInternal.c)
 *     InitPerfStatesInternal @ 0x1C00319E4 (InitPerfStatesInternal.c)
 *     RegisterIdleComplete @ 0x1C0032260 (RegisterIdleComplete.c)
 *     RegisterKernelPepPerf @ 0x1C0033D20 (RegisterKernelPepPerf.c)
 *     RegisterKernelPlatformStates @ 0x1C0034324 (RegisterKernelPlatformStates.c)
 *     UpdateKernelPlatformStates @ 0x1C00348DC (UpdateKernelPlatformStates.c)
 *     InitAcpi3ThrottleStates @ 0x1C0034F18 (InitAcpi3ThrottleStates.c)
 *     InitAcpiPerfStates @ 0x1C003505C (InitAcpiPerfStates.c)
 *     InitAcpi2CStates @ 0x1C0035B34 (InitAcpi2CStates.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C00367B8 (PepNotifyQueryProcessorIdleStates.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C0036A58 (PepNotifyQueryProcessorIdleStatesV2.c)
 *     HwDebugCreateRegisterGroup @ 0x1C0037568 (HwDebugCreateRegisterGroup.c)
 *     HwDebugInitializeRegistryDebugParameter @ 0x1C0037B34 (HwDebugInitializeRegistryDebugParameter.c)
 *     HwDebugInitializeRegistryDebugRegister @ 0x1C0037F10 (HwDebugInitializeRegistryDebugRegister.c)
 *     HwDebugInitializeRegistryDebugRegisters @ 0x1C0038430 (HwDebugInitializeRegistryDebugRegisters.c)
 *     InitPepPerfStates @ 0x1C00395E4 (InitPepPerfStates.c)
 *     PepUpdatePerformanceConstraintWorker @ 0x1C003A100 (PepUpdatePerformanceConstraintWorker.c)
 *     QueryPepCapabilites @ 0x1C003A718 (QueryPepCapabilites.c)
 *     InitAcpiLegacyPcc @ 0x1C003AB2C (InitAcpiLegacyPcc.c)
 *     InitAcpiLpiStates @ 0x1C003ADAC (InitAcpiLpiStates.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x1C003B414 (LpiTranslateCoordinatedIdleStates.c)
 *     DisplayPPMFlags @ 0x1C003C5C8 (DisplayPPMFlags.c)
 *     ProcLibGlobalInit @ 0x1C003D384 (ProcLibGlobalInit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000BB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5)
{
  unsigned __int64 v7; // rdi
  unsigned int v9; // esi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-28h]

  v7 = (unsigned __int64)a3 >> 16;
  v9 = a2;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v7 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v7 + 1) >= a2 )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v7),
      43LL,
      a5,
      a4,
      0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, v9, a3, a5, v12, 0LL);
}
