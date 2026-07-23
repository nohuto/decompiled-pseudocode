/*
 * XREFs of sub_14093D300 @ 0x14093D300
 * Callers:
 *     sub_14093B898 @ 0x14093B898 (sub_14093B898.c)
 *     sub_14093C544 @ 0x14093C544 (sub_14093C544.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14093D300(unsigned __int64 a1, unsigned __int64 *a2, _DWORD *a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // rcx

  v3 = a1 & 0xFFFFFFFFFFLL;
  v4 = a1 >> 40;
  *a2 = v3;
  *a3 = v4;
  if ( v3 && v3 + (unsigned int)v4 >= v3 )
    return 0LL;
  else
    return 3221225485LL;
}
