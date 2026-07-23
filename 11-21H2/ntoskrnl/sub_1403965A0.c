/*
 * XREFs of sub_1403965A0 @ 0x1403965A0
 * Callers:
 *     sub_140804E80 @ 0x140804E80 (sub_140804E80.c)
 *     sub_140805210 @ 0x140805210 (sub_140805210.c)
 *     sub_14094E490 @ 0x14094E490 (sub_14094E490.c)
 * Callees:
 *     sub_1402D19D8 @ 0x1402D19D8 (sub_1402D19D8.c)
 *     sub_1402D19FC @ 0x1402D19FC (sub_1402D19FC.c)
 */

char __fastcall sub_1403965A0(_DWORD *a1)
{
  unsigned int v1; // eax
  char v2; // dl

  v1 = a1[1];
  v2 = 0;
  if ( !v1 )
    return 1;
  if ( v1 <= 2 )
    return sub_1402D19D8((__int64)a1 + (unsigned int)a1[2], a1[3]);
  if ( v1 == 4 )
    return a1[3] == 4;
  if ( v1 == 7 )
    return sub_1402D19FC((_DWORD *)((char *)a1 + (unsigned int)a1[2]), a1[3]);
  if ( v1 != 0x8000 && v1 != -1 )
    return 1;
  return v2;
}
