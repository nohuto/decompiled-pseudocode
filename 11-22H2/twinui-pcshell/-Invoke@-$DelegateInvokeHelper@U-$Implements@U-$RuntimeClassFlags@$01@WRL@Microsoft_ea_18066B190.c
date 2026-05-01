/*
 * XREFs of ?Invoke@?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIGuidedSnapAssistController@WindowSnapping@Shell@Internal@Windows@@PEAVGuidedSnapAssistCompletedArgs@2345@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_6d5cfbb757e9b6b7cf3010e8f48814c6_@@$0?0PEAUIGuidedSnapAssistController@WindowSnapping@Shell@Internal@Windows@@PEAUIGuidedSnapAssistCompletedArgs@6789@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIGuidedSnapAssistController@WindowSnapping@Shell@Internal@Windows@@U?$AggregateType@PEAVGuidedSnapAssistCompletedArgs@WindowSnapping@Shell@Internal@Windows@@PEAUIGuidedSnapAssistCompletedArgs@2345@@4Foundation@5@@Foundation@Windows@@EAAJPEAUIGuidedSnapAssistController@WindowSnapping@Shell@Internal@3@PEAUIGuidedSnapAssistCompletedArgs@5673@@Z@Details@WRL@Microsoft@@UEAAJPEAUIGuidedSnapAssistController@WindowSnapping@Shell@Internal@Windows@@PEAUIGuidedSnapAssistCompletedArgs@789Windows@@@Z @ 0x18066B190
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180169E34 (-InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1801A0934 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistController *,Windows::Foundation::Internal::AggregateType<Windows::Internal::Shell::WindowSnapping::GuidedSnapAssistCompletedArgs *,Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistCompletedArgs *>>::*)(Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistController *,Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistCompletedArgs *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistController *,Windows::Internal::Shell::WindowSnapping::GuidedSnapAssistCompletedArgs *>,Microsoft::WRL::FtmBase>,_lambda_6d5cfbb757e9b6b7cf3010e8f48814c6_,-1,Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistController *,Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistCompletedArgs *>::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  signed int v5; // ebx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  v5 = Microsoft::WRL::AgileRef::InternalResolve(
         (Microsoft::WRL::AgileRef *)(a1 + 64),
         &GUID_df0e62eb_f053_5e02_8da4_f3e5f35c9191,
         &v7);
  if ( v5 >= 0 )
    v5 = (*(__int64 (__fastcall **)(void *, __int64, __int64))(*(_QWORD *)v7 + 24LL))(v7, a2, a3);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v7);
  if ( v5 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v5);
  return (unsigned int)v5;
}
