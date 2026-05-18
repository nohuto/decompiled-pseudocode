/*
 * XREFs of sub_18005BCF4 @ 0x18005BCF4
 * Callers:
 *     sub_18005D7D8 @ 0x18005D7D8 (sub_18005D7D8.c)
 * Callees:
 *     sub_18005BBB4 @ 0x18005BBB4 (sub_18005BBB4.c)
 *     sub_18005D6A0 @ 0x18005D6A0 (sub_18005D6A0.c)
 */

__int64 __fastcall sub_18005BCF4(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v5; // rax
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  _OWORD v10[4]; // [rsp+20h] [rbp-48h] BYREF

  v5 = (_OWORD *)sub_18005BBB4(a1, 2, 1);
  v6 = v5[1];
  v10[0] = *v5;
  v7 = v5[2];
  v10[1] = v6;
  v8 = v5[3];
  v10[2] = v7;
  v10[3] = v8;
  sub_18005D6A0(a2, a3, v10);
  return a2;
}
