/*
 * XREFs of ??1?$CalloutWrapper@VBamoPenDeviceProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1801212A4
 * Callers:
 *     ?OnConnectedCallout@BamoPenDeviceProxy@@EEAAJXZ @ 0x180129BD0 (-OnConnectedCallout@BamoPenDeviceProxy@@EEAAJXZ.c)
 *     _BamoPenDeviceProxy::OnConnectedCallout_::_1_::dtor$0 @ 0x180129C23 (_BamoPenDeviceProxy--OnConnectedCallout_--_1_--dtor$0.c)
 *     ?OnDisconnectedCallout@BamoPenDeviceProxy@@EEAAJXZ @ 0x18012AD50 (-OnDisconnectedCallout@BamoPenDeviceProxy@@EEAAJXZ.c)
 *     _BamoPenDeviceProxy::OnDisconnectedCallout_::_1_::dtor$0 @ 0x18012ADA3 (_BamoPenDeviceProxy--OnDisconnectedCallout_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedCallout@BamoPenDeviceProxy@@EEAAJXZ @ 0x18012D850 (-OnPropertiesRefreshedCallout@BamoPenDeviceProxy@@EEAAJXZ.c)
 *     _BamoPenDeviceProxy::OnPropertiesRefreshedCallout_::_1_::dtor$0 @ 0x18012D8A3 (_BamoPenDeviceProxy--OnPropertiesRefreshedCallout_--_1_--dtor$0.c)
 *     ?UpdateHaptics@BamoPenDeviceProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x180137060 (-UpdateHaptics@BamoPenDeviceProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 *     _BamoImpl::BamoPenDeviceProxyImpl::UpdateHaptics_::_1_::dtor$0 @ 0x180137249 (_BamoImpl--BamoPenDeviceProxyImpl--UpdateHaptics_--_1_--dtor$0.c)
 *     _BamoImpl::BamoPenDeviceProxyImpl::UpdateHaptics_::_1_::dtor$1 @ 0x180137255 (_BamoImpl--BamoPenDeviceProxyImpl--UpdateHaptics_--_1_--dtor$1.c)
 *     ?UpdateUniqueId@BamoPenDeviceProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z @ 0x18013BABC (-UpdateUniqueId@BamoPenDeviceProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z.c)
 *     _BamoImpl::BamoPenDeviceProxyImpl::UpdateUniqueId_::_1_::dtor$0 @ 0x18013BBEE (_BamoImpl--BamoPenDeviceProxyImpl--UpdateUniqueId_--_1_--dtor$0.c)
 *     _BamoImpl::BamoPenDeviceProxyImpl::UpdateUniqueId_::_1_::dtor$1 @ 0x18013BBFA (_BamoImpl--BamoPenDeviceProxyImpl--UpdateUniqueId_--_1_--dtor$1.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800252B0 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoPenDeviceProxyImpl>::~CalloutWrapper<BamoImpl::BamoPenDeviceProxyImpl>(
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
