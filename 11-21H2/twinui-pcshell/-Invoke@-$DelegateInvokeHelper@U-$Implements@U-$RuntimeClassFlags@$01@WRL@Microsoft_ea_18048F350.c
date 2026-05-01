/*
 * XREFs of ?Invoke@?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktopPerMonitorCollectionChangedEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_3aba5bcfd47a62a8cdc7991e31c00a5f_@@$0?0PEAUIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktopPerMonitorCollectionChangedEventArgs@6789@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktopPerMonitorCollectionChangedEventArgs@2345@@Foundation@Windows@@EAAJPEAUIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@3@PEAUIVirtualDesktopPerMonitorCollectionChangedEventArgs@5673@@Z@Details@WRL@Microsoft@@UEAAJPEAUIVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktopPerMonitorCollectionChangedEventArgs@789Windows@@@Z @ 0x18048F350
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z @ 0x1800EF16C (-InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1802E26E8 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollection *,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollectionChangedEventArgs *>::*)(Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollection *,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollectionChangedEventArgs *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollection *,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollectionChangedEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_3aba5bcfd47a62a8cdc7991e31c00a5f_,-1,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollection *,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollectionChangedEventArgs *>::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  signed int v5; // ebx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  v5 = Microsoft::WRL::AgileRef::InternalResolve(
         (Microsoft::WRL::AgileRef *)(a1 + 64),
         &GUID_2607e287_68b8_5143_b58f_e7d0a65f0bba,
         &v7);
  if ( v5 >= 0 )
    v5 = (*(__int64 (__fastcall **)(void *, __int64, __int64))(*(_QWORD *)v7 + 24LL))(v7, a2, a3);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v7);
  if ( v5 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v5);
  return (unsigned int)v5;
}
