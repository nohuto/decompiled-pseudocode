/*
 * XREFs of VslFlushSecureAddressSpace @ 0x14054AFFC
 * Callers:
 *     KeFlushTb @ 0x140279970 (KeFlushTb.c)
 *     HvlpSlowFlushListTb @ 0x140549D74 (HvlpSlowFlushListTb.c)
 *     HvlpSlowFlushListTbEx @ 0x140549EF8 (HvlpSlowFlushListTbEx.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14033FCF0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     memset @ 0x140435A00 (memset.c)
 */

__int64 VslFlushSecureAddressSpace()
{
  _QWORD v1[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v1, 0, 0x68uLL);
  if ( KeGetCurrentIrql() > 2u )
    return 255LL;
  v1[1] = KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle;
  return VslpEnterIumSecureMode(2u, 240, 0, (__int64)v1);
}
