/*
 * XREFs of ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x18005B3D0
 * Callers:
 *     ?Invoke@?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAUIInspectable@@PEAVExtendedExecutionRevokedEventArgs@ExtendedExecution@ApplicationModel@Windows@@@Foundation@Windows@@V_lambda_d2e1a1bfe118cc3da1a4c200d83afca4_@@$0?0PEAUIInspectable@@PEAUIExtendedExecutionRevokedEventArgs@ExtendedExecution@ApplicationModel@3@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIInspectable@@U?$AggregateType@PEAVExtendedExecutionRevokedEventArgs@ExtendedExecution@ApplicationModel@Windows@@PEAUIExtendedExecutionRevokedEventArgs@234@@Internal@Foundation@Windows@@@Foundation@Windows@@EAAJPEAUIInspectable@@PEAUIExtendedExecutionRevokedEventArgs@ExtendedExecution@ApplicationModel@3@@Z@Details@WRL@Microsoft@@UEAAJPEAUIInspectable@@PEAUIExtendedExecutionRevokedEventArgs@ExtendedExecution@ApplicationModel@Windows@@@Z @ 0x1800B5E30 (-Invoke@-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAUIInspectable@@PEAVExtendedExecutionRevo.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  result = RoGetMatchingRestrictedErrorInfo(a1, &v3);
  if ( (int)result >= 0 )
    result = SetRestrictedErrorInfo(v3);
  v2 = v3;
  if ( v3 )
  {
    v3 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
