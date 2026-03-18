/*
 * XREFs of HvlNotifyAllProcessorsStarted @ 0x140544ED4
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x140376790 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x1403CCD00 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     HvlpHvToNtStatus @ 0x14045EEB6 (HvlpHvToNtStatus.c)
 *     HvlpAcquireHypercallPage @ 0x140540860 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1405414B0 (HvlpReleaseHypercallPage.c)
 */

__int64 HvlNotifyAllProcessorsStarted()
{
  unsigned __int16 v0; // bx
  __int128 v2; // [rsp+20h] [rbp-48h] BYREF
  __int64 v3; // [rsp+30h] [rbp-38h]
  __int64 v4; // [rsp+38h] [rbp-30h]
  _BYTE v5[16]; // [rsp+40h] [rbp-28h] BYREF

  v3 = 0LL;
  LODWORD(v4) = 0;
  v2 = 0LL;
  HvlpAcquireHypercallPage((__int64)&v2, 1, (__int64)v5, 8LL)->LowPart = 4;
  v0 = HvcallInitiateHypercall(135);
  HvlpReleaseHypercallPage((__int64)&v2);
  return HvlpHvToNtStatus(v0);
}
