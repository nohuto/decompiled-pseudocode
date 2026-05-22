/*
 * XREFs of ??1?$CalloutWrapper@VBamoDragAreaClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18012EA58
 * Callers:
 *     ?OnConnectedCallout@BamoDragAreaClientProxy@@EEAAJXZ @ 0x180137450 (-OnConnectedCallout@BamoDragAreaClientProxy@@EEAAJXZ.c)
 *     _BamoDragAreaClientProxy::OnConnectedCallout_::_1_::dtor$0 @ 0x1801374A3 (_BamoDragAreaClientProxy--OnConnectedCallout_--_1_--dtor$0.c)
 *     ?OnDisconnectedCallout@BamoDragAreaClientProxy@@EEAAJXZ @ 0x180138560 (-OnDisconnectedCallout@BamoDragAreaClientProxy@@EEAAJXZ.c)
 *     _BamoDragAreaClientProxy::OnDisconnectedCallout_::_1_::dtor$0 @ 0x1801385B3 (_BamoDragAreaClientProxy--OnDisconnectedCallout_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedCallout@BamoDragAreaClientProxy@@EEAAJXZ @ 0x18013B060 (-OnPropertiesRefreshedCallout@BamoDragAreaClientProxy@@EEAAJXZ.c)
 *     _BamoDragAreaClientProxy::OnPropertiesRefreshedCallout_::_1_::dtor$0 @ 0x18013B0B3 (_BamoDragAreaClientProxy--OnPropertiesRefreshedCallout_--_1_--dtor$0.c)
 *     ?UpdateType@BamoDragAreaClientProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z @ 0x180148F6C (-UpdateType@BamoDragAreaClientProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z.c)
 *     _BamoImpl::BamoDragAreaClientProxyImpl::UpdateType_::_1_::dtor$0 @ 0x18014909E (_BamoImpl--BamoDragAreaClientProxyImpl--UpdateType_--_1_--dtor$0.c)
 *     _BamoImpl::BamoDragAreaClientProxyImpl::UpdateType_::_1_::dtor$1 @ 0x1801490AA (_BamoImpl--BamoDragAreaClientProxyImpl--UpdateType_--_1_--dtor$1.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18002679C (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoDragAreaClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoDragAreaClientProxyImpl>(
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
