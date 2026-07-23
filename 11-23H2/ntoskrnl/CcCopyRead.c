/*
 * XREFs of CcCopyRead @ 0x1407E8810
 * Callers:
 *     <none>
 * Callees:
 *     CcCopyReadEx @ 0x140261FF0 (CcCopyReadEx.c)
 */

// local variable allocation has failed, the output may be wrong!
BOOLEAN __stdcall CcCopyRead(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        BOOLEAN Wait,
        PVOID Buffer,
        PIO_STATUS_BLOCK IoStatus)
{
  return CcCopyReadEx(FileObject, (__int64 *)FileOffset, *(__int64 *)&Length, Wait, Buffer, IoStatus, 0LL);
}
