/*
 * XREFs of ?CreateCompositionSurfaceForSwapChain@SystemOnly@Compositor@Composition@UI@Windows@@UEAAJPEAUIUnknown@@PEAPEAUICompositionSurface@345@@Z @ 0x18010ED70
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?CreateCompositionSurfaceForSwapChain@CompositorCommon@Composition@UI@Windows@@QEAAJPEAUIUnknown@@PEAPEAUICompositionSurface@234@@Z @ 0x18012564C (-CreateCompositionSurfaceForSwapChain@CompositorCommon@Composition@UI@Windows@@QEAAJPEAUIUnknown.c)
 */

__int64 __fastcall Windows::UI::Composition::Compositor::SystemOnly::CreateCompositionSurfaceForSwapChain(
        Windows::UI::Composition::Compositor::SystemOnly *this,
        struct IUnknown *a2,
        struct Windows::UI::Composition::ICompositionSurface **a3)
{
  Windows::UI::Composition::CompositorCommon *v3; // rdi
  unsigned int v6; // ebx
  int v7; // eax
  struct Windows::UI::Composition::ICompositionSurface *v8; // rax
  struct Windows::UI::Composition::ICompositionSurface *v10; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v3 = (Windows::UI::Composition::Compositor::SystemOnly *)((char *)this - 1128);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 1128));
  if ( (*((_BYTE *)v3 + 32) & 2) != 0 )
  {
    v10 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v10);
    v7 = Windows::UI::Composition::CompositorCommon::CreateCompositionSurfaceForSwapChain(v3, a2, &v10);
    v6 = v7;
    if ( v7 < 0 )
    {
      DoStackCaptureDirect(v7, 0x875u);
    }
    else
    {
      v8 = v10;
      v10 = 0LL;
      v6 = 0;
      *a3 = v8;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v10);
  }
  else
  {
    v6 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v3);
  return v6;
}
