/*
 * XREFs of ??1?$CalloutWrapper@VBamoDragSourceClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180120AE4
 * Callers:
 *     ?OnConnectedCallout@BamoDragSourceClientProxy@@EEAAJXZ @ 0x1801294D0 (-OnConnectedCallout@BamoDragSourceClientProxy@@EEAAJXZ.c)
 *     _BamoDragSourceClientProxy::OnConnectedCallout_::_1_::dtor$0 @ 0x180129523 (_BamoDragSourceClientProxy--OnConnectedCallout_--_1_--dtor$0.c)
 *     ?OnDisconnectedCallout@BamoDragSourceClientProxy@@EEAAJXZ @ 0x18012A5E0 (-OnDisconnectedCallout@BamoDragSourceClientProxy@@EEAAJXZ.c)
 *     _BamoDragSourceClientProxy::OnDisconnectedCallout_::_1_::dtor$0 @ 0x18012A633 (_BamoDragSourceClientProxy--OnDisconnectedCallout_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedCallout@BamoDragSourceClientProxy@@EEAAJXZ @ 0x18012D0E0 (-OnPropertiesRefreshedCallout@BamoDragSourceClientProxy@@EEAAJXZ.c)
 *     _BamoDragSourceClientProxy::OnPropertiesRefreshedCallout_::_1_::dtor$0 @ 0x18012D133 (_BamoDragSourceClientProxy--OnPropertiesRefreshedCallout_--_1_--dtor$0.c)
 *     ?UpdateControlPoints@BamoDragSourceClientProxyImpl@BamoImpl@@QEAAJ_NPEBUtagPOINT@@I@Z @ 0x1801352E0 (-UpdateControlPoints@BamoDragSourceClientProxyImpl@BamoImpl@@QEAAJ_NPEBUtagPOINT@@I@Z.c)
 *     _BamoImpl::BamoDragSourceClientProxyImpl::UpdateControlPoints_::_1_::dtor$0 @ 0x180135469 (_BamoImpl--BamoDragSourceClientProxyImpl--UpdateControlPoints_--_1_--dtor$0.c)
 *     _BamoImpl::BamoDragSourceClientProxyImpl::UpdateControlPoints_::_1_::dtor$1 @ 0x180135475 (_BamoImpl--BamoDragSourceClientProxyImpl--UpdateControlPoints_--_1_--dtor$1.c)
 *     ?UpdateHitTestConfiguration@BamoDragSourceClientProxyImpl@BamoImpl@@QEAAJ_NW4HitTestConfiguration@Input@Internal@UI@Windows@@@Z @ 0x180137474 (-UpdateHitTestConfiguration@BamoDragSourceClientProxyImpl@BamoImpl@@QEAAJ_NW4HitTestConfiguratio.c)
 *     _BamoImpl::BamoDragSourceClientProxyImpl::UpdateHitTestConfiguration_::_1_::dtor$0 @ 0x1801375A5 (_BamoImpl--BamoDragSourceClientProxyImpl--UpdateHitTestConfiguration_--_1_--dtor$0.c)
 *     _BamoImpl::BamoDragSourceClientProxyImpl::UpdateHitTestConfiguration_::_1_::dtor$1 @ 0x1801375B1 (_BamoImpl--BamoDragSourceClientProxyImpl--UpdateHitTestConfiguration_--_1_--dtor$1.c)
 *     ?UpdateId@BamoDragSourceClientProxyImpl@BamoImpl@@QEAAJ_N_K@Z @ 0x180137710 (-UpdateId@BamoDragSourceClientProxyImpl@BamoImpl@@QEAAJ_N_K@Z.c)
 *     _BamoImpl::BamoDragSourceClientProxyImpl::UpdateId_::_1_::dtor$0 @ 0x180137840 (_BamoImpl--BamoDragSourceClientProxyImpl--UpdateId_--_1_--dtor$0.c)
 *     _BamoImpl::BamoDragSourceClientProxyImpl::UpdateId_::_1_::dtor$1 @ 0x18013784C (_BamoImpl--BamoDragSourceClientProxyImpl--UpdateId_--_1_--dtor$1.c)
 *     ?UpdateType@BamoDragSourceClientProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z @ 0x18013B0CC (-UpdateType@BamoDragSourceClientProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z.c)
 *     _BamoImpl::BamoDragSourceClientProxyImpl::UpdateType_::_1_::dtor$0 @ 0x18013B1FE (_BamoImpl--BamoDragSourceClientProxyImpl--UpdateType_--_1_--dtor$0.c)
 *     _BamoImpl::BamoDragSourceClientProxyImpl::UpdateType_::_1_::dtor$1 @ 0x18013B20A (_BamoImpl--BamoDragSourceClientProxyImpl--UpdateType_--_1_--dtor$1.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800252B0 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoDragSourceClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoDragSourceClientProxyImpl>(
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
