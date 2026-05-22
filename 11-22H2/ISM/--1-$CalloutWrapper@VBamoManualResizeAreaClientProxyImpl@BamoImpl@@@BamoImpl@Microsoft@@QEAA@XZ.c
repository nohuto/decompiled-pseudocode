/*
 * XREFs of ??1?$CalloutWrapper@VBamoManualResizeAreaClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18016F93C
 * Callers:
 *     ?OnConnectedCallout@BamoManualResizeAreaClientProxy@@EEAAJXZ @ 0x18016FD20 (-OnConnectedCallout@BamoManualResizeAreaClientProxy@@EEAAJXZ.c)
 *     _BamoManualResizeAreaClientProxy::OnConnectedCallout_::_1_::dtor$0 @ 0x18016FD73 (_BamoManualResizeAreaClientProxy--OnConnectedCallout_--_1_--dtor$0.c)
 *     ?OnDisconnectedCallout@BamoManualResizeAreaClientProxy@@EEAAJXZ @ 0x18016FD90 (-OnDisconnectedCallout@BamoManualResizeAreaClientProxy@@EEAAJXZ.c)
 *     _BamoManualResizeAreaClientProxy::OnDisconnectedCallout_::_1_::dtor$0 @ 0x18016FDE3 (_BamoManualResizeAreaClientProxy--OnDisconnectedCallout_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedCallout@BamoManualResizeAreaClientProxy@@EEAAJXZ @ 0x18016FEF0 (-OnPropertiesRefreshedCallout@BamoManualResizeAreaClientProxy@@EEAAJXZ.c)
 *     _BamoManualResizeAreaClientProxy::OnPropertiesRefreshedCallout_::_1_::dtor$0 @ 0x18016FF43 (_BamoManualResizeAreaClientProxy--OnPropertiesRefreshedCallout_--_1_--dtor$0.c)
 *     ?Thunk_StartManualResize_68@?$IManualResizeAreaClientProxy_Receive@VBamoManualResizeAreaClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180170060 (-Thunk_StartManualResize_68@-$IManualResizeAreaClientProxy_Receive@VBamoManualResizeAreaClientPr.c)
 *     _IManualResizeAreaClientProxy_Receive_BamoImpl::BamoManualResizeAreaClientProxyImpl_::Thunk_StartManualResize_68_::_1_::dtor$0 @ 0x1801700DE (_IManualResizeAreaClientProxy_Receive_BamoImpl--BamoManualResizeAreaClientProxyImpl_--Thunk_Star.c)
 *     ?UpdateType@BamoManualResizeAreaClientProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z @ 0x180170134 (-UpdateType@BamoManualResizeAreaClientProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z.c)
 *     _BamoImpl::BamoManualResizeAreaClientProxyImpl::UpdateType_::_1_::dtor$0 @ 0x180170266 (_BamoImpl--BamoManualResizeAreaClientProxyImpl--UpdateType_--_1_--dtor$0.c)
 *     _BamoImpl::BamoManualResizeAreaClientProxyImpl::UpdateType_::_1_::dtor$1 @ 0x180170272 (_BamoImpl--BamoManualResizeAreaClientProxyImpl--UpdateType_--_1_--dtor$1.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18002679C (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
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
