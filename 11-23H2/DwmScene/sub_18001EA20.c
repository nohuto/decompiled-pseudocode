/*
 * XREFs of sub_18001EA20 @ 0x18001EA20
 * Callers:
 *     sub_1800986C8 @ 0x1800986C8 (sub_1800986C8.c)
 *     sub_18009B824 @ 0x18009B824 (sub_18009B824.c)
 *     sub_18009BA60 @ 0x18009BA60 (sub_18009BA60.c)
 *     sub_18009BBB8 @ 0x18009BBB8 (sub_18009BBB8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001EA20(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // r9
  __int64 i; // rcx
  __int64 v6; // rax

  v4 = 0LL;
  for ( i = 0xCBF29CE484222325uLL; v4 < a2; i = 0x100000001B3LL * (v6 ^ i) )
  {
    v6 = *(unsigned __int8 *)(v4 + a1);
    ++v4;
  }
  return i;
}
