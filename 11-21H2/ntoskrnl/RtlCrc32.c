/*
 * XREFs of RtlCrc32 @ 0x14045F1C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140384A00 @ 0x140384A00 (sub_140384A00.c)
 */

DWORD __cdecl RtlCrc32(const void *Buffer, size_t Size, DWORD InitialCrc)
{
  return sub_140384A00((unsigned __int64)Buffer, Size, InitialCrc, (__int64)&off_14000A7F8);
}
