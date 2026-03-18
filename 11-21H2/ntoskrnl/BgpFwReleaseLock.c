/*
 * XREFs of BgpFwReleaseLock @ 0x1403A7BF0
 * Callers:
 *     BgLibraryEnable @ 0x140398ECC (BgLibraryEnable.c)
 *     BgQueryBootGraphicsInformation @ 0x1403A7B10 (BgQueryBootGraphicsInformation.c)
 *     BgpFwQueryBootGraphicsInformation @ 0x1403AA7E0 (BgpFwQueryBootGraphicsInformation.c)
 *     KiBugCheckProgress @ 0x140567390 (KiBugCheckProgress.c)
 *     KiDisplayBlueScreen @ 0x140567874 (KiDisplayBlueScreen.c)
 *     BgDisplaySafeToPowerOffScreen @ 0x14064D474 (BgDisplaySafeToPowerOffScreen.c)
 *     BgFreeContext @ 0x140AAB038 (BgFreeContext.c)
 *     BgMarkHiberPhase @ 0x140AAB248 (BgMarkHiberPhase.c)
 *     BgGetContext @ 0x140AAB2D4 (BgGetContext.c)
 *     BgDisplayFade @ 0x140AAB76C (BgDisplayFade.c)
 *     ResFwpPageOutBackground @ 0x140AAB7D4 (ResFwpPageOutBackground.c)
 *     BgConsoleGetInterface @ 0x140AABC94 (BgConsoleGetInterface.c)
 *     AnFwFadeCompletion @ 0x140AACA74 (AnFwFadeCompletion.c)
 *     AnFwpFadeAnimationTimer @ 0x140AACB80 (AnFwpFadeAnimationTimer.c)
 *     AnFwpProgressIndicatorTimer @ 0x140AACEA0 (AnFwpProgressIndicatorTimer.c)
 *     BgDisplayProgressIndicator @ 0x140AAD188 (BgDisplayProgressIndicator.c)
 *     BgpFwLibraryInitialize @ 0x140AAD490 (BgpFwLibraryInitialize.c)
 *     ResFwBackgroundTransition @ 0x140AADBBC (ResFwBackgroundTransition.c)
 *     ResFwpPageInBackground @ 0x140AADC00 (ResFwpPageInBackground.c)
 *     BgpConsoleInitialize @ 0x140AAE560 (BgpConsoleInitialize.c)
 *     BgLibraryDisable @ 0x140AAE8DC (BgLibraryDisable.c)
 *     BgConsoleDestroyInterface @ 0x140AAE968 (BgConsoleDestroyInterface.c)
 *     BgDisplayBackgroundUpdate @ 0x140AAED40 (BgDisplayBackgroundUpdate.c)
 *     BgReleaseSpinLock @ 0x140AAEDB0 (BgReleaseSpinLock.c)
 *     BgDisplayString @ 0x140AB08A0 (BgDisplayString.c)
 *     BgLibraryDestroy @ 0x140AB0910 (BgLibraryDestroy.c)
 *     BgSetBootGraphicsInformation @ 0x140AB097C (BgSetBootGraphicsInformation.c)
 *     BgpConsoleClearScreen @ 0x140AB09E0 (BgpConsoleClearScreen.c)
 *     BgpConsoleDisplayCharacter @ 0x140AB0AB0 (BgpConsoleDisplayCharacter.c)
 *     BgpConsoleDisplayString @ 0x140AB0E60 (BgpConsoleDisplayString.c)
 *     BgpConsoleGetCursorState @ 0x140AB0FE0 (BgpConsoleGetCursorState.c)
 *     BgpConsoleGetState @ 0x140AB1050 (BgpConsoleGetState.c)
 *     BgpConsoleSetCursor @ 0x140AB12E0 (BgpConsoleSetCursor.c)
 *     BgpConsoleSetTextColor @ 0x140AB1390 (BgpConsoleSetTextColor.c)
 *     AnFwpBackgroundUpdateTimer @ 0x140AB1400 (AnFwpBackgroundUpdateTimer.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

void BgpFwReleaseLock()
{
  unsigned __int64 v0; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v3; // eax
  bool v4; // zf

  if ( (dword_140C0DF90 & 0xC00) != 0xC00 )
  {
    v0 = (unsigned __int8)byte_140C5ABE8;
    KxReleaseSpinLock(&qword_140CF5F50);
    if ( (unsigned __int8)v0 <= 2u )
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v3 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v0 + 1));
        v4 = (v3 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v3;
        if ( v4 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(v0);
    }
  }
}
