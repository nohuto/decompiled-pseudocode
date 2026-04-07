/*
 * XREFs of ?EnsureAcrylicSheet@CWindowList@@AEAAJXZ @ 0x1801034A8
 * Callers:
 *     ?ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ @ 0x18010204C (-ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ.c)
 *     ?IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1801045C0 (-IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     ?OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x180104FD8 (-OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18000CD38 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18001E184 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Create@CAcrylicSheet@@SAJPEAVCWindowData@@_NPEAPEAV1@@Z @ 0x18009A014 (-Create@CAcrylicSheet@@SAJPEAVCWindowData@@_NPEAPEAV1@@Z.c)
 *     ?reset@?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18009BD40 (-reset@-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall CWindowList::EnsureAcrylicSheet(CWindowList *this)
{
  struct CAcrylicSheet **v1; // rdi
  struct CVisual *v3; // rdx
  __int64 v4; // rdx
  int v5; // esi
  __int64 v6; // rdx
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  int inserted; // eax
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (struct CAcrylicSheet **)((char *)this + 560);
  v3 = (struct CVisual *)*((_QWORD *)this + 70);
  if ( v3 )
  {
    v5 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)v3 + 3) + 32LL), v3);
    if ( v5 < 0 )
    {
      v6 = 3163LL;
      goto LABEL_4;
    }
  }
  else
  {
    wil::com_ptr_t<CVisual,wil::err_returncode_policy>::reset((CBaseObject **)this + 70);
    LOBYTE(v4) = *((_BYTE *)this + 659);
    v5 = CAcrylicSheet::Create(*((struct CWindowData **)this + 88), v4, v1);
    if ( v5 < 0 )
    {
      v6 = 3158LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)v5);
      return (unsigned int)v5;
    }
  }
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(this, *(_QWORD *)(*((_QWORD *)this + 88) + 136LL));
  inserted = VisualCollection::InsertRelative(
               (struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32),
               *v1,
               *(struct CVisual **)(*((_QWORD *)this + 88) + 440LL),
               0,
               1);
  v10 = inserted;
  if ( inserted >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC5F,
    (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)inserted);
  return v10;
}
