/*
 * XREFs of ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x180055DC4
 * Callers:
 *     ?Invoke@?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAUIInspectable@@PEAVExtendedExecutionRevokedEventArgs@ExtendedExecution@ApplicationModel@Windows@@@Foundation@Windows@@V_lambda_d2e1a1bfe118cc3da1a4c200d83afca4_@@$0?0PEAUIInspectable@@PEAUIExtendedExecutionRevokedEventArgs@ExtendedExecution@ApplicationModel@3@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIInspectable@@U?$AggregateType@PEAVExtendedExecutionRevokedEventArgs@ExtendedExecution@ApplicationModel@Windows@@PEAUIExtendedExecutionRevokedEventArgs@234@@Internal@Foundation@Windows@@@Foundation@Windows@@EAAJPEAUIInspectable@@PEAUIExtendedExecutionRevokedEventArgs@ExtendedExecution@ApplicationModel@3@@Z@Details@WRL@Microsoft@@UEAAJPEAUIInspectable@@PEAUIExtendedExecutionRevokedEventArgs@ExtendedExecution@ApplicationModel@Windows@@@Z @ 0x1800A6560 (-Invoke@-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAUIInspectable@@PEAVExtendedExecutionRevo.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v6);
  if ( (int)RoGetMatchingRestrictedErrorInfo(a1, &v6) >= 0 )
    SetRestrictedErrorInfo(v6, v2, v3, v4);
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v6);
}
