/*
 * XREFs of sub_14065859C @ 0x14065859C
 * Callers:
 *     PsRegisterSyscallProvider @ 0x140659230 (PsRegisterSyscallProvider.c)
 *     sub_1406596A0 @ 0x1406596A0 (sub_1406596A0.c)
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14065859C(__int64 a1)
{
  _QWORD v3[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v3, 0, 0x68uLL);
  v3[1] = a1;
  return sub_140358A20(2u, 87, 0, (__int64)v3);
}
