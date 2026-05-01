/*
 * XREFs of ?DetermineCurrentDisplayMode@GamingOverlayExperienceManager@@AEAA?AW4GamingOverlayDisplayMode@GamingOverlay@Internal@Windows@@XZ @ 0x18017B61C
 * Callers:
 *     ?get_OverlayDisplayMode@GamingOverlayExperienceManager@@UEAAJPEAW4GamingOverlayDisplayMode@GamingOverlay@Internal@Windows@@@Z @ 0x18017B5B0 (-get_OverlayDisplayMode@GamingOverlayExperienceManager@@UEAAJPEAW4GamingOverlayDisplayMode@Gamin.c)
 *     ?InvokeOverlayDisplayModeEventTask@GamingOverlayExperienceManager@@AEAAJXZ @ 0x180333F68 (-InvokeOverlayDisplayModeEventTask@GamingOverlayExperienceManager@@AEAAJXZ.c)
 *     ?UpdateOverlayDisplayModeShared@GamingOverlayExperienceManager@@AEAAJXZ @ 0x18033AF30 (-UpdateOverlayDisplayModeShared@GamingOverlayExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GamingOverlayExperienceManager::DetermineCurrentDisplayMode(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_BYTE *)(a1 + 1336) )
    return (unsigned int)(*(_BYTE *)(a1 + 1337) != 0) + 1;
  return result;
}
