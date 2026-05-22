/*
 * XREFs of ??1?$CalloutWrapper@VBamoDropTargetClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180105200
 * Callers:
 *     ?OnConnectedCallout@BamoDropTargetClientProxy@@EEAAJXZ @ 0x18010E9D0 (-OnConnectedCallout@BamoDropTargetClientProxy@@EEAAJXZ.c)
 *     _BamoDropTargetClientProxy::OnConnectedCallout_::_1_::dtor$0 @ 0x18010EA23 (_BamoDropTargetClientProxy--OnConnectedCallout_--_1_--dtor$0.c)
 *     ?OnDisconnectedCallout@BamoDropTargetClientProxy@@EEAAJXZ @ 0x18010FB50 (-OnDisconnectedCallout@BamoDropTargetClientProxy@@EEAAJXZ.c)
 *     _BamoDropTargetClientProxy::OnDisconnectedCallout_::_1_::dtor$0 @ 0x18010FBA3 (_BamoDropTargetClientProxy--OnDisconnectedCallout_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedCallout@BamoDropTargetClientProxy@@EEAAJXZ @ 0x1801124E0 (-OnPropertiesRefreshedCallout@BamoDropTargetClientProxy@@EEAAJXZ.c)
 *     _BamoDropTargetClientProxy::OnPropertiesRefreshedCallout_::_1_::dtor$0 @ 0x180112533 (_BamoDropTargetClientProxy--OnPropertiesRefreshedCallout_--_1_--dtor$0.c)
 *     ?UpdateId@BamoDropTargetClientProxyImpl@BamoImpl@@QEAAJ_N_K@Z @ 0x18011C1C4 (-UpdateId@BamoDropTargetClientProxyImpl@BamoImpl@@QEAAJ_N_K@Z.c)
 *     _BamoImpl::BamoDropTargetClientProxyImpl::UpdateId_::_1_::dtor$0 @ 0x18011C2D7 (_BamoImpl--BamoDropTargetClientProxyImpl--UpdateId_--_1_--dtor$0.c)
 *     _BamoImpl::BamoDropTargetClientProxyImpl::UpdateId_::_1_::dtor$1 @ 0x18011C2E3 (_BamoImpl--BamoDropTargetClientProxyImpl--UpdateId_--_1_--dtor$1.c)
 *     ?UpdateType@BamoDropTargetClientProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z @ 0x18011FAA0 (-UpdateType@BamoDropTargetClientProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z.c)
 *     _BamoImpl::BamoDropTargetClientProxyImpl::UpdateType_::_1_::dtor$0 @ 0x18011FBBA (_BamoImpl--BamoDropTargetClientProxyImpl--UpdateType_--_1_--dtor$0.c)
 *     _BamoImpl::BamoDropTargetClientProxyImpl::UpdateType_::_1_::dtor$1 @ 0x18011FBC6 (_BamoImpl--BamoDropTargetClientProxyImpl--UpdateType_--_1_--dtor$1.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18004665C (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoDropTargetClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoDropTargetClientProxyImpl>(
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
