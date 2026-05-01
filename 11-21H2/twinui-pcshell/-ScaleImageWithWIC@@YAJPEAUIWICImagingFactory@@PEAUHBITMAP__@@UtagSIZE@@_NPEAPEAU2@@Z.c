/*
 * XREFs of ?ScaleImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUHBITMAP__@@UtagSIZE@@_NPEAPEAU2@@Z @ 0x18023A1D0
 * Callers:
 *     ?CreateIconFromStreamWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@I_NPEAPEAUHICON__@@@Z @ 0x180030D10 (-CreateIconFromStreamWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@I_NPEAPEAUHICON__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x1800406B0 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIApplicationResolver@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIApplicationResolver@@@WRL@Microsoft@@@Details@12@XZ @ 0x18008F050 (--I-$ComPtr@UIApplicationResolver@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UIApplicationRes.c)
 *     ?ConvertWICBitmapToHBITMAP@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@PEAPEAUHBITMAP__@@@Z @ 0x180239068 (-ConvertWICBitmapToHBITMAP@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@PEAPEAUHBITMAP__@@@.c)
 *     ?ScaleImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@UtagSIZE@@_NPEAPEAU2@@Z @ 0x18023A2B2 (-ScaleImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@UtagSIZE@@_NPEAPEAU2@@Z.c)
 *     ?ConvertHBITMAPToWICBitmap@@YAJPEAUIWICImagingFactory@@PEAUHBITMAP__@@W4WICBitmapAlphaChannelOption@@PEAPEAUIWICBitmapSource@@@Z @ 0x1804985C4 (-ConvertHBITMAPToWICBitmap@@YAJPEAUIWICImagingFactory@@PEAUHBITMAP__@@W4WICBitmapAlphaChannelOpt.c)
 */

__int64 __fastcall ScaleImageWithWIC(
        struct IWICImagingFactory *a1,
        HBITMAP a2,
        struct tagSIZE a3,
        __int64 a4,
        HBITMAP *a5)
{
  HBITMAP *v5; // r14
  __int64 *v9; // rdi
  enum WICBitmapAlphaChannelOption v10; // r8d
  int v11; // edi
  __int64 *v12; // rdi
  bool v13; // r9
  struct IWICBitmapSource *v15; // [rsp+30h] [rbp-18h] BYREF
  __int64 v16; // [rsp+38h] [rbp-10h] BYREF

  v5 = a5;
  v15 = 0LL;
  *a5 = 0LL;
  v9 = (__int64 *)*Microsoft::WRL::ComPtr<IApplicationResolver>::operator&((__int64)&v15, &a5);
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(v9);
  v11 = ConvertHBITMAPToWICBitmap(a1, a2, v10, (struct IWICBitmapSource **)v9);
  if ( v11 >= 0 )
  {
    a5 = 0LL;
    v12 = (__int64 *)*Microsoft::WRL::ComPtr<IApplicationResolver>::operator&((__int64)&a5, &v16);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(v12);
    v11 = ScaleImageWithWIC(a1, v15, a3, v13, (struct IWICBitmapSource **)v12);
    if ( v11 >= 0 )
      v11 = ConvertWICBitmapToHBITMAP(a1, (struct IWICBitmapSource *)a5, v5);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&a5);
  }
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v15);
  return (unsigned int)v11;
}
