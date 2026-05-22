/*
 * XREFs of ??1?$CalloutWrapper@VBamoInputDelegationInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1801283D8
 * Callers:
 *     _BamoInputDelegationInputObjectProxy::OnConnectedCallout_::_1_::dtor$0 @ 0x180054DAA (_BamoInputDelegationInputObjectProxy--OnConnectedCallout_--_1_--dtor$0.c)
 *     ?OnDisconnectedCallout@BamoInputDelegationInputObjectProxy@@EEAAJXZ @ 0x1801284B0 (-OnDisconnectedCallout@BamoInputDelegationInputObjectProxy@@EEAAJXZ.c)
 *     _BamoInputDelegationInputObjectProxy::OnDisconnectedCallout_::_1_::dtor$0 @ 0x180128503 (_BamoInputDelegationInputObjectProxy--OnDisconnectedCallout_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedCallout@BamoInputDelegationInputObjectProxy@@EEAAJXZ @ 0x180128780 (-OnPropertiesRefreshedCallout@BamoInputDelegationInputObjectProxy@@EEAAJXZ.c)
 *     _BamoInputDelegationInputObjectProxy::OnPropertiesRefreshedCallout_::_1_::dtor$0 @ 0x1801287D3 (_BamoInputDelegationInputObjectProxy--OnPropertiesRefreshedCallout_--_1_--dtor$0.c)
 *     ?Thunk_SetProcessIDDelegation_63@?$IInputDelegationInputObjectProxy_Receive@VBamoInputDelegationInputObjectProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180128950 (-Thunk_SetProcessIDDelegation_63@-$IInputDelegationInputObjectProxy_Receive@VBamoInputDelegation.c)
 *     _IInputDelegationInputObjectProxy_Receive_BamoImpl::BamoInputDelegationInputObjectProxyImpl_::Thunk_SetProcessIDDelegation_63_::_1_::dtor$0 @ 0x1801289CE (_IInputDelegationInputObjectProxy_Receive_BamoImpl--BamoInputDelegationInputObjectProxyImpl_--Th.c)
 *     ?Thunk_SetViewIDDelegation_63@?$IInputDelegationInputObjectProxy_Receive@VBamoInputDelegationInputObjectProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801289F0 (-Thunk_SetViewIDDelegation_63@-$IInputDelegationInputObjectProxy_Receive@VBamoInputDelegationInp.c)
 *     _IInputDelegationInputObjectProxy_Receive_BamoImpl::BamoInputDelegationInputObjectProxyImpl_::Thunk_SetViewIDDelegation_63_::_1_::dtor$0 @ 0x180128A6E (_IInputDelegationInputObjectProxy_Receive_BamoImpl--BamoInputDelegationInputObjectP_ea_180128A6E.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18004665C (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputDelegationInputObjectProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputDelegationInputObjectProxyImpl>(
        __int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( (*(_BYTE *)(a1 + 16) & 2) != 0 )
    {
      v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v2 - 16) + 96LL))(v2 - 16);
      if ( v3 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x87,
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v3,
          v5);
    }
  }
  if ( *(_QWORD *)a1 )
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)a1);
  return wil::com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>::~com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>((__int64 *)(a1 + 8));
}
