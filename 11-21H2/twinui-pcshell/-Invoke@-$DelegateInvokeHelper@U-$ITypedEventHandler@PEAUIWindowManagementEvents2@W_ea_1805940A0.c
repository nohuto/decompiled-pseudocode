/*
 * XREFs of ?Invoke@?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UWindowArrangementEventArgs@2345@@Foundation@Windows@@V_lambda_bc6a996c5f9ff2cfd33224138910e618_@@$0?0PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@3@UWindowArrangementEventArgs@6783@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UWindowArrangementEventArgs@2345@@Foundation@Windows@@EAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@3@UWindowArrangementEventArgs@5673@@Z@Details@WRL@Microsoft@@UEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UWindowArrangementEventArgs@789Windows@@@Z @ 0x1805940A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1802E26E8 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::WindowArrangementEventArgs>::*)(Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::WindowArrangementEventArgs)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::WindowArrangementEventArgs>,_lambda_bc6a996c5f9ff2cfd33224138910e618_,-1,Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *,Windows::Internal::Shell::WindowManagementEvents::WindowArrangementEventArgs>::Invoke(
        __int64 a1)
{
  signed int v1; // eax
  unsigned int v2; // ebx

  v1 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 24))(*(_QWORD *)(a1 + 16) + *(int *)(a1 + 32));
  v2 = v1;
  if ( v1 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v1);
  return v2;
}
