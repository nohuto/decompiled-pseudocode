/*
 * XREFs of sub_140546150 @ 0x140546150
 * Callers:
 *     sub_1405461E0 @ 0x1405461E0 (sub_1405461E0.c)
 * Callees:
 *     HvlInvokeFastExtendedHypercall @ 0x14039DD80 (HvlInvokeFastExtendedHypercall.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14054CA70 @ 0x14054CA70 (sub_14054CA70.c)
 */

__int64 __fastcall sub_140546150(int *a1)
{
  __int64 v1; // rax
  _QWORD v3[2]; // [rsp+40h] [rbp-38h] BYREF
  int v4; // [rsp+50h] [rbp-28h]
  int v5; // [rsp+54h] [rbp-24h]
  __int64 v6; // [rsp+58h] [rbp-20h]

  v3[0] = -1LL;
  v3[1] = 0LL;
  v6 = 0LL;
  v4 = 1;
  v5 = *a1;
  v1 = HvlInvokeFastExtendedHypercall(65744LL, (__int64)v3, 0x20u, 0LL, 0);
  return sub_14054CA70(v1);
}
