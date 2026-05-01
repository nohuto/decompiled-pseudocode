/*
 * XREFs of ?Invoke@?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_19c629caca3fc168e565f554a8149559_@@$0?0PEAUIInspectable@@PEAUIAppMemoryUsageLimitChangingEventArgs@System@Windows@@@?$DelegateArgTraits@P8?$IEventHandler_impl@U?$AggregateType@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@PEAUIAppMemoryUsageLimitChangingEventArgs@23@@Internal@Foundation@Windows@@@Foundation@Windows@@EAAJPEAUIInspectable@@PEAUIAppMemoryUsageLimitChangingEventArgs@System@3@@Z@Details@WRL@Microsoft@@UEAAJPEAUIInspectable@@PEAUIAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Z @ 0x180001890
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z @ 0x1800028B4 (-InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180008E98 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180015750 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x18001A4DC (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::IEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::System::AppMemoryUsageLimitChangingEventArgs *,Windows::System::IAppMemoryUsageLimitChangingEventArgs *>>::*)(IInspectable *,Windows::System::IAppMemoryUsageLimitChangingEventArgs *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_19c629caca3fc168e565f554a8149559_,-1,IInspectable *,Windows::System::IAppMemoryUsageLimitChangingEventArgs *>::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v5; // ebx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  v5 = Microsoft::WRL::AgileRef::InternalResolve(
         (Microsoft::WRL::AgileRef *)(a1 + 64),
         &GUID_6030e7c3_f93f_5e9c_9ba2_9a018d2b09c0,
         &v7);
  if ( v5 >= 0 )
    v5 = (*(__int64 (__fastcall **)(void *, __int64, __int64))(*(_QWORD *)v7 + 24LL))(v7, a2, a3);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v7);
  if ( v5 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v5);
  return (unsigned int)v5;
}
