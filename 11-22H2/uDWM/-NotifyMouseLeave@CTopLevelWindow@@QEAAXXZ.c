/*
 * XREFs of ?NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ @ 0x180007294
 * Callers:
 *     ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x180006EA8 (-Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 *     ?MouseLeaveWindow@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_MOUSELEAVEWINDOW@@@Z @ 0x18010B248 (-MouseLeaveWindow@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_MOUSELEAVEWINDOW@@@Z.c)
 * Callees:
 *     ?UpdateCapturedButton@CTopLevelWindow@@AEAAXI@Z @ 0x180007358 (-UpdateCapturedButton@CTopLevelWindow@@AEAAXI@Z.c)
 */

void __fastcall CTopLevelWindow::NotifyMouseLeave(CTopLevelWindow *this)
{
  CTopLevelWindow::UpdateCapturedButton(this, 0);
  CTopLevelWindow::ChangeMouseOver(this, 0LL);
}
