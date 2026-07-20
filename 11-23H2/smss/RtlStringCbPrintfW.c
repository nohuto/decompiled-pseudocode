/*
 * XREFs of RtlStringCbPrintfW @ 0x140004384
 * Callers:
 *     SmpAllocateInitialCommandBuffer @ 0x14000426C (SmpAllocateInitialCommandBuffer.c)
 *     SmpParseCommandLine @ 0x140005150 (SmpParseCommandLine.c)
 *     SmpInvokeAutoChk @ 0x140006A98 (SmpInvokeAutoChk.c)
 *     SmpSaveOldPageFiles @ 0x140006E98 (SmpSaveOldPageFiles.c)
 *     SmpCleanupStalePageFiles @ 0x140007060 (SmpCleanupStalePageFiles.c)
 *     SmpCreateDynamicEnvironmentVariables @ 0x140007C60 (SmpCreateDynamicEnvironmentVariables.c)
 *     SmpCreateWorkingSetSwapPagingFile @ 0x14000A930 (SmpCreateWorkingSetSwapPagingFile.c)
 *     SmpLoadDataFromRegistry @ 0x14000B688 (SmpLoadDataFromRegistry.c)
 *     SmpGetCrashParameters @ 0x140017D38 (SmpGetCrashParameters.c)
 *     SmpGetDumpDestination @ 0x140017DF4 (SmpGetDumpDestination.c)
 *     SmpClearTemporaryFiles @ 0x140018FE8 (SmpClearTemporaryFiles.c)
 *     SmpShuffleMove @ 0x14001A45C (SmpShuffleMove.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x1400043C4 (RtlStringVPrintfWorkerW.c)
 */

NTSTATUS RtlStringCbPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  size_t v3; // rdx
  NTSTATUS result; // eax
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, pszFormat);
  v3 = cbDest >> 1;
  if ( v3 - 1 <= 0x7FFFFFFE )
    return RtlStringVPrintfWorkerW(pszDest, v3, (size_t *)pszFormat, pszFormat, va);
  result = -1073741811;
  if ( v3 )
    *pszDest = 0;
  return result;
}
