/*
 * XREFs of sub_1407F4A10 @ 0x1407F4A10
 * Callers:
 *     sub_1407F44F0 @ 0x1407F44F0 (sub_1407F44F0.c)
 *     sub_1407F49F0 @ 0x1407F49F0 (sub_1407F49F0.c)
 *     sub_1408303C0 @ 0x1408303C0 (sub_1408303C0.c)
 *     sub_140A36378 @ 0x140A36378 (sub_140A36378.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1407F4A10(_WORD *a1)
{
  __int64 v2; // rcx

  if ( *((_BYTE *)KeGetCurrentThread() + 562) )
  {
    v2 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v2 = (__int64)a1;
    *(_WORD *)v2 = *(_WORD *)v2;
  }
  *a1 = word_140D3CA00;
  return 0LL;
}
