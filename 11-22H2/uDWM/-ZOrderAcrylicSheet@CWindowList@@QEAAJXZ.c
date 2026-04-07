/*
 * XREFs of ?ZOrderAcrylicSheet@CWindowList@@QEAAJXZ @ 0x18010D5C4
 * Callers:
 *     ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x180029FC0 (-ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?EnsureAcrylicSheet@CWindowList@@AEAAJXZ @ 0x18010A22C (-EnsureAcrylicSheet@CWindowList@@AEAAJXZ.c)
 *     ?OnSnapPreviewInsertAfterNotification@CWindowList@@AEAAJPEAUHWND__@@0@Z @ 0x18010B788 (-OnSnapPreviewInsertAfterNotification@CWindowList@@AEAAJPEAUHWND__@@0@Z.c)
 * Callees:
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x18000D0CC (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180022C70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x1800360BC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CWindowList::ZOrderAcrylicSheet(CWindowList *this)
{
  __int64 v1; // rdx
  struct CVisual *v3; // rbx
  struct CWindowData *WindowDataByHwnd; // rax
  struct CVisual *v5; // rax
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  int inserted; // eax
  unsigned int v8; // ebx
  int v10; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = *((_QWORD *)this + 88);
  v3 = *(struct CVisual **)(v1 + 440);
  WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(this, *(HWND *)(v1 + 664));
  if ( WindowDataByHwnd )
  {
    v5 = (struct CVisual *)*((_QWORD *)WindowDataByHwnd + 55);
    if ( v5 )
      v3 = v5;
  }
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(this, *(_QWORD *)(*((_QWORD *)this + 88) + 136LL));
  inserted = VisualCollection::InsertRelative(
               (struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32),
               *((_QWORD *)this + 68),
               v3,
               0,
               v10);
  v8 = inserted;
  if ( inserted >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1EE1,
    (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)inserted);
  return v8;
}
