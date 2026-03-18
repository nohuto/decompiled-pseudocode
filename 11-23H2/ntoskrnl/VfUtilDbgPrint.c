/*
 * XREFs of VfUtilDbgPrint @ 0x1405CE2D4
 * Callers:
 *     VfClearVerifierSettings @ 0x1405CDE1C (VfClearVerifierSettings.c)
 *     VfReportIssueWithOptions @ 0x1405CFD00 (VfReportIssueWithOptions.c)
 *     ViErrorReport1 @ 0x1405CFE24 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x1405CFEA8 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x1405CFF3C (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x1405CFFE0 (ViErrorReport6.c)
 *     VfNotifyVerifierOfEvent @ 0x140AC2150 (VfNotifyVerifierOfEvent.c)
 *     VfUtilPrintCheckinString @ 0x140AC2834 (VfUtilPrintCheckinString.c)
 *     ViGenericDumpIrpStack @ 0x140AC3050 (ViGenericDumpIrpStack.c)
 *     ViGenericVerifyIrpStackDownward @ 0x140AC30F0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x140AC33C0 (ViGenericVerifyNewIrp.c)
 *     ViCiPreprocessOptions @ 0x140AC3A0C (ViCiPreprocessOptions.c)
 *     ViAdapterCallback @ 0x140AC7890 (ViAdapterCallback.c)
 *     ViFlushDoubleBuffer @ 0x140AC8904 (ViFlushDoubleBuffer.c)
 *     ViHalPreprocessOptions @ 0x140AC9324 (ViHalPreprocessOptions.c)
 *     ViSpecialAllocateCommonBuffer @ 0x140AC9E5C (ViSpecialAllocateCommonBuffer.c)
 *     ViXdvDriverLoadImage @ 0x140ACAA4C (ViXdvDriverLoadImage.c)
 *     VfIoDeleteDevice @ 0x140AD2244 (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x140AD23C8 (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x140AD3594 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x140AD362C (VfErrorReport8.c)
 *     ViErrorDisplayDescription @ 0x140AD3700 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140AD3754 (ViErrorFinishReport.c)
 *     ViDeadlockPreprocessOptions @ 0x140AD9860 (ViDeadlockPreprocessOptions.c)
 *     ViWdIrpTimedOut @ 0x140ADE41C (ViWdIrpTimedOut.c)
 *     VerifierNtCreateFile @ 0x140AE3BD0 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x140AE3D80 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x140AE3ED0 (VerifierNtWriteFile.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x140AE4B88 (ViCtxCheckAndReleaseIsrState.c)
 *     VfPnpDumpIrpStack @ 0x140AE6BA0 (VfPnpDumpIrpStack.c)
 *     VfPowerDumpIrpStack @ 0x140AE76A0 (VfPowerDumpIrpStack.c)
 *     VfWmiDumpIrpStack @ 0x140AE7960 (VfWmiDumpIrpStack.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x14032A7B0 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 VfUtilDbgPrint(const char *a1, ...)
{
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, a1);
  return vDbgPrintExWithPrefixInternal(&Src, 0x65u, 0, a1, va, 1);
}
