/*
 * XREFs of ?Invoke@?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@_N@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_7a5cfbbed259c3858157510f0ba1f330_@@$0?0PEAUIInspectable@@E@?$DelegateArgTraits@P8?$IEventHandler_impl@U?$AggregateType@_NE@Internal@Foundation@Windows@@@Foundation@Windows@@EAAJPEAUIInspectable@@E@Z@Details@WRL@Microsoft@@UEAAJPEAUIInspectable@@E@Z @ 0x180333CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z @ 0x1800EF16C (-InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1802E26E8 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::IEventHandler_impl<Windows::Foundation::Internal::AggregateType<bool,unsigned char>>::*)(IInspectable *,unsigned char)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<bool>,Microsoft::WRL::FtmBase>,_lambda_7a5cfbbed259c3858157510f0ba1f330_,-1,IInspectable *,unsigned char>::Invoke(
        __int64 a1,
        __int64 a2,
        char a3)
{
  signed int v5; // ebx
  __int64 v6; // r8
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  v5 = Microsoft::WRL::AgileRef::InternalResolve(
         (Microsoft::WRL::AgileRef *)(a1 + 64),
         &GUID_6ea71ff9_100d_54c3_bb4a_6922523cf9a9,
         &v8);
  if ( v5 >= 0 )
  {
    LOBYTE(v6) = a3;
    v5 = (*(__int64 (__fastcall **)(void *, __int64, __int64))(*(_QWORD *)v8 + 24LL))(v8, a2, v6);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v8);
  if ( v5 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v5);
  return (unsigned int)v5;
}
