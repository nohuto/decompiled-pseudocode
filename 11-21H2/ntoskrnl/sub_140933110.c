/*
 * XREFs of sub_140933110 @ 0x140933110
 * Callers:
 *     sub_140257280 @ 0x140257280 (sub_140257280.c)
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140933110(__int64 a1, __int64 a2)
{
  _QWORD v5[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v5, 0, 0x68uLL);
  v5[1] = *(_QWORD *)(a1 + 992);
  v5[2] = a2;
  return sub_140358A20(2u, 64, 0, (__int64)v5);
}
