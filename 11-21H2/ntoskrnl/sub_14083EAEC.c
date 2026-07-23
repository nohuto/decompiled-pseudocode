/*
 * XREFs of sub_14083EAEC @ 0x14083EAEC
 * Callers:
 *     sub_14076ABAC @ 0x14076ABAC (sub_14076ABAC.c)
 *     sub_1407886D0 @ 0x1407886D0 (sub_1407886D0.c)
 *     sub_14083DA50 @ 0x14083DA50 (sub_14083DA50.c)
 *     sub_14083DC20 @ 0x14083DC20 (sub_14083DC20.c)
 *     sub_14083DEC8 @ 0x14083DEC8 (sub_14083DEC8.c)
 *     sub_14083E0F8 @ 0x14083E0F8 (sub_14083E0F8.c)
 *     sub_14083E2B8 @ 0x14083E2B8 (sub_14083E2B8.c)
 *     sub_14083E410 @ 0x14083E410 (sub_14083E410.c)
 *     sub_14083E6C0 @ 0x14083E6C0 (sub_14083E6C0.c)
 *     sub_14094017C @ 0x14094017C (sub_14094017C.c)
 *     sub_140A28700 @ 0x140A28700 (sub_140A28700.c)
 *     sub_140A2F0F0 @ 0x140A2F0F0 (sub_140A2F0F0.c)
 *     sub_140A2F428 @ 0x140A2F428 (sub_140A2F428.c)
 *     sub_140B0EC60 @ 0x140B0EC60 (sub_140B0EC60.c)
 * Callees:
 *     sub_14083EB44 @ 0x14083EB44 (sub_14083EB44.c)
 */

__int64 __fastcall sub_14083EAEC(__int64 a1, void *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  _QWORD v6[7]; // [rsp+20h] [rbp-38h] BYREF

  v4 = 0LL;
  if ( a1 )
    v4 = *(_QWORD *)(a1 + 224);
  v6[3] = v4;
  v6[4] = sub_1403D2110;
  v6[0] = a1;
  v6[1] = a3;
  v6[5] = v6;
  v6[2] = a4;
  return sub_14083EB44(a2);
}
