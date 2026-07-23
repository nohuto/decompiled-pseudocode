/*
 * XREFs of HvlResumeFromRootCrashdump @ 0x140545BA4
 * Callers:
 *     KeBugCheck2 @ 0x140568950 (KeBugCheck2.c)
 *     KiBugCheckRecoveryCleanupFromCrashDump @ 0x14057AB98 (KiBugCheckRecoveryCleanupFromCrashDump.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14033FF80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     HvlNotifyRootCrashdump @ 0x1405456E8 (HvlNotifyRootCrashdump.c)
 */

__int64 __fastcall HvlResumeFromRootCrashdump(char a1)
{
  __int64 result; // rax
  _BYTE v3[112]; // [rsp+20h] [rbp-88h] BYREF

  if ( !VslVsmEnabled || (HvlpForceAllPages = (unsigned int)HvlpForceAllPages >> 1, a1) )
  {
    if ( (HvlpFlags & 2) != 0 )
      HvlNotifyRootCrashdump(3);
    if ( VslVsmEnabled )
    {
      if ( a1 )
      {
        memset(v3, 0, 0x68uLL);
        VslpEnterIumSecureMode(2u, 2051, 0, (__int64)v3);
      }
    }
    HvlEnlightenments = HvlpEnlightenments;
    return off_140C01BB8[0]();
  }
  return result;
}
