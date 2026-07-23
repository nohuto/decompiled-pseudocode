/*
 * XREFs of sub_1409B4584 @ 0x1409B4584
 * Callers:
 *     sub_1405A862C @ 0x1405A862C (sub_1405A862C.c)
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1409B4584(__int64 a1)
{
  _QWORD v3[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v3, 0, 0x68uLL);
  v3[1] = *(_QWORD *)(a1 + 24);
  return sub_140358A20(2u, 51, 0, (__int64)v3);
}
