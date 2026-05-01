/*
 * XREFs of ?_ScaleBitmap@@YAJPEAUHBITMAP__@@IPEAPEAU1@@Z @ 0x1804991A8
 * Callers:
 *     ?CreateBitmapFromIconWithAlpha@@YAJPEAUHICON__@@HPEAPEAUHBITMAP__@@@Z @ 0x1802313D4 (-CreateBitmapFromIconWithAlpha@@YAJPEAUHICON__@@HPEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x1800406B0 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ConvertIWICBitmapSourceTo32bppHBITMAP@@YAJPEAUIWICBitmapSource@@PEAUIWICImagingFactory@@PEAPEAUHBITMAP__@@@Z @ 0x180231342 (-ConvertIWICBitmapSourceTo32bppHBITMAP@@YAJPEAUIWICBitmapSource@@PEAUIWICImagingFactory@@PEAPEAU.c)
 *     ?ConvertHBITMAPToWICBitmap@@YAJPEAUIWICImagingFactory@@PEAUHBITMAP__@@W4WICBitmapAlphaChannelOption@@PEAPEAUIWICBitmapSource@@@Z @ 0x1804985C4 (-ConvertHBITMAPToWICBitmap@@YAJPEAUIWICImagingFactory@@PEAUHBITMAP__@@W4WICBitmapAlphaChannelOpt.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall _ScaleBitmap(HBITMAP a1, unsigned int a2, HBITMAP *a3)
{
  HRESULT Instance; // ebx
  enum WICBitmapAlphaChannelOption v7; // r8d
  struct IWICImagingFactory *v8; // rbx
  HRESULT (__stdcall *CreateBitmapScaler)(IWICImagingFactory *, IWICBitmapScaler **); // rdi
  struct IWICBitmapSource *v11; // [rsp+30h] [rbp-10h] BYREF
  struct IWICBitmapSource *v12; // [rsp+38h] [rbp-8h] BYREF
  struct IWICImagingFactory *ppv; // [rsp+70h] [rbp+30h] BYREF
  __int64 v14; // [rsp+78h] [rbp+38h] BYREF

  *a3 = 0LL;
  ppv = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
  Instance = CoCreateInstance(
               &CLSID_WICImagingFactory2,
               0LL,
               1u,
               &GUID_ec5ec8a9_c395_4314_9c77_54d7a935ff70,
               (LPVOID *)&ppv);
  if ( Instance >= 0 )
  {
    v12 = 0LL;
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v12);
    Instance = ConvertHBITMAPToWICBitmap(ppv, a1, v7, &v12);
    if ( Instance >= 0 )
    {
      v14 = 0LL;
      v8 = ppv;
      CreateBitmapScaler = ppv->lpVtbl->CreateBitmapScaler;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
      Instance = ((__int64 (__fastcall *)(struct IWICImagingFactory *, __int64 *))CreateBitmapScaler)(v8, &v14);
      if ( Instance >= 0 )
      {
        Instance = (*(__int64 (__fastcall **)(__int64, struct IWICBitmapSource *, _QWORD, _QWORD, int))(*(_QWORD *)v14 + 64LL))(
                     v14,
                     v12,
                     a2,
                     a2,
                     3);
        if ( Instance >= 0 )
        {
          v11 = 0LL;
          Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v11);
          Instance = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IWICBitmapSource **))v14)(
                       v14,
                       &GUID_00000120_a8f2_4877_ba0a_fd2b6645fb94,
                       &v11);
          if ( Instance >= 0 )
            Instance = ConvertIWICBitmapSourceTo32bppHBITMAP(v11, ppv, a3);
          Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v11);
        }
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
    }
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v12);
  }
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
  return (unsigned int)Instance;
}
