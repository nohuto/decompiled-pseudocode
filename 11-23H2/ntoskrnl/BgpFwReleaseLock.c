/*
 * XREFs of BgpFwReleaseLock @ 0x140385840
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
 *     BgDisplayString @ 0x140AF11C8 (BgDisplayString.c)
 *     BgFreeContext @ 0x140AF1238 (BgFreeContext.c)
 *     BgGetContext @ 0x140AF127C (BgGetContext.c)
 *     BgLibraryDestroy @ 0x140AF12E8 (BgLibraryDestroy.c)
 *     BgMarkHiberPhase @ 0x140AF1354 (BgMarkHiberPhase.c)
 *     BgReleaseSpinLock @ 0x140AF138C (BgReleaseSpinLock.c)
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
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
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
