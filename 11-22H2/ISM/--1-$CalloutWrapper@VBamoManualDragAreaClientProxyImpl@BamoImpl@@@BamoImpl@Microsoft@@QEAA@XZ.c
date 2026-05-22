/*
 * XREFs of ??1?$CalloutWrapper@VBamoManualDragAreaClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180167ABC
 * Callers:
 *     ?OnConnectedCallout@BamoManualDragAreaClientProxy@@EEAAJXZ @ 0x180167EE0 (-OnConnectedCallout@BamoManualDragAreaClientProxy@@EEAAJXZ.c)
 *     _BamoManualDragAreaClientProxy::OnConnectedCallout_::_1_::dtor$0 @ 0x180167F33 (_BamoManualDragAreaClientProxy--OnConnectedCallout_--_1_--dtor$0.c)
 *     ?OnDisconnectedCallout@BamoManualDragAreaClientProxy@@EEAAJXZ @ 0x180167F50 (-OnDisconnectedCallout@BamoManualDragAreaClientProxy@@EEAAJXZ.c)
 *     _BamoManualDragAreaClientProxy::OnDisconnectedCallout_::_1_::dtor$0 @ 0x180167FA3 (_BamoManualDragAreaClientProxy--OnDisconnectedCallout_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedCallout@BamoManualDragAreaClientProxy@@EEAAJXZ @ 0x1801680B0 (-OnPropertiesRefreshedCallout@BamoManualDragAreaClientProxy@@EEAAJXZ.c)
 *     _BamoManualDragAreaClientProxy::OnPropertiesRefreshedCallout_::_1_::dtor$0 @ 0x180168103 (_BamoManualDragAreaClientProxy--OnPropertiesRefreshedCallout_--_1_--dtor$0.c)
 *     ?Thunk_StartManualDrag_8@?$IManualDragAreaClientProxy_Receive@VBamoManualDragAreaClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180168210 (-Thunk_StartManualDrag_8@-$IManualDragAreaClientProxy_Receive@VBamoManualDragAreaClientProxyImpl.c)
 *     _IManualDragAreaClientProxy_Receive_BamoImpl::BamoManualDragAreaClientProxyImpl_::Thunk_StartManualDrag_8_::_1_::dtor$0 @ 0x18016827E (_IManualDragAreaClientProxy_Receive_BamoImpl--BamoManualDragAreaClientProxyImpl_--Thunk_StartMan.c)
 *     ?UpdateDeliveryMode@BamoManualDragAreaClientProxyImpl@BamoImpl@@QEAAJ_NW4InputDeliveryMode@Input@Internal@UI@Windows@@@Z @ 0x1801682D0 (-UpdateDeliveryMode@BamoManualDragAreaClientProxyImpl@BamoImpl@@QEAAJ_NW4InputDeliveryMode@Input.c)
 *     _BamoImpl::BamoManualDragAreaClientProxyImpl::UpdateDeliveryMode_::_1_::dtor$0 @ 0x1801683FE (_BamoImpl--BamoManualDragAreaClientProxyImpl--UpdateDeliveryMode_--_1_--dtor$0.c)
 *     _BamoImpl::BamoManualDragAreaClientProxyImpl::UpdateDeliveryMode_::_1_::dtor$1 @ 0x18016840A (_BamoImpl--BamoManualDragAreaClientProxyImpl--UpdateDeliveryMode_--_1_--dtor$1.c)
 *     ?UpdateType@BamoManualDragAreaClientProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z @ 0x18016845C (-UpdateType@BamoManualDragAreaClientProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z.c)
 *     _BamoImpl::BamoManualDragAreaClientProxyImpl::UpdateType_::_1_::dtor$0 @ 0x18016858E (_BamoImpl--BamoManualDragAreaClientProxyImpl--UpdateType_--_1_--dtor$0.c)
 *     _BamoImpl::BamoManualDragAreaClientProxyImpl::UpdateType_::_1_::dtor$1 @ 0x18016859A (_BamoImpl--BamoManualDragAreaClientProxyImpl--UpdateType_--_1_--dtor$1.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18002679C (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoManualDragAreaClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoManualDragAreaClientProxyImpl>(
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
