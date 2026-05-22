/*
 * XREFs of ??1?$CalloutWrapper@VBamoActivationConfigurationInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180104A40
 * Callers:
 *     ?OnConnectedCallout@BamoActivationConfigurationInputObjectProxy@@EEAAJXZ @ 0x18010E340 (-OnConnectedCallout@BamoActivationConfigurationInputObjectProxy@@EEAAJXZ.c)
 *     _BamoActivationConfigurationInputObjectProxy::OnConnectedCallout_::_1_::dtor$0 @ 0x18010E393 (_BamoActivationConfigurationInputObjectProxy--OnConnectedCallout_--_1_--dtor$0.c)
 *     ?OnDisconnectedCallout@BamoActivationConfigurationInputObjectProxy@@EEAAJXZ @ 0x18010F4C0 (-OnDisconnectedCallout@BamoActivationConfigurationInputObjectProxy@@EEAAJXZ.c)
 *     _BamoActivationConfigurationInputObjectProxy::OnDisconnectedCallout_::_1_::dtor$0 @ 0x18010F513 (_BamoActivationConfigurationInputObjectProxy--OnDisconnectedCallout_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedCallout@BamoActivationConfigurationInputObjectProxy@@EEAAJXZ @ 0x180111E50 (-OnPropertiesRefreshedCallout@BamoActivationConfigurationInputObjectProxy@@EEAAJXZ.c)
 *     _BamoActivationConfigurationInputObjectProxy::OnPropertiesRefreshedCallout_::_1_::dtor$0 @ 0x180111EA3 (_BamoActivationConfigurationInputObjectProxy--OnPropertiesRefreshedCallout_--_1_--dtor$0.c)
 *     ?UpdateActivatePolicy@BamoActivationConfigurationInputObjectProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x180119484 (-UpdateActivatePolicy@BamoActivationConfigurationInputObjectProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 *     _BamoImpl::BamoActivationConfigurationInputObjectProxyImpl::UpdateActivatePolicy_::_1_::dtor$0 @ 0x180119595 (_BamoImpl--BamoActivationConfigurationInputObjectProxyImpl--UpdateActivatePolicy_--_1_--dtor$0.c)
 *     _BamoImpl::BamoActivationConfigurationInputObjectProxyImpl::UpdateActivatePolicy_::_1_::dtor$1 @ 0x1801195A1 (_BamoImpl--BamoActivationConfigurationInputObjectProxyImpl--UpdateActivatePolicy_--_1_--dtor$1.c)
 *     ?UpdateEatPolicy@BamoActivationConfigurationInputObjectProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x18011AA54 (-UpdateEatPolicy@BamoActivationConfigurationInputObjectProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 *     _BamoImpl::BamoActivationConfigurationInputObjectProxyImpl::UpdateEatPolicy_::_1_::dtor$0 @ 0x18011AB68 (_BamoImpl--BamoActivationConfigurationInputObjectProxyImpl--UpdateEatPolicy_--_1_--dtor$0.c)
 *     _BamoImpl::BamoActivationConfigurationInputObjectProxyImpl::UpdateEatPolicy_::_1_::dtor$1 @ 0x18011AB74 (_BamoImpl--BamoActivationConfigurationInputObjectProxyImpl--UpdateEatPolicy_--_1_--dtor$1.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18004665C (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoActivationConfigurationInputObjectProxyImpl>::~CalloutWrapper<BamoImpl::BamoActivationConfigurationInputObjectProxyImpl>(
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
