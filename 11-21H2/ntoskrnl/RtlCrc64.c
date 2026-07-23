/*
 * XREFs of RtlCrc64 @ 0x1403849E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140384A00 @ 0x140384A00 (sub_140384A00.c)
 */

ULONGLONG __cdecl RtlCrc64(const void *Buffer, size_t Size, ULONGLONG InitialCrc)
{
  return sub_140384A00(Buffer, Size, InitialCrc, &off_1400016D0);
}
