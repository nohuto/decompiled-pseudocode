/*
 * XREFs of ?InsertInteropVisualIntoTree@CGlobalLightSet@@AEAAJXZ @ 0x1800403DC
 * Callers:
 *     ?CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x180040320 (-CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180022C70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?GetMagnifierControlForDesktop@CWindowList@@QEAAPEAVCMagnifierControl@@_K@Z @ 0x1800404A4 (-GetMagnifierControlForDesktop@CWindowList@@QEAAPEAVCMagnifierControl@@_K@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x1800412B8 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180050730 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CGlobalLightSet::InsertInteropVisualIntoTree(CGlobalLightSet *this)
{
  struct CVisual *RenderTargetRootVisualForDesktop; // rsi
  struct CMagnifierControl *MagnifierControlForDesktop; // rax
  struct CVisual *v4; // rdi
  int inserted; // ebx
  __int64 v7; // rdx
  int v8; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(
                                       *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                                       *((_QWORD *)this + 11));
  MagnifierControlForDesktop = CWindowList::GetMagnifierControlForDesktop(
                                 *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                                 *((_QWORD *)this + 11));
  v4 = (struct CVisual *)*((_QWORD *)MagnifierControlForDesktop + 4);
  if ( *((struct CVisual **)v4 + 3) == RenderTargetRootVisualForDesktop )
  {
    inserted = VisualCollection::InsertRelative(
                 (struct CVisual *)((char *)RenderTargetRootVisualForDesktop + 32),
                 *((_QWORD *)this + 12),
                 *((struct CVisual **)MagnifierControlForDesktop + 4),
                 1u,
                 v8);
    if ( inserted < 0 )
    {
      v7 = 284LL;
    }
    else
    {
      inserted = VisualCollection::Remove((struct CVisual *)((char *)RenderTargetRootVisualForDesktop + 32), v4);
      if ( inserted < 0 )
      {
        v7 = 287LL;
      }
      else
      {
        inserted = VisualCollection::InsertRelative(
                     (VisualCollection *)(*((_QWORD *)this + 13) + 32LL),
                     (unsigned __int64)v4,
                     0LL,
                     0,
                     v8);
        if ( inserted >= 0 )
          return 0LL;
        v7 = 288LL;
      }
    }
  }
  else
  {
    inserted = -2147024809;
    v7 = 281LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
    (const char *)(unsigned int)inserted,
    v8);
  return (unsigned int)inserted;
}
