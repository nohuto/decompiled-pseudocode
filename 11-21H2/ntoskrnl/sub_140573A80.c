/*
 * XREFs of sub_140573A80 @ 0x140573A80
 * Callers:
 *     sub_14020F360 @ 0x14020F360 (sub_14020F360.c)
 *     sub_1402B9FC0 @ 0x1402B9FC0 (sub_1402B9FC0.c)
 *     sub_1403405E0 @ 0x1403405E0 (sub_1403405E0.c)
 *     sub_1405779D0 @ 0x1405779D0 (sub_1405779D0.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140573A80(__int64 a1, char a2)
{
  unsigned int v2; // eax
  char v3; // r9
  int v4; // r8d

  v2 = *(_DWORD *)(a1 + 856);
  v3 = a2;
  if ( v2 )
  {
    _BitScanReverse((unsigned int *)&v4, v2);
    if ( a2 < v4 )
      return v4;
  }
  return v3;
}
