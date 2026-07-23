/*
 * XREFs of sub_1405057C0 @ 0x1405057C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403CD034 @ 0x1403CD034 (sub_1403CD034.c)
 *     sub_1403CD11C @ 0x1403CD11C (sub_1403CD11C.c)
 */

__int64 __fastcall sub_1405057C0(__int64 a1)
{
  unsigned int v2; // ebx
  int v3; // eax

  v2 = 0;
  if ( !sub_1403CD11C(a1, 0, 1) )
  {
    v3 = sub_1403CD034(a1, 0LL, 1);
    if ( v3 >= 0 )
      return (unsigned int)-1073741275;
    return (unsigned int)v3;
  }
  return v2;
}
