/*
 * XREFs of sub_140548F40 @ 0x140548F40
 * Callers:
 *     <none>
 * Callees:
 *     HvlInvokeFastExtendedHypercall @ 0x14039DD80 (HvlInvokeFastExtendedHypercall.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14054CA70 @ 0x14054CA70 (sub_14054CA70.c)
 */

__int64 __fastcall sub_140548F40(int a1, unsigned __int8 a2)
{
  __int64 v2; // rax
  _DWORD v4[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v5; // [rsp+48h] [rbp-30h]
  __int64 v6; // [rsp+50h] [rbp-28h]

  v4[1] = 0x40000000;
  v4[0] = a1;
  v6 = a2;
  v5 = 1LL;
  v2 = HvlInvokeFastExtendedHypercall(196779LL, (__int64)v4, 0x18u, 0LL, 0);
  return sub_14054CA70(v2);
}
