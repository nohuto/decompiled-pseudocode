/*
 * XREFs of HvlEnterSleepState @ 0x140544470
 * Callers:
 *     <none>
 * Callees:
 *     HvcallInitiateHypercall @ 0x1403CD540 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     VslTerminateSecureServices @ 0x14040FEB8 (VslTerminateSecureServices.c)
 *     HvlpAcquireHypercallPage @ 0x140540E70 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140541AC0 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlEnterSleepState(ULONG a1)
{
  __int16 v2; // bx
  __int128 v4; // [rsp+20h] [rbp-48h] BYREF
  __int64 v5; // [rsp+30h] [rbp-38h]
  __int64 v6; // [rsp+38h] [rbp-30h]
  _BYTE v7[16]; // [rsp+40h] [rbp-28h] BYREF

  v5 = 0LL;
  LODWORD(v6) = 0;
  v4 = 0LL;
  if ( a1 >= 4 )
    VslTerminateSecureServices();
  HvlpAcquireHypercallPage((__int64)&v4, 1, (__int64)v7, 8LL)->LowPart = a1;
  v2 = HvcallInitiateHypercall(132);
  HvlpReleaseHypercallPage((__int64)&v4);
  return v2 != 0 ? 0xC0000001 : 0;
}
