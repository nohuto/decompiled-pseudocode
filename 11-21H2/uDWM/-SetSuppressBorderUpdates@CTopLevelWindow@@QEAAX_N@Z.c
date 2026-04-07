/*
 * XREFs of ?SetSuppressBorderUpdates@CTopLevelWindow@@QEAAX_N@Z @ 0x1800454CC
 * Callers:
 *     ?StartAnimation@?$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@@impl@winrt@@UEAAHHURect@Foundation@Windows@3@@Z @ 0x180007BB0 (-StartAnimation@-$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopL.c)
 *     ??1TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800450F0 (--1TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UEAA@XZ.c)
 *     ?TransferTransitionVisualAndAnimationEngine@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA?AUTopLevelWindow3DWrapper@345@XZ @ 0x1800476AC (-TransferTransitionVisualAndAnimationEngine@TransitionState@implementation@Transitions@Udwm@winr.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

void __fastcall CTopLevelWindow::SetSuppressBorderUpdates(CTopLevelWindow *this, char a2)
{
  if ( *((_BYTE *)this + 888) != a2 )
  {
    *((_BYTE *)this + 888) = a2;
    if ( !a2 )
      CVisual::SetDirtyFlags(this, 0x100000);
  }
}
