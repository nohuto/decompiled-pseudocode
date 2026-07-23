/*
 * XREFs of HvlNotifyAcpiReenabled @ 0x140546FFC
 * Callers:
 *     PopHiberCheckResume @ 0x140AA2D10 (PopHiberCheckResume.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x1403CD540 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x140540E70 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140541AC0 (HvlpReleaseHypercallPage.c)
 */

__int64 HvlNotifyAcpiReenabled()
{
  unsigned int v0; // ebx
  __int128 v2; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+30h] [rbp-18h]
  __int64 v4; // [rsp+38h] [rbp-10h]

  v3 = 0LL;
  LODWORD(v4) = 0;
  v2 = 0LL;
  HvlpAcquireHypercallPage((__int64)&v2, 1, 0LL, 8LL)->LowPart = 3;
  v0 = (unsigned __int16)HvcallInitiateHypercall(135) != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage((__int64)&v2);
  return v0;
}
