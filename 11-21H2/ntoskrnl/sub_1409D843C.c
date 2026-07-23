/*
 * XREFs of sub_1409D843C @ 0x1409D843C
 * Callers:
 *     sub_1409D82D4 @ 0x1409D82D4 (sub_1409D82D4.c)
 *     sub_1409D8588 @ 0x1409D8588 (sub_1409D8588.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_1409D843C(__int64 a1, int a2, int a3)
{
  _DWORD *v3; // r9
  unsigned __int64 v4; // rcx

  v3 = (_DWORD *)(a1 + 168);
  v4 = a1 + 552;
  while ( (unsigned __int64)v3 < v4 )
  {
    if ( *v3 != -1 && *v3 == a2 && (v3[1] & 3) == a3 )
      return v3;
    v3 += 6;
  }
  return 0LL;
}
