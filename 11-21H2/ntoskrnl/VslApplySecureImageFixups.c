/*
 * XREFs of VslApplySecureImageFixups @ 0x14054DCCC
 * Callers:
 *     MiWalkEntireImage @ 0x140336B30 (MiWalkEntireImage.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140358A20 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall VslApplySecureImageFixups(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rdi
  _QWORD v7[14]; // [rsp+20h] [rbp-88h] BYREF

  v3 = a2;
  memset(v7, 0, 0x68uLL);
  v7[1] = a1;
  v7[2] = v3;
  v7[3] = a3;
  return VslpEnterIumSecureMode(2u, 44, 0, (__int64)v7);
}
