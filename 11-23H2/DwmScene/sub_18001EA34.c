/*
 * XREFs of sub_18001EA34 @ 0x18001EA34
 * Callers:
 *     sub_180063038 @ 0x180063038 (sub_180063038.c)
 *     sub_180063290 @ 0x180063290 (sub_180063290.c)
 *     sub_1800633B0 @ 0x1800633B0 (sub_1800633B0.c)
 *     sub_18006E820 @ 0x18006E820 (sub_18006E820.c)
 *     sub_18006EBB0 @ 0x18006EBB0 (sub_18006EBB0.c)
 *     sub_1800DDB4C @ 0x1800DDB4C (sub_1800DDB4C.c)
 *     sub_1800DDE34 @ 0x1800DDE34 (sub_1800DDE34.c)
 *     sub_1800DF228 @ 0x1800DF228 (sub_1800DF228.c)
 *     sub_1800DF414 @ 0x1800DF414 (sub_1800DF414.c)
 *     sub_1800DF830 @ 0x1800DF830 (sub_1800DF830.c)
 *     sub_1800DFB78 @ 0x1800DFB78 (sub_1800DFB78.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001EA34(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v4; // r9
  __int64 i; // rcx
  __int64 v6; // rax

  v2 = 2 * a2;
  v4 = 0LL;
  for ( i = 0xCBF29CE484222325uLL; v4 < v2; i = 0x100000001B3LL * (v6 ^ i) )
  {
    v6 = *(unsigned __int8 *)(v4 + a1);
    ++v4;
  }
  return i;
}
