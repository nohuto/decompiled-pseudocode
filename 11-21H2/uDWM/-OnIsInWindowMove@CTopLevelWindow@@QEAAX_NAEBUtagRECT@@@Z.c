/*
 * XREFs of ?OnIsInWindowMove@CTopLevelWindow@@QEAAX_NAEBUtagRECT@@@Z @ 0x1800E56CC
 * Callers:
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002E9B0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1801045C0 (-IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 * Callees:
 *     ?OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18001B534 (-OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?SetScale@CVisual@@QEAAXNN@Z @ 0x180028A44 (-SetScale@CVisual@@QEAAXNN@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180036354 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180045570 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?ClearInterpolationMode@CVisual@@QEAAXXZ @ 0x18005C49C (-ClearInterpolationMode@CVisual@@QEAAXXZ.c)
 */

void __fastcall CTopLevelWindow::OnIsInWindowMove(unsigned int **this, char a2, const struct tagRECT *a3)
{
  double v6; // xmm6_8
  int v7; // esi
  int v8; // eax
  unsigned int *v9; // rcx
  struct tagPOINT v10; // [rsp+60h] [rbp+8h] BYREF

  if ( a2 )
  {
    v6 = DOUBLE_0_95;
    v7 = (int)(*((double *)CDesktopManager::s_pDesktopManagerInstance + 51) * 4.0);
  }
  else
  {
    v6 = DOUBLE_1_0;
    v7 = 0;
  }
  if ( *((double *)this + 22) != v6 )
  {
    CVisual::SetScale((CVisual *)this, v6, v6);
    CTopLevelWindow::OnWindowScaleUpdated((CTopLevelWindow *)this);
  }
  v8 = 0;
  if ( a3->right - a3->left >= 0 )
    v8 = a3->right - a3->left;
  v10.y = v7 + a3->top;
  v10.x = a3->left + (int)((double)v8 * (1.0 - v6) * 0.5 + 0.5);
  CVisual::SetOffset((struct tagPOINT *)this, &v10);
  v9 = this[62];
  if ( v9 )
  {
    if ( a2 )
      CVisual::SetInterpolationMode(v9, 6u);
    else
      CVisual::ClearInterpolationMode((CVisual *)v9);
  }
}
