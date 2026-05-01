/*
 * XREFs of ??$CreateAgileHelper@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@_K@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@_K@Foundation@Windows@@PEAPEAU345@@Z @ 0x180325544
 * Callers:
 *     ?add_TargetWindowMoved@GamingOverlayExperienceManager@@UEAAJPEAU?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@_K@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x18033CA40 (-add_TargetWindowMoved@GamingOverlayExperienceManager@@UEAAJPEAU-$ITypedEventHandler@PEAUIGaming.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??B?$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ @ 0x1800A3A68 (--B-$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$AsAgile@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@_K@Foundation@Windows@@@WRL@Microsoft@@YAJPEAU?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@_K@Foundation@Windows@@PEAVAgileRef@01@@Z @ 0x180324648 (--$AsAgile@U-$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@_ea_180324648.c)
 *     ??0?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@_K@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_cfa7a84dcd71ac538ef1b41290c62765_@@$0?0PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@_K@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@_K@Foundation@Windows@@EAAJPEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@3@_K@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_cfa7a84dcd71ac538ef1b41290c62765_@@@Z @ 0x18032ADA0 (--0-$DelegateInvokeHelper@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$_ea_18032ADA0.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateAgileHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,unsigned __int64>>(
        __int64 a1,
        __int64 *a2)
{
  __int64 *v4; // rax
  int v5; // ebx
  __int64 *v6; // rax
  void *v7; // rax
  __int64 v8; // rbx
  __int64 *v10; // [rsp+48h] [rbp+28h] BYREF
  __int64 *v11; // [rsp+50h] [rbp+30h] BYREF
  __int64 v12; // [rsp+58h] [rbp+38h] BYREF

  *a2 = 0LL;
  v10 = 0LL;
  v11 = (__int64 *)&v10;
  v4 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::AgileRef>::operator Microsoft::WRL::AgileRef *(&v11);
  v5 = Microsoft::WRL::AsAgile<Windows::Foundation::ITypedEventHandler<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,unsigned __int64>>(
         a1,
         v4);
  if ( v5 >= 0 )
  {
    v6 = v10;
    v10 = 0LL;
    v11 = v6;
    v7 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v7 )
      v8 = Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,unsigned __int64>::*)(Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,unsigned __int64)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,unsigned __int64>,Microsoft::WRL::FtmBase>,_lambda_cfa7a84dcd71ac538ef1b41290c62765_,-1,Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,unsigned __int64>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,unsigned __int64>,Microsoft::WRL::FtmBase>,_lambda_cfa7a84dcd71ac538ef1b41290c62765_,-1,Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,unsigned __int64>(
             v7,
             &v11);
    else
      v8 = 0LL;
    v12 = v8;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v11);
    if ( v8 )
    {
      v12 = 0LL;
      *a2 = v8;
      v5 = 0;
    }
    else
    {
      v5 = -2147024882;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v10);
  return (unsigned int)v5;
}
