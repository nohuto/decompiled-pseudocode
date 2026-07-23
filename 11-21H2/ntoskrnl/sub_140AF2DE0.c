/*
 * XREFs of sub_140AF2DE0 @ 0x140AF2DE0
 * Callers:
 *     sub_140AF2E54 @ 0x140AF2E54 (sub_140AF2E54.c)
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 sub_140AF2DE0()
{
  _QWORD v1[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v1, 0, 0x68uLL);
  v1[2] = 32LL;
  v1[1] = &unk_140E01D30;
  return sub_140358A20(2u, 228, 0, (__int64)v1);
}
