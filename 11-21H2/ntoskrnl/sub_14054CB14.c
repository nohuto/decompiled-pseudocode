/*
 * XREFs of sub_14054CB14 @ 0x14054CB14
 * Callers:
 *     sub_14039DA34 @ 0x14039DA34 (sub_14039DA34.c)
 * Callees:
 *     HvlInvokeFastExtendedHypercall @ 0x14039DD80 (HvlInvokeFastExtendedHypercall.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14054C8F0 @ 0x14054C8F0 (sub_14054C8F0.c)
 */

__int64 __fastcall sub_14054CB14(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  int v4; // eax
  _QWORD v6[2]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v7[12]; // [rsp+50h] [rbp-78h] BYREF

  v6[0] = a1;
  v3 = (a3 != 0 ? 0 : 4) | 2u;
  if ( a1 )
    v3 = a3 != 0 ? 0 : 4;
  v6[1] = v3;
  v4 = sub_14054C8F0(a2, v7, 0x50u);
  return HvlInvokeFastExtendedHypercall(((v4 + 7) << 14) & 0x3FE0000 | 0x10013u, (__int64)v6, v4 + 32, 0LL, 0);
}
