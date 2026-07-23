/*
 * XREFs of sub_140545BD8 @ 0x140545BD8
 * Callers:
 *     sub_140543FF0 @ 0x140543FF0 (sub_140543FF0.c)
 *     sub_140544060 @ 0x140544060 (sub_140544060.c)
 * Callees:
 *     HvlInvokeFastExtendedHypercall @ 0x14039DD80 (HvlInvokeFastExtendedHypercall.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14054CA70 @ 0x14054CA70 (sub_14054CA70.c)
 */

__int64 __fastcall sub_140545BD8(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  _DWORD v6[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v7; // [rsp+48h] [rbp-30h]
  __int64 v8; // [rsp+50h] [rbp-28h]
  __int64 v9; // [rsp+58h] [rbp-20h]

  v6[1] = 0;
  v6[0] = a1;
  v9 = a4;
  v7 = a2;
  v8 = a3;
  v4 = HvlInvokeFastExtendedHypercall(65563LL, (__int64)v6, 0x20u, 0LL, 0);
  return sub_14054CA70(v4);
}
