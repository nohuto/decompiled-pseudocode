/*
 * XREFs of VslNotifyShutdown @ 0x14054C3D8
 * Callers:
 *     PopSaveHiberContext @ 0x140AA47F0 (PopSaveHiberContext.c)
 *     PopShutdownSystem @ 0x140AA8D84 (PopShutdownSystem.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14033FF80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
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
