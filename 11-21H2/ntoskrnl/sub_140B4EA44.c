/*
 * XREFs of sub_140B4EA44 @ 0x140B4EA44
 * Callers:
 *     sub_140B06E60 @ 0x140B06E60 (sub_140B06E60.c)
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140B4EA44(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v7[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v7, 0, 0x68uLL);
  v7[1] = a1;
  v7[2] = a2;
  v7[3] = a3;
  return sub_140358A20(2u, 212, 0, (__int64)v7);
}
