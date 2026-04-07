/*
 * XREFs of ?StopAnimation@CLoginTransition@@QEAAJXZ @ 0x18003F6F0
 * Callers:
 *     ?OnAnimationComplete@CLoginTransition@@UEAAJI@Z @ 0x180013E40 (-OnAnimationComplete@CLoginTransition@@UEAAJI@Z.c)
 *     ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x18003F928 (-DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x180045A10 (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ??_GCLoginTransition@@QEAAPEAXI@Z @ 0x180101D68 (--_GCLoginTransition@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?_CleanupAnimation@CLoginTransition@@AEAAXXZ @ 0x180014474 (-_CleanupAnimation@CLoginTransition@@AEAAXXZ.c)
 */

__int64 __fastcall CLoginTransition::StopAnimation(CLoginTransition *this)
{
  if ( *((_BYTE *)this + 68) )
  {
    CLoginTransition::_CleanupAnimation(this);
    *((_BYTE *)this + 68) = 0;
  }
  return 0LL;
}
