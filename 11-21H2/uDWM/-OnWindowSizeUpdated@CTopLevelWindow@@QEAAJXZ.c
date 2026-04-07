/*
 * XREFs of ?OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ @ 0x18001EC08
 * Callers:
 *     ?OnWindowSizeUpdated@CWindowData@@QEAAJXZ @ 0x18001EEB4 (-OnWindowSizeUpdated@CWindowData@@QEAAJXZ.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18004ABB8 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ @ 0x18001ED0C (-NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ.c)
 *     ?SetBorderRect@CWindowBorder@@QEAAXAEBUtagRECT@@@Z @ 0x18001EDA4 (-SetBorderRect@CWindowBorder@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x18001EE50 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?GetBorderRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N@Z @ 0x1800318A0 (-GetBorderRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?UpdateSystemBackdropVisualBorderRect@CTopLevelWindow@@AEAAJXZ @ 0x180062F14 (-UpdateSystemBackdropVisualBorderRect@CTopLevelWindow@@AEAAJXZ.c)
 */

__int64 __fastcall CTopLevelWindow::OnWindowSizeUpdated(CTopLevelWindow *this)
{
  _DWORD *v2; // rcx
  LONG v3; // eax
  LONG v4; // eax
  int v5; // eax
  unsigned int v6; // esi
  CWindowBorder *v7; // rbx
  const struct tagRECT *BorderRect; // rax
  int updated; // eax
  unsigned int v10; // ebx
  struct tagRECT v12; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = (_DWORD *)*((_QWORD *)this + 94);
  v3 = v2[14] - v2[12];
  if ( v3 < 0 )
    v3 = 0;
  v12.left = v3;
  v4 = v2[15] - v2[13];
  if ( v4 < 0 )
    v4 = 0;
  v12.top = v4;
  v5 = CVisual::SetSize(this, (const struct tagSIZE *)&v12);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = (CWindowBorder *)*((_QWORD *)this + 33);
    BorderRect = CTopLevelWindow::GetBorderRect(this, &v12, 0);
    CWindowBorder::SetBorderRect(v7, BorderRect);
    if ( *((_QWORD *)this + 38) )
    {
      updated = CTopLevelWindow::UpdateSystemBackdropVisualBorderRect(this);
      v10 = updated;
      if ( updated < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x5C2,
          (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
          (const char *)(unsigned int)updated);
        return v10;
      }
    }
    CTopLevelWindow::NotifyMouseLeave(this);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x5BBu);
  }
  return v6;
}
