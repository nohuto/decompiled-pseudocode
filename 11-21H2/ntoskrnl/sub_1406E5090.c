/*
 * XREFs of sub_1406E5090 @ 0x1406E5090
 * Callers:
 *     sub_140692980 @ 0x140692980 (sub_140692980.c)
 *     sub_1406E4FA4 @ 0x1406E4FA4 (sub_1406E4FA4.c)
 *     sub_1409ABCF4 @ 0x1409ABCF4 (sub_1409ABCF4.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1406E5090(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( *(_DWORD *)(a1 + 212) || *(_QWORD *)(a1 + 1248) != a1 + 1248 )
    return 1;
  return v1;
}
