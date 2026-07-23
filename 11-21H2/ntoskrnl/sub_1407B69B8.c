/*
 * XREFs of sub_1407B69B8 @ 0x1407B69B8
 * Callers:
 *     sub_1407B6CA0 @ 0x1407B6CA0 (sub_1407B6CA0.c)
 *     sub_1409F5F90 @ 0x1409F5F90 (sub_1409F5F90.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1407B69B8(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 1124) & 4) != 0 && *(_DWORD *)(a1 + 4) && !*(_DWORD *)(a1 + 1520) )
    return *(_QWORD *)(a1 + 48) == a1 + 48;
  return v1;
}
