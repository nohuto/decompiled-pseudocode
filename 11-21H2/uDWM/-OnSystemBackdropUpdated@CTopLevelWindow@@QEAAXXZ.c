/*
 * XREFs of ?OnSystemBackdropUpdated@CTopLevelWindow@@QEAAXXZ @ 0x1800E57F4
 * Callers:
 *     ?SetSystemBackdropType@CWindowList@@UEAAJPEAUIDwmWindow@@W4SYSTEMBACKDROP_TYPE@@@Z @ 0x1801065C0 (-SetSystemBackdropType@CWindowList@@UEAAJPEAUIDwmWindow@@W4SYSTEMBACKDROP_TYPE@@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

void __fastcall CTopLevelWindow::OnSystemBackdropUpdated(CTopLevelWindow *this)
{
  CVisual::SetDirtyFlags(this, 0x4000);
  CVisual::SetDirtyFlags(this, 0x100000);
}
