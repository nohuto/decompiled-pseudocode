/*
 * XREFs of ??1?$CalloutWrapper@VBamoMagnifierControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18017A3A4
 * Callers:
 *     ?OnConnectedCallout@BamoMagnifierControllerProxy@@EEAAJXZ @ 0x18017A4F0 (-OnConnectedCallout@BamoMagnifierControllerProxy@@EEAAJXZ.c)
 *     _BamoMagnifierControllerProxy::OnConnectedCallout_::_1_::dtor$0 @ 0x18017A543 (_BamoMagnifierControllerProxy--OnConnectedCallout_--_1_--dtor$0.c)
 *     ?OnDisconnectedCallout@BamoMagnifierControllerProxy@@EEAAJXZ @ 0x18017A560 (-OnDisconnectedCallout@BamoMagnifierControllerProxy@@EEAAJXZ.c)
 *     _BamoMagnifierControllerProxy::OnDisconnectedCallout_::_1_::dtor$0 @ 0x18017A5B3 (_BamoMagnifierControllerProxy--OnDisconnectedCallout_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedCallout@BamoMagnifierControllerProxy@@EEAAJXZ @ 0x18017A670 (-OnPropertiesRefreshedCallout@BamoMagnifierControllerProxy@@EEAAJXZ.c)
 *     _BamoMagnifierControllerProxy::OnPropertiesRefreshedCallout_::_1_::dtor$0 @ 0x18017A6C3 (_BamoMagnifierControllerProxy--OnPropertiesRefreshedCallout_--_1_--dtor$0.c)
 *     ?Thunk_AcknowledgeGestureReceived_14@?$IMagnifierControllerProxy_Receive@VBamoMagnifierControllerProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18017AA30 (-Thunk_AcknowledgeGestureReceived_14@-$IMagnifierControllerProxy_Receive@VBamoMagnifierControlle.c)
 *     _IMagnifierControllerProxy_Receive_BamoImpl::BamoMagnifierControllerProxyImpl_::Thunk_AcknowledgeGestureReceived_14_::_1_::dtor$0 @ 0x18017AA97 (_IMagnifierControllerProxy_Receive_BamoImpl--BamoMagnifierControllerProxyImpl_--Thunk_Acknowledg.c)
 *     ?UpdateGesturesEnabled@BamoMagnifierControllerProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x18017ACB4 (-UpdateGesturesEnabled@BamoMagnifierControllerProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     _BamoImpl::BamoMagnifierControllerProxyImpl::UpdateGesturesEnabled_::_1_::dtor$0 @ 0x18017ADE4 (_BamoImpl--BamoMagnifierControllerProxyImpl--UpdateGesturesEnabled_--_1_--dtor$0.c)
 *     _BamoImpl::BamoMagnifierControllerProxyImpl::UpdateGesturesEnabled_::_1_::dtor$1 @ 0x18017ADF0 (_BamoImpl--BamoMagnifierControllerProxyImpl--UpdateGesturesEnabled_--_1_--dtor$1.c)
 *     ?UpdateToggleEnabled@BamoMagnifierControllerProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x18017AE58 (-UpdateToggleEnabled@BamoMagnifierControllerProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     _BamoImpl::BamoMagnifierControllerProxyImpl::UpdateToggleEnabled_::_1_::dtor$0 @ 0x18017AF85 (_BamoImpl--BamoMagnifierControllerProxyImpl--UpdateToggleEnabled_--_1_--dtor$0.c)
 *     _BamoImpl::BamoMagnifierControllerProxyImpl::UpdateToggleEnabled_::_1_::dtor$1 @ 0x18017AF91 (_BamoImpl--BamoMagnifierControllerProxyImpl--UpdateToggleEnabled_--_1_--dtor$1.c)
 *     ?UpdateUseInputSiteCoordinateSpace@BamoMagnifierControllerProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x18017AFA4 (-UpdateUseInputSiteCoordinateSpace@BamoMagnifierControllerProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     _BamoImpl::BamoMagnifierControllerProxyImpl::UpdateUseInputSiteCoordinateSpace_::_1_::dtor$0 @ 0x18017B0D7 (_BamoImpl--BamoMagnifierControllerProxyImpl--UpdateUseInputSiteCoordinateSpace_--_1_--dtor$0.c)
 *     _BamoImpl::BamoMagnifierControllerProxyImpl::UpdateUseInputSiteCoordinateSpace_::_1_::dtor$1 @ 0x18017B0E3 (_BamoImpl--BamoMagnifierControllerProxyImpl--UpdateUseInputSiteCoordinateSpace_--_1_--dtor$1.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18002679C (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
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
