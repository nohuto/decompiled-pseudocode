/*
 * XREFs of ??1?$CalloutWrapper@VBamoInputSystemInternalProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1801057D0
 * Callers:
 *     ?OnConnectedCallout@BamoInputSystemInternalProxy@@EEAAJXZ @ 0x18010EF10 (-OnConnectedCallout@BamoInputSystemInternalProxy@@EEAAJXZ.c)
 *     _BamoInputSystemInternalProxy::OnConnectedCallout_::_1_::dtor$0 @ 0x18010EF63 (_BamoInputSystemInternalProxy--OnConnectedCallout_--_1_--dtor$0.c)
 *     ?OnDisconnectedCallout@BamoInputSystemInternalProxy@@EEAAJXZ @ 0x180110090 (-OnDisconnectedCallout@BamoInputSystemInternalProxy@@EEAAJXZ.c)
 *     _BamoInputSystemInternalProxy::OnDisconnectedCallout_::_1_::dtor$0 @ 0x1801100E3 (_BamoInputSystemInternalProxy--OnDisconnectedCallout_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedCallout@BamoInputSystemInternalProxy@@EEAAJXZ @ 0x180112A20 (-OnPropertiesRefreshedCallout@BamoInputSystemInternalProxy@@EEAAJXZ.c)
 *     _BamoInputSystemInternalProxy::OnPropertiesRefreshedCallout_::_1_::dtor$0 @ 0x180112A73 (_BamoInputSystemInternalProxy--OnPropertiesRefreshedCallout_--_1_--dtor$0.c)
 *     ?UpdateInputProcessManager@BamoInputSystemInternalProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x18011C7FC (-UpdateInputProcessManager@BamoInputSystemInternalProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 *     _BamoImpl::BamoInputSystemInternalProxyImpl::UpdateInputProcessManager_::_1_::dtor$0 @ 0x18011C9BD (_BamoImpl--BamoInputSystemInternalProxyImpl--UpdateInputProcessManager_--_1_--dtor$0.c)
 *     _BamoImpl::BamoInputSystemInternalProxyImpl::UpdateInputProcessManager_::_1_::dtor$1 @ 0x18011C9C9 (_BamoImpl--BamoInputSystemInternalProxyImpl--UpdateInputProcessManager_--_1_--dtor$1.c)
 *     ?UpdateSystemContextManager@BamoInputSystemInternalProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x18011F274 (-UpdateSystemContextManager@BamoInputSystemInternalProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 *     _BamoImpl::BamoInputSystemInternalProxyImpl::UpdateSystemContextManager_::_1_::dtor$0 @ 0x18011F438 (_BamoImpl--BamoInputSystemInternalProxyImpl--UpdateSystemContextManager_--_1_--dtor$0.c)
 *     _BamoImpl::BamoInputSystemInternalProxyImpl::UpdateSystemContextManager_::_1_::dtor$1 @ 0x18011F444 (_BamoImpl--BamoInputSystemInternalProxyImpl--UpdateSystemContextManager_--_1_--dtor$1.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18004665C (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSystemInternalProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputSystemInternalProxyImpl>(
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
