/*
 * XREFs of sub_1C005E920 @ 0x1C005E920
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C005EAF4 @ 0x1C005EAF4 (sub_1C005EAF4.c)
 */

__int64 __fastcall sub_1C005E920(int a1, int a2)
{
  _BYTE Dst[272]; // [rsp+40h] [rbp-128h] BYREF

  memset_0(Dst, 0, 0x108uLL);
  return sub_1C005EAF4(a1, a2, (unsigned int)Dst, 264, (__int64)&sub_1C006ED80, (__int64)sub_1C00A9400);
}
