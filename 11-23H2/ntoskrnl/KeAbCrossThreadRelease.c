/*
 * XREFs of KeAbCrossThreadRelease @ 0x1403CAD08
 * Callers:
 *     ExpReleaseDisownedFastResourceShared @ 0x1403CAA50 (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseDisownedFastResourceExclusive2 @ 0x140416018 (ExpReleaseDisownedFastResourceExclusive2.c)
 *     ExpReleaseDisownedFastResourceShared2 @ 0x1404161C8 (ExpReleaseDisownedFastResourceShared2.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x14060A6C4 (ExpReleaseDisownedFastResourceExclusive.c)
 * Callees:
 *     KiAbCrossThreadRelease @ 0x1403CAD3C (KiAbCrossThreadRelease.c)
 */

__int64 __fastcall KeAbCrossThreadRelease(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  if ( (a2 & 1) != 0 )
    a2 = a3 + 96LL * (unsigned __int8)(a2 >> 1) + 1696;
  return KiAbCrossThreadRelease(a1, a2);
}
