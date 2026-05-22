/*
 * XREFs of ??1?$CalloutWrapper@VBamoMagnifierControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18014D9E4
 * Callers:
 *     ?OnConnectedCallout@BamoMagnifierControllerProxy@@EEAAJXZ @ 0x18014DB30 (-OnConnectedCallout@BamoMagnifierControllerProxy@@EEAAJXZ.c)
 *     _BamoMagnifierControllerProxy::OnConnectedCallout_::_1_::dtor$0 @ 0x18014DB83 (_BamoMagnifierControllerProxy--OnConnectedCallout_--_1_--dtor$0.c)
 *     ?OnDisconnectedCallout@BamoMagnifierControllerProxy@@EEAAJXZ @ 0x18014DBA0 (-OnDisconnectedCallout@BamoMagnifierControllerProxy@@EEAAJXZ.c)
 *     _BamoMagnifierControllerProxy::OnDisconnectedCallout_::_1_::dtor$0 @ 0x18014DBF3 (_BamoMagnifierControllerProxy--OnDisconnectedCallout_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedCallout@BamoMagnifierControllerProxy@@EEAAJXZ @ 0x18014DCA0 (-OnPropertiesRefreshedCallout@BamoMagnifierControllerProxy@@EEAAJXZ.c)
 *     _BamoMagnifierControllerProxy::OnPropertiesRefreshedCallout_::_1_::dtor$0 @ 0x18014DCF3 (_BamoMagnifierControllerProxy--OnPropertiesRefreshedCallout_--_1_--dtor$0.c)
 *     ?Thunk_AcknowledgeGestureReceived_14@?$IMagnifierControllerProxy_Receive@VBamoMagnifierControllerProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18014E050 (-Thunk_AcknowledgeGestureReceived_14@-$IMagnifierControllerProxy_Receive@VBamoMagnifierControlle.c)
 *     _IMagnifierControllerProxy_Receive_BamoImpl::BamoMagnifierControllerProxyImpl_::Thunk_AcknowledgeGestureReceived_14_::_1_::dtor$0 @ 0x18014E0B7 (_IMagnifierControllerProxy_Receive_BamoImpl--BamoMagnifierControllerProxyImpl_--Thunk_Acknowledg.c)
 *     ?UpdateGesturesEnabled@BamoMagnifierControllerProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x18014E2C0 (-UpdateGesturesEnabled@BamoMagnifierControllerProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     _BamoImpl::BamoMagnifierControllerProxyImpl::UpdateGesturesEnabled_::_1_::dtor$0 @ 0x18014E3D6 (_BamoImpl--BamoMagnifierControllerProxyImpl--UpdateGesturesEnabled_--_1_--dtor$0.c)
 *     _BamoImpl::BamoMagnifierControllerProxyImpl::UpdateGesturesEnabled_::_1_::dtor$1 @ 0x18014E3E2 (_BamoImpl--BamoMagnifierControllerProxyImpl--UpdateGesturesEnabled_--_1_--dtor$1.c)
 *     ?UpdateToggleEnabled@BamoMagnifierControllerProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x18014E448 (-UpdateToggleEnabled@BamoMagnifierControllerProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     _BamoImpl::BamoMagnifierControllerProxyImpl::UpdateToggleEnabled_::_1_::dtor$0 @ 0x18014E55B (_BamoImpl--BamoMagnifierControllerProxyImpl--UpdateToggleEnabled_--_1_--dtor$0.c)
 *     _BamoImpl::BamoMagnifierControllerProxyImpl::UpdateToggleEnabled_::_1_::dtor$1 @ 0x18014E567 (_BamoImpl--BamoMagnifierControllerProxyImpl--UpdateToggleEnabled_--_1_--dtor$1.c)
 *     ?UpdateUseInputSiteCoordinateSpace@BamoMagnifierControllerProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x18014E57C (-UpdateUseInputSiteCoordinateSpace@BamoMagnifierControllerProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     _BamoImpl::BamoMagnifierControllerProxyImpl::UpdateUseInputSiteCoordinateSpace_::_1_::dtor$0 @ 0x18014E695 (_BamoImpl--BamoMagnifierControllerProxyImpl--UpdateUseInputSiteCoordinateSpace_--_1_--dtor$0.c)
 *     _BamoImpl::BamoMagnifierControllerProxyImpl::UpdateUseInputSiteCoordinateSpace_::_1_::dtor$1 @ 0x18014E6A1 (_BamoImpl--BamoMagnifierControllerProxyImpl--UpdateUseInputSiteCoordinateSpace_--_1_--dtor$1.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18004665C (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoMagnifierControllerProxyImpl>::~CalloutWrapper<BamoImpl::BamoMagnifierControllerProxyImpl>(
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
