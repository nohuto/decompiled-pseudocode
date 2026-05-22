/*
 * XREFs of ??1?$CalloutWrapper@VBamoDragSourceClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18012EAD4
 * Callers:
 *     ?OnConnectedCallout@BamoDragSourceClientProxy@@EEAAJXZ @ 0x1801374C0 (-OnConnectedCallout@BamoDragSourceClientProxy@@EEAAJXZ.c)
 *     _BamoDragSourceClientProxy::OnConnectedCallout_::_1_::dtor$0 @ 0x180137513 (_BamoDragSourceClientProxy--OnConnectedCallout_--_1_--dtor$0.c)
 *     ?OnDisconnectedCallout@BamoDragSourceClientProxy@@EEAAJXZ @ 0x1801385D0 (-OnDisconnectedCallout@BamoDragSourceClientProxy@@EEAAJXZ.c)
 *     _BamoDragSourceClientProxy::OnDisconnectedCallout_::_1_::dtor$0 @ 0x180138623 (_BamoDragSourceClientProxy--OnDisconnectedCallout_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedCallout@BamoDragSourceClientProxy@@EEAAJXZ @ 0x18013B0D0 (-OnPropertiesRefreshedCallout@BamoDragSourceClientProxy@@EEAAJXZ.c)
 *     _BamoDragSourceClientProxy::OnPropertiesRefreshedCallout_::_1_::dtor$0 @ 0x18013B123 (_BamoDragSourceClientProxy--OnPropertiesRefreshedCallout_--_1_--dtor$0.c)
 *     ?UpdateControlPoints@BamoDragSourceClientProxyImpl@BamoImpl@@QEAAJ_NPEBUtagPOINT@@I@Z @ 0x1801432D0 (-UpdateControlPoints@BamoDragSourceClientProxyImpl@BamoImpl@@QEAAJ_NPEBUtagPOINT@@I@Z.c)
 *     _BamoImpl::BamoDragSourceClientProxyImpl::UpdateControlPoints_::_1_::dtor$0 @ 0x180143459 (_BamoImpl--BamoDragSourceClientProxyImpl--UpdateControlPoints_--_1_--dtor$0.c)
 *     _BamoImpl::BamoDragSourceClientProxyImpl::UpdateControlPoints_::_1_::dtor$1 @ 0x180143465 (_BamoImpl--BamoDragSourceClientProxyImpl--UpdateControlPoints_--_1_--dtor$1.c)
 *     ?UpdateHitTestConfiguration@BamoDragSourceClientProxyImpl@BamoImpl@@QEAAJ_NW4HitTestConfiguration@Input@Internal@UI@Windows@@@Z @ 0x180145464 (-UpdateHitTestConfiguration@BamoDragSourceClientProxyImpl@BamoImpl@@QEAAJ_NW4HitTestConfiguratio.c)
 *     _BamoImpl::BamoDragSourceClientProxyImpl::UpdateHitTestConfiguration_::_1_::dtor$0 @ 0x180145595 (_BamoImpl--BamoDragSourceClientProxyImpl--UpdateHitTestConfiguration_--_1_--dtor$0.c)
 *     _BamoImpl::BamoDragSourceClientProxyImpl::UpdateHitTestConfiguration_::_1_::dtor$1 @ 0x1801455A1 (_BamoImpl--BamoDragSourceClientProxyImpl--UpdateHitTestConfiguration_--_1_--dtor$1.c)
 *     ?UpdateId@BamoDragSourceClientProxyImpl@BamoImpl@@QEAAJ_N_K@Z @ 0x180145700 (-UpdateId@BamoDragSourceClientProxyImpl@BamoImpl@@QEAAJ_N_K@Z.c)
 *     _BamoImpl::BamoDragSourceClientProxyImpl::UpdateId_::_1_::dtor$0 @ 0x180145830 (_BamoImpl--BamoDragSourceClientProxyImpl--UpdateId_--_1_--dtor$0.c)
 *     _BamoImpl::BamoDragSourceClientProxyImpl::UpdateId_::_1_::dtor$1 @ 0x18014583C (_BamoImpl--BamoDragSourceClientProxyImpl--UpdateId_--_1_--dtor$1.c)
 *     ?UpdateType@BamoDragSourceClientProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z @ 0x1801490BC (-UpdateType@BamoDragSourceClientProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z.c)
 *     _BamoImpl::BamoDragSourceClientProxyImpl::UpdateType_::_1_::dtor$0 @ 0x1801491EE (_BamoImpl--BamoDragSourceClientProxyImpl--UpdateType_--_1_--dtor$0.c)
 *     _BamoImpl::BamoDragSourceClientProxyImpl::UpdateType_::_1_::dtor$1 @ 0x1801491FA (_BamoImpl--BamoDragSourceClientProxyImpl--UpdateType_--_1_--dtor$1.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18002679C (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
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
