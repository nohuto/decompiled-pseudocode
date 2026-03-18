/*
 * XREFs of VslIsEncryptionKeyAvailable @ 0x140942794
 * Callers:
 *     ExpQuerySystemInformation @ 0x140726850 (ExpQuerySystemInformation.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14033FCF0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     memset @ 0x140435A00 (memset.c)
 */

bool VslIsEncryptionKeyAvailable()
{
  _QWORD v1[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v1, 0, 0x68uLL);
  return (int)VslpEnterIumSecureMode(2u, 35, 0, (__int64)v1) >= 0 && v1[2] != 0LL;
}
