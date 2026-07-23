/*
 * XREFs of sub_14039DA74 @ 0x14039DA74
 * Callers:
 *     sub_14039DA34 @ 0x14039DA34 (sub_14039DA34.c)
 * Callees:
 *     sub_14039DC38 @ 0x14039DC38 (sub_14039DC38.c)
 *     HvlInvokeFastExtendedHypercall @ 0x14039DD80 (HvlInvokeFastExtendedHypercall.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14039DA74(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  _BYTE v5[32]; // [rsp+40h] [rbp-38h] BYREF

  LOBYTE(a4) = a3;
  sub_14039DC38(v5, a1, a2, a4);
  return HvlInvokeFastExtendedHypercall(65538, (unsigned int)v5, 24, 0, 0);
}
