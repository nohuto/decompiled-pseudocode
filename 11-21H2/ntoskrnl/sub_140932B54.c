/*
 * XREFs of sub_140932B54 @ 0x140932B54
 * Callers:
 *     sub_14056C694 @ 0x14056C694 (sub_14056C694.c)
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140932B54(__int64 a1)
{
  _QWORD v3[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v3, 0, 0x68uLL);
  v3[1] = a1;
  return sub_140358A20(2u, 11, 0, (__int64)v3);
}
