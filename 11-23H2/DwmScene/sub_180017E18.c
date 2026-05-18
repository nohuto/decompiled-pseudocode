/*
 * XREFs of sub_180017E18 @ 0x180017E18
 * Callers:
 *     sub_180018FC0 @ 0x180018FC0 (sub_180018FC0.c)
 *     sub_18003C72C @ 0x18003C72C (sub_18003C72C.c)
 *     sub_18003E1D0 @ 0x18003E1D0 (sub_18003E1D0.c)
 *     sub_18005D990 @ 0x18005D990 (sub_18005D990.c)
 *     sub_18005E068 @ 0x18005E068 (sub_18005E068.c)
 *     sub_18005E124 @ 0x18005E124 (sub_18005E124.c)
 *     sub_18006D0BC @ 0x18006D0BC (sub_18006D0BC.c)
 *     sub_18008E410 @ 0x18008E410 (sub_18008E410.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18001B398 @ 0x18001B398 (sub_18001B398.c)
 */

_OWORD *__fastcall sub_180017E18(__int64 a1, __int128 *a2, _OWORD *a3)
{
  __int128 v3; // xmm5
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  __int128 v7; // xmm3
  __int128 v8; // xmm4
  __int128 v9; // xmm5
  _OWORD *v10; // rcx
  _OWORD *result; // rax
  _OWORD v12[4]; // [rsp+20h] [rbp-58h] BYREF

  v3 = a3[1];
  v4 = *a2;
  v5 = a2[1];
  v6 = a2[2];
  v7 = a2[3];
  v12[0] = *a3;
  v8 = a3[2];
  v12[1] = v3;
  v9 = a3[3];
  v12[2] = v8;
  v12[3] = v9;
  *(double *)&v4 = sub_18001B398(a1, v12);
  *v10 = v4;
  result = v10;
  v10[1] = v5;
  v10[2] = v6;
  v10[3] = v7;
  return result;
}
