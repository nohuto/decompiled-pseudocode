/*
 * XREFs of KeAbCrossThreadRelease @ 0x1403CAEE8
 * Callers:
 *     ExpReleaseDisownedFastResourceShared @ 0x1403CAC30 (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseDisownedFastResourceExclusive2 @ 0x1404163AC (ExpReleaseDisownedFastResourceExclusive2.c)
 *     ExpReleaseDisownedFastResourceShared2 @ 0x14041655C (ExpReleaseDisownedFastResourceShared2.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x14060AC14 (ExpReleaseDisownedFastResourceExclusive.c)
 * Callees:
 *     KiAbCrossThreadRelease @ 0x1403CAF1C (KiAbCrossThreadRelease.c)
 */

__int64 __fastcall KeAbCrossThreadRelease(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  if ( (a2 & 1) != 0 )
    a2 = a3 + 96LL * (unsigned __int8)(a2 >> 1) + 1696;
  return KiAbCrossThreadRelease(a1, a2);
}
