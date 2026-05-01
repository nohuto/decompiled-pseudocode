/*
 * XREFs of ?Invoke@?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@PEAVRemoteDesktopConnectedEventArgs@Shell@Internal@Windows@@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_c6411412770162926f9ae1739aeaf30c_@@$0?0PEAUIInspectable@@PEAUIRemoteDesktopConnectedEventArgs@Shell@Internal@Windows@@@?$DelegateArgTraits@P8?$IEventHandler_impl@U?$AggregateType@PEAVRemoteDesktopConnectedEventArgs@Shell@Internal@Windows@@PEAUIRemoteDesktopConnectedEventArgs@234@@Internal@Foundation@Windows@@@Foundation@Windows@@EAAJPEAUIInspectable@@PEAUIRemoteDesktopConnectedEventArgs@Shell@Internal@3@@Z@Details@WRL@Microsoft@@UEAAJPEAUIInspectable@@PEAUIRemoteDesktopConnectedEventArgs@Shell@Internal@Windows@@@Z @ 0x180601CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1801A0934 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::IEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Internal::Shell::RemoteDesktopConnectedEventArgs *,Windows::Internal::Shell::IRemoteDesktopConnectedEventArgs *>>::*)(IInspectable *,Windows::Internal::Shell::IRemoteDesktopConnectedEventArgs *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<Windows::Internal::Shell::RemoteDesktopConnectedEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_c6411412770162926f9ae1739aeaf30c_,-1,IInspectable *,Windows::Internal::Shell::IRemoteDesktopConnectedEventArgs *>::Invoke(
        __int64 a1)
{
  signed int v1; // eax
  unsigned int v2; // ebx

  v1 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 72))(*(_QWORD *)(a1 + 64) + *(int *)(a1 + 80));
  v2 = v1;
  if ( v1 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v1);
  return v2;
}
