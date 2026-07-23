/*
 * XREFs of sub_140578830 @ 0x140578830
 * Callers:
 *     sub_1406396B8 @ 0x1406396B8 (sub_1406396B8.c)
 * Callees:
 *     sub_1402DA5B0 @ 0x1402DA5B0 (sub_1402DA5B0.c)
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     HalReturnToFirmware @ 0x14050A7E0 (HalReturnToFirmware.c)
 *     sub_1405675F4 @ 0x1405675F4 (sub_1405675F4.c)
 *     sub_140A6A570 @ 0x140A6A570 (sub_140A6A570.c)
 */

void __noreturn sub_140578830()
{
  _BYTE v0[112]; // [rsp+20h] [rbp-88h] BYREF

  sub_140A6A570();
  memset(v0, 0, 0x68uLL);
  sub_140358A20(2u, 262, 0, (__int64)v0);
  sub_1405675F4();
  byte_140D01160 = 1;
  sub_1402DA5B0(0);
  HalReturnToFirmware(3);
}
