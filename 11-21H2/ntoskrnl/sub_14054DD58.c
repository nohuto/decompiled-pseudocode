/*
 * XREFs of sub_14054DD58 @ 0x14054DD58
 * Callers:
 *     sub_14054A9B4 @ 0x14054A9B4 (sub_14054A9B4.c)
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14054DD58(char a1)
{
  _QWORD v3[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v3, 0, 0x68uLL);
  v3[1] = (-(__int64)((a1 & 2) != 0) & 0xFFFFFFFFFFFFFFEBuLL) + 24;
  return sub_140358A20(2u, 251, 0, (__int64)v3);
}
