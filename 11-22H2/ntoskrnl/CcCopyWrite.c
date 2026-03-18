/*
 * XREFs of CcCopyWrite @ 0x1403A8970
 * Callers:
 *     FsRtlCopyWrite @ 0x1408509C0 (FsRtlCopyWrite.c)
 * Callees:
 *     CcCopyWriteEx @ 0x1402C8CF0 (CcCopyWriteEx.c)
 */

BOOLEAN __stdcall CcCopyWrite(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        BOOLEAN Wait,
        PVOID Buffer)
{
  return CcCopyWriteEx((__int64)FileObject, (__int64 *)FileOffset, Length, Wait, (__int64)Buffer, 0LL);
}
