/*
 * XREFs of HvlResumeFromRootCrashdump @ 0x1405454E4
 * Callers:
 *     KeBugCheck2 @ 0x140568290 (KeBugCheck2.c)
 *     KiBugCheckRecoveryCleanupFromCrashDump @ 0x14057A6A8 (KiBugCheckRecoveryCleanupFromCrashDump.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14033FCF0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     memset @ 0x140435A00 (memset.c)
 *     HvlNotifyRootCrashdump @ 0x140545028 (HvlNotifyRootCrashdump.c)
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
