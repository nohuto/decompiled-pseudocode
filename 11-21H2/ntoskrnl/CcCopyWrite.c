/*
 * XREFs of CcCopyWrite @ 0x140539DF0
 * Callers:
 *     FsRtlCopyWrite @ 0x14092D2C0 (FsRtlCopyWrite.c)
 * Callees:
 *     CcCopyWriteEx @ 0x140226550 (CcCopyWriteEx.c)
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
