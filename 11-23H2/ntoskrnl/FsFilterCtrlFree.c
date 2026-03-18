/*
 * XREFs of FsFilterCtrlFree @ 0x1402A22C8
 * Callers:
 *     FsRtlReleaseFile @ 0x140723910 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x140723B20 (FsRtlAcquireFileExclusiveCommon.c)
 *     FsRtlQueryOpen @ 0x1407ABB44 (FsRtlQueryOpen.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1407B44C8 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1407B4768 (FsRtlReleaseFileForCcFlush.c)
 * Callees:
 *     FsFilterFreeCompletionStack @ 0x14045F2DA (FsFilterFreeCompletionStack.c)
 */

__int64 __fastcall FsFilterCtrlFree(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 64);
  if ( (result & 1) != 0 )
    return FsFilterFreeCompletionStack();
  return result;
}
