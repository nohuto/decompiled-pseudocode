/*
 * XREFs of ?OnWindowSizeUpdated@CWindowData@@QEAAJXZ @ 0x18001EEB4
 * Callers:
 *     ?FrameMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180021C30 (-FrameMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x18001CE70 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ @ 0x18001EC08 (-OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z @ 0x18001EF48 (-NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18004ABB8 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009870C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CWindowData::OnWindowSizeUpdated(CTopLevelWindow **this)
{
  int updated; // edi
  CWindowIconic *v3; // rcx
  int v4; // eax
  __int64 i; // rdi
  __int64 v7; // rdx
  CThumbnailVisual *v8; // rcx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  updated = CTopLevelWindow::OnWindowSizeUpdated(this[55]);
  if ( updated < 0 )
  {
    v7 = 8361LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)updated);
    return (unsigned int)updated;
  }
  v3 = this[61];
  if ( v3 )
  {
    updated = CWindowIconic::UpdateSizeOrMargins(v3, 0);
    if ( updated < 0 )
    {
      v7 = 8366LL;
      goto LABEL_8;
    }
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, CTopLevelWindow **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                + 56)
                                                             + 104LL))(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 56),
         this);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x20B1,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)v4,
      v9);
  CWindowData::NotifySWROfMarginOrSizeChange((CWindowData *)this, 1, 1);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 140); i = (unsigned int)(i + 1) )
  {
    v8 = *(CThumbnailVisual **)(*((_QWORD *)this[67] + i) + 88LL);
    if ( v8 )
      CThumbnailVisual::SetDirtyFlags(v8, 4096);
  }
  return 0LL;
}
