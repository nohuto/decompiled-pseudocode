/*
 * XREFs of ??1?$CalloutWrapper@VBamoResizeControllerClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180105AB8
 * Callers:
 *     ?OnConnectedCallout@BamoResizeControllerClientProxy@@EEAAJXZ @ 0x18010F1B0 (-OnConnectedCallout@BamoResizeControllerClientProxy@@EEAAJXZ.c)
 *     _BamoResizeControllerClientProxy::OnConnectedCallout_::_1_::dtor$0 @ 0x18010F203 (_BamoResizeControllerClientProxy--OnConnectedCallout_--_1_--dtor$0.c)
 *     ?OnDisconnectedCallout@BamoResizeControllerClientProxy@@EEAAJXZ @ 0x180110330 (-OnDisconnectedCallout@BamoResizeControllerClientProxy@@EEAAJXZ.c)
 *     _BamoResizeControllerClientProxy::OnDisconnectedCallout_::_1_::dtor$0 @ 0x180110383 (_BamoResizeControllerClientProxy--OnDisconnectedCallout_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedCallout@BamoResizeControllerClientProxy@@EEAAJXZ @ 0x180112CC0 (-OnPropertiesRefreshedCallout@BamoResizeControllerClientProxy@@EEAAJXZ.c)
 *     _BamoResizeControllerClientProxy::OnPropertiesRefreshedCallout_::_1_::dtor$0 @ 0x180112D13 (_BamoResizeControllerClientProxy--OnPropertiesRefreshedCallout_--_1_--dtor$0.c)
 *     ?UpdateHitTestConfiguration@BamoResizeControllerClientProxyImpl@BamoImpl@@QEAAJ_NW4HitTestConfiguration@Input@Internal@UI@Windows@@@Z @ 0x18011BF5C (-UpdateHitTestConfiguration@BamoResizeControllerClientProxyImpl@BamoImpl@@QEAAJ_NW4HitTestConfig.c)
 *     _BamoImpl::BamoResizeControllerClientProxyImpl::UpdateHitTestConfiguration_::_1_::dtor$0 @ 0x18011C070 (_BamoImpl--BamoResizeControllerClientProxyImpl--UpdateHitTestConfiguration_--_1_--dtor$0.c)
 *     _BamoImpl::BamoResizeControllerClientProxyImpl::UpdateHitTestConfiguration_::_1_::dtor$1 @ 0x18011C07C (_BamoImpl--BamoResizeControllerClientProxyImpl--UpdateHitTestConfiguration_--_1_--dtor$1.c)
 *     ?UpdateType@BamoResizeControllerClientProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z @ 0x1801200B8 (-UpdateType@BamoResizeControllerClientProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z.c)
 *     _BamoImpl::BamoResizeControllerClientProxyImpl::UpdateType_::_1_::dtor$0 @ 0x1801201CF (_BamoImpl--BamoResizeControllerClientProxyImpl--UpdateType_--_1_--dtor$0.c)
 *     _BamoImpl::BamoResizeControllerClientProxyImpl::UpdateType_::_1_::dtor$1 @ 0x1801201DB (_BamoImpl--BamoResizeControllerClientProxyImpl--UpdateType_--_1_--dtor$1.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18004665C (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoResizeControllerClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoResizeControllerClientProxyImpl>(
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
