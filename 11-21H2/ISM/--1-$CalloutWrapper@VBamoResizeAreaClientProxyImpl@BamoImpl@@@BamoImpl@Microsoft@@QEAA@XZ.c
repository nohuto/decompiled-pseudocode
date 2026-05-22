/*
 * XREFs of ??1?$CalloutWrapper@VBamoResizeAreaClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180105A3C
 * Callers:
 *     ?OnConnectedCallout@BamoResizeAreaClientProxy@@EEAAJXZ @ 0x18010F140 (-OnConnectedCallout@BamoResizeAreaClientProxy@@EEAAJXZ.c)
 *     _BamoResizeAreaClientProxy::OnConnectedCallout_::_1_::dtor$0 @ 0x18010F193 (_BamoResizeAreaClientProxy--OnConnectedCallout_--_1_--dtor$0.c)
 *     ?OnDisconnectedCallout@BamoResizeAreaClientProxy@@EEAAJXZ @ 0x1801102C0 (-OnDisconnectedCallout@BamoResizeAreaClientProxy@@EEAAJXZ.c)
 *     _BamoResizeAreaClientProxy::OnDisconnectedCallout_::_1_::dtor$0 @ 0x180110313 (_BamoResizeAreaClientProxy--OnDisconnectedCallout_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedCallout@BamoResizeAreaClientProxy@@EEAAJXZ @ 0x180112C50 (-OnPropertiesRefreshedCallout@BamoResizeAreaClientProxy@@EEAAJXZ.c)
 *     _BamoResizeAreaClientProxy::OnPropertiesRefreshedCallout_::_1_::dtor$0 @ 0x180112CA3 (_BamoResizeAreaClientProxy--OnPropertiesRefreshedCallout_--_1_--dtor$0.c)
 *     ?UpdateRegion@BamoResizeAreaClientProxyImpl@BamoImpl@@QEAAJ_NW4InputResizeRegion@Input@Internal@UI@Windows@@@Z @ 0x18011DD98 (-UpdateRegion@BamoResizeAreaClientProxyImpl@BamoImpl@@QEAAJ_NW4InputResizeRegion@Input@Internal@.c)
 *     _BamoImpl::BamoResizeAreaClientProxyImpl::UpdateRegion_::_1_::dtor$0 @ 0x18011DEAC (_BamoImpl--BamoResizeAreaClientProxyImpl--UpdateRegion_--_1_--dtor$0.c)
 *     _BamoImpl::BamoResizeAreaClientProxyImpl::UpdateRegion_::_1_::dtor$1 @ 0x18011DEB8 (_BamoImpl--BamoResizeAreaClientProxyImpl--UpdateRegion_--_1_--dtor$1.c)
 *     ?UpdateType@BamoResizeAreaClientProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z @ 0x18011FF80 (-UpdateType@BamoResizeAreaClientProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z.c)
 *     _BamoImpl::BamoResizeAreaClientProxyImpl::UpdateType_::_1_::dtor$0 @ 0x180120097 (_BamoImpl--BamoResizeAreaClientProxyImpl--UpdateType_--_1_--dtor$0.c)
 *     _BamoImpl::BamoResizeAreaClientProxyImpl::UpdateType_::_1_::dtor$1 @ 0x1801200A3 (_BamoImpl--BamoResizeAreaClientProxyImpl--UpdateType_--_1_--dtor$1.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18004665C (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoResizeAreaClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoResizeAreaClientProxyImpl>(
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
