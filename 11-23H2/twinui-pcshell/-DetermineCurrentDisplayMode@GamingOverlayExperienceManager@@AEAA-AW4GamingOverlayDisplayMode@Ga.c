/*
 * XREFs of ?DetermineCurrentDisplayMode@GamingOverlayExperienceManager@@AEAA?AW4GamingOverlayDisplayMode@GamingOverlay@Internal@Windows@@XZ @ 0x1801B2F04
 * Callers:
 *     ?get_OverlayDisplayMode@GamingOverlayExperienceManager@@UEAAJPEAW4GamingOverlayDisplayMode@GamingOverlay@Internal@Windows@@@Z @ 0x1801B2EA0 (-get_OverlayDisplayMode@GamingOverlayExperienceManager@@UEAAJPEAW4GamingOverlayDisplayMode@Gamin.c)
 *     ?InvokeOverlayDisplayModeEventTask@GamingOverlayExperienceManager@@AEAAJXZ @ 0x180401658 (-InvokeOverlayDisplayModeEventTask@GamingOverlayExperienceManager@@AEAAJXZ.c)
 *     ?UpdateOverlayDisplayModeShared@GamingOverlayExperienceManager@@AEAAJXZ @ 0x180408E54 (-UpdateOverlayDisplayModeShared@GamingOverlayExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GamingOverlayExperienceManager::DetermineCurrentDisplayMode(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_BYTE *)(a1 + 1376) )
    return (unsigned int)(*(_BYTE *)(a1 + 1377) != 0) + 1;
  return result;
}
