/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C000331C
 * Callers:
 *     ProcLibOnD0StateChangeWorker @ 0x1C0002380 (ProcLibOnD0StateChangeWorker.c)
 *     EvtDeviceD0Entry @ 0x1C00026D0 (EvtDeviceD0Entry.c)
 *     SetGV3PerfState @ 0x1C0004D30 (SetGV3PerfState.c)
 *     SetGV3PerfStateAndTurbo @ 0x1C0004DF0 (SetGV3PerfStateAndTurbo.c)
 *     AcpiNotifyCallback @ 0x1C0005710 (AcpiNotifyCallback.c)
 *     SetTurboDisablePolicy @ 0x1C0007C50 (SetTurboDisablePolicy.c)
 *     GetProcessorStatusInfo @ 0x1C000AD50 (GetProcessorStatusInfo.c)
 *     HwDebugInitializeRegistryDebugRegisters @ 0x1C0026428 (HwDebugInitializeRegistryDebugRegisters.c)
 *     ConnectHwpInterrupt @ 0x1C0026D20 (ConnectHwpInterrupt.c)
 *     RegisterXsdDomain @ 0x1C0027474 (RegisterXsdDomain.c)
 *     QueryPepCapabilites @ 0x1C0027CF4 (QueryPepCapabilites.c)
 *     ProcLibDeviceStart @ 0x1C0027F5C (ProcLibDeviceStart.c)
 *     InitAcpi2CStates @ 0x1C0028A60 (InitAcpi2CStates.c)
 *     ValidateAcpiCStates @ 0x1C0028ADC (ValidateAcpiCStates.c)
 *     InitAcpiLpiStates @ 0x1C0028C48 (InitAcpiLpiStates.c)
 *     InitAcpiPerfDomain @ 0x1C0029400 (InitAcpiPerfDomain.c)
 *     InitAcpiIdleDomain @ 0x1C00294D4 (InitAcpiIdleDomain.c)
 *     AcpiEval_CPC @ 0x1C00296AC (AcpiEval_CPC.c)
 *     AcpiEval_CST @ 0x1C0029CFC (AcpiEval_CST.c)
 *     AcpiParseCore @ 0x1C0029FD0 (AcpiParseCore.c)
 *     AcpiEval_CSD @ 0x1C002A368 (AcpiEval_CSD.c)
 *     InitAcpiCpc @ 0x1C002A90C (InitAcpiCpc.c)
 *     InitCpcStatesInternal @ 0x1C002AB4C (InitCpcStatesInternal.c)
 *     HwDebugCreateRegisterGroup @ 0x1C002BCA8 (HwDebugCreateRegisterGroup.c)
 *     Display_CST @ 0x1C002C1F8 (Display_CST.c)
 *     Display_CPC @ 0x1C002C390 (Display_CPC.c)
 *     CpcConnectNativeInterrupt @ 0x1C002C5DC (CpcConnectNativeInterrupt.c)
 *     Display_xSD @ 0x1C002C71C (Display_xSD.c)
 *     DisplayKernelPerfStates @ 0x1C002CB6C (DisplayKernelPerfStates.c)
 *     RegisterIdleComplete @ 0x1C002D9DC (RegisterIdleComplete.c)
 *     DisplayKernelIdleStates @ 0x1C002DA98 (DisplayKernelIdleStates.c)
 *     AcpiParseRegister @ 0x1C002DBB0 (AcpiParseRegister.c)
 *     DecodeMWaitIdleState @ 0x1C002E030 (DecodeMWaitIdleState.c)
 *     AcpiCStateNotifyWorker @ 0x1C002F450 (AcpiCStateNotifyWorker.c)
 *     ValidateLpiState @ 0x1C0038A68 (ValidateLpiState.c)
 *     ValidatePccEntry @ 0x1C0038D30 (ValidatePccEntry.c)
 *     ValidatePccHeader @ 0x1C0038E08 (ValidatePccHeader.c)
 *     AcpiEval_PCCP @ 0x1C003AE0C (AcpiEval_PCCP.c)
 *     AcpiEval_PPC @ 0x1C003B314 (AcpiEval_PPC.c)
 *     AcpiEval_PSS @ 0x1C003B488 (AcpiEval_PSS.c)
 *     AcpiEval_TPC @ 0x1C003B830 (AcpiEval_TPC.c)
 *     AcpiEval_TSS @ 0x1C003B990 (AcpiEval_TSS.c)
 *     AcpiEval_XPSS @ 0x1C003BC94 (AcpiEval_XPSS.c)
 *     AcpiOSCNotifyWorker @ 0x1C003C2B0 (AcpiOSCNotifyWorker.c)
 *     AcpiPStateNotifyWorker @ 0x1C003C310 (AcpiPStateNotifyWorker.c)
 *     AcpiParseRegisterOrQword @ 0x1C003D060 (AcpiParseRegisterOrQword.c)
 *     AcpiParseULong64 @ 0x1C003D150 (AcpiParseULong64.c)
 *     AcpiTStateNotifyWorker @ 0x1C003D1E0 (AcpiTStateNotifyWorker.c)
 *     Display_CSD @ 0x1C003D33C (Display_CSD.c)
 *     Display_LPI @ 0x1C003D64C (Display_LPI.c)
 *     Display_PCT_PTC @ 0x1C003DA90 (Display_PCT_PTC.c)
 *     Display_PSS @ 0x1C003DBFC (Display_PSS.c)
 *     Display_TSS @ 0x1C003DEF4 (Display_TSS.c)
 *     InitAcpiThrottleDomain @ 0x1C003E378 (InitAcpiThrottleDomain.c)
 *     InitPerfFeedbackInternal @ 0x1C003E658 (InitPerfFeedbackInternal.c)
 *     InitPerfStatesInternal @ 0x1C003E964 (InitPerfStatesInternal.c)
 *     RegisterKernelPepPerf @ 0x1C003FEC0 (RegisterKernelPepPerf.c)
 *     RegisterKernelPlatformStates @ 0x1C004049C (RegisterKernelPlatformStates.c)
 *     UpdateKernelPlatformStates @ 0x1C0040A54 (UpdateKernelPlatformStates.c)
 *     InitAcpi3ThrottleStates @ 0x1C0041094 (InitAcpi3ThrottleStates.c)
 *     InitAcpiPerfStates @ 0x1C00411D8 (InitAcpiPerfStates.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C004210C (PepNotifyQueryProcessorIdleStates.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C00423C4 (PepNotifyQueryProcessorIdleStatesV2.c)
 *     HwDebugInitializeRegistryDebugParameter @ 0x1C0042D48 (HwDebugInitializeRegistryDebugParameter.c)
 *     HwDebugInitializeRegistryDebugRegister @ 0x1C0043124 (HwDebugInitializeRegistryDebugRegister.c)
 *     InitPepPerfStates @ 0x1C0043864 (InitPepPerfStates.c)
 *     PepUpdatePerformanceConstraintWorker @ 0x1C00443B0 (PepUpdatePerformanceConstraintWorker.c)
 *     InitAcpiLegacyPcc @ 0x1C004461C (InitAcpiLegacyPcc.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x1C0044C98 (LpiTranslateCoordinatedIdleStates.c)
 *     ProcLibGlobalInit @ 0x1C0048C54 (ProcLibGlobalInit.c)
 *     DisplayPPMFlags @ 0x1C0049B4C (DisplayPPMFlags.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
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
