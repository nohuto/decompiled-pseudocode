/*
 * XREFs of ??1?$CalloutWrapper@VBamoDockDeviceProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180104F94
 * Callers:
 *     ?OnConnectedCallout@BamoDockDeviceProxy@@EEAAJXZ @ 0x18010E7A0 (-OnConnectedCallout@BamoDockDeviceProxy@@EEAAJXZ.c)
 *     _BamoDockDeviceProxy::OnConnectedCallout_::_1_::dtor$0 @ 0x18010E7F3 (_BamoDockDeviceProxy--OnConnectedCallout_--_1_--dtor$0.c)
 *     ?OnDisconnectedCallout@BamoDockDeviceProxy@@EEAAJXZ @ 0x18010F920 (-OnDisconnectedCallout@BamoDockDeviceProxy@@EEAAJXZ.c)
 *     _BamoDockDeviceProxy::OnDisconnectedCallout_::_1_::dtor$0 @ 0x18010F973 (_BamoDockDeviceProxy--OnDisconnectedCallout_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedCallout@BamoDockDeviceProxy@@EEAAJXZ @ 0x1801122B0 (-OnPropertiesRefreshedCallout@BamoDockDeviceProxy@@EEAAJXZ.c)
 *     _BamoDockDeviceProxy::OnPropertiesRefreshedCallout_::_1_::dtor$0 @ 0x180112303 (_BamoDockDeviceProxy--OnPropertiesRefreshedCallout_--_1_--dtor$0.c)
 *     ?UpdateDisplayOcclusionLogicalRange@BamoDockDeviceProxyImpl@BamoImpl@@QEAAJ_NPEBUtagRECT@@@Z @ 0x18011A5FC (-UpdateDisplayOcclusionLogicalRange@BamoDockDeviceProxyImpl@BamoImpl@@QEAAJ_NPEBUtagRECT@@@Z.c)
 *     _BamoImpl::BamoDockDeviceProxyImpl::UpdateDisplayOcclusionLogicalRange_::_1_::dtor$0 @ 0x18011A719 (_BamoImpl--BamoDockDeviceProxyImpl--UpdateDisplayOcclusionLogicalRange_--_1_--dtor$0.c)
 *     _BamoImpl::BamoDockDeviceProxyImpl::UpdateDisplayOcclusionLogicalRange_::_1_::dtor$1 @ 0x18011A725 (_BamoImpl--BamoDockDeviceProxyImpl--UpdateDisplayOcclusionLogicalRange_--_1_--dtor$1.c)
 *     ?UpdateDisplayOcclusionSupported@BamoDockDeviceProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x18011A738 (-UpdateDisplayOcclusionSupported@BamoDockDeviceProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     _BamoImpl::BamoDockDeviceProxyImpl::UpdateDisplayOcclusionSupported_::_1_::dtor$0 @ 0x18011A84E (_BamoImpl--BamoDockDeviceProxyImpl--UpdateDisplayOcclusionSupported_--_1_--dtor$0.c)
 *     _BamoImpl::BamoDockDeviceProxyImpl::UpdateDisplayOcclusionSupported_::_1_::dtor$1 @ 0x18011A85A (_BamoImpl--BamoDockDeviceProxyImpl--UpdateDisplayOcclusionSupported_--_1_--dtor$1.c)
 *     ?UpdatePanelId@BamoDockDeviceProxyImpl@BamoImpl@@QEAAJ_NPEBG@Z @ 0x18011D49C (-UpdatePanelId@BamoDockDeviceProxyImpl@BamoImpl@@QEAAJ_NPEBG@Z.c)
 *     _BamoImpl::BamoDockDeviceProxyImpl::UpdatePanelId_::_1_::dtor$0 @ 0x18011D605 (_BamoImpl--BamoDockDeviceProxyImpl--UpdatePanelId_--_1_--dtor$0.c)
 *     _BamoImpl::BamoDockDeviceProxyImpl::UpdatePanelId_::_1_::dtor$1 @ 0x18011D611 (_BamoImpl--BamoDockDeviceProxyImpl--UpdatePanelId_--_1_--dtor$1.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18004665C (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoDockDeviceProxyImpl>::~CalloutWrapper<BamoImpl::BamoDockDeviceProxyImpl>(
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
