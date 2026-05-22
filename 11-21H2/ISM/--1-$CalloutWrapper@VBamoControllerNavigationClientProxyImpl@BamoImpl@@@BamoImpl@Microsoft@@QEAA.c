/*
 * XREFs of ??1?$CalloutWrapper@VBamoControllerNavigationClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180173884
 * Callers:
 *     ?OnConnectedCallout@BamoControllerNavigationClientProxy@@EEAAJXZ @ 0x180173F60 (-OnConnectedCallout@BamoControllerNavigationClientProxy@@EEAAJXZ.c)
 *     _BamoControllerNavigationClientProxy::OnConnectedCallout_::_1_::dtor$0 @ 0x180173FB3 (_BamoControllerNavigationClientProxy--OnConnectedCallout_--_1_--dtor$0.c)
 *     ?OnDisconnectedCallout@BamoControllerNavigationClientProxy@@EEAAJXZ @ 0x180174100 (-OnDisconnectedCallout@BamoControllerNavigationClientProxy@@EEAAJXZ.c)
 *     _BamoControllerNavigationClientProxy::OnDisconnectedCallout_::_1_::dtor$0 @ 0x180174153 (_BamoControllerNavigationClientProxy--OnDisconnectedCallout_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedCallout@BamoControllerNavigationClientProxy@@EEAAJXZ @ 0x180174360 (-OnPropertiesRefreshedCallout@BamoControllerNavigationClientProxy@@EEAAJXZ.c)
 *     _BamoControllerNavigationClientProxy::OnPropertiesRefreshedCallout_::_1_::dtor$0 @ 0x1801743B3 (_BamoControllerNavigationClientProxy--OnPropertiesRefreshedCallout_--_1_--dtor$0.c)
 *     ?UpdateBounds@BamoControllerNavigationClientProxyImpl@BamoImpl@@QEAAJ_NPEBUtagRECT@@@Z @ 0x180174694 (-UpdateBounds@BamoControllerNavigationClientProxyImpl@BamoImpl@@QEAAJ_NPEBUtagRECT@@@Z.c)
 *     _BamoImpl::BamoControllerNavigationClientProxyImpl::UpdateBounds_::_1_::dtor$0 @ 0x1801747B1 (_BamoImpl--BamoControllerNavigationClientProxyImpl--UpdateBounds_--_1_--dtor$0.c)
 *     _BamoImpl::BamoControllerNavigationClientProxyImpl::UpdateBounds_::_1_::dtor$1 @ 0x1801747BD (_BamoImpl--BamoControllerNavigationClientProxyImpl--UpdateBounds_--_1_--dtor$1.c)
 *     ?UpdateEnabled@BamoControllerNavigationClientProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x18017490C (-UpdateEnabled@BamoControllerNavigationClientProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     _BamoImpl::BamoControllerNavigationClientProxyImpl::UpdateEnabled_::_1_::dtor$0 @ 0x180174A1F (_BamoImpl--BamoControllerNavigationClientProxyImpl--UpdateEnabled_--_1_--dtor$0.c)
 *     _BamoImpl::BamoControllerNavigationClientProxyImpl::UpdateEnabled_::_1_::dtor$1 @ 0x180174A2B (_BamoImpl--BamoControllerNavigationClientProxyImpl--UpdateEnabled_--_1_--dtor$1.c)
 *     ?UpdateFeatures@BamoControllerNavigationClientProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x180174A40 (-UpdateFeatures@BamoControllerNavigationClientProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 *     _BamoImpl::BamoControllerNavigationClientProxyImpl::UpdateFeatures_::_1_::dtor$0 @ 0x180174B54 (_BamoImpl--BamoControllerNavigationClientProxyImpl--UpdateFeatures_--_1_--dtor$0.c)
 *     _BamoImpl::BamoControllerNavigationClientProxyImpl::UpdateFeatures_::_1_::dtor$1 @ 0x180174B60 (_BamoImpl--BamoControllerNavigationClientProxyImpl--UpdateFeatures_--_1_--dtor$1.c)
 *     ?UpdateStartPosition@BamoControllerNavigationClientProxyImpl@BamoImpl@@QEAAJ_NPEBUtagPOINT@@@Z @ 0x180174F18 (-UpdateStartPosition@BamoControllerNavigationClientProxyImpl@BamoImpl@@QEAAJ_NPEBUtagPOINT@@@Z.c)
 *     _BamoImpl::BamoControllerNavigationClientProxyImpl::UpdateStartPosition_::_1_::dtor$0 @ 0x180175034 (_BamoImpl--BamoControllerNavigationClientProxyImpl--UpdateStartPosition_--_1_--dtor$0.c)
 *     _BamoImpl::BamoControllerNavigationClientProxyImpl::UpdateStartPosition_::_1_::dtor$1 @ 0x180175040 (_BamoImpl--BamoControllerNavigationClientProxyImpl--UpdateStartPosition_--_1_--dtor$1.c)
 *     ?UpdateVisualReferenceId@BamoControllerNavigationClientProxyImpl@BamoImpl@@QEAAJ_N_K@Z @ 0x180175134 (-UpdateVisualReferenceId@BamoControllerNavigationClientProxyImpl@BamoImpl@@QEAAJ_N_K@Z.c)
 *     _BamoImpl::BamoControllerNavigationClientProxyImpl::UpdateVisualReferenceId_::_1_::dtor$0 @ 0x18017524D (_BamoImpl--BamoControllerNavigationClientProxyImpl--UpdateVisualReferenceId_--_1_--dtor$0.c)
 *     _BamoImpl::BamoControllerNavigationClientProxyImpl::UpdateVisualReferenceId_::_1_::dtor$1 @ 0x180175259 (_BamoImpl--BamoControllerNavigationClientProxyImpl--UpdateVisualReferenceId_--_1_--dtor$1.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18004665C (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationClientProxyImpl>(
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
