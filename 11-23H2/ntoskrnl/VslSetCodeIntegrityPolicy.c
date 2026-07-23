/*
 * XREFs of VslSetCodeIntegrityPolicy @ 0x140943BB0
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14033FF80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall VslSetCodeIntegrityPolicy(int a1, __int64 a2)
{
  _QWORD v5[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v5, 0, 0x68uLL);
  LODWORD(v5[1]) = a1;
  v5[2] = a2;
  return VslpEnterIumSecureMode(2u, 33, 0, (__int64)v5);
}
