/*
 * XREFs of VslCreateSecureProcess @ 0x140941D50
 * Callers:
 *     KeInitializeProcess @ 0x1406B6898 (KeInitializeProcess.c)
 *     VslCreateEnclave @ 0x140941BF0 (VslCreateEnclave.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14033FF80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall VslCreateSecureProcess(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  _QWORD v7[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v7, 0, 0x68uLL);
  v7[1] = a1;
  v7[2] = a2;
  result = VslpEnterIumSecureMode(2u, 6, 0, (__int64)v7);
  if ( (int)result >= 0 )
    *a3 = v7[2];
  return result;
}
