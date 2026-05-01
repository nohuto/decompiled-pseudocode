/*
 * XREFs of ?ScaleImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@UtagSIZE@@_NPEAPEAU2@@Z @ 0x1802EBEFC
 * Callers:
 *     ?ScaleImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUHBITMAP__@@UtagSIZE@@_NPEAPEAU2@@Z @ 0x1802EBE1A (-ScaleImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUHBITMAP__@@UtagSIZE@@_NPEAPEAU2@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006F258 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@VRecentAppsCache@Discover@PenWorkspace@@@WRL@Microsoft@@IEBAXXZ @ 0x1800704AC (-InternalAddRef@-$ComPtr@VRecentAppsCache@Discover@PenWorkspace@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??I?$ComPtr@UIApplicationResolver@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIApplicationResolver@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800C29A0 (--I-$ComPtr@UIApplicationResolver@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UIApplicationRes.c)
 *     CoCreateInstance_0 @ 0x1801C7A95 (CoCreateInstance_0.c)
 *     ?ConvertWICBitmapPixelFormat@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@U_GUID@@W4WICBitmapDitherType@@PEAPEAU2@@Z @ 0x1802D5A44 (-ConvertWICBitmapPixelFormat@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@U_GUID@@W4WICBitm.c)
 *     ?ScaleWICBitmapSource@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@W4WICBitmapInterpolationMode@@UtagSIZE@@_NPEAPEAU2@@Z @ 0x1802EBFFA (-ScaleWICBitmapSource@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@W4WICBitmapInterpolation.c)
 */

__int64 __fastcall ScaleImageWithWIC(
        struct IWICBitmapSource **a1,
        struct IWICBitmapSource *a2,
        struct tagSIZE a3,
        __int64 a4,
        struct IWICBitmapSource **a5)
{
  struct IWICBitmapSource **v5; // rsi
  __int64 *v8; // rdi
  HRESULT Instance_0; // edi
  __int64 *v10; // rdi
  enum WICBitmapDitherType v11; // r9d
  enum WICBitmapInterpolationMode v12; // r8d
  bool ppv; // [rsp+20h] [rbp-30h]
  __int64 v15; // [rsp+30h] [rbp-20h] BYREF
  struct _GUID v16; // [rsp+40h] [rbp-10h] BYREF
  struct IWICBitmapSource *v17; // [rsp+70h] [rbp+20h] BYREF

  v5 = a5;
  a5 = a1;
  *v5 = 0LL;
  Microsoft::WRL::ComPtr<PenWorkspace::Discover::RecentAppsCache>::InternalAddRef((__int64 *)&a5);
  if ( a5
    || (v8 = (__int64 *)*Microsoft::WRL::ComPtr<IApplicationResolver>::operator&((__int64)&a5, &v17),
        Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(v8),
        Instance_0 = CoCreateInstance_0(
                       &CLSID_WICImagingFactory2,
                       0LL,
                       1u,
                       &GUID_ec5ec8a9_c395_4314_9c77_54d7a935ff70,
                       (LPVOID *)v8),
        Instance_0 >= 0) )
  {
    v17 = 0LL;
    v10 = (__int64 *)*Microsoft::WRL::ComPtr<IApplicationResolver>::operator&((__int64)&v17, &v15);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(v10);
    v16 = GUID_WICPixelFormat32bppPBGRA;
    Instance_0 = ConvertWICBitmapPixelFormat(
                   (struct IWICImagingFactory *)a5,
                   a2,
                   &v16,
                   v11,
                   (struct IWICBitmapSource **)v10);
    if ( Instance_0 >= 0 )
      Instance_0 = ScaleWICBitmapSource((struct IWICImagingFactory *)a5, v17, v12, a3, ppv, v5);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v17);
  }
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&a5);
  return (unsigned int)Instance_0;
}
