/*
 * XREFs of ??1?$CalloutWrapper@VBamoDockableDeviceProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18012E9DC
 * Callers:
 *     ?OnConnectedCallout@BamoDockableDeviceProxy@@EEAAJXZ @ 0x1801373E0 (-OnConnectedCallout@BamoDockableDeviceProxy@@EEAAJXZ.c)
 *     _BamoDockableDeviceProxy::OnConnectedCallout_::_1_::dtor$0 @ 0x180137433 (_BamoDockableDeviceProxy--OnConnectedCallout_--_1_--dtor$0.c)
 *     ?OnDisconnectedCallout@BamoDockableDeviceProxy@@EEAAJXZ @ 0x1801384F0 (-OnDisconnectedCallout@BamoDockableDeviceProxy@@EEAAJXZ.c)
 *     _BamoDockableDeviceProxy::OnDisconnectedCallout_::_1_::dtor$0 @ 0x180138543 (_BamoDockableDeviceProxy--OnDisconnectedCallout_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedCallout@BamoDockableDeviceProxy@@EEAAJXZ @ 0x18013AFF0 (-OnPropertiesRefreshedCallout@BamoDockableDeviceProxy@@EEAAJXZ.c)
 *     _BamoDockableDeviceProxy::OnPropertiesRefreshedCallout_::_1_::dtor$0 @ 0x18013B043 (_BamoDockableDeviceProxy--OnPropertiesRefreshedCallout_--_1_--dtor$0.c)
 *     ?UpdateDeviceId@BamoDockableDeviceProxyImpl@BamoImpl@@QEAAJ_NPEBUDockableDeviceIdentity@@@Z @ 0x180143A34 (-UpdateDeviceId@BamoDockableDeviceProxyImpl@BamoImpl@@QEAAJ_NPEBUDockableDeviceIdentity@@@Z.c)
 *     _BamoImpl::BamoDockableDeviceProxyImpl::UpdateDeviceId_::_1_::dtor$0 @ 0x180143B69 (_BamoImpl--BamoDockableDeviceProxyImpl--UpdateDeviceId_--_1_--dtor$0.c)
 *     _BamoImpl::BamoDockableDeviceProxyImpl::UpdateDeviceId_::_1_::dtor$1 @ 0x180143B75 (_BamoImpl--BamoDockableDeviceProxyImpl--UpdateDeviceId_--_1_--dtor$1.c)
 *     ?UpdateDeviceType@BamoDockableDeviceProxyImpl@BamoImpl@@QEAAJ_NW4DockableDeviceObjectType@@@Z @ 0x180143B88 (-UpdateDeviceType@BamoDockableDeviceProxyImpl@BamoImpl@@QEAAJ_NW4DockableDeviceObjectType@@@Z.c)
 *     _BamoImpl::BamoDockableDeviceProxyImpl::UpdateDeviceType_::_1_::dtor$0 @ 0x180143CB9 (_BamoImpl--BamoDockableDeviceProxyImpl--UpdateDeviceType_--_1_--dtor$0.c)
 *     _BamoImpl::BamoDockableDeviceProxyImpl::UpdateDeviceType_::_1_::dtor$1 @ 0x180143CC5 (_BamoImpl--BamoDockableDeviceProxyImpl--UpdateDeviceType_--_1_--dtor$1.c)
 *     ?UpdateInterfacePath@BamoDockableDeviceProxyImpl@BamoImpl@@QEAAJ_NPEBG@Z @ 0x180146320 (-UpdateInterfacePath@BamoDockableDeviceProxyImpl@BamoImpl@@QEAAJ_NPEBG@Z.c)
 *     _BamoImpl::BamoDockableDeviceProxyImpl::UpdateInterfacePath_::_1_::dtor$0 @ 0x180146492 (_BamoImpl--BamoDockableDeviceProxyImpl--UpdateInterfacePath_--_1_--dtor$0.c)
 *     _BamoImpl::BamoDockableDeviceProxyImpl::UpdateInterfacePath_::_1_::dtor$1 @ 0x18014649E (_BamoImpl--BamoDockableDeviceProxyImpl--UpdateInterfacePath_--_1_--dtor$1.c)
 *     ?UpdatePrimaryUsageId@BamoDockableDeviceProxyImpl@BamoImpl@@QEAAJ_NG@Z @ 0x180147244 (-UpdatePrimaryUsageId@BamoDockableDeviceProxyImpl@BamoImpl@@QEAAJ_NG@Z.c)
 *     _BamoImpl::BamoDockableDeviceProxyImpl::UpdatePrimaryUsageId_::_1_::dtor$0 @ 0x180147378 (_BamoImpl--BamoDockableDeviceProxyImpl--UpdatePrimaryUsageId_--_1_--dtor$0.c)
 *     _BamoImpl::BamoDockableDeviceProxyImpl::UpdatePrimaryUsageId_::_1_::dtor$1 @ 0x180147384 (_BamoImpl--BamoDockableDeviceProxyImpl--UpdatePrimaryUsageId_--_1_--dtor$1.c)
 *     ?UpdatePrimaryUsagePage@BamoDockableDeviceProxyImpl@BamoImpl@@QEAAJ_NG@Z @ 0x180147398 (-UpdatePrimaryUsagePage@BamoDockableDeviceProxyImpl@BamoImpl@@QEAAJ_NG@Z.c)
 *     _BamoImpl::BamoDockableDeviceProxyImpl::UpdatePrimaryUsagePage_::_1_::dtor$0 @ 0x1801474CC (_BamoImpl--BamoDockableDeviceProxyImpl--UpdatePrimaryUsagePage_--_1_--dtor$0.c)
 *     _BamoImpl::BamoDockableDeviceProxyImpl::UpdatePrimaryUsagePage_::_1_::dtor$1 @ 0x1801474D8 (_BamoImpl--BamoDockableDeviceProxyImpl--UpdatePrimaryUsagePage_--_1_--dtor$1.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18002679C (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
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
