/*
 * XREFs of sub_140A53010 @ 0x140A53010
 * Callers:
 *     NtShutdownSystem @ 0x1406398E0 (NtShutdownSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 */

__int64 __fastcall sub_140A53010(unsigned int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v7[96]; // [rsp+20h] [rbp-1A8h] BYREF

  memset(&v7[3], 0, 0x174uLL);
  v7[0] = a1;
  v7[1] = a2;
  v7[2] = a3;
  return sub_140A494E8(v7);
}
