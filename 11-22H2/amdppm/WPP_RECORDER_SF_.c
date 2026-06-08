/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C000262C
 * Callers:
 *     AcpiNotifyCallback @ 0x1C0002A00 (AcpiNotifyCallback.c)
 *     EvtDeviceD0Entry @ 0x1C0004670 (EvtDeviceD0Entry.c)
 *     ProcLibOnD0StateChangeWorker @ 0x1C0004760 (ProcLibOnD0StateChangeWorker.c)
 *     GetProcessorStatusInfo @ 0x1C0005B40 (GetProcessorStatusInfo.c)
 *     DecodeMWaitIdleState @ 0x1C00201A0 (DecodeMWaitIdleState.c)
 *     CpcConnectNativeInterrupt @ 0x1C0023BF0 (CpcConnectNativeInterrupt.c)
 *     InitAcpiCpc @ 0x1C0024398 (InitAcpiCpc.c)
 *     AcpiCStateNotifyWorker @ 0x1C0026220 (AcpiCStateNotifyWorker.c)
 *     AcpiEval_CPC @ 0x1C00264CC (AcpiEval_CPC.c)
 *     AcpiEval_CSD @ 0x1C0026BC0 (AcpiEval_CSD.c)
 *     AcpiEval_CST @ 0x1C0026EC8 (AcpiEval_CST.c)
 *     AcpiEval_PCCP @ 0x1C002754C (AcpiEval_PCCP.c)
 *     AcpiEval_PPC @ 0x1C0027A54 (AcpiEval_PPC.c)
 *     AcpiEval_PSS @ 0x1C0027F10 (AcpiEval_PSS.c)
 *     AcpiEval_TPC @ 0x1C00282B8 (AcpiEval_TPC.c)
 *     AcpiEval_TSS @ 0x1C0028418 (AcpiEval_TSS.c)
 *     AcpiEval_XPSS @ 0x1C0028724 (AcpiEval_XPSS.c)
 *     AcpiOSCNotifyWorker @ 0x1C0028F10 (AcpiOSCNotifyWorker.c)
 *     AcpiPStateNotifyWorker @ 0x1C0028F70 (AcpiPStateNotifyWorker.c)
 *     AcpiParseCore @ 0x1C0029150 (AcpiParseCore.c)
 *     AcpiParseRegister @ 0x1C0029FA0 (AcpiParseRegister.c)
 *     AcpiParseRegisterOrQword @ 0x1C002A060 (AcpiParseRegisterOrQword.c)
 *     AcpiParseULong64 @ 0x1C002A1A0 (AcpiParseULong64.c)
 *     AcpiTStateNotifyWorker @ 0x1C002A230 (AcpiTStateNotifyWorker.c)
 *     Display_CPC @ 0x1C002A790 (Display_CPC.c)
 *     Display_CSD @ 0x1C002A958 (Display_CSD.c)
 *     Display_CST @ 0x1C002AC68 (Display_CST.c)
 *     Display_LPI @ 0x1C002AF04 (Display_LPI.c)
 *     Display_PCT_PTC @ 0x1C002B348 (Display_PCT_PTC.c)
 *     Display_PSS @ 0x1C002B4B4 (Display_PSS.c)
 *     Display_TSS @ 0x1C002B7AC (Display_TSS.c)
 *     Display_xSD @ 0x1C002BA60 (Display_xSD.c)
 *     DisplayKernelIdleStates @ 0x1C002C340 (DisplayKernelIdleStates.c)
 *     DisplayKernelPerfStates @ 0x1C002C4BC (DisplayKernelPerfStates.c)
 *     ProcLibDeviceStart @ 0x1C002C914 (ProcLibDeviceStart.c)
 *     InitAcpiIdleDomain @ 0x1C002DD88 (InitAcpiIdleDomain.c)
 *     InitAcpiPerfDomain @ 0x1C002DEF0 (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x1C002E168 (InitAcpiThrottleDomain.c)
 *     RegisterXsdDomain @ 0x1C002E2B8 (RegisterXsdDomain.c)
 *     ValidateAcpiCStates @ 0x1C002E99C (ValidateAcpiCStates.c)
 *     ValidateLpiState @ 0x1C002F714 (ValidateLpiState.c)
 *     ValidatePccEntry @ 0x1C002F9DC (ValidatePccEntry.c)
 *     ValidatePccHeader @ 0x1C002FAB4 (ValidatePccHeader.c)
 *     InitCpcStatesInternal @ 0x1C0031044 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C0032524 (InitPerfFeedbackInternal.c)
 *     InitPerfStatesInternal @ 0x1C003282C (InitPerfStatesInternal.c)
 *     RegisterIdleComplete @ 0x1C00330A0 (RegisterIdleComplete.c)
 *     RegisterKernelPepPerf @ 0x1C0034BA0 (RegisterKernelPepPerf.c)
 *     RegisterKernelPlatformStates @ 0x1C00351C4 (RegisterKernelPlatformStates.c)
 *     UpdateKernelPlatformStates @ 0x1C003577C (UpdateKernelPlatformStates.c)
 *     InitAcpi3ThrottleStates @ 0x1C0035DC0 (InitAcpi3ThrottleStates.c)
 *     InitAcpiPerfStates @ 0x1C0035F04 (InitAcpiPerfStates.c)
 *     InitAcpi2CStates @ 0x1C0036A68 (InitAcpi2CStates.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C00376F4 (PepNotifyQueryProcessorIdleStates.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C003799C (PepNotifyQueryProcessorIdleStatesV2.c)
 *     HwDebugCreateRegisterGroup @ 0x1C00384A8 (HwDebugCreateRegisterGroup.c)
 *     HwDebugInitializeRegistryDebugParameter @ 0x1C0038A78 (HwDebugInitializeRegistryDebugParameter.c)
 *     HwDebugInitializeRegistryDebugRegister @ 0x1C0038E54 (HwDebugInitializeRegistryDebugRegister.c)
 *     HwDebugInitializeRegistryDebugRegisters @ 0x1C0039374 (HwDebugInitializeRegistryDebugRegisters.c)
 *     InitPepPerfStates @ 0x1C003A568 (InitPepPerfStates.c)
 *     PepUpdatePerformanceConstraintWorker @ 0x1C003B0B0 (PepUpdatePerformanceConstraintWorker.c)
 *     QueryPepCapabilites @ 0x1C003B6CC (QueryPepCapabilites.c)
 *     InitAcpiLegacyPcc @ 0x1C003BAD4 (InitAcpiLegacyPcc.c)
 *     InitAcpiLpiStates @ 0x1C003BD4C (InitAcpiLpiStates.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x1C003C3B0 (LpiTranslateCoordinatedIdleStates.c)
 *     DisplayPPMFlags @ 0x1C003F770 (DisplayPPMFlags.c)
 *     ProcLibGlobalInit @ 0x1C004052C (ProcLibGlobalInit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000C450 (_guard_dispatch_icall_nop.c)
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
