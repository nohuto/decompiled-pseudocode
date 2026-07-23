/*
 * XREFs of sub_14054ED18 @ 0x14054ED18
 * Callers:
 *     sub_140A4B9E0 @ 0x140A4B9E0 (sub_140A4B9E0.c)
 *     sub_140A6BE04 @ 0x140A6BE04 (sub_140A6BE04.c)
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14054ED18(unsigned __int8 a1)
{
  __int64 v1; // rbx
  _QWORD v3[14]; // [rsp+20h] [rbp-88h] BYREF

  v1 = a1;
  memset(v3, 0, 0x68uLL);
  v3[1] = v1;
  return sub_140358A20(2u, 262, 0, (__int64)v3);
}
