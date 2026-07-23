/*
 * XREFs of sub_140A180E8 @ 0x140A180E8
 * Callers:
 *     sub_140A12DA0 @ 0x140A12DA0 (sub_140A12DA0.c)
 *     sub_140A142D0 @ 0x140A142D0 (sub_140A142D0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A180E8(__int16 a1)
{
  __int64 v1; // rax

  v1 = 0LL;
  while ( word_140C0DAD0[2 * v1 + 1] != a1 )
  {
    if ( (unsigned __int64)++v1 >= 4 )
      return 0xFFFFLL;
  }
  return word_140C0DAD0[2 * v1];
}
