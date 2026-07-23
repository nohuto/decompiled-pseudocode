/*
 * XREFs of sub_1406D4C5C @ 0x1406D4C5C
 * Callers:
 *     sub_1406879B8 @ 0x1406879B8 (sub_1406879B8.c)
 *     sub_1406D4A68 @ 0x1406D4A68 (sub_1406D4A68.c)
 * Callees:
 *     sub_1406FF880 @ 0x1406FF880 (sub_1406FF880.c)
 */

char __fastcall sub_1406D4C5C(_QWORD *a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  char v4; // bl

  v3 = a1[158];
  v4 = 0;
  while ( v3 )
  {
    if ( *(_DWORD *)(v3 + 1540) )
      return 1;
    v3 = *(_QWORD *)(v3 + 1264);
  }
  if ( !a3 && (int)sub_1406FF880(a1, (__int64)a1, 5) < 0 )
    return 1;
  return v4;
}
