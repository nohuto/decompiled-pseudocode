/*
 * XREFs of ?CreateSurfaceBrushWithSurface@Api@Compositor@Composition@UI@Windows@@UEAAJPEAUICompositionSurface@345@PEAPEAUICompositionSurfaceBrush@345@@Z @ 0x1800454A0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$MakeAndInitialize2@VCompositionSurfaceBrush@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionSurfaceBrush@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x180045644 (--$MakeAndInitialize2@VCompositionSurfaceBrush@Composition@UI@Windows@@V1234@PEAVCompositor@234@.c)
 *     ?SetSurface@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJPEAUICompositionSurface@234@0@Z @ 0x18004B010 (-SetSurface@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJPEAUICompositionSurface@234@0@Z.c)
 *     ?GetRealSurface_NoLock@CompositionSurfaceBrush@Composition@UI@Windows@@SAJPEAUICompositionSurface@234@PEAPEAU5234@1@Z @ 0x18004B10C (-GetRealSurface_NoLock@CompositionSurfaceBrush@Composition@UI@Windows@@SAJPEAUICompositionSurfac.c)
 */

__int64 __fastcall Windows::UI::Composition::Compositor::Api::CreateSurfaceBrushWithSurface(
        Windows::UI::Composition::Compositor::Api *this,
        struct Windows::UI::Composition::ICompositionSurface *a2,
        struct Windows::UI::Composition::ICompositionSurfaceBrush **a3)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  int RealSurface_NoLock; // edi
  int v6; // eax
  Windows::UI::Composition::CompositionSurfaceBrush *v7; // rbx
  __int64 v9; // rdx
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+20h] [rbp-10h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v11; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  Windows::UI::Composition::CompositionSurfaceBrush *v13; // [rsp+60h] [rbp+30h] BYREF
  struct Windows::UI::Composition::ICompositionSurface *v14; // [rsp+70h] [rbp+40h] BYREF
  struct Windows::UI::Composition::ICompositionSurface *v15; // [rsp+78h] [rbp+48h] BYREF

  *a3 = 0LL;
  v15 = 0LL;
  v14 = 0LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 1080);
  RealSurface_NoLock = Windows::UI::Composition::CompositionSurfaceBrush::GetRealSurface_NoLock(a2, &v14, &v15);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (v4->SpinCount & 2) == 0 )
  {
    RealSurface_NoLock = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    goto LABEL_6;
  }
  if ( RealSurface_NoLock < 0 )
  {
    DoStackCaptureDirect(RealSurface_NoLock, 0x4CCu);
    goto LABEL_6;
  }
  v11 = 0LL;
  v13 = 0LL;
  v10 = v4;
  v6 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionSurfaceBrush,Windows::UI::Composition::CompositionSurfaceBrush,Windows::UI::Composition::Compositor *>(
         &v13,
         &v10);
  RealSurface_NoLock = v6;
  if ( v6 < 0 )
  {
    v9 = 2856LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
      (const char *)(unsigned int)v6);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v13);
    DoStackCaptureDirect(RealSurface_NoLock, 0x4CFu);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v11);
    goto LABEL_6;
  }
  v7 = v13;
  v6 = Windows::UI::Composition::CompositionSurfaceBrush::SetSurface(v13, v14, v15);
  RealSurface_NoLock = v6;
  if ( v6 < 0 )
  {
    v9 = 2858LL;
    goto LABEL_10;
  }
  *a3 = (struct Windows::UI::Composition::ICompositionSurfaceBrush *)(((unsigned __int64)v7 + 152) & -(__int64)(v7 != 0LL));
  RealSurface_NoLock = 0;
LABEL_6:
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v14);
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v15);
  return (unsigned int)RealSurface_NoLock;
}
