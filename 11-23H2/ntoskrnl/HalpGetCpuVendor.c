/*
 * XREFs of HalpGetCpuVendor @ 0x1403805F4
 * Callers:
 *     HalpCmciSetProcessorConfig @ 0x140380098 (HalpCmciSetProcessorConfig.c)
 *     HalpCmciInitProcessor @ 0x1403801A8 (HalpCmciInitProcessor.c)
 *     HalpCmciPollProcessor @ 0x140380298 (HalpCmciPollProcessor.c)
 *     HalpIsLmceSupported @ 0x140380364 (HalpIsLmceSupported.c)
 *     HalpCmcPollProcessor @ 0x140380398 (HalpCmcPollProcessor.c)
 *     HalpWheaWriteMsrStatus @ 0x140380458 (HalpWheaWriteMsrStatus.c)
 *     HalpWheaWriteMsrControl @ 0x1403804A0 (HalpWheaWriteMsrControl.c)
 *     HalpMcaProcessorBankConfig @ 0x1403804F4 (HalpMcaProcessorBankConfig.c)
 *     HalpWheaReadMsrStatus @ 0x1403805A0 (HalpWheaReadMsrStatus.c)
 *     HalpMcaInitializeErrorSection @ 0x140503258 (HalpMcaInitializeErrorSection.c)
 *     HalpMcaPopulateErrorData @ 0x14050332C (HalpMcaPopulateErrorData.c)
 *     HalpMcaReadError @ 0x1405034B0 (HalpMcaReadError.c)
 *     HalpMcaReportError @ 0x140503748 (HalpMcaReportError.c)
 *     HalpCmciHandler @ 0x14050573C (HalpCmciHandler.c)
 *     HalpMcaProcessorBankClear @ 0x140505ECC (HalpMcaProcessorBankClear.c)
 *     HalpMcaReadErrorCorrected @ 0x140505FAC (HalpMcaReadErrorCorrected.c)
 *     HalpHvInitMcaStatusMsrCache @ 0x14050B480 (HalpHvInitMcaStatusMsrCache.c)
 *     HalpHvLpReadMcaStatusMsr @ 0x14050B624 (HalpHvLpReadMcaStatusMsr.c)
 *     HalpWheaReadMsrAddress @ 0x1405189B0 (HalpWheaReadMsrAddress.c)
 *     HalpWheaReadMsrMisc @ 0x140518A08 (HalpWheaReadMsrMisc.c)
 *     HaliWheaInitProcessorGenericSection @ 0x140518D18 (HaliWheaInitProcessorGenericSection.c)
 *     HalpMcaSetFeatureFlags @ 0x140A91E60 (HalpMcaSetFeatureFlags.c)
 *     HalpIsCmciImplemented @ 0x140A91EE8 (HalpIsCmciImplemented.c)
 * Callees:
 *     HalpGetCpuInfo @ 0x140380630 (HalpGetCpuInfo.c)
 */

char HalpGetCpuVendor()
{
  char CpuInfo; // al
  char v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  CpuInfo = HalpGetCpuInfo(0LL, 0LL, 0LL, &v2);
  return CpuInfo != 0 ? v2 : 0;
}
