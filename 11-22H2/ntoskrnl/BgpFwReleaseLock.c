/*
 * XREFs of BgpFwReleaseLock @ 0x140384860
 * Callers:
 *     BgQueryBootGraphicsInformation @ 0x140383ED8 (BgQueryBootGraphicsInformation.c)
 *     BgpFwQueryBootGraphicsInformation @ 0x140383F44 (BgpFwQueryBootGraphicsInformation.c)
 *     KiBugCheckProgress @ 0x1405698D0 (KiBugCheckProgress.c)
 *     KiDisplayBlueScreen @ 0x14056A1D4 (KiDisplayBlueScreen.c)
 *     BgDisplaySafeToPowerOffScreen @ 0x140671AB0 (BgDisplaySafeToPowerOffScreen.c)
 *     BgLibraryEnable @ 0x140671AE8 (BgLibraryEnable.c)
 *     BgDisplayBackgroundUpdate @ 0x140AED040 (BgDisplayBackgroundUpdate.c)
 *     AnFwFadeCompletion @ 0x140AEDF7C (AnFwFadeCompletion.c)
 *     AnFwpFadeAnimationTimer @ 0x140AEE0D0 (AnFwpFadeAnimationTimer.c)
 *     AnFwpProgressIndicatorTimer @ 0x140AEE6D0 (AnFwpProgressIndicatorTimer.c)
 *     BgpFwLibraryInitialize @ 0x140AEEC38 (BgpFwLibraryInitialize.c)
 *     BgConsoleGetInterface @ 0x140AEF5AC (BgConsoleGetInterface.c)
 *     BgpConsoleInitialize @ 0x140AEF6A0 (BgpConsoleInitialize.c)
 *     BgLibraryDisable @ 0x140AF01D0 (BgLibraryDisable.c)
 *     BgDisplayFade @ 0x140AF020C (BgDisplayFade.c)
 *     BgConsoleDestroyInterface @ 0x140AF0254 (BgConsoleDestroyInterface.c)
 *     ResFwBackgroundTransition @ 0x140AF0428 (ResFwBackgroundTransition.c)
 *     ResFwpPageOutBackground @ 0x140AF0490 (ResFwpPageOutBackground.c)
 *     BgDisplayProgressIndicator @ 0x140AF06AC (BgDisplayProgressIndicator.c)
 *     BgDisplayString @ 0x140AF21B8 (BgDisplayString.c)
 *     BgFreeContext @ 0x140AF2228 (BgFreeContext.c)
 *     BgGetContext @ 0x140AF226C (BgGetContext.c)
 *     BgLibraryDestroy @ 0x140AF22D8 (BgLibraryDestroy.c)
 *     BgMarkHiberPhase @ 0x140AF2344 (BgMarkHiberPhase.c)
 *     BgReleaseSpinLock @ 0x140AF237C (BgReleaseSpinLock.c)
 *     BgSetBootGraphicsInformation @ 0x140AF2394 (BgSetBootGraphicsInformation.c)
 *     BgpConsoleClearScreen @ 0x140AF23F0 (BgpConsoleClearScreen.c)
 *     BgpConsoleDisplayCharacter @ 0x140AF24C0 (BgpConsoleDisplayCharacter.c)
 *     BgpConsoleDisplayString @ 0x140AF2870 (BgpConsoleDisplayString.c)
 *     BgpConsoleGetCursorState @ 0x140AF29E0 (BgpConsoleGetCursorState.c)
 *     BgpConsoleGetState @ 0x140AF2A50 (BgpConsoleGetState.c)
 *     BgpConsoleSetCursor @ 0x140AF2CD0 (BgpConsoleSetCursor.c)
 *     BgpConsoleSetTextColor @ 0x140AF2D80 (BgpConsoleSetTextColor.c)
 *     AnFwpBackgroundUpdateTimer @ 0x140AF31E0 (AnFwpBackgroundUpdateTimer.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
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
    v1 = (unsigned __int8)byte_140C70E34;
    LOBYTE(v0) = KxReleaseSpinLock((volatile signed __int64 *)&qword_140D0C470);
    if ( (unsigned __int8)v1 <= 2u )
    {
      if ( (_DWORD)KiIrqlFlags )
      {
        LOBYTE(v0) = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 )
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
