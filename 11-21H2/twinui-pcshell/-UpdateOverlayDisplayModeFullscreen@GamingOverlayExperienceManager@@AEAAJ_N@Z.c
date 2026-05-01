/*
 * XREFs of ?UpdateOverlayDisplayModeFullscreen@GamingOverlayExperienceManager@@AEAAJ_N@Z @ 0x18033AEF0
 * Callers:
 *     ?ResetWindowRect@GamingOverlayExperienceManager@@UEAAJXZ @ 0x180338590 (-ResetWindowRect@GamingOverlayExperienceManager@@UEAAJXZ.c)
 *     ?ResetWindowRegion@GamingOverlayExperienceManager@@UEAAJXZ @ 0x180338790 (-ResetWindowRegion@GamingOverlayExperienceManager@@UEAAJXZ.c)
 *     ?SetCombinedWindowRegion@GamingOverlayExperienceManager@@UEAAJIPEAURect@Foundation@Windows@@@Z @ 0x1803392E0 (-SetCombinedWindowRegion@GamingOverlayExperienceManager@@UEAAJIPEAURect@Foundation@Windows@@@Z.c)
 *     ?SetWindowRect@GamingOverlayExperienceManager@@UEAAJHHHH@Z @ 0x1803397F0 (-SetWindowRect@GamingOverlayExperienceManager@@UEAAJHHHH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateOverlayDisplayModeShared@GamingOverlayExperienceManager@@AEAAJXZ @ 0x18033AF30 (-UpdateOverlayDisplayModeShared@GamingOverlayExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::UpdateOverlayDisplayModeFullscreen(
        GamingOverlayExperienceManager *this,
        char a2)
{
  int updated; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_BYTE *)this + 1337) = a2;
  updated = GamingOverlayExperienceManager::UpdateOverlayDisplayModeShared(this);
  v3 = updated;
  if ( updated < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEC2,
      (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)(unsigned int)updated);
  return v3;
}
