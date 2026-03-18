/*
 * XREFs of VslResetKernelShadowStack @ 0x140942E88
 * Callers:
 *     MmDeleteKernelShadowStack @ 0x1406455C4 (MmDeleteKernelShadowStack.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14033FCF0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     memset @ 0x140435A00 (memset.c)
 */

__int64 __fastcall VslResetKernelShadowStack(int a1, _QWORD *a2)
{
  __int64 result; // rax
  _QWORD v5[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v5, 0, 0x68uLL);
  v5[2] = *a2;
  LODWORD(v5[1]) = a1;
  result = VslpEnterIumSecureMode(2u, 229, 0, (__int64)v5);
  if ( (int)result >= 0 )
    *a2 = v5[2];
  return result;
}
