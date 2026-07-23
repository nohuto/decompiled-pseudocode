/*
 * XREFs of sub_140772044 @ 0x140772044
 * Callers:
 *     sub_14025B96C @ 0x14025B96C (sub_14025B96C.c)
 *     sub_1402DDAE4 @ 0x1402DDAE4 (sub_1402DDAE4.c)
 *     sub_1402DE844 @ 0x1402DE844 (sub_1402DE844.c)
 *     sub_14074A08C @ 0x14074A08C (sub_14074A08C.c)
 *     sub_140764FE4 @ 0x140764FE4 (sub_140764FE4.c)
 *     sub_140765114 @ 0x140765114 (sub_140765114.c)
 *     sub_140766258 @ 0x140766258 (sub_140766258.c)
 *     sub_140767220 @ 0x140767220 (sub_140767220.c)
 *     sub_14076BE08 @ 0x14076BE08 (sub_14076BE08.c)
 *     sub_14076E9B8 @ 0x14076E9B8 (sub_14076E9B8.c)
 *     sub_14076F8AC @ 0x14076F8AC (sub_14076F8AC.c)
 *     sub_14076FB70 @ 0x14076FB70 (sub_14076FB70.c)
 *     sub_14076FBEC @ 0x14076FBEC (sub_14076FBEC.c)
 *     sub_1407743C8 @ 0x1407743C8 (sub_1407743C8.c)
 *     sub_14080E030 @ 0x14080E030 (sub_14080E030.c)
 *     sub_14081BAC8 @ 0x14081BAC8 (sub_14081BAC8.c)
 *     sub_140942D5C @ 0x140942D5C (sub_140942D5C.c)
 *     sub_14095855C @ 0x14095855C (sub_14095855C.c)
 *     sub_14095975C @ 0x14095975C (sub_14095975C.c)
 * Callees:
 *     sub_140770200 @ 0x140770200 (sub_140770200.c)
 *     sub_1407720B8 @ 0x1407720B8 (sub_1407720B8.c)
 *     sub_140772720 @ 0x140772720 (sub_140772720.c)
 */

__int64 __fastcall sub_140772044(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v6; // rsi
  int v7; // eax

  v3 = *(_QWORD *)&qword_140D00AC0;
  result = (unsigned int)(a3 - 1);
  if ( (unsigned int)result <= 0x1D )
  {
    v6 = qword_1400083F0[a3];
    v7 = sub_140772720(a1, v6);
    if ( v7 )
      return sub_140770200(v3, a2, 1u, 0LL, v7);
    else
      return sub_1407720B8(v3, a2, 1, 0, 0LL, v6);
  }
  return result;
}
