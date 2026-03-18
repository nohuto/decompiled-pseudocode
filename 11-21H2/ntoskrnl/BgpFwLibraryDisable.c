/*
 * XREFs of BgpFwLibraryDisable @ 0x140AAE9F4
 * Callers:
 *     BgLibraryDisable @ 0x140AAE8DC (BgLibraryDisable.c)
 *     BgpFwLibraryDestroy @ 0x140AAE918 (BgpFwLibraryDestroy.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x1403A8CB4 (BgpFwFreeMemory.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140AAB7B4 (AnFwDisableBackgroundUpdateTimer.c)
 *     LogFwReport @ 0x140AABB9C (LogFwReport.c)
 *     AnFwFadeCompletion @ 0x140AACA74 (AnFwFadeCompletion.c)
 *     AnFwDisplayProgressIndicator @ 0x140AAD1C4 (AnFwDisplayProgressIndicator.c)
 *     ResFwBackgroundTransition @ 0x140AADBBC (ResFwBackgroundTransition.c)
 *     BgpTxtDestroyRegion @ 0x140AAEAF4 (BgpTxtDestroyRegion.c)
 *     BgpFoDestroy @ 0x140AAEBD8 (BgpFoDestroy.c)
 */

__int64 BgpFwLibraryDisable()
{
  __int64 result; // rax

  result = (unsigned int)dword_140C0DF90;
  if ( (dword_140C0DF90 & 2) != 0 )
  {
    if ( (dword_140C0DF90 & 0x4000000) != 0 )
      AnFwDisableBackgroundUpdateTimer();
    AnFwFadeCompletion();
    if ( qword_140C0E058 )
    {
      BgpTxtDestroyRegion(qword_140C0E058);
      if ( BgpTextRegionSave == qword_140C0E058 )
        BgpTextRegionSave = 0LL;
      qword_140C0E058 = 0LL;
    }
    AnFwDisplayProgressIndicator(0);
    if ( qword_140C0E050 )
    {
      BgpTxtDestroyRegion(qword_140C0E050);
      if ( BgpAnimationRegionSave == qword_140C0E050 )
        BgpAnimationRegionSave = 0LL;
      qword_140C0E050 = 0LL;
    }
    if ( qword_140C0E038 )
    {
      BgpFoDestroy(qword_140C0E038);
      if ( *(_QWORD *)qword_140C0E038 )
      {
        if ( (*(_DWORD *)(qword_140C0E038 + 12) & 1) == 0 )
          BgpFwFreeMemory(*(_QWORD *)qword_140C0E038);
      }
      BgpFwFreeMemory(qword_140C0E038);
      qword_140C0E038 = 0LL;
    }
    LogFwReport();
    ResFwBackgroundTransition(1);
    result = 0LL;
    dword_140C0DF90 &= ~2u;
    BgInternal = 0LL;
    qword_140C0DF40 = 0LL;
    xmmword_140C0DF30 = 0LL;
  }
  return result;
}
