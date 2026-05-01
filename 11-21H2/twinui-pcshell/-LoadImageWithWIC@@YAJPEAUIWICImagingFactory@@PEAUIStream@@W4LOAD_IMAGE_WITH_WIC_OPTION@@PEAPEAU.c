/*
 * XREFs of ?LoadImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@W4LOAD_IMAGE_WITH_WIC_OPTION@@PEAPEAUIWICBitmapSource@@PEAPEAUIWICBitmapFrameDecode@@PEAU_GUID@@@Z @ 0x180030DEC
 * Callers:
 *     ?CreateIconFromStreamWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@I_NPEAPEAUHICON__@@@Z @ 0x180030D10 (-CreateIconFromStreamWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@I_NPEAPEAUHICON__@@@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync$_ResumeCoro$1 @ 0x1801BC650 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowLivePreviewAsync$_Resu.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync$_ResumeCoro$1 @ 0x1801BDA00 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--TrySetWindowThumbnailAsync$_Res.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x1800406B0 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?add_ref@?$com_ptr@UIServiceProvider@@@winrt@@AEBAXXZ @ 0x18004159C (-add_ref@-$com_ptr@UIServiceProvider@@@winrt@@AEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?WICOrientateFrame@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapDecoder@@PEAUIWICBitmapFrameDecode@@_NPEAPEAUIWICBitmapSource@@@Z @ 0x18057CDD4 (-WICOrientateFrame@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapDecoder@@PEAUIWICBitmapFrameDecode@.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall LoadImageWithWIC(
        struct IWICImagingFactory *a1,
        __int64 a2,
        int a3,
        struct IWICBitmapSource **a4,
        struct IWICBitmapDecoder *a5)
{
  struct IWICImagingFactory *v8; // rbx
  HRESULT (__stdcall *CreateDecoderFromStream)(IWICImagingFactory *, IStream *, const GUID *, WICDecodeOptions, IWICBitmapDecoder **); // rdi
  HRESULT Instance; // ebx
  struct IWICBitmapDecoder *v12; // rbx
  HRESULT (__stdcall *GetFrame)(IWICBitmapDecoder *, UINT, IWICBitmapFrameDecode **); // rdi
  struct IWICImagingFactory *ppv; // [rsp+60h] [rbp+30h] BYREF
  struct IWICBitmapFrameDecode *v15; // [rsp+78h] [rbp+48h] BYREF

  *a4 = 0LL;
  ppv = a1;
  winrt::com_ptr<IServiceProvider>::add_ref(&ppv);
  v8 = ppv;
  if ( !ppv )
  {
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&ppv);
    Instance = CoCreateInstance(
                 &CLSID_WICImagingFactory2,
                 0LL,
                 1u,
                 &GUID_ec5ec8a9_c395_4314_9c77_54d7a935ff70,
                 (LPVOID *)&ppv);
    if ( Instance < 0 )
      goto LABEL_4;
    v8 = ppv;
  }
  a5 = 0LL;
  CreateDecoderFromStream = v8->lpVtbl->CreateDecoderFromStream;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&a5);
  Instance = ((__int64 (__fastcall *)(struct IWICImagingFactory *, __int64, GUID *, _QWORD, struct IWICBitmapDecoder **))CreateDecoderFromStream)(
               v8,
               a2,
               &GUID_VendorMicrosoftBuiltIn,
               0LL,
               &a5);
  if ( Instance >= 0 )
  {
    v15 = 0LL;
    v12 = a5;
    GetFrame = a5->lpVtbl->GetFrame;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
    Instance = ((__int64 (__fastcall *)(struct IWICBitmapDecoder *, _QWORD, struct IWICBitmapFrameDecode **))GetFrame)(
                 v12,
                 0LL,
                 &v15);
    if ( Instance >= 0 )
    {
      if ( a3 )
        Instance = WICOrientateFrame(ppv, a5, v15, a3 == 2, a4);
      else
        Instance = ((__int64 (__fastcall *)(struct IWICBitmapFrameDecode *, GUID *, struct IWICBitmapSource **))v15->lpVtbl->QueryInterface)(
                     v15,
                     &GUID_00000120_a8f2_4877_ba0a_fd2b6645fb94,
                     a4);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
  }
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&a5);
LABEL_4:
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&ppv);
  return (unsigned int)Instance;
}
