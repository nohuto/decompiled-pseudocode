/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C00026F0
 * Callers:
 *     EvtDeviceD0Entry @ 0x1C00020D0 (EvtDeviceD0Entry.c)
 *     SetGV3PerfState @ 0x1C0003C40 (SetGV3PerfState.c)
 *     SetGV3PerfStateAndTurbo @ 0x1C00061A0 (SetGV3PerfStateAndTurbo.c)
 *     SetTurboDisablePolicy @ 0x1C00063B0 (SetTurboDisablePolicy.c)
 *     GetProcessorStatusInfo @ 0x1C0009350 (GetProcessorStatusInfo.c)
 *     AcpiNotifyCallback @ 0x1C0009A80 (AcpiNotifyCallback.c)
 *     DisplayKernelPerfStates @ 0x1C00244C8 (DisplayKernelPerfStates.c)
 *     InitAcpiPerfDomain @ 0x1C0025018 (InitAcpiPerfDomain.c)
 *     Display_xSD @ 0x1C0025094 (Display_xSD.c)
 *     Display_CST @ 0x1C002534C (Display_CST.c)
 *     Display_CPC @ 0x1C00254E4 (Display_CPC.c)
 *     InitAcpi2CStates @ 0x1C0025730 (InitAcpi2CStates.c)
 *     ValidateAcpiCStates @ 0x1C00257AC (ValidateAcpiCStates.c)
 *     QueryPepCapabilites @ 0x1C0025850 (QueryPepCapabilites.c)
 *     AcpiEval_CSD @ 0x1C0025D8C (AcpiEval_CSD.c)
 *     AcpiEval_CPC @ 0x1C0025EF8 (AcpiEval_CPC.c)
 *     AcpiEval_CST @ 0x1C0026548 (AcpiEval_CST.c)
 *     AcpiParseCore @ 0x1C0026814 (AcpiParseCore.c)
 *     InitAcpiCpc @ 0x1C0026EAC (InitAcpiCpc.c)
 *     InitCpcStatesInternal @ 0x1C0027340 (InitCpcStatesInternal.c)
 *     InitAcpiLpiStates @ 0x1C0028464 (InitAcpiLpiStates.c)
 *     ProcLibDeviceStart @ 0x1C0028678 (ProcLibDeviceStart.c)
 *     InitAcpiIdleDomain @ 0x1C00290B8 (InitAcpiIdleDomain.c)
 *     CpcConnectNativeInterrupt @ 0x1C0029150 (CpcConnectNativeInterrupt.c)
 *     HwDebugCreateRegisterGroup @ 0x1C002945C (HwDebugCreateRegisterGroup.c)
 *     RegisterXsdDomain @ 0x1C0029DDC (RegisterXsdDomain.c)
 *     HwDebugInitializeRegistryDebugRegisters @ 0x1C002AE6C (HwDebugInitializeRegistryDebugRegisters.c)
 *     ConnectHwpInterrupt @ 0x1C002B540 (ConnectHwpInterrupt.c)
 *     RegisterIdleComplete @ 0x1C002C3F4 (RegisterIdleComplete.c)
 *     DisplayKernelIdleStates @ 0x1C002C4B0 (DisplayKernelIdleStates.c)
 *     AcpiParseRegister @ 0x1C002C9C0 (AcpiParseRegister.c)
 *     DecodeMWaitIdleState @ 0x1C002CE30 (DecodeMWaitIdleState.c)
 *     AcpiCStateNotifyWorker @ 0x1C002E060 (AcpiCStateNotifyWorker.c)
 *     ValidateLpiState @ 0x1C0037584 (ValidateLpiState.c)
 *     ValidatePccEntry @ 0x1C003784C (ValidatePccEntry.c)
 *     ValidatePccHeader @ 0x1C0037924 (ValidatePccHeader.c)
 *     AcpiEval_PCCP @ 0x1C0039B1C (AcpiEval_PCCP.c)
 *     AcpiEval_PPC @ 0x1C003A024 (AcpiEval_PPC.c)
 *     AcpiEval_PSS @ 0x1C003A198 (AcpiEval_PSS.c)
 *     AcpiEval_TPC @ 0x1C003A540 (AcpiEval_TPC.c)
 *     AcpiEval_TSS @ 0x1C003A6A0 (AcpiEval_TSS.c)
 *     AcpiEval_XPSS @ 0x1C003A9A4 (AcpiEval_XPSS.c)
 *     AcpiOSCNotifyWorker @ 0x1C003AFC0 (AcpiOSCNotifyWorker.c)
 *     AcpiPStateNotifyWorker @ 0x1C003B020 (AcpiPStateNotifyWorker.c)
 *     AcpiParseRegisterOrQword @ 0x1C003BB80 (AcpiParseRegisterOrQword.c)
 *     AcpiParseULong64 @ 0x1C003BC70 (AcpiParseULong64.c)
 *     AcpiTStateNotifyWorker @ 0x1C003BD00 (AcpiTStateNotifyWorker.c)
 *     Display_CSD @ 0x1C003BE5C (Display_CSD.c)
 *     Display_LPI @ 0x1C003C16C (Display_LPI.c)
 *     Display_PCT_PTC @ 0x1C003C5B0 (Display_PCT_PTC.c)
 *     Display_PSS @ 0x1C003C71C (Display_PSS.c)
 *     Display_TSS @ 0x1C003CA14 (Display_TSS.c)
 *     InitAcpiThrottleDomain @ 0x1C003CE98 (InitAcpiThrottleDomain.c)
 *     InitPerfFeedbackInternal @ 0x1C003D464 (InitPerfFeedbackInternal.c)
 *     InitPerfStatesInternal @ 0x1C003D774 (InitPerfStatesInternal.c)
 *     RegisterKernelPepPerf @ 0x1C003ECB0 (RegisterKernelPepPerf.c)
 *     RegisterKernelPlatformStates @ 0x1C003F26C (RegisterKernelPlatformStates.c)
 *     UpdateKernelPlatformStates @ 0x1C003F824 (UpdateKernelPlatformStates.c)
 *     InitAcpi3ThrottleStates @ 0x1C003FE64 (InitAcpi3ThrottleStates.c)
 *     InitAcpiPerfStates @ 0x1C003FFA8 (InitAcpiPerfStates.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C0040EDC (PepNotifyQueryProcessorIdleStates.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C0041194 (PepNotifyQueryProcessorIdleStatesV2.c)
 *     HwDebugInitializeRegistryDebugParameter @ 0x1C0041B18 (HwDebugInitializeRegistryDebugParameter.c)
 *     HwDebugInitializeRegistryDebugRegister @ 0x1C0041EF4 (HwDebugInitializeRegistryDebugRegister.c)
 *     InitPepPerfStates @ 0x1C0042634 (InitPepPerfStates.c)
 *     PepUpdatePerformanceConstraintWorker @ 0x1C0043180 (PepUpdatePerformanceConstraintWorker.c)
 *     InitAcpiLegacyPcc @ 0x1C00433EC (InitAcpiLegacyPcc.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x1C0043A68 (LpiTranslateCoordinatedIdleStates.c)
 *     DisplayPPMFlags @ 0x1C0045174 (DisplayPPMFlags.c)
 *     ProcLibGlobalInit @ 0x1C00462E4 (ProcLibGlobalInit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0003700 (_guard_dispatch_icall_nop.c)
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
