/*
 * XREFs of VslFreeKernelShadowStack @ 0x1409422B8
 * Callers:
 *     MiDeleteKernelShadowStack @ 0x1406443C4 (MiDeleteKernelShadowStack.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14033FCF0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     memset @ 0x140435A00 (memset.c)
 */

__int64 __fastcall VslFreeKernelShadowStack(__int64 a1)
{
  _QWORD v3[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v3, 0, 0x68uLL);
  v3[1] = a1;
  return VslpEnterIumSecureMode(2u, 228, 0, (__int64)v3);
}
