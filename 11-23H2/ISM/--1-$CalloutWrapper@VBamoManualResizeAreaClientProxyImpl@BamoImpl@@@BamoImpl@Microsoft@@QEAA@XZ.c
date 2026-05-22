/*
 * XREFs of ??1?$CalloutWrapper@VBamoManualResizeAreaClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1801616BC
 * Callers:
 *     ?OnConnectedCallout@BamoManualResizeAreaClientProxy@@EEAAJXZ @ 0x180161AA0 (-OnConnectedCallout@BamoManualResizeAreaClientProxy@@EEAAJXZ.c)
 *     _BamoManualResizeAreaClientProxy::OnConnectedCallout_::_1_::dtor$0 @ 0x180161AF3 (_BamoManualResizeAreaClientProxy--OnConnectedCallout_--_1_--dtor$0.c)
 *     ?OnDisconnectedCallout@BamoManualResizeAreaClientProxy@@EEAAJXZ @ 0x180161B10 (-OnDisconnectedCallout@BamoManualResizeAreaClientProxy@@EEAAJXZ.c)
 *     _BamoManualResizeAreaClientProxy::OnDisconnectedCallout_::_1_::dtor$0 @ 0x180161B63 (_BamoManualResizeAreaClientProxy--OnDisconnectedCallout_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedCallout@BamoManualResizeAreaClientProxy@@EEAAJXZ @ 0x180161C70 (-OnPropertiesRefreshedCallout@BamoManualResizeAreaClientProxy@@EEAAJXZ.c)
 *     _BamoManualResizeAreaClientProxy::OnPropertiesRefreshedCallout_::_1_::dtor$0 @ 0x180161CC3 (_BamoManualResizeAreaClientProxy--OnPropertiesRefreshedCallout_--_1_--dtor$0.c)
 *     ?Thunk_StartManualResize_68@?$IManualResizeAreaClientProxy_Receive@VBamoManualResizeAreaClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180161DE0 (-Thunk_StartManualResize_68@-$IManualResizeAreaClientProxy_Receive@VBamoManualResizeAreaClientPr.c)
 *     _IManualResizeAreaClientProxy_Receive_BamoImpl::BamoManualResizeAreaClientProxyImpl_::Thunk_StartManualResize_68_::_1_::dtor$0 @ 0x180161E5E (_IManualResizeAreaClientProxy_Receive_BamoImpl--BamoManualResizeAreaClientProxyImpl_--Thunk_Star.c)
 *     ?UpdateType@BamoManualResizeAreaClientProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z @ 0x180161EB4 (-UpdateType@BamoManualResizeAreaClientProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z.c)
 *     _BamoImpl::BamoManualResizeAreaClientProxyImpl::UpdateType_::_1_::dtor$0 @ 0x180161FE6 (_BamoImpl--BamoManualResizeAreaClientProxyImpl--UpdateType_--_1_--dtor$0.c)
 *     _BamoImpl::BamoManualResizeAreaClientProxyImpl::UpdateType_::_1_::dtor$1 @ 0x180161FF2 (_BamoImpl--BamoManualResizeAreaClientProxyImpl--UpdateType_--_1_--dtor$1.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800252B0 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoManualResizeAreaClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoManualResizeAreaClientProxyImpl>(
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
