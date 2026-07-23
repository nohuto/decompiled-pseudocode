/*
 * XREFs of sub_1406E6570 @ 0x1406E6570
 * Callers:
 *     sub_140685A20 @ 0x140685A20 (sub_140685A20.c)
 *     sub_1406879B8 @ 0x1406879B8 (sub_1406879B8.c)
 * Callees:
 *     sub_1406FF880 @ 0x1406FF880 (sub_1406FF880.c)
 */

bool __fastcall sub_1406E6570(_QWORD *a1, char a2)
{
  __int64 v2; // r8
  char v3; // bl

  v2 = a1[158];
  v3 = 0;
  while ( v2 )
  {
    if ( (*(_DWORD *)(v2 + 1512) & 0x10) != 0 )
      return v3;
    v2 = *(_QWORD *)(v2 + 1264);
  }
  return (a2 & 1) != 0 || (int)sub_1406FF880(a1, (__int64)a1, 1) >= 0;
}
