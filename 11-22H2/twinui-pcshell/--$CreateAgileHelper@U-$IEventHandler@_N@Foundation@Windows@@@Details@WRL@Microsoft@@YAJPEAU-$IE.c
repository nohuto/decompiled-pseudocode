/*
 * XREFs of ??$CreateAgileHelper@U?$IEventHandler@_N@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$IEventHandler@_N@Foundation@Windows@@PEAPEAU345@@Z @ 0x1800EA390
 * Callers:
 *     ?add_OverlayDisplayFullscreenChanged@GamingOverlayExperienceManager@@UEAAJPEAU?$IEventHandler@_N@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x1801B2DF0 (-add_OverlayDisplayFullscreenChanged@GamingOverlayExperienceManager@@UEAAJPEAU-$IEventHandler@_N.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@_N@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_7a5cfbbed259c3858157510f0ba1f330_@@$0?0PEAUIInspectable@@E@?$DelegateArgTraits@P8?$IEventHandler_impl@U?$AggregateType@_NE@Internal@Foundation@Windows@@@Foundation@Windows@@EAAJPEAUIInspectable@@E@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_7a5cfbbed259c3858157510f0ba1f330_@@@Z @ 0x1800EA478 (--0-$DelegateInvokeHelper@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$IEventHandler.c)
 *     ??B?$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ @ 0x1800EACB8 (--B-$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::CreateAgileHelper<Windows::Foundation::IEventHandler<bool>>(
        __int64 a1,
        __int64 *a2)
{
  __int64 *v4; // rax
  __int64 *v5; // rbx
  int AgileReference; // ebx
  void *v7; // rax
  __int64 v8; // rbx
  __int64 v10; // rcx
  __int64 *v11; // [rsp+40h] [rbp+20h] BYREF
  __int64 *v12; // [rsp+48h] [rbp+28h] BYREF
  __int64 v13; // [rsp+50h] [rbp+30h] BYREF

  *a2 = 0LL;
  v11 = 0LL;
  v12 = (__int64 *)&v11;
  v4 = (__int64 *)Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::AgileRef>::operator Microsoft::WRL::AgileRef *(&v12);
  v5 = v4;
  if ( a1 )
  {
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v4);
    AgileReference = RoGetAgileReference(0LL, &GUID_6ea71ff9_100d_54c3_bb4a_6922523cf9a9, a1, v5);
    if ( AgileReference < 0 )
      goto LABEL_8;
  }
  else
  {
    v12 = 0LL;
    v10 = *v4;
    *v4 = 0LL;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v12);
  }
  v12 = v11;
  v11 = 0LL;
  v7 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
    v8 = Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::IEventHandler_impl<Windows::Foundation::Internal::AggregateType<bool,unsigned char>>::*)(IInspectable *,unsigned char)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<bool>,Microsoft::WRL::FtmBase>,_lambda_7a5cfbbed259c3858157510f0ba1f330_,-1,IInspectable *,unsigned char>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<bool>,Microsoft::WRL::FtmBase>,_lambda_7a5cfbbed259c3858157510f0ba1f330_,-1,IInspectable *,unsigned char>(
           v7,
           &v12);
  else
    v8 = 0LL;
  v13 = v8;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v12);
  if ( v8 )
  {
    v13 = 0LL;
    *a2 = v8;
    AgileReference = 0;
  }
  else
  {
    AgileReference = -2147024882;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v13);
LABEL_8:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v11);
  return (unsigned int)AgileReference;
}
