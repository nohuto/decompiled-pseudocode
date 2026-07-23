/*
 * XREFs of VfUtilDbgPrint @ 0x1405CE844
 * Callers:
 *     VfClearVerifierSettings @ 0x1405CE38C (VfClearVerifierSettings.c)
 *     VfReportIssueWithOptions @ 0x1405D0270 (VfReportIssueWithOptions.c)
 *     ViErrorReport1 @ 0x1405D0394 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x1405D0418 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x1405D04AC (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x1405D0550 (ViErrorReport6.c)
 *     VfNotifyVerifierOfEvent @ 0x140AC2140 (VfNotifyVerifierOfEvent.c)
 *     VfUtilPrintCheckinString @ 0x140AC2824 (VfUtilPrintCheckinString.c)
 *     ViGenericDumpIrpStack @ 0x140AC3040 (ViGenericDumpIrpStack.c)
 *     ViGenericVerifyIrpStackDownward @ 0x140AC30E0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x140AC33B0 (ViGenericVerifyNewIrp.c)
 *     ViCiPreprocessOptions @ 0x140AC39FC (ViCiPreprocessOptions.c)
 *     ViAdapterCallback @ 0x140AC7880 (ViAdapterCallback.c)
 *     ViFlushDoubleBuffer @ 0x140AC88F4 (ViFlushDoubleBuffer.c)
 *     ViHalPreprocessOptions @ 0x140AC9314 (ViHalPreprocessOptions.c)
 *     ViSpecialAllocateCommonBuffer @ 0x140AC9E4C (ViSpecialAllocateCommonBuffer.c)
 *     ViXdvDriverLoadImage @ 0x140ACAA3C (ViXdvDriverLoadImage.c)
 *     VfIoDeleteDevice @ 0x140AD2234 (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x140AD23B8 (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x140AD3584 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x140AD361C (VfErrorReport8.c)
 *     ViErrorDisplayDescription @ 0x140AD36F0 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140AD3744 (ViErrorFinishReport.c)
 *     ViDeadlockPreprocessOptions @ 0x140AD9850 (ViDeadlockPreprocessOptions.c)
 *     ViWdIrpTimedOut @ 0x140ADE40C (ViWdIrpTimedOut.c)
 *     VerifierNtCreateFile @ 0x140AE3BC0 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x140AE3D70 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x140AE3EC0 (VerifierNtWriteFile.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x140AE4B78 (ViCtxCheckAndReleaseIsrState.c)
 *     VfPnpDumpIrpStack @ 0x140AE6B90 (VfPnpDumpIrpStack.c)
 *     VfPowerDumpIrpStack @ 0x140AE7690 (VfPowerDumpIrpStack.c)
 *     VfWmiDumpIrpStack @ 0x140AE7950 (VfWmiDumpIrpStack.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x14032AA40 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 VfUtilDbgPrint(const char *a1, ...)
{
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, a1);
  return vDbgPrintExWithPrefixInternal(&Src, 0x65u, 0, a1, va, 1);
}
