/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C00025DC
 * Callers:
 *     AcpiNotifyCallback @ 0x1C0002A20 (AcpiNotifyCallback.c)
 *     EvtDeviceD0Entry @ 0x1C00046B0 (EvtDeviceD0Entry.c)
 *     ProcLibOnD0StateChangeWorker @ 0x1C00047A0 (ProcLibOnD0StateChangeWorker.c)
 *     GetProcessorStatusInfo @ 0x1C0006030 (GetProcessorStatusInfo.c)
 *     DecodeMWaitIdleState @ 0x1C00201A0 (DecodeMWaitIdleState.c)
 *     InitAcpi2CStates @ 0x1C0024270 (InitAcpi2CStates.c)
 *     CpcConnectNativeInterrupt @ 0x1C00244A0 (CpcConnectNativeInterrupt.c)
 *     InitAcpiCpc @ 0x1C0024C48 (InitAcpiCpc.c)
 *     AcpiCStateNotifyWorker @ 0x1C0026AD0 (AcpiCStateNotifyWorker.c)
 *     AcpiEval_CPC @ 0x1C0026D7C (AcpiEval_CPC.c)
 *     AcpiEval_CSD @ 0x1C0027470 (AcpiEval_CSD.c)
 *     AcpiEval_CST @ 0x1C0027778 (AcpiEval_CST.c)
 *     AcpiEval_PCCP @ 0x1C0027DFC (AcpiEval_PCCP.c)
 *     AcpiEval_PPC @ 0x1C0028304 (AcpiEval_PPC.c)
 *     AcpiEval_PSS @ 0x1C00287C0 (AcpiEval_PSS.c)
 *     AcpiEval_TPC @ 0x1C0028B68 (AcpiEval_TPC.c)
 *     AcpiEval_TSS @ 0x1C0028CC8 (AcpiEval_TSS.c)
 *     AcpiEval_XPSS @ 0x1C0028FD4 (AcpiEval_XPSS.c)
 *     AcpiOSCNotifyWorker @ 0x1C00297C0 (AcpiOSCNotifyWorker.c)
 *     AcpiPStateNotifyWorker @ 0x1C0029820 (AcpiPStateNotifyWorker.c)
 *     AcpiParseCore @ 0x1C0029A00 (AcpiParseCore.c)
 *     AcpiParseRegister @ 0x1C002A850 (AcpiParseRegister.c)
 *     AcpiParseRegisterOrQword @ 0x1C002A910 (AcpiParseRegisterOrQword.c)
 *     AcpiParseULong64 @ 0x1C002AA50 (AcpiParseULong64.c)
 *     AcpiTStateNotifyWorker @ 0x1C002AAE0 (AcpiTStateNotifyWorker.c)
 *     Display_CPC @ 0x1C002B040 (Display_CPC.c)
 *     Display_CSD @ 0x1C002B208 (Display_CSD.c)
 *     Display_CST @ 0x1C002B518 (Display_CST.c)
 *     Display_LPI @ 0x1C002B7B4 (Display_LPI.c)
 *     Display_PCT_PTC @ 0x1C002BBF8 (Display_PCT_PTC.c)
 *     Display_PSS @ 0x1C002BD64 (Display_PSS.c)
 *     Display_TSS @ 0x1C002C05C (Display_TSS.c)
 *     Display_xSD @ 0x1C002C310 (Display_xSD.c)
 *     DisplayKernelIdleStates @ 0x1C002CBF0 (DisplayKernelIdleStates.c)
 *     DisplayKernelPerfStates @ 0x1C002CD6C (DisplayKernelPerfStates.c)
 *     ProcLibDeviceStart @ 0x1C002D1C4 (ProcLibDeviceStart.c)
 *     ValidateAcpiCStates @ 0x1C002EAD4 (ValidateAcpiCStates.c)
 *     ValidateLpiState @ 0x1C002F84C (ValidateLpiState.c)
 *     ValidatePccEntry @ 0x1C002FB14 (ValidatePccEntry.c)
 *     ValidatePccHeader @ 0x1C002FBEC (ValidatePccHeader.c)
 *     InitCpcStatesInternal @ 0x1C0031174 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C0032654 (InitPerfFeedbackInternal.c)
 *     InitPerfStatesInternal @ 0x1C003295C (InitPerfStatesInternal.c)
 *     RegisterIdleComplete @ 0x1C00331D0 (RegisterIdleComplete.c)
 *     RegisterKernelPepPerf @ 0x1C0034CD0 (RegisterKernelPepPerf.c)
 *     RegisterKernelPlatformStates @ 0x1C00352F4 (RegisterKernelPlatformStates.c)
 *     UpdateKernelPlatformStates @ 0x1C00358AC (UpdateKernelPlatformStates.c)
 *     InitAcpiIdleDomain @ 0x1C0035DE0 (InitAcpiIdleDomain.c)
 *     InitAcpiPerfDomain @ 0x1C0035F48 (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x1C00361C0 (InitAcpiThrottleDomain.c)
 *     RegisterXsdDomain @ 0x1C0036310 (RegisterXsdDomain.c)
 *     InitAcpi3ThrottleStates @ 0x1C0036668 (InitAcpi3ThrottleStates.c)
 *     InitAcpiPerfStates @ 0x1C00367AC (InitAcpiPerfStates.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C00376EC (PepNotifyQueryProcessorIdleStates.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C0037994 (PepNotifyQueryProcessorIdleStatesV2.c)
 *     HwDebugCreateRegisterGroup @ 0x1C0038498 (HwDebugCreateRegisterGroup.c)
 *     HwDebugInitializeRegistryDebugParameter @ 0x1C0038A68 (HwDebugInitializeRegistryDebugParameter.c)
 *     HwDebugInitializeRegistryDebugRegister @ 0x1C0038E44 (HwDebugInitializeRegistryDebugRegister.c)
 *     HwDebugInitializeRegistryDebugRegisters @ 0x1C0039364 (HwDebugInitializeRegistryDebugRegisters.c)
 *     InitPepPerfStates @ 0x1C003A558 (InitPepPerfStates.c)
 *     PepUpdatePerformanceConstraintWorker @ 0x1C003B0A0 (PepUpdatePerformanceConstraintWorker.c)
 *     QueryPepCapabilites @ 0x1C003B6BC (QueryPepCapabilites.c)
 *     InitAcpiLegacyPcc @ 0x1C003BAC4 (InitAcpiLegacyPcc.c)
 *     InitAcpiLpiStates @ 0x1C003BD3C (InitAcpiLpiStates.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x1C003C3A0 (LpiTranslateCoordinatedIdleStates.c)
 *     DisplayPPMFlags @ 0x1C003F770 (DisplayPPMFlags.c)
 *     ProcLibGlobalInit @ 0x1C004052C (ProcLibGlobalInit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000C510 (_guard_dispatch_icall_nop.c)
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
