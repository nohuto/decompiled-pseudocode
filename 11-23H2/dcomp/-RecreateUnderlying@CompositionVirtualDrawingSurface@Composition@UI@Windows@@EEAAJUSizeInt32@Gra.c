/*
 * XREFs of ?RecreateUnderlying@CompositionVirtualDrawingSurface@Composition@UI@Windows@@EEAAJUSizeInt32@Graphics@4@@Z @ 0x18003A7D0
 * Callers:
 *     ?RuntimeClassInitialize@CompositionVirtualDrawingSurface@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVCompositionGraphicsDevice@234@USizeInt32@Graphics@4@W4DirectXPixelFormat@DirectX@84@W4DirectXAlphaMode@DirectX@84@@Z @ 0x18003A738 (-RuntimeClassInitialize@CompositionVirtualDrawingSurface@Composition@UI@Windows@@QEAAJPEAVCompos.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?CreateVirtualSurface@CSurfaceFactory@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAUIDCompositionVirtualSurface@@@Z @ 0x18003A890 (-CreateVirtualSurface@CSurfaceFactory@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE.c)
 *     ?TranslateDCompError@Composition@UI@Windows@@YAJJ@Z @ 0x180061B90 (-TranslateDCompError@Composition@UI@Windows@@YAJJ@Z.c)
 *     ?NotifyUnderlyingContentChange@InvalidatableSurface@Composition@UI@Windows@@IEAAXXZ @ 0x180061C00 (-NotifyUnderlyingContentChange@InvalidatableSurface@Composition@UI@Windows@@IEAAXXZ.c)
 *     ??4?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDCompositionSurface@@@Z @ 0x180087FEC (--4-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDCompositionSurface@@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionVirtualDrawingSurface::RecreateUnderlying(
        __int64 a1,
        __int64 a2)
{
  unsigned int v3; // ebx
  DirectComposition::CSurfaceFactory *v4; // rdi
  unsigned int v5; // eax
  int v6; // edx
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IDCompositionVirtualSurface *v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+48h] [rbp+10h]

  v12 = a2;
  v11 = 0LL;
  v3 = a2;
  v4 = *(DirectComposition::CSurfaceFactory **)(*(_QWORD *)(a1 + 160) + 208LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v11);
  v5 = DirectComposition::CSurfaceFactory::CreateVirtualSurface(
         v4,
         v3,
         HIDWORD(v12),
         (enum DXGI_FORMAT)*(_DWORD *)(a1 + 172),
         (DXGI_ALPHA_MODE)*(_DWORD *)(a1 + 168),
         &v11);
  v7 = Windows::UI::Composition::TranslateDCompError((Windows::UI::Composition *)v5, v6);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEA,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionvirtualdrawingsurface.cpp",
      (const char *)(unsigned int)v7);
  }
  else
  {
    Microsoft::WRL::ComPtr<IDCompositionSurface>::operator=(a1 + 184, v11);
    Windows::UI::Composition::InvalidatableSurface::NotifyUnderlyingContentChange((Windows::UI::Composition::InvalidatableSurface *)a1);
    v8 = 0;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v11);
  return v8;
}
