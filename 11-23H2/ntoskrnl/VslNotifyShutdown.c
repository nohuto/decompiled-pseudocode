/*
 * XREFs of VslNotifyShutdown @ 0x14054BD18
 * Callers:
 *     PopSaveHiberContext @ 0x140AA4980 (PopSaveHiberContext.c)
 *     PopShutdownSystem @ 0x140AA8F14 (PopShutdownSystem.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14033FCF0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     memset @ 0x140435A00 (memset.c)
 */

__int64 __fastcall VslNotifyShutdown(unsigned __int8 a1)
{
  __int64 v1; // rbx
  _QWORD v3[14]; // [rsp+20h] [rbp-88h] BYREF

  v1 = a1;
  memset(v3, 0, 0x68uLL);
  v3[1] = v1;
  return VslpEnterIumSecureMode(2u, 262, 0, (__int64)v3);
}
