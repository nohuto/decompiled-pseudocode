/*
 * XREFs of ??1?$CalloutWrapper@VBamoShellGesturesClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18014F1C0
 * Callers:
 *     ?OnConnectedCallout@BamoShellGesturesClientProxy@@EEAAJXZ @ 0x18014F8C0 (-OnConnectedCallout@BamoShellGesturesClientProxy@@EEAAJXZ.c)
 *     _BamoShellGesturesClientProxy::OnConnectedCallout_::_1_::dtor$0 @ 0x18014F913 (_BamoShellGesturesClientProxy--OnConnectedCallout_--_1_--dtor$0.c)
 *     ?OnDisconnectedCallout@BamoShellGesturesClientProxy@@EEAAJXZ @ 0x18014F960 (-OnDisconnectedCallout@BamoShellGesturesClientProxy@@EEAAJXZ.c)
 *     _BamoShellGesturesClientProxy::OnDisconnectedCallout_::_1_::dtor$0 @ 0x18014F9B3 (_BamoShellGesturesClientProxy--OnDisconnectedCallout_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedCallout@BamoShellGesturesClientProxy@@EEAAJXZ @ 0x18014FBF0 (-OnPropertiesRefreshedCallout@BamoShellGesturesClientProxy@@EEAAJXZ.c)
 *     _BamoShellGesturesClientProxy::OnPropertiesRefreshedCallout_::_1_::dtor$0 @ 0x18014FC43 (_BamoShellGesturesClientProxy--OnPropertiesRefreshedCallout_--_1_--dtor$0.c)
 *     ?UpdateInputSinkData@BamoShellGesturesClientProxyImpl@BamoImpl@@QEAAJ_NPEBUInputSinkData@@@Z @ 0x18014FE84 (-UpdateInputSinkData@BamoShellGesturesClientProxyImpl@BamoImpl@@QEAAJ_NPEBUInputSinkData@@@Z.c)
 *     _BamoImpl::BamoShellGesturesClientProxyImpl::UpdateInputSinkData_::_1_::dtor$0 @ 0x18014FFB0 (_BamoImpl--BamoShellGesturesClientProxyImpl--UpdateInputSinkData_--_1_--dtor$0.c)
 *     _BamoImpl::BamoShellGesturesClientProxyImpl::UpdateInputSinkData_::_1_::dtor$1 @ 0x18014FFBC (_BamoImpl--BamoShellGesturesClientProxyImpl--UpdateInputSinkData_--_1_--dtor$1.c)
 *     ?UpdateTouchEnabled@BamoShellGesturesClientProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x180150018 (-UpdateTouchEnabled@BamoShellGesturesClientProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     _BamoImpl::BamoShellGesturesClientProxyImpl::UpdateTouchEnabled_::_1_::dtor$0 @ 0x18015012E (_BamoImpl--BamoShellGesturesClientProxyImpl--UpdateTouchEnabled_--_1_--dtor$0.c)
 *     _BamoImpl::BamoShellGesturesClientProxyImpl::UpdateTouchEnabled_::_1_::dtor$1 @ 0x18015013A (_BamoImpl--BamoShellGesturesClientProxyImpl--UpdateTouchEnabled_--_1_--dtor$1.c)
 *     ?UpdateTouchpadEnabled@BamoShellGesturesClientProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x18015014C (-UpdateTouchpadEnabled@BamoShellGesturesClientProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     _BamoImpl::BamoShellGesturesClientProxyImpl::UpdateTouchpadEnabled_::_1_::dtor$0 @ 0x18015025F (_BamoImpl--BamoShellGesturesClientProxyImpl--UpdateTouchpadEnabled_--_1_--dtor$0.c)
 *     _BamoImpl::BamoShellGesturesClientProxyImpl::UpdateTouchpadEnabled_::_1_::dtor$1 @ 0x18015026B (_BamoImpl--BamoShellGesturesClientProxyImpl--UpdateTouchpadEnabled_--_1_--dtor$1.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18004665C (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoShellGesturesClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoShellGesturesClientProxyImpl>(
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
