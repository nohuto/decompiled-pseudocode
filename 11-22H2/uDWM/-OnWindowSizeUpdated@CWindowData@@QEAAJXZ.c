/*
 * XREFs of ?OnWindowSizeUpdated@CWindowData@@QEAAJXZ @ 0x18001A954
 * Callers:
 *     ?FrameMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001A860 (-FrameMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180009DA0 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ @ 0x18001AA44 (-OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x18001EDE0 (-OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A1A98 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x180107A2C (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 */

__int64 __fastcall CWindowData::OnWindowSizeUpdated(CTopLevelWindow **this)
{
  int updated; // edi
  CWindowIconic *v3; // rcx
  int v4; // eax
  __int64 i; // rdi
  CSecondaryWindowRepresentation *v6; // rcx
  __int64 j; // rdi
  CThumbnailVisual *v9; // rcx
  __int64 v10; // rdx
  int v11; // [rsp+20h] [rbp-18h]
  int v12[6]; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  updated = CTopLevelWindow::OnWindowSizeUpdated(this[55]);
  if ( updated < 0 )
  {
    v10 = 715LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowdata.cpp",
      (const char *)(unsigned int)updated,
      v11);
    return (unsigned int)updated;
  }
  v3 = this[61];
  if ( v3 )
  {
    updated = CWindowIconic::UpdateSizeOrMargins(v3, 0);
    if ( updated < 0 )
    {
      v10 = 720LL;
      goto LABEL_17;
    }
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, CTopLevelWindow **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                + 58)
                                                             + 104LL))(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58),
         this);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2D3,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowdata.cpp",
      (const char *)(unsigned int)v4,
      v11);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 130); i = (unsigned int)(i + 1) )
  {
    v6 = (CSecondaryWindowRepresentation *)*((_QWORD *)this[62] + i);
    *(_OWORD *)v12 = *((_OWORD *)v6 + 4);
    if ( *(CTopLevelWindow ***)v12 == this && ((v12[2] - 1) & 0xFFFFFFFD) == 0 )
      CSecondaryWindowRepresentation::OnMarginsOrSizeUpdated(v6);
  }
  for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 140); j = (unsigned int)(j + 1) )
  {
    v9 = *(CThumbnailVisual **)(*((_QWORD *)this[67] + j) + 88LL);
    if ( v9 )
      CThumbnailVisual::SetDirtyFlags(v9, 4096);
  }
  return 0LL;
}
