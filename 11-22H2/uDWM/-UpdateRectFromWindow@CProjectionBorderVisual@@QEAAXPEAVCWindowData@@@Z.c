/*
 * XREFs of ?UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z @ 0x1800D5CE0
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180026780 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x18002E744 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800301F4 (-ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?OnWindowSizeUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800528B0 (-OnWindowSizeUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?UpdateRect@CSolidRectangleVisual@@QEAAXAEBUtagRECT@@@Z @ 0x1800D5C70 (-UpdateRect@CSolidRectangleVisual@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?GetBorderMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x1800E5BB0 (-GetBorderMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z.c)
 */

void __fastcall CProjectionBorderVisual::UpdateRectFromWindow(const RECT *this, struct CWindowData *a2)
{
  CTopLevelWindow *v4; // rcx
  LONG top; // eax
  LONG left; // edx
  LONG bottom; // ecx
  LONG right; // r8d
  struct _MARGINS v9; // [rsp+20h] [rbp-30h] BYREF
  struct tagRECT v10; // [rsp+30h] [rbp-20h] BYREF

  v4 = (CTopLevelWindow *)*((_QWORD *)a2 + 55);
  v10 = (struct tagRECT)*((_OWORD *)a2 + 3);
  if ( v4 )
  {
    CTopLevelWindow::GetBorderMargins(v4, &v9);
    top = v9.cyTopHeight + v10.top;
    left = v9.cxLeftWidth + v10.left;
    bottom = v10.bottom - v9.cyBottomHeight;
    right = v10.right - v9.cxRightWidth;
    v10.right -= v9.cxRightWidth;
    v10.top += v9.cyTopHeight;
    v10.left += v9.cxLeftWidth;
    v10.bottom -= v9.cyBottomHeight;
  }
  else
  {
    bottom = v10.bottom;
    right = v10.right;
    top = v10.top;
    left = v10.left;
  }
  if ( right < left || bottom < top )
    v10 = (struct tagRECT)*((_OWORD *)a2 + 3);
  CSolidRectangleVisual::UpdateRect(this, &v10);
}
