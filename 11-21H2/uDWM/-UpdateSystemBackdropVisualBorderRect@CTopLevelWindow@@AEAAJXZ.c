/*
 * XREFs of ?UpdateSystemBackdropVisualBorderRect@CTopLevelWindow@@AEAAJXZ @ 0x180062F14
 * Callers:
 *     ?OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ @ 0x18001EC08 (-OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180030C00 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ @ 0x180033FB4 (-UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetBorderRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N@Z @ 0x1800318A0 (-GetBorderRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?SetBorderRect@CSystemBackdropVisual@@QEAAJAEBUtagRECT@@@Z @ 0x1800E18D0 (-SetBorderRect@CSystemBackdropVisual@@QEAAJAEBUtagRECT@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateSystemBackdropVisualBorderRect(CTopLevelWindow *this)
{
  _DWORD *v2; // rdx
  int v3; // ecx
  int v4; // ecx
  int v5; // eax
  unsigned int v6; // ebx
  RECT rcSrc2; // [rsp+20h] [rbp-38h] BYREF
  struct tagRECT rcDst; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  CTopLevelWindow::GetBorderRect(this, &rcDst, 0);
  if ( (*((_BYTE *)this + 248) & 4) != 0 )
  {
    v2 = (_DWORD *)*((_QWORD *)this + 94);
    v3 = 0;
    rcSrc2.left = *((_DWORD *)this + 165);
    rcSrc2.top = *((_DWORD *)this + 167);
    if ( v2[14] - v2[12] >= 0 )
      v3 = v2[14] - v2[12];
    rcSrc2.right = v3 - *((_DWORD *)this + 166);
    v4 = 0;
    if ( v2[15] - v2[13] >= 0 )
      v4 = v2[15] - v2[13];
    rcSrc2.bottom = v4 - *((_DWORD *)this + 168);
    IntersectRect(&rcDst, &rcDst, &rcSrc2);
  }
  v5 = CSystemBackdropVisual::SetBorderRect(*((CSystemBackdropVisual **)this + 38), &rcDst);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x17F,
    (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
