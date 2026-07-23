/*
 * XREFs of sub_140845F00 @ 0x140845F00
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403CD034 @ 0x1403CD034 (sub_1403CD034.c)
 *     sub_1403CD11C @ 0x1403CD11C (sub_1403CD11C.c)
 */

__int64 __fastcall sub_140845F00(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( a2 )
    return (unsigned int)sub_1403CD034(a1, a2, 0);
  else
    sub_1403CD11C(a1, 1, 0);
  return v2;
}
