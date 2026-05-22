/*
 * XREFs of ??1?$CalloutWrapper@VBamoDragManagerClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180105108
 * Callers:
 *     ?OnConnectedCallout@BamoDragManagerClientProxy@@EEAAJXZ @ 0x18010E8F0 (-OnConnectedCallout@BamoDragManagerClientProxy@@EEAAJXZ.c)
 *     _BamoDragManagerClientProxy::OnConnectedCallout_::_1_::dtor$0 @ 0x18010E943 (_BamoDragManagerClientProxy--OnConnectedCallout_--_1_--dtor$0.c)
 *     ?OnDisconnectedCallout@BamoDragManagerClientProxy@@EEAAJXZ @ 0x18010FA70 (-OnDisconnectedCallout@BamoDragManagerClientProxy@@EEAAJXZ.c)
 *     _BamoDragManagerClientProxy::OnDisconnectedCallout_::_1_::dtor$0 @ 0x18010FAC3 (_BamoDragManagerClientProxy--OnDisconnectedCallout_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedCallout@BamoDragManagerClientProxy@@EEAAJXZ @ 0x180112400 (-OnPropertiesRefreshedCallout@BamoDragManagerClientProxy@@EEAAJXZ.c)
 *     _BamoDragManagerClientProxy::OnPropertiesRefreshedCallout_::_1_::dtor$0 @ 0x180112453 (_BamoDragManagerClientProxy--OnPropertiesRefreshedCallout_--_1_--dtor$0.c)
 *     ?UpdateSourceType@BamoDragManagerClientProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z @ 0x18011E5F4 (-UpdateSourceType@BamoDragManagerClientProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z.c)
 *     _BamoImpl::BamoDragManagerClientProxyImpl::UpdateSourceType_::_1_::dtor$0 @ 0x18011E70B (_BamoImpl--BamoDragManagerClientProxyImpl--UpdateSourceType_--_1_--dtor$0.c)
 *     _BamoImpl::BamoDragManagerClientProxyImpl::UpdateSourceType_::_1_::dtor$1 @ 0x18011E717 (_BamoImpl--BamoDragManagerClientProxyImpl--UpdateSourceType_--_1_--dtor$1.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18004665C (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoDragManagerClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoDragManagerClientProxyImpl>(
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
