/*
 * XREFs of sub_1403818D0 @ 0x1403818D0
 * Callers:
 *     sub_14037FC84 @ 0x14037FC84 (sub_14037FC84.c)
 *     sub_1403920C8 @ 0x1403920C8 (sub_1403920C8.c)
 *     sub_1405FA3A4 @ 0x1405FA3A4 (sub_1405FA3A4.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 */

PVOID __fastcall sub_1403818D0(__int64 a1, _DWORD *a2)
{
  PVOID result; // rax

  if ( (*(_BYTE *)(a1 + 10) & 5) != 0 )
    result = *(PVOID *)(a1 + 24);
  else
    result = MmMapLockedPagesSpecifyCache((PMDL)a1, 0, MmCached, 0LL, 0, 0x40000010u);
  if ( result )
    *a2 = *(_DWORD *)(a1 + 40);
  return result;
}
