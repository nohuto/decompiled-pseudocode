/*
 * XREFs of ?SetVisualProtectContent@CTopLevelWindow@@QEAAJ_N@Z @ 0x1800E5FC8
 * Callers:
 *     ?InitializeVisualTreeClone@CTopLevelWindow@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18001B9FC (-InitializeVisualTreeClone@CTopLevelWindow@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180038808 (-EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?ContentProtectionChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1801024F0 (-ContentProtectionChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTopLevelWindow::SetVisualProtectContent(CTopLevelWindow *this, char a2)
{
  *((_BYTE *)this + 249) &= ~0x40u;
  *((_BYTE *)this + 249) |= a2 << 6;
  return CVisualProxy::SetVisualProtectContent(*((CVisualProxy **)this + 2), a2);
}
