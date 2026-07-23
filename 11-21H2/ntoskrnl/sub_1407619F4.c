/*
 * XREFs of sub_1407619F4 @ 0x1407619F4
 * Callers:
 *     sub_140761234 @ 0x140761234 (sub_140761234.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 */

PVOID __fastcall sub_1407619F4(void *a1)
{
  ULONG Size; // [rsp+48h] [rbp+10h] BYREF

  return RtlImageDirectoryEntryToData(a1, 1u, 6u, &Size);
}
