/*
 * XREFs of ??1?$CalloutWrapper@VBamoResizeAreaClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18012139C
 * Callers:
 *     ?OnConnectedCallout@BamoResizeAreaClientProxy@@EEAAJXZ @ 0x180129CB0 (-OnConnectedCallout@BamoResizeAreaClientProxy@@EEAAJXZ.c)
 *     _BamoResizeAreaClientProxy::OnConnectedCallout_::_1_::dtor$0 @ 0x180129D03 (_BamoResizeAreaClientProxy--OnConnectedCallout_--_1_--dtor$0.c)
 *     ?OnDisconnectedCallout@BamoResizeAreaClientProxy@@EEAAJXZ @ 0x18012AE30 (-OnDisconnectedCallout@BamoResizeAreaClientProxy@@EEAAJXZ.c)
 *     _BamoResizeAreaClientProxy::OnDisconnectedCallout_::_1_::dtor$0 @ 0x18012AE83 (_BamoResizeAreaClientProxy--OnDisconnectedCallout_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedCallout@BamoResizeAreaClientProxy@@EEAAJXZ @ 0x18012D930 (-OnPropertiesRefreshedCallout@BamoResizeAreaClientProxy@@EEAAJXZ.c)
 *     _BamoResizeAreaClientProxy::OnPropertiesRefreshedCallout_::_1_::dtor$0 @ 0x18012D983 (_BamoResizeAreaClientProxy--OnPropertiesRefreshedCallout_--_1_--dtor$0.c)
 *     ?UpdateRegion@BamoResizeAreaClientProxyImpl@BamoImpl@@QEAAJ_NW4InputResizeRegion@Input@Internal@UI@Windows@@@Z @ 0x1801394FC (-UpdateRegion@BamoResizeAreaClientProxyImpl@BamoImpl@@QEAAJ_NW4InputResizeRegion@Input@Internal@.c)
 *     _BamoImpl::BamoResizeAreaClientProxyImpl::UpdateRegion_::_1_::dtor$0 @ 0x18013962A (_BamoImpl--BamoResizeAreaClientProxyImpl--UpdateRegion_--_1_--dtor$0.c)
 *     _BamoImpl::BamoResizeAreaClientProxyImpl::UpdateRegion_::_1_::dtor$1 @ 0x180139636 (_BamoImpl--BamoResizeAreaClientProxyImpl--UpdateRegion_--_1_--dtor$1.c)
 *     ?UpdateType@BamoResizeAreaClientProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z @ 0x18013B60C (-UpdateType@BamoResizeAreaClientProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z.c)
 *     _BamoImpl::BamoResizeAreaClientProxyImpl::UpdateType_::_1_::dtor$0 @ 0x18013B73E (_BamoImpl--BamoResizeAreaClientProxyImpl--UpdateType_--_1_--dtor$0.c)
 *     _BamoImpl::BamoResizeAreaClientProxyImpl::UpdateType_::_1_::dtor$1 @ 0x18013B74A (_BamoImpl--BamoResizeAreaClientProxyImpl--UpdateType_--_1_--dtor$1.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800252B0 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
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
