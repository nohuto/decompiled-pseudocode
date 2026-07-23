/*
 * XREFs of sub_140549468 @ 0x140549468
 * Callers:
 *     sub_14039DE70 @ 0x14039DE70 (sub_14039DE70.c)
 * Callees:
 *     HvlInvokeFastExtendedHypercall @ 0x14039DD80 (HvlInvokeFastExtendedHypercall.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14054C8F0 @ 0x14054C8F0 (sub_14054C8F0.c)
 */

__int64 __fastcall sub_140549468(__int64 a1, unsigned int a2)
{
  int v2; // eax
  __int64 v4; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v5[104]; // [rsp+48h] [rbp-80h] BYREF

  v4 = a2;
  v2 = sub_14054C8F0(a1, v5, 88LL);
  return (unsigned __int16)HvlInvokeFastExtendedHypercall(
                             ((v2 + 7) << 14) & 0x3FE0000 | 0x10015u,
                             (__int64)&v4,
                             v2 + 24,
                             0LL,
                             0) != 0
       ? 0xC0000001
       : 0;
}
