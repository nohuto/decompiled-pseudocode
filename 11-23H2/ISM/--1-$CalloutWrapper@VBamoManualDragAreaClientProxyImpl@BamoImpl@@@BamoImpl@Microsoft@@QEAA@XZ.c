/*
 * XREFs of ??1?$CalloutWrapper@VBamoManualDragAreaClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18015983C
 * Callers:
 *     ?OnConnectedCallout@BamoManualDragAreaClientProxy@@EEAAJXZ @ 0x180159C60 (-OnConnectedCallout@BamoManualDragAreaClientProxy@@EEAAJXZ.c)
 *     _BamoManualDragAreaClientProxy::OnConnectedCallout_::_1_::dtor$0 @ 0x180159CB3 (_BamoManualDragAreaClientProxy--OnConnectedCallout_--_1_--dtor$0.c)
 *     ?OnDisconnectedCallout@BamoManualDragAreaClientProxy@@EEAAJXZ @ 0x180159CD0 (-OnDisconnectedCallout@BamoManualDragAreaClientProxy@@EEAAJXZ.c)
 *     _BamoManualDragAreaClientProxy::OnDisconnectedCallout_::_1_::dtor$0 @ 0x180159D23 (_BamoManualDragAreaClientProxy--OnDisconnectedCallout_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedCallout@BamoManualDragAreaClientProxy@@EEAAJXZ @ 0x180159E30 (-OnPropertiesRefreshedCallout@BamoManualDragAreaClientProxy@@EEAAJXZ.c)
 *     _BamoManualDragAreaClientProxy::OnPropertiesRefreshedCallout_::_1_::dtor$0 @ 0x180159E83 (_BamoManualDragAreaClientProxy--OnPropertiesRefreshedCallout_--_1_--dtor$0.c)
 *     ?Thunk_StartManualDrag_8@?$IManualDragAreaClientProxy_Receive@VBamoManualDragAreaClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180159F90 (-Thunk_StartManualDrag_8@-$IManualDragAreaClientProxy_Receive@VBamoManualDragAreaClientProxyImpl.c)
 *     _IManualDragAreaClientProxy_Receive_BamoImpl::BamoManualDragAreaClientProxyImpl_::Thunk_StartManualDrag_8_::_1_::dtor$0 @ 0x180159FFE (_IManualDragAreaClientProxy_Receive_BamoImpl--BamoManualDragAreaClientProxyImpl_--Thunk_StartMan.c)
 *     ?UpdateDeliveryMode@BamoManualDragAreaClientProxyImpl@BamoImpl@@QEAAJ_NW4InputDeliveryMode@Input@Internal@UI@Windows@@@Z @ 0x18015A050 (-UpdateDeliveryMode@BamoManualDragAreaClientProxyImpl@BamoImpl@@QEAAJ_NW4InputDeliveryMode@Input.c)
 *     _BamoImpl::BamoManualDragAreaClientProxyImpl::UpdateDeliveryMode_::_1_::dtor$0 @ 0x18015A17E (_BamoImpl--BamoManualDragAreaClientProxyImpl--UpdateDeliveryMode_--_1_--dtor$0.c)
 *     _BamoImpl::BamoManualDragAreaClientProxyImpl::UpdateDeliveryMode_::_1_::dtor$1 @ 0x18015A18A (_BamoImpl--BamoManualDragAreaClientProxyImpl--UpdateDeliveryMode_--_1_--dtor$1.c)
 *     ?UpdateType@BamoManualDragAreaClientProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z @ 0x18015A1DC (-UpdateType@BamoManualDragAreaClientProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z.c)
 *     _BamoImpl::BamoManualDragAreaClientProxyImpl::UpdateType_::_1_::dtor$0 @ 0x18015A30E (_BamoImpl--BamoManualDragAreaClientProxyImpl--UpdateType_--_1_--dtor$0.c)
 *     _BamoImpl::BamoManualDragAreaClientProxyImpl::UpdateType_::_1_::dtor$1 @ 0x18015A31A (_BamoImpl--BamoManualDragAreaClientProxyImpl--UpdateType_--_1_--dtor$1.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800252B0 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
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
