/*
 * XREFs of BgpFwReleaseLock @ 0x140385660
 * Callers:
 *     BgQueryBootGraphicsInformation @ 0x140384CD8 (BgQueryBootGraphicsInformation.c)
 *     BgpFwQueryBootGraphicsInformation @ 0x140384D44 (BgpFwQueryBootGraphicsInformation.c)
 *     KiBugCheckProgress @ 0x140569830 (KiBugCheckProgress.c)
 *     KiDisplayBlueScreen @ 0x14056A134 (KiDisplayBlueScreen.c)
 *     BgDisplaySafeToPowerOffScreen @ 0x140671A40 (BgDisplaySafeToPowerOffScreen.c)
 *     BgLibraryEnable @ 0x140671A78 (BgLibraryEnable.c)
 *     BgDisplayProgressIndicator @ 0x140AEC040 (BgDisplayProgressIndicator.c)
 *     BgDisplayBackgroundUpdate @ 0x140AEC07C (BgDisplayBackgroundUpdate.c)
 *     AnFwFadeCompletion @ 0x140AECFB8 (AnFwFadeCompletion.c)
 *     AnFwpFadeAnimationTimer @ 0x140AED110 (AnFwpFadeAnimationTimer.c)
 *     AnFwpProgressIndicatorTimer @ 0x140AED710 (AnFwpProgressIndicatorTimer.c)
 *     BgpFwLibraryInitialize @ 0x140AEDC78 (BgpFwLibraryInitialize.c)
 *     BgConsoleGetInterface @ 0x140AEE5EC (BgConsoleGetInterface.c)
 *     BgpConsoleInitialize @ 0x140AEE6E0 (BgpConsoleInitialize.c)
 *     ResFwBackgroundTransition @ 0x140AEEAF8 (ResFwBackgroundTransition.c)
 *     ResFwpPageOutBackground @ 0x140AEEBF0 (ResFwpPageOutBackground.c)
 *     BgLibraryDisable @ 0x140AEF480 (BgLibraryDisable.c)
 *     BgDisplayFade @ 0x140AEF4BC (BgDisplayFade.c)
 *     BgConsoleDestroyInterface @ 0x140AEF504 (BgConsoleDestroyInterface.c)
 *     BgDisplayString @ 0x140AF11B8 (BgDisplayString.c)
 *     BgFreeContext @ 0x140AF1228 (BgFreeContext.c)
 *     BgGetContext @ 0x140AF126C (BgGetContext.c)
 *     BgLibraryDestroy @ 0x140AF12D8 (BgLibraryDestroy.c)
 *     BgMarkHiberPhase @ 0x140AF1344 (BgMarkHiberPhase.c)
 *     BgReleaseSpinLock @ 0x140AF137C (BgReleaseSpinLock.c)
 *     BgSetBootGraphicsInformation @ 0x140AF1394 (BgSetBootGraphicsInformation.c)
 *     BgpConsoleClearScreen @ 0x140AF13F0 (BgpConsoleClearScreen.c)
 *     BgpConsoleDisplayCharacter @ 0x140AF14C0 (BgpConsoleDisplayCharacter.c)
 *     BgpConsoleDisplayString @ 0x140AF1870 (BgpConsoleDisplayString.c)
 *     BgpConsoleGetCursorState @ 0x140AF19E0 (BgpConsoleGetCursorState.c)
 *     BgpConsoleGetState @ 0x140AF1A50 (BgpConsoleGetState.c)
 *     BgpConsoleSetCursor @ 0x140AF1CD0 (BgpConsoleSetCursor.c)
 *     BgpConsoleSetTextColor @ 0x140AF1D80 (BgpConsoleSetTextColor.c)
 *     AnFwpBackgroundUpdateTimer @ 0x140AF21E0 (AnFwpBackgroundUpdateTimer.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140250500 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 */

char BgpFwReleaseLock()
{
  int v0; // eax
  unsigned __int64 v1; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v4; // zf

  LOBYTE(v0) = 0;
  if ( (dword_140C0E4B0 & 0xC00) != 0xC00 )
  {
    v1 = (unsigned __int8)byte_140C70D74;
    LOBYTE(v0) = KxReleaseSpinLock((volatile signed __int64 *)&qword_140D0C3B0);
    if ( (unsigned __int8)v1 <= 2u )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v0) = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 )
        {
          LOBYTE(v0) = v0 - 2;
          if ( (unsigned __int8)v0 <= 0xDu )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v0 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v1 + 1));
            v4 = (v0 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v0;
            if ( v4 )
              LOBYTE(v0) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v1);
    }
  }
  return v0;
}
