/*
 * XREFs of ?CleanupAnimation@CAccentTransition@@QEAAXXZ @ 0x1800A21F8
 * Callers:
 *     ?StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z @ 0x1800A22C0 (-StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z.c)
 *     ?StopAnimation@CAccentTransition@@QEAAXXZ @ 0x1800A2574 (-StopAnimation@CAccentTransition@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x1800436BC (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180043790 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x1800438B4 (-UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z @ 0x180044114 (-ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z.c)
 */

void __fastcall CAccentTransition::CleanupAnimation(CAccentTransition *this)
{
  CAnimationEngine *v2; // rax
  CAnimationEngine *v3; // rsi

  v2 = CDesktopManager::AcquireAnimationEngine();
  v3 = v2;
  if ( v2 )
  {
    CAnimationEngine::UnregisterForAnimationCompleteNotification(v2, this);
    CAnimationEngine::ScheduleStopAnimation(v3, *((_DWORD *)this + 9));
    CAnimationEngine::Release(v3);
  }
  *((_DWORD *)this + 9) = -1;
  *((_BYTE *)this + 32) = 0;
}
