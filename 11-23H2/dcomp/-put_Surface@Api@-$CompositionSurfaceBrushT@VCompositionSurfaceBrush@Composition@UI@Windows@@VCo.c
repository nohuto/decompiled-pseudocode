/*
 * XREFs of ?put_Surface@Api@?$CompositionSurfaceBrushT@VCompositionSurfaceBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJPEAUICompositionSurface@345@@Z @ 0x18004AF40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?SetSurface@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJPEAUICompositionSurface@234@0@Z @ 0x18004B010 (-SetSurface@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJPEAUICompositionSurface@234@0@Z.c)
 *     ?GetRealSurface_NoLock@CompositionSurfaceBrush@Composition@UI@Windows@@SAJPEAUICompositionSurface@234@PEAPEAU5234@1@Z @ 0x18004B10C (-GetRealSurface_NoLock@CompositionSurfaceBrush@Composition@UI@Windows@@SAJPEAUICompositionSurfac.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionSurfaceBrushT<Windows::UI::Composition::CompositionSurfaceBrush,Windows::UI::Composition::CompositionBrush>::Api::put_Surface(
        __int64 a1,
        struct Windows::UI::Composition::ICompositionSurface *a2)
{
  __int64 v2; // r15
  int RealSurface_NoLock; // eax
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  int v5; // r14d
  struct Windows::UI::Composition::ICompositionSurface *v6; // rbx
  struct Windows::UI::Composition::ICompositionSurface *v7; // rdi
  int v8; // eax
  __int64 v10; // rdx
  unsigned __int64 v11; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  struct Windows::UI::Composition::ICompositionSurface *v13; // [rsp+60h] [rbp+40h] BYREF
  struct Windows::UI::Composition::ICompositionSurface *v14; // [rsp+68h] [rbp+48h] BYREF

  v14 = 0LL;
  v2 = a1 - 152;
  v13 = 0LL;
  RealSurface_NoLock = Windows::UI::Composition::CompositionSurfaceBrush::GetRealSurface_NoLock(a2, &v13, &v14);
  v4 = *(struct _RTL_CRITICAL_SECTION **)(v2 + 24);
  v5 = RealSurface_NoLock;
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*(_BYTE *)(v2 + 32) & 2) == 0 )
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    v10 = 751LL;
LABEL_12:
    v11 = (unsigned int)v5;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionsurfacebrush.cpp",
      (const char *)v11);
    Microsoft::WRL2::ContextSession::EndApiEntry(v4);
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v13);
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v14);
    return (unsigned int)v5;
  }
  if ( v5 < 0 )
  {
    v10 = 754LL;
    goto LABEL_12;
  }
  v6 = v14;
  v7 = v13;
  v8 = Windows::UI::Composition::CompositionSurfaceBrush::SetSurface(
         (Windows::UI::Composition::CompositionSurfaceBrush *)v2,
         v13,
         v14);
  v5 = v8;
  if ( v8 < 0 )
  {
    v11 = (unsigned int)v8;
    v10 = 756LL;
    goto LABEL_14;
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  if ( v7 )
    (*(void (__fastcall **)(struct Windows::UI::Composition::ICompositionSurface *))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v6 )
    (*(void (__fastcall **)(struct Windows::UI::Composition::ICompositionSurface *))(*(_QWORD *)v6 + 16LL))(v6);
  return 0;
}
