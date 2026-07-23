/*
 * XREFs of sub_1408339FC @ 0x1408339FC
 * Callers:
 *     sub_14082830C @ 0x14082830C (sub_14082830C.c)
 *     sub_140831BF4 @ 0x140831BF4 (sub_140831BF4.c)
 *     sub_1408334E4 @ 0x1408334E4 (sub_1408334E4.c)
 *     sub_1408337BC @ 0x1408337BC (sub_1408337BC.c)
 * Callees:
 *     PsCreateSystemThreadEx @ 0x1406F0360 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall sub_1408339FC(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int128 v5; // [rsp+50h] [rbp-38h] BYREF
  __int64 v6; // [rsp+60h] [rbp-28h]
  __int64 v7; // [rsp+68h] [rbp-20h]
  __int128 v8; // [rsp+70h] [rbp-18h]

  v5 = 0x30uLL;
  v6 = 0LL;
  v7 = 512LL;
  v8 = 0LL;
  return PsCreateSystemThreadEx(a1, 0x1FFFFF, &v5, xmmword_140C490E0, 0LL, a3, a4, 0LL, 0LL);
}
