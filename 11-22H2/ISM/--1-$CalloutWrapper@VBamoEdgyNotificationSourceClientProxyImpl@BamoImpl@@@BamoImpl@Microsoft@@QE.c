/*
 * XREFs of ??1?$CalloutWrapper@VBamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18012ECC4
 * Callers:
 *     ?OnConnectedCallout@BamoEdgyNotificationSourceClientProxy@@EEAAJXZ @ 0x180137680 (-OnConnectedCallout@BamoEdgyNotificationSourceClientProxy@@EEAAJXZ.c)
 *     _BamoEdgyNotificationSourceClientProxy::OnConnectedCallout_::_1_::dtor$0 @ 0x1801376D3 (_BamoEdgyNotificationSourceClientProxy--OnConnectedCallout_--_1_--dtor$0.c)
 *     ?OnDisconnectedCallout@BamoEdgyNotificationSourceClientProxy@@EEAAJXZ @ 0x180138800 (-OnDisconnectedCallout@BamoEdgyNotificationSourceClientProxy@@EEAAJXZ.c)
 *     _BamoEdgyNotificationSourceClientProxy::OnDisconnectedCallout_::_1_::dtor$0 @ 0x180138853 (_BamoEdgyNotificationSourceClientProxy--OnDisconnectedCallout_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedCallout@BamoEdgyNotificationSourceClientProxy@@EEAAJXZ @ 0x18013B300 (-OnPropertiesRefreshedCallout@BamoEdgyNotificationSourceClientProxy@@EEAAJXZ.c)
 *     _BamoEdgyNotificationSourceClientProxy::OnPropertiesRefreshedCallout_::_1_::dtor$0 @ 0x18013B353 (_BamoEdgyNotificationSourceClientProxy--OnPropertiesRefreshedCallout_--_1_--dtor$0.c)
 *     ?UpdateGestureRecognitionConfiguration@BamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x180144B2C (-UpdateGestureRecognitionConfiguration@BamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@QEAAJ.c)
 *     _BamoImpl::BamoEdgyNotificationSourceClientProxyImpl::UpdateGestureRecognitionConfiguration_::_1_::dtor$0 @ 0x180144CD3 (_BamoImpl--BamoEdgyNotificationSourceClientProxyImpl--UpdateGestureRecognitionConfiguration_--_1.c)
 *     _BamoImpl::BamoEdgyNotificationSourceClientProxyImpl::UpdateGestureRecognitionConfiguration_::_1_::dtor$1 @ 0x180144CDF (_BamoImpl--BamoEdgyNotificationSourceClientProxyImpl--UpdateGestureRecognitionConfi_ea_180144CDF.c)
 *     ?UpdateRoutingMode@BamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@QEAAJ_NW4EdgyRoutingMode@Input@Internal@UI@Windows@@@Z @ 0x1801479E8 (-UpdateRoutingMode@BamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@QEAAJ_NW4EdgyRoutingMode@.c)
 *     _BamoImpl::BamoEdgyNotificationSourceClientProxyImpl::UpdateRoutingMode_::_1_::dtor$0 @ 0x180147B13 (_BamoImpl--BamoEdgyNotificationSourceClientProxyImpl--UpdateRoutingMode_--_1_--dtor$0.c)
 *     _BamoImpl::BamoEdgyNotificationSourceClientProxyImpl::UpdateRoutingMode_::_1_::dtor$1 @ 0x180147B1F (_BamoImpl--BamoEdgyNotificationSourceClientProxyImpl--UpdateRoutingMode_--_1_--dtor$1.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18002679C (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoEdgyNotificationSourceClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoEdgyNotificationSourceClientProxyImpl>(
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
