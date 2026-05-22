/*
 * XREFs of ?RecreateUnderlying@CompositionDrawingSurface@Composition@UI@Windows@@EEAAJUSizeInt32@Graphics@4@@Z @ 0x180061850
 * Callers:
 *     ?RuntimeClassInitialize@CompositionDrawingSurface@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVCompositionGraphicsDevice@234@USizeInt32@Graphics@4@W4DirectXPixelFormat@DirectX@84@W4DirectXAlphaMode@DirectX@84@_N5@Z @ 0x1800614E4 (-RuntimeClassInitialize@CompositionDrawingSurface@Composition@UI@Windows@@QEAAJPEAVCompositor@23.c)
 *     ?Resize@CompositionDrawingSurface@Composition@UI@Windows@@QEAAJUSizeInt32@Graphics@4@@Z @ 0x18010A52C (-Resize@CompositionDrawingSurface@Composition@UI@Windows@@QEAAJUSizeInt32@Graphics@4@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?CreateSurface@CSurfaceFactory@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@_NPEAPEAUIDCompositionSurface@@@Z @ 0x18002A850 (-CreateSurface@CSurfaceFactory@DirectComposition@@UEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@_NPEA.c)
 *     ?TranslateDCompError@Composition@UI@Windows@@YAJJ@Z @ 0x180061B90 (-TranslateDCompError@Composition@UI@Windows@@YAJJ@Z.c)
 *     ?NotifyUnderlyingContentChange@InvalidatableSurface@Composition@UI@Windows@@IEAAXXZ @ 0x180061C00 (-NotifyUnderlyingContentChange@InvalidatableSurface@Composition@UI@Windows@@IEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDCompositionSurface@@@Z @ 0x180087FEC (--4-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDCompositionSurface@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateGradientSurface@CSurfaceFactory@DirectComposition@@UEAAJIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@W4D2D1_EXTEND_MODE@@PEAPEAUIDCompositionSurface@@PEAI@Z @ 0x1800FB750 (-CreateGradientSurface@CSurfaceFactory@DirectComposition@@UEAAJIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionDrawingSurface::RecreateUnderlying(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v6; // rbx
  DirectComposition::CSurfaceFactory *v7; // rbx
  unsigned int v8; // eax
  int v9; // edx
  int v10; // eax
  unsigned int v11; // ebx
  struct IDCompositionSurface *v12; // rbx
  __int64 (__fastcall *v13)(struct IDCompositionSurface *, GUID *, __int64 *); // rsi
  unsigned int v15; // eax
  int v16; // edx
  __int64 v17; // rdx
  __int64 v18[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  int v20; // [rsp+8Ch] [rbp+3Ch]
  unsigned int v21; // [rsp+90h] [rbp+40h] BYREF
  struct IDCompositionSurface *v22; // [rsp+98h] [rbp+48h] BYREF

  v20 = HIDWORD(a2);
  v2 = a2;
  v3 = a2;
  v4 = 0LL;
  v18[0] = 0LL;
  if ( !v2 || !HIDWORD(v3) )
    goto LABEL_7;
  v6 = *(_QWORD *)(a1 + 160);
  v22 = 0LL;
  v7 = *(DirectComposition::CSurfaceFactory **)(v6 + 208);
  if ( !*(_BYTE *)(a1 + 240) )
  {
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v22);
    v8 = DirectComposition::CSurfaceFactory::CreateSurface(
           v7,
           v2,
           v20,
           (enum DXGI_FORMAT)*(_DWORD *)(a1 + 172),
           (enum DXGI_ALPHA_MODE)*(_DWORD *)(a1 + 168),
           *(_BYTE *)(a1 + 241),
           &v22);
    v10 = Windows::UI::Composition::TranslateDCompError((Windows::UI::Composition *)v8, v9);
    v11 = v10;
    if ( v10 >= 0 )
      goto LABEL_5;
    v17 = 305LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositiondrawingsurface.cpp",
      (const char *)(unsigned int)v10);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v22);
    goto LABEL_8;
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v22);
  v15 = DirectComposition::CSurfaceFactory::CreateGradientSurface(
          v7,
          v2,
          (enum DXGI_FORMAT)*(_DWORD *)(a1 + 172),
          (enum DXGI_ALPHA_MODE)*(_DWORD *)(a1 + 168),
          D2D1_EXTEND_MODE_CLAMP,
          &v22,
          &v21);
  v10 = Windows::UI::Composition::TranslateDCompError((Windows::UI::Composition *)v15, v16);
  v11 = v10;
  if ( v10 < 0 )
  {
    v17 = 289LL;
    goto LABEL_14;
  }
  v3 = v21 | 0x100000000LL;
LABEL_5:
  v12 = v22;
  v13 = **(__int64 (__fastcall ***)(struct IDCompositionSurface *, GUID *, __int64 *))v22;
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(v18);
  v10 = v13(v12, &GUID_5680c979_14c8_48b5_8b92_3247379fd907, v18);
  v11 = v10;
  if ( v10 < 0 )
  {
    v17 = 309LL;
    goto LABEL_14;
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v22);
  v4 = v18[0];
LABEL_7:
  Microsoft::WRL::ComPtr<IDCompositionSurface>::operator=(a1 + 184, v4);
  *(_QWORD *)(a1 + 176) = v3;
  Windows::UI::Composition::InvalidatableSurface::NotifyUnderlyingContentChange((Windows::UI::Composition::InvalidatableSurface *)a1);
  v11 = 0;
LABEL_8:
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(v18);
  return v11;
}
