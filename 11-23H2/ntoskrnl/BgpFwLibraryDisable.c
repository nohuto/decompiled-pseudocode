/*
 * XREFs of BgpFwLibraryDisable @ 0x140AEC1EC
 * Callers:
 *     BgpFwLibraryDestroy @ 0x140AEEA88 (BgpFwLibraryDestroy.c)
 *     BgLibraryDisable @ 0x140AEF480 (BgLibraryDisable.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140386280 (BgpFwFreeMemory.c)
 *     LogFwReport @ 0x140AEC0F4 (LogFwReport.c)
 *     BgpTxtDestroyRegion @ 0x140AEC904 (BgpTxtDestroyRegion.c)
 *     AnFwFadeCompletion @ 0x140AECFB8 (AnFwFadeCompletion.c)
 *     AnFwDisplayProgressIndicator @ 0x140AED598 (AnFwDisplayProgressIndicator.c)
 *     ResFwpPageOutBackground @ 0x140AEEBF0 (ResFwpPageOutBackground.c)
 *     BgpFoDestroy @ 0x140AEECA8 (BgpFoDestroy.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140AEF6DC (AnFwDisableBackgroundUpdateTimer.c)
 */

__int64 BgpFwLibraryDisable()
{
  __int64 result; // rax

  result = (unsigned int)dword_140C0E4B0;
  if ( (dword_140C0E4B0 & 2) != 0 )
  {
    if ( (dword_140C0E4B0 & 0x4000000) != 0 )
      AnFwDisableBackgroundUpdateTimer();
    AnFwFadeCompletion();
    if ( qword_140C0E578 )
    {
      BgpTxtDestroyRegion();
      if ( BgpTextRegionSave == qword_140C0E578 )
        BgpTextRegionSave = 0LL;
      qword_140C0E578 = 0LL;
    }
    AnFwDisplayProgressIndicator(0LL);
    if ( qword_140C0E570 )
    {
      BgpTxtDestroyRegion();
      if ( BgpAnimationRegionSave == qword_140C0E570 )
        BgpAnimationRegionSave = 0LL;
      qword_140C0E570 = 0LL;
    }
    if ( qword_140C0E558 )
    {
      BgpFoDestroy();
      if ( *(_QWORD *)qword_140C0E558 )
      {
        if ( (*(_DWORD *)(qword_140C0E558 + 12) & 1) == 0 )
          BgpFwFreeMemory(*(_QWORD *)qword_140C0E558);
      }
      BgpFwFreeMemory(qword_140C0E558);
      qword_140C0E558 = 0LL;
    }
    LogFwReport();
    ResFwpPageOutBackground();
    result = 0LL;
    dword_140C0E4B0 &= ~2u;
    BgInternal = 0LL;
    qword_140C0E460 = 0LL;
    xmmword_140C0E450 = 0LL;
  }
  return result;
}
