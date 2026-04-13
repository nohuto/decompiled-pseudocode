/*
 * XREFs of ?Invoke@?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAUIInspectable@@PEAVExtendedExecutionRevokedEventArgs@ExtendedExecution@ApplicationModel@Windows@@@Foundation@Windows@@V_lambda_d2e1a1bfe118cc3da1a4c200d83afca4_@@$0?0PEAUIInspectable@@PEAUIExtendedExecutionRevokedEventArgs@ExtendedExecution@ApplicationModel@3@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIInspectable@@U?$AggregateType@PEAVExtendedExecutionRevokedEventArgs@ExtendedExecution@ApplicationModel@Windows@@PEAUIExtendedExecutionRevokedEventArgs@234@@Internal@Foundation@Windows@@@Foundation@Windows@@EAAJPEAUIInspectable@@PEAUIExtendedExecutionRevokedEventArgs@ExtendedExecution@ApplicationModel@3@@Z@Details@WRL@Microsoft@@UEAAJPEAUIInspectable@@PEAUIExtendedExecutionRevokedEventArgs@ExtendedExecution@ApplicationModel@Windows@@@Z @ 0x1800A6560
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x180055DC4 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<IInspectable *,Windows::Foundation::Internal::AggregateType<Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs *,Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs *>>::*)(IInspectable *,Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs *>,_lambda_d2e1a1bfe118cc3da1a4c200d83afca4_,-1,IInspectable *,Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs *>::Invoke(
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
