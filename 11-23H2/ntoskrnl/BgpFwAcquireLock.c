/*
 * XREFs of BgpFwAcquireLock @ 0x140385890
 * Callers:
 *     BgQueryBootGraphicsInformation @ 0x140384EB8 (BgQueryBootGraphicsInformation.c)
 *     BgpFwQueryBootGraphicsInformation @ 0x140384F24 (BgpFwQueryBootGraphicsInformation.c)
 *     KiBugCheckProgress @ 0x140569EF0 (KiBugCheckProgress.c)
 *     KiDisplayBlueScreen @ 0x14056A7F4 (KiDisplayBlueScreen.c)
 *     BgDisplaySafeToPowerOffScreen @ 0x140671F90 (BgDisplaySafeToPowerOffScreen.c)
 *     BgLibraryEnable @ 0x140671FC8 (BgLibraryEnable.c)
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
 *     BgAcquireSpinLock @ 0x140AF1190 (BgAcquireSpinLock.c)
 *     BgDisplayString @ 0x140AF11C8 (BgDisplayString.c)
 *     BgFreeContext @ 0x140AF1238 (BgFreeContext.c)
 *     BgGetContext @ 0x140AF127C (BgGetContext.c)
 *     BgLibraryDestroy @ 0x140AF12E8 (BgLibraryDestroy.c)
 *     BgMarkHiberPhase @ 0x140AF1354 (BgMarkHiberPhase.c)
 *     BgSetBootGraphicsInformation @ 0x140AF13A4 (BgSetBootGraphicsInformation.c)
 *     BgpConsoleClearScreen @ 0x140AF1400 (BgpConsoleClearScreen.c)
 *     BgpConsoleDisplayCharacter @ 0x140AF14D0 (BgpConsoleDisplayCharacter.c)
 *     BgpConsoleDisplayString @ 0x140AF1880 (BgpConsoleDisplayString.c)
 *     BgpConsoleGetCursorState @ 0x140AF19F0 (BgpConsoleGetCursorState.c)
 *     BgpConsoleGetState @ 0x140AF1A60 (BgpConsoleGetState.c)
 *     BgpConsoleSetCursor @ 0x140AF1CE0 (BgpConsoleSetCursor.c)
 *     BgpConsoleSetTextColor @ 0x140AF1D90 (BgpConsoleSetTextColor.c)
 *     AnFwpBackgroundUpdateTimer @ 0x140AF21F0 (AnFwpBackgroundUpdateTimer.c)
 * Callees:
 *     KeTestSpinLock @ 0x140227000 (KeTestSpinLock.c)
 *     KxAcquireSpinLock @ 0x140251670 (KxAcquireSpinLock.c)
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
      while ( !KeTestSpinLock(&qword_140D0C3B0) )
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
    KxAcquireSpinLock(&qword_140D0C3B0);
    byte_140C70D74 = CurrentIrql;
  }
}
