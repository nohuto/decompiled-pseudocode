/*
 * XREFs of VslFlushSecureAddressSpace @ 0x14054B6BC
 * Callers:
 *     KeFlushTb @ 0x140279C00 (KeFlushTb.c)
 *     HvlpSlowFlushListTb @ 0x14054A434 (HvlpSlowFlushListTb.c)
 *     HvlpSlowFlushListTbEx @ 0x14054A5B8 (HvlpSlowFlushListTbEx.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14033FF80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
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
