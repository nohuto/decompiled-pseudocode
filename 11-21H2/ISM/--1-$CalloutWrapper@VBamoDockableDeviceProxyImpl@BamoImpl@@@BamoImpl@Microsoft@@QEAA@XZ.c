/*
 * XREFs of ??1?$CalloutWrapper@VBamoDockableDeviceProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180105010
 * Callers:
 *     ?OnConnectedCallout@BamoDockableDeviceProxy@@EEAAJXZ @ 0x18010E810 (-OnConnectedCallout@BamoDockableDeviceProxy@@EEAAJXZ.c)
 *     _BamoDockableDeviceProxy::OnConnectedCallout_::_1_::dtor$0 @ 0x18010E863 (_BamoDockableDeviceProxy--OnConnectedCallout_--_1_--dtor$0.c)
 *     ?OnDisconnectedCallout@BamoDockableDeviceProxy@@EEAAJXZ @ 0x18010F990 (-OnDisconnectedCallout@BamoDockableDeviceProxy@@EEAAJXZ.c)
 *     _BamoDockableDeviceProxy::OnDisconnectedCallout_::_1_::dtor$0 @ 0x18010F9E3 (_BamoDockableDeviceProxy--OnDisconnectedCallout_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedCallout@BamoDockableDeviceProxy@@EEAAJXZ @ 0x180112320 (-OnPropertiesRefreshedCallout@BamoDockableDeviceProxy@@EEAAJXZ.c)
 *     _BamoDockableDeviceProxy::OnPropertiesRefreshedCallout_::_1_::dtor$0 @ 0x180112373 (_BamoDockableDeviceProxy--OnPropertiesRefreshedCallout_--_1_--dtor$0.c)
 *     ?UpdateDeviceId@BamoDockableDeviceProxyImpl@BamoImpl@@QEAAJ_NPEBUDockableDeviceIdentity@@@Z @ 0x18011A38C (-UpdateDeviceId@BamoDockableDeviceProxyImpl@BamoImpl@@QEAAJ_NPEBUDockableDeviceIdentity@@@Z.c)
 *     _BamoImpl::BamoDockableDeviceProxyImpl::UpdateDeviceId_::_1_::dtor$0 @ 0x18011A4A6 (_BamoImpl--BamoDockableDeviceProxyImpl--UpdateDeviceId_--_1_--dtor$0.c)
 *     _BamoImpl::BamoDockableDeviceProxyImpl::UpdateDeviceId_::_1_::dtor$1 @ 0x18011A4B2 (_BamoImpl--BamoDockableDeviceProxyImpl--UpdateDeviceId_--_1_--dtor$1.c)
 *     ?UpdateDeviceType@BamoDockableDeviceProxyImpl@BamoImpl@@QEAAJ_NW4DockableDeviceObjectType@@@Z @ 0x18011A4C4 (-UpdateDeviceType@BamoDockableDeviceProxyImpl@BamoImpl@@QEAAJ_NW4DockableDeviceObjectType@@@Z.c)
 *     _BamoImpl::BamoDockableDeviceProxyImpl::UpdateDeviceType_::_1_::dtor$0 @ 0x18011A5DB (_BamoImpl--BamoDockableDeviceProxyImpl--UpdateDeviceType_--_1_--dtor$0.c)
 *     _BamoImpl::BamoDockableDeviceProxyImpl::UpdateDeviceType_::_1_::dtor$1 @ 0x18011A5E7 (_BamoImpl--BamoDockableDeviceProxyImpl--UpdateDeviceType_--_1_--dtor$1.c)
 *     ?UpdateInterfacePath@BamoDockableDeviceProxyImpl@BamoImpl@@QEAAJ_NPEBG@Z @ 0x18011CD00 (-UpdateInterfacePath@BamoDockableDeviceProxyImpl@BamoImpl@@QEAAJ_NPEBG@Z.c)
 *     _BamoImpl::BamoDockableDeviceProxyImpl::UpdateInterfacePath_::_1_::dtor$0 @ 0x18011CE69 (_BamoImpl--BamoDockableDeviceProxyImpl--UpdateInterfacePath_--_1_--dtor$0.c)
 *     _BamoImpl::BamoDockableDeviceProxyImpl::UpdateInterfacePath_::_1_::dtor$1 @ 0x18011CE75 (_BamoImpl--BamoDockableDeviceProxyImpl--UpdateInterfacePath_--_1_--dtor$1.c)
 *     ?UpdatePrimaryUsageId@BamoDockableDeviceProxyImpl@BamoImpl@@QEAAJ_NG@Z @ 0x18011DB28 (-UpdatePrimaryUsageId@BamoDockableDeviceProxyImpl@BamoImpl@@QEAAJ_NG@Z.c)
 *     _BamoImpl::BamoDockableDeviceProxyImpl::UpdatePrimaryUsageId_::_1_::dtor$0 @ 0x18011DC42 (_BamoImpl--BamoDockableDeviceProxyImpl--UpdatePrimaryUsageId_--_1_--dtor$0.c)
 *     _BamoImpl::BamoDockableDeviceProxyImpl::UpdatePrimaryUsageId_::_1_::dtor$1 @ 0x18011DC4E (_BamoImpl--BamoDockableDeviceProxyImpl--UpdatePrimaryUsageId_--_1_--dtor$1.c)
 *     ?UpdatePrimaryUsagePage@BamoDockableDeviceProxyImpl@BamoImpl@@QEAAJ_NG@Z @ 0x18011DC60 (-UpdatePrimaryUsagePage@BamoDockableDeviceProxyImpl@BamoImpl@@QEAAJ_NG@Z.c)
 *     _BamoImpl::BamoDockableDeviceProxyImpl::UpdatePrimaryUsagePage_::_1_::dtor$0 @ 0x18011DD7A (_BamoImpl--BamoDockableDeviceProxyImpl--UpdatePrimaryUsagePage_--_1_--dtor$0.c)
 *     _BamoImpl::BamoDockableDeviceProxyImpl::UpdatePrimaryUsagePage_::_1_::dtor$1 @ 0x18011DD86 (_BamoImpl--BamoDockableDeviceProxyImpl--UpdatePrimaryUsagePage_--_1_--dtor$1.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18004665C (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoDockableDeviceProxyImpl>::~CalloutWrapper<BamoImpl::BamoDockableDeviceProxyImpl>(
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
