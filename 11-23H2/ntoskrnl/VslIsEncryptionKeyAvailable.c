/*
 * XREFs of VslIsEncryptionKeyAvailable @ 0x140942994
 * Callers:
 *     ExpQuerySystemInformation @ 0x140726A50 (ExpQuerySystemInformation.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14033FF80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

bool VslIsEncryptionKeyAvailable()
{
  _QWORD v1[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v1, 0, 0x68uLL);
  return (int)VslpEnterIumSecureMode(2u, 35, 0, (__int64)v1) >= 0 && v1[2] != 0LL;
}
