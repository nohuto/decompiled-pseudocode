/*
 * XREFs of sub_1405D857C @ 0x1405D857C
 * Callers:
 *     sub_1405D7BF0 @ 0x1405D7BF0 (sub_1405D7BF0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405D857C(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int64 v5; // r9
  unsigned int v6; // ecx

  if ( a2 * a1 > a3 )
    a3 = a2 * a1;
  v5 = a1 * ((10000 * a4 * (unsigned __int64)(unsigned int)dword_140D06BF4) >> 16);
  v6 = 0;
  if ( 100 * a3 >= v5 )
    return a1 != 0;
  return v6;
}
