/*
 * XREFs of ObFastReplaceObject @ 0x140276A48
 * Callers:
 *     CcChangeBackingFileObject @ 0x140201AC4 (CcChangeBackingFileObject.c)
 *     MmChangeSectionBackingFile @ 0x1402483DC (MmChangeSectionBackingFile.c)
 *     CcDeleteSharedCacheMap @ 0x140275338 (CcDeleteSharedCacheMap.c)
 *     MiEnableImageDirectMap @ 0x14059E4B0 (MiEnableImageDirectMap.c)
 *     ObpDeleteDeviceMap @ 0x14069C07C (ObpDeleteDeviceMap.c)
 *     ObpCreateSymbolicLinkName @ 0x1406A97F0 (ObpCreateSymbolicLinkName.c)
 *     ObpDeleteSymbolicLinkName @ 0x1406B96E8 (ObpDeleteSymbolicLinkName.c)
 *     MiSegmentDelete @ 0x1406F4904 (MiSegmentDelete.c)
 *     MiCreateImageOrDataSection @ 0x1406FDCD0 (MiCreateImageOrDataSection.c)
 *     SeDeassignPrimaryToken @ 0x1407E0C48 (SeDeassignPrimaryToken.c)
 *     SeExchangePrimaryToken @ 0x140847260 (SeExchangePrimaryToken.c)
 *     PsShutdownSystem @ 0x1409B1074 (PsShutdownSystem.c)
 * Callees:
 *     ObpIncrPointerCountEx @ 0x1402F3424 (ObpIncrPointerCountEx.c)
 */

unsigned __int64 __fastcall ObFastReplaceObject(volatile __int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  unsigned __int64 result; // rax
  int v6; // ecx

  if ( a2 )
    ObpIncrPointerCountEx(a2 - 48, 15LL);
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
