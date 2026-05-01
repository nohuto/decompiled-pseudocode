/*
 * XREFs of ?ConvertHBITMAPToWICBitmap@@YAJPEAUIWICImagingFactory@@PEAUHBITMAP__@@W4WICBitmapAlphaChannelOption@@PEAPEAUIWICBitmapSource@@@Z @ 0x180551BE8
 * Callers:
 *     ?ScaleImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUHBITMAP__@@UtagSIZE@@_NPEAPEAU2@@Z @ 0x1802EBE1A (-ScaleImageWithWIC@@YAJPEAUIWICImagingFactory@@PEAUHBITMAP__@@UtagSIZE@@_NPEAPEAU2@@Z.c)
 *     ?_ScaleBitmap@@YAJPEAUHBITMAP__@@IPEAPEAU1@@Z @ 0x1805527D4 (-_ScaleBitmap@@YAJPEAUHBITMAP__@@IPEAPEAU1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006F258 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@VRecentAppsCache@Discover@PenWorkspace@@@WRL@Microsoft@@IEBAXXZ @ 0x1800704AC (-InternalAddRef@-$ComPtr@VRecentAppsCache@Discover@PenWorkspace@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ConvertHBITMAPToWICBitmap(
        struct IWICImagingFactory *a1,
        HBITMAP a2,
        enum WICBitmapAlphaChannelOption a3,
        struct IWICBitmapSource **a4)
{
  LPVOID v6; // rbx
  HRESULT v7; // ebx
  __int64 (__fastcall *v8)(LPVOID, HBITMAP, _QWORD, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, struct IWICBitmapSource **)); // rdi
  LPVOID ppv; // [rsp+50h] [rbp+20h] BYREF
  __int64 (__fastcall ***v11)(_QWORD, GUID *, struct IWICBitmapSource **); // [rsp+68h] [rbp+38h] BYREF

  *a4 = 0LL;
  ppv = a1;
  Microsoft::WRL::ComPtr<PenWorkspace::Discover::RecentAppsCache>::InternalAddRef((__int64 *)&ppv);
  v6 = ppv;
  if ( !ppv )
  {
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
    v7 = CoCreateInstance(&CLSID_WICImagingFactory2, 0LL, 1u, &GUID_ec5ec8a9_c395_4314_9c77_54d7a935ff70, &ppv);
    if ( v7 < 0 )
      goto LABEL_7;
    v6 = ppv;
  }
  v11 = 0LL;
  v8 = *(__int64 (__fastcall **)(LPVOID, HBITMAP, _QWORD, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, struct IWICBitmapSource **)))(*(_QWORD *)v6 + 168LL);
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v11);
  v7 = v8(v6, a2, 0LL, 0LL, &v11);
  if ( v7 >= 0 )
    v7 = (**v11)(v11, &GUID_00000120_a8f2_4877_ba0a_fd2b6645fb94, a4);
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v11);
LABEL_7:
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&ppv);
  return (unsigned int)v7;
}
