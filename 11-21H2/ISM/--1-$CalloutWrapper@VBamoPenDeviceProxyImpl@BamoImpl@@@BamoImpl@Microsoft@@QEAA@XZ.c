/*
 * XREFs of ??1?$CalloutWrapper@VBamoPenDeviceProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180105944
 * Callers:
 *     ?OnConnectedCallout@BamoPenDeviceProxy@@EEAAJXZ @ 0x18010F060 (-OnConnectedCallout@BamoPenDeviceProxy@@EEAAJXZ.c)
 *     _BamoPenDeviceProxy::OnConnectedCallout_::_1_::dtor$0 @ 0x18010F0B3 (_BamoPenDeviceProxy--OnConnectedCallout_--_1_--dtor$0.c)
 *     ?OnDisconnectedCallout@BamoPenDeviceProxy@@EEAAJXZ @ 0x1801101E0 (-OnDisconnectedCallout@BamoPenDeviceProxy@@EEAAJXZ.c)
 *     _BamoPenDeviceProxy::OnDisconnectedCallout_::_1_::dtor$0 @ 0x180110233 (_BamoPenDeviceProxy--OnDisconnectedCallout_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedCallout@BamoPenDeviceProxy@@EEAAJXZ @ 0x180112B70 (-OnPropertiesRefreshedCallout@BamoPenDeviceProxy@@EEAAJXZ.c)
 *     _BamoPenDeviceProxy::OnPropertiesRefreshedCallout_::_1_::dtor$0 @ 0x180112BC3 (_BamoPenDeviceProxy--OnPropertiesRefreshedCallout_--_1_--dtor$0.c)
 *     ?UpdateHaptics@BamoPenDeviceProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x18011BA58 (-UpdateHaptics@BamoPenDeviceProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 *     _BamoImpl::BamoPenDeviceProxyImpl::UpdateHaptics_::_1_::dtor$0 @ 0x18011BC1C (_BamoImpl--BamoPenDeviceProxyImpl--UpdateHaptics_--_1_--dtor$0.c)
 *     _BamoImpl::BamoPenDeviceProxyImpl::UpdateHaptics_::_1_::dtor$1 @ 0x18011BC28 (_BamoImpl--BamoPenDeviceProxyImpl--UpdateHaptics_--_1_--dtor$1.c)
 *     ?UpdateUniqueId@BamoPenDeviceProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z @ 0x1801203DC (-UpdateUniqueId@BamoPenDeviceProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z.c)
 *     _BamoImpl::BamoPenDeviceProxyImpl::UpdateUniqueId_::_1_::dtor$0 @ 0x1801204F3 (_BamoImpl--BamoPenDeviceProxyImpl--UpdateUniqueId_--_1_--dtor$0.c)
 *     _BamoImpl::BamoPenDeviceProxyImpl::UpdateUniqueId_::_1_::dtor$1 @ 0x1801204FF (_BamoImpl--BamoPenDeviceProxyImpl--UpdateUniqueId_--_1_--dtor$1.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18004665C (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
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
