/*
 * XREFs of ?EnableBorder@CWindowBorder@@QEAAJ_N@Z @ 0x1801064AC
 * Callers:
 *     ?EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ @ 0x1800A3110 (-EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ.c)
 *     ?AddIconPlate@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x180104594 (-AddIconPlate@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ.c)
 * Callees:
 *     ?CreateBorderStructure@CWindowBorder@@AEAAJXZ @ 0x180019650 (-CreateBorderStructure@CWindowBorder@@AEAAJXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18001A708 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x18001A784 (-SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 *     ?SetIgnoreClipForHitTest@CVisual@@QEAAJ_N@Z @ 0x18001A7C8 (-SetIgnoreClipForHitTest@CVisual@@QEAAJ_N@Z.c)
 *     ?SetBorderModeForContentClip@CWindowBorder@@AEAAXXZ @ 0x18001B944 (-SetBorderModeForContentClip@CWindowBorder@@AEAAXXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180050730 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180052380 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800541A4 (-InternalRelease@-$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180055174 (--4-$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CWindowBorder::EnableBorder(CWindowBorder *this, char a2)
{
  struct CVisual **v2; // rsi
  int BorderStructure; // eax
  unsigned int v5; // ebx
  __int64 v7; // rcx
  __int64 v8; // r8
  std::_Ref_count_base *v9[2]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (struct CVisual **)((char *)this + 248);
  if ( a2 )
  {
    if ( !*v2 )
    {
      BorderStructure = CWindowBorder::CreateBorderStructure(this);
      v5 = BorderStructure;
      if ( BorderStructure < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xE0,
          (__int64)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
          (const char *)(unsigned int)BorderStructure);
        return v5;
      }
    }
  }
  else if ( *v2 )
  {
    VisualCollection::Remove((CWindowBorder *)((char *)this + 32), *v2);
    if ( *((_QWORD *)this + 33) )
    {
      v7 = *((_QWORD *)this + 32);
      if ( v7 )
      {
        CVisualProxy::SetClip(*(CVisualProxy **)(v7 + 16), 0LL);
        CVisual::SetIgnoreClipForHitTest(*((CVisual **)this + 32), 0, v8);
      }
    }
    Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease(v2);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 34);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 35);
    Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease((CBaseObject **)this + 33);
    *(_OWORD *)v9 = 0LL;
    std::shared_ptr<CWindowBorder::CCachedBorderBrush>::operator=((_QWORD *)this + 36, (__int64 *)v9);
    if ( v9[1] )
      std::_Ref_count_base::_Decref(v9[1]);
    CWindowBorder::SetBorderModeForContentClip(this);
  }
  return 0LL;
}
