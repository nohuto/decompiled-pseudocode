/*
 * XREFs of ?SetContent@CWindowBorder@@QEAAJPEAVCVisual@@@Z @ 0x18001B6B0
 * Callers:
 *     ?Initialize@CTopLevelWindow@@EEAAJXZ @ 0x180021590 (-Initialize@CTopLevelWindow@@EEAAJXZ.c)
 *     ?EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ @ 0x1800A3110 (-EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ.c)
 *     ?AddIconPlate@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x180104594 (-AddIconPlate@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ.c)
 * Callees:
 *     ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x18001A784 (-SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 *     ?SetIgnoreClipForHitTest@CVisual@@QEAAJ_N@Z @ 0x18001A7C8 (-SetIgnoreClipForHitTest@CVisual@@QEAAJ_N@Z.c)
 *     ?SetBorderModeForContentClip@CWindowBorder@@AEAAXXZ @ 0x18001B944 (-SetBorderModeForContentClip@CWindowBorder@@AEAAXXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180022C70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180050730 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CWindowBorder::SetContent(struct CVisual **this, struct CVisual *a2)
{
  int inserted; // esi
  struct CBaseGeometryProxy *v5; // rdx
  struct CVisual *v6; // rdx
  CBaseObject *v7; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r8
  int v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a2 == this[32] )
    return 0LL;
  if ( a2 )
  {
    inserted = VisualCollection::InsertRelative((VisualCollection *)(this + 4), a2, 0LL, 0, v12);
    if ( inserted < 0 )
    {
      v9 = 675LL;
      goto LABEL_14;
    }
    v5 = this[33];
    if ( v5 )
    {
      inserted = CVisualProxy::SetClip(*((CVisualProxy **)a2 + 2), v5);
      if ( inserted < 0 )
      {
        v9 = 679LL;
        goto LABEL_14;
      }
      inserted = CVisual::SetIgnoreClipForHitTest(a2, 1, v10);
      if ( inserted < 0 )
      {
        v9 = 680LL;
        goto LABEL_14;
      }
    }
  }
  v6 = this[32];
  if ( !v6 )
  {
LABEL_6:
    if ( this[32] != a2 )
    {
      if ( a2 )
        _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
      v7 = this[32];
      this[32] = a2;
      if ( v7 )
        CBaseObject::Release(v7);
    }
    CWindowBorder::SetBorderModeForContentClip((CWindowBorder *)this);
    return 0LL;
  }
  VisualCollection::Remove((VisualCollection *)(this + 4), v6);
  inserted = CVisualProxy::SetClip(*((CVisualProxy **)this[32] + 2), 0LL);
  if ( inserted >= 0 )
  {
    inserted = CVisual::SetIgnoreClipForHitTest(this[32], 0, v11);
    if ( inserted >= 0 )
      goto LABEL_6;
    v9 = 689LL;
  }
  else
  {
    v9 = 688LL;
  }
LABEL_14:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
    (const char *)(unsigned int)inserted,
    v12);
  return (unsigned int)inserted;
}
