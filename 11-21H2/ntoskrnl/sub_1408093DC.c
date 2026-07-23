/*
 * XREFs of sub_1408093DC @ 0x1408093DC
 * Callers:
 *     sub_1408091FC @ 0x1408091FC (sub_1408091FC.c)
 *     sub_14099596C @ 0x14099596C (sub_14099596C.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1408093DC(__int64 a1)
{
  __int64 result; // rax

  result = 3221225474LL;
  if ( qword_140C5ADA8 )
    return sub_14042A5E0(a1, qword_140C5ADA8);
  return result;
}
