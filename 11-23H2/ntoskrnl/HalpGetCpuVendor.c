/*
 * XREFs of HalpGetCpuVendor @ 0x140380794
 * Callers:
 *     HalpCmciSetProcessorConfig @ 0x140380238 (HalpCmciSetProcessorConfig.c)
 *     HalpCmciInitProcessor @ 0x140380348 (HalpCmciInitProcessor.c)
 *     HalpCmciPollProcessor @ 0x140380438 (HalpCmciPollProcessor.c)
 *     HalpIsLmceSupported @ 0x140380504 (HalpIsLmceSupported.c)
 *     HalpCmcPollProcessor @ 0x140380538 (HalpCmcPollProcessor.c)
 *     HalpWheaWriteMsrStatus @ 0x1403805F8 (HalpWheaWriteMsrStatus.c)
 *     HalpWheaWriteMsrControl @ 0x140380640 (HalpWheaWriteMsrControl.c)
 *     HalpMcaProcessorBankConfig @ 0x140380694 (HalpMcaProcessorBankConfig.c)
 *     HalpWheaReadMsrStatus @ 0x140380740 (HalpWheaReadMsrStatus.c)
 *     HalpMcaInitializeErrorSection @ 0x1405037A8 (HalpMcaInitializeErrorSection.c)
 *     HalpMcaPopulateErrorData @ 0x14050387C (HalpMcaPopulateErrorData.c)
 *     HalpMcaReadError @ 0x140503A00 (HalpMcaReadError.c)
 *     HalpMcaReportError @ 0x140503C98 (HalpMcaReportError.c)
 *     HalpCmciHandler @ 0x140505C8C (HalpCmciHandler.c)
 *     HalpMcaProcessorBankClear @ 0x14050641C (HalpMcaProcessorBankClear.c)
 *     HalpMcaReadErrorCorrected @ 0x1405064FC (HalpMcaReadErrorCorrected.c)
 *     HalpHvInitMcaStatusMsrCache @ 0x14050B9D0 (HalpHvInitMcaStatusMsrCache.c)
 *     HalpHvLpReadMcaStatusMsr @ 0x14050BB74 (HalpHvLpReadMcaStatusMsr.c)
 *     HalpWheaReadMsrAddress @ 0x140518F00 (HalpWheaReadMsrAddress.c)
 *     HalpWheaReadMsrMisc @ 0x140518F58 (HalpWheaReadMsrMisc.c)
 *     HaliWheaInitProcessorGenericSection @ 0x140519268 (HaliWheaInitProcessorGenericSection.c)
 *     HalpMcaSetFeatureFlags @ 0x140A91CE0 (HalpMcaSetFeatureFlags.c)
 *     HalpIsCmciImplemented @ 0x140A91D68 (HalpIsCmciImplemented.c)
 * Callees:
 *     HalpGetCpuInfo @ 0x1403807D0 (HalpGetCpuInfo.c)
 */

char HalpGetCpuVendor()
{
  char CpuInfo; // al
  char v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  CpuInfo = HalpGetCpuInfo(0LL, 0LL, 0LL, &v2);
  return CpuInfo != 0 ? v2 : 0;
}
