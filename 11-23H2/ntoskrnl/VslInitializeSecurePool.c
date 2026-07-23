/*
 * XREFs of VslInitializeSecurePool @ 0x14054BCD0
 * Callers:
 *     MiInitSystem @ 0x140B44518 (MiInitSystem.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14033FF80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall VslInitializeSecurePool(__int64 a1)
{
  _QWORD v3[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v3, 0, 0x68uLL);
  SecurePoolBase = a1;
  v3[2] = 0x8000000000LL;
  v3[1] = a1;
  SecurePoolEnd = a1 + 0x8000000000LL;
  return VslpEnterIumSecureMode(2u, 214, 0, (__int64)v3);
}
