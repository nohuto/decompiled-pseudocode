/*
 * XREFs of BgpFwAcquireLock @ 0x1403848B0
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
 *     BgAcquireSpinLock @ 0x140AF2180 (BgAcquireSpinLock.c)
 *     BgDisplayString @ 0x140AF21B8 (BgDisplayString.c)
 *     BgFreeContext @ 0x140AF2228 (BgFreeContext.c)
 *     BgGetContext @ 0x140AF226C (BgGetContext.c)
 *     BgLibraryDestroy @ 0x140AF22D8 (BgLibraryDestroy.c)
 *     BgMarkHiberPhase @ 0x140AF2344 (BgMarkHiberPhase.c)
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
 *     KeTestSpinLock @ 0x140226F10 (KeTestSpinLock.c)
 *     KxAcquireSpinLock @ 0x140251490 (KxAcquireSpinLock.c)
 */

void BgpFwAcquireLock()
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v2; // rax

  if ( (dword_140C0E4B0 & 0xC00) != 0xC00 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql <= 2u )
    {
      while ( !KeTestSpinLock(&qword_140D0C470) )
        ;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (_DWORD)KiIrqlFlags )
      {
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          LODWORD(v2) = 4;
          if ( CurrentIrql != 2 )
            v2 = (-1LL << (CurrentIrql + 1)) & 4;
          SchedulerAssist[5] |= v2;
        }
      }
    }
    KxAcquireSpinLock(&qword_140D0C470);
    byte_140C70E34 = CurrentIrql;
  }
}
