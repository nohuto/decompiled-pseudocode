/*
 * XREFs of ?_WindowEnumCallback@CTDBN@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E0740
 * Callers:
 *     <none>
 * Callees:
 *     ?AbandonTransition@CAnimationScheduler@@QEAAJH@Z @ 0x1800A6BD4 (-AbandonTransition@CAnimationScheduler@@QEAAJH@Z.c)
 */

char __fastcall CTDBN::_WindowEnumCallback(CFade *a1, struct CWindowData *a2, char a3, int *a4)
{
  if ( (a3 & 1) != 0 && (*((_DWORD *)a2 + 168) & 0xFFF) == 0x1B )
    CAnimationScheduler::AbandonTransition(
      *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 22),
      19);
  return CFadeIn::_WindowEnumCallback(a1, a2, a3, a4);
}
