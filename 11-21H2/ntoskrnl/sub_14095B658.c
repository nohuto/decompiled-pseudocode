/*
 * XREFs of sub_14095B658 @ 0x14095B658
 * Callers:
 *     sub_1406E5574 @ 0x1406E5574 (sub_1406E5574.c)
 *     sub_140771524 @ 0x140771524 (sub_140771524.c)
 * Callees:
 *     sub_14095B69C @ 0x14095B69C (sub_14095B69C.c)
 */

unsigned __int8 __fastcall sub_14095B658(__int64 a1, char a2, __int64 a3, char a4)
{
  __int64 v5; // rdx
  unsigned __int8 result; // al

  v5 = 1LL;
  result = (a3 & 1) != 0;
  if ( (((a2 & 1) == 0) & result) != 0 )
    goto LABEL_5;
  if ( (a2 & 1) != 0 && (a3 & 1) == 0 )
  {
    v5 = 3LL;
LABEL_5:
    LOBYTE(a3) = a4;
    return sub_14095B69C(a1, v5, a3);
  }
  return result;
}
