/*
 * XREFs of ObFastReplaceObject @ 0x14029A578
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x140299FC0 (CcDeleteSharedCacheMap.c)
 *     MmChangeSectionBackingFile @ 0x14035EFB8 (MmChangeSectionBackingFile.c)
 *     CcChangeBackingFileObject @ 0x140535168 (CcChangeBackingFileObject.c)
 *     MiEnableImageDirectMap @ 0x14063CC50 (MiEnableImageDirectMap.c)
 *     ObpDeleteSymbolicLinkName @ 0x140697B5C (ObpDeleteSymbolicLinkName.c)
 *     MiSegmentDelete @ 0x1406B0954 (MiSegmentDelete.c)
 *     MiCreateImageOrDataSection @ 0x140723350 (MiCreateImageOrDataSection.c)
 *     SeDeassignPrimaryToken @ 0x140760ED4 (SeDeassignPrimaryToken.c)
 *     ObpDeleteDeviceMap @ 0x1407AFF84 (ObpDeleteDeviceMap.c)
 *     ObpCreateSymbolicLinkName @ 0x1407B69F0 (ObpCreateSymbolicLinkName.c)
 *     SeExchangePrimaryToken @ 0x1408402F8 (SeExchangePrimaryToken.c)
 *     PsShutdownSystem @ 0x1409B3544 (PsShutdownSystem.c)
 * Callees:
 *     ObpIncrPointerCountEx @ 0x140224660 (ObpIncrPointerCountEx.c)
 */

unsigned __int64 __fastcall ObFastReplaceObject(volatile __int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  unsigned __int64 result; // rax
  int v6; // ecx

  if ( a2 )
    ObpIncrPointerCountEx((volatile signed __int64 *)(a2 - 48), 15);
  v4 = _InterlockedExchange64(a1, (a2 | 0xF) & -(__int64)(a2 != 0));
  result = v4 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (v4 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
  {
    v6 = v4 & 0xF;
    if ( v6 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(result - 48), -v6);
  }
  return result;
}
