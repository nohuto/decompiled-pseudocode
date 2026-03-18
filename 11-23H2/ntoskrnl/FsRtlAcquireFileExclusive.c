/*
 * XREFs of FsRtlAcquireFileExclusive @ 0x1407238E0
 * Callers:
 *     CcWriteBehindPostProcess @ 0x14029B038 (CcWriteBehindPostProcess.c)
 *     CcZeroEndOfLastPage @ 0x1402A22E8 (CcZeroEndOfLastPage.c)
 * Callees:
 *     FsRtlAcquireFileExclusiveCommon @ 0x140723B20 (FsRtlAcquireFileExclusiveCommon.c)
 */

void __stdcall FsRtlAcquireFileExclusive(PFILE_OBJECT FileObject)
{
  FsRtlAcquireFileExclusiveCommon(FileObject, 0, 0LL);
}
