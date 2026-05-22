/*
 * XREFs of ??1?$CalloutWrapper@VBamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180120CD4
 * Callers:
 *     ?OnConnectedCallout@BamoEdgyNotificationSourceClientProxy@@EEAAJXZ @ 0x180129690 (-OnConnectedCallout@BamoEdgyNotificationSourceClientProxy@@EEAAJXZ.c)
 *     _BamoEdgyNotificationSourceClientProxy::OnConnectedCallout_::_1_::dtor$0 @ 0x1801296E3 (_BamoEdgyNotificationSourceClientProxy--OnConnectedCallout_--_1_--dtor$0.c)
 *     ?OnDisconnectedCallout@BamoEdgyNotificationSourceClientProxy@@EEAAJXZ @ 0x18012A810 (-OnDisconnectedCallout@BamoEdgyNotificationSourceClientProxy@@EEAAJXZ.c)
 *     _BamoEdgyNotificationSourceClientProxy::OnDisconnectedCallout_::_1_::dtor$0 @ 0x18012A863 (_BamoEdgyNotificationSourceClientProxy--OnDisconnectedCallout_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedCallout@BamoEdgyNotificationSourceClientProxy@@EEAAJXZ @ 0x18012D310 (-OnPropertiesRefreshedCallout@BamoEdgyNotificationSourceClientProxy@@EEAAJXZ.c)
 *     _BamoEdgyNotificationSourceClientProxy::OnPropertiesRefreshedCallout_::_1_::dtor$0 @ 0x18012D363 (_BamoEdgyNotificationSourceClientProxy--OnPropertiesRefreshedCallout_--_1_--dtor$0.c)
 *     ?UpdateGestureRecognitionConfiguration@BamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x180136B3C (-UpdateGestureRecognitionConfiguration@BamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@QEAAJ.c)
 *     _BamoImpl::BamoEdgyNotificationSourceClientProxyImpl::UpdateGestureRecognitionConfiguration_::_1_::dtor$0 @ 0x180136CE3 (_BamoImpl--BamoEdgyNotificationSourceClientProxyImpl--UpdateGestureRecognitionConfiguration_--_1.c)
 *     _BamoImpl::BamoEdgyNotificationSourceClientProxyImpl::UpdateGestureRecognitionConfiguration_::_1_::dtor$1 @ 0x180136CEF (_BamoImpl--BamoEdgyNotificationSourceClientProxyImpl--UpdateGestureRecognitionConfi_ea_180136CEF.c)
 *     ?UpdateRoutingMode@BamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@QEAAJ_NW4EdgyRoutingMode@Input@Internal@UI@Windows@@@Z @ 0x1801399F8 (-UpdateRoutingMode@BamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@QEAAJ_NW4EdgyRoutingMode@.c)
 *     _BamoImpl::BamoEdgyNotificationSourceClientProxyImpl::UpdateRoutingMode_::_1_::dtor$0 @ 0x180139B23 (_BamoImpl--BamoEdgyNotificationSourceClientProxyImpl--UpdateRoutingMode_--_1_--dtor$0.c)
 *     _BamoImpl::BamoEdgyNotificationSourceClientProxyImpl::UpdateRoutingMode_::_1_::dtor$1 @ 0x180139B2F (_BamoImpl--BamoEdgyNotificationSourceClientProxyImpl--UpdateRoutingMode_--_1_--dtor$1.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800252B0 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
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
