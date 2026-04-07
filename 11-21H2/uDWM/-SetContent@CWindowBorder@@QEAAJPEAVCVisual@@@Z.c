/*
 * XREFs of ?SetContent@CWindowBorder@@QEAAJPEAVCVisual@@@Z @ 0x180037460
 * Callers:
 *     ?Initialize@CTopLevelWindow@@MEAAJ_N@Z @ 0x180024870 (-Initialize@CTopLevelWindow@@MEAAJ_N@Z.c)
 *     ?EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ @ 0x18009A1C4 (-EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18000CD38 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetBorderModeForContentClip@CWindowBorder@@AEAAXXZ @ 0x1800374F8 (-SetBorderModeForContentClip@CWindowBorder@@AEAAXXZ.c)
 *     ??4?$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCVisual@@@Z @ 0x180037568 (--4-$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCVisual@@@Z.c)
 *     ?SetIgnoreClipForHitTest@CVisual@@QEAAJ_N@Z @ 0x180037630 (-SetIgnoreClipForHitTest@CVisual@@QEAAJ_N@Z.c)
 *     ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x1800376C0 (-SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 */

__int64 __fastcall CWindowBorder::SetContent(struct CVisual **this, CVisualProxy **a2)
{
  struct CVisual **v2; // rdi
  int inserted; // ebp
  struct CBaseGeometryProxy *v6; // rdx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = this + 32;
  if ( a2 == (CVisualProxy **)this[32] )
    return 0LL;
  if ( a2 )
  {
    inserted = VisualCollection::InsertRelative((VisualCollection *)(this + 4), (struct CVisual *)a2, 0LL, 0, 1);
    if ( inserted < 0 )
    {
      v8 = 672LL;
      goto LABEL_9;
    }
    v6 = this[33];
    if ( v6 )
    {
      inserted = CVisualProxy::SetClip(a2[2], v6);
      if ( inserted < 0 )
      {
        v8 = 676LL;
        goto LABEL_9;
      }
      inserted = CVisual::SetIgnoreClipForHitTest((CVisual *)a2, 1);
      if ( inserted < 0 )
      {
        v8 = 677LL;
        goto LABEL_9;
      }
    }
  }
  if ( !*v2 )
  {
LABEL_6:
    Microsoft::WRL::ComPtr<CVisual>::operator=(v2, a2);
    CWindowBorder::SetBorderModeForContentClip((CWindowBorder *)this);
    return 0LL;
  }
  VisualCollection::Remove((VisualCollection *)(this + 4), *v2);
  inserted = CVisualProxy::SetClip(*((CVisualProxy **)*v2 + 2), 0LL);
  if ( inserted >= 0 )
  {
    inserted = CVisual::SetIgnoreClipForHitTest(*v2, 0);
    if ( inserted >= 0 )
      goto LABEL_6;
    v8 = 686LL;
  }
  else
  {
    v8 = 685LL;
  }
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
    (const char *)(unsigned int)inserted);
  return (unsigned int)inserted;
}
