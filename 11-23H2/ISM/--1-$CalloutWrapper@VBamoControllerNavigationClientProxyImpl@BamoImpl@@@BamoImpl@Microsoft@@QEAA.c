/*
 * XREFs of ??1?$CalloutWrapper@VBamoControllerNavigationClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180192AA4
 * Callers:
 *     ?OnConnectedCallout@BamoControllerNavigationClientProxy@@EEAAJXZ @ 0x180193170 (-OnConnectedCallout@BamoControllerNavigationClientProxy@@EEAAJXZ.c)
 *     _BamoControllerNavigationClientProxy::OnConnectedCallout_::_1_::dtor$0 @ 0x1801931C3 (_BamoControllerNavigationClientProxy--OnConnectedCallout_--_1_--dtor$0.c)
 *     ?OnDisconnectedCallout@BamoControllerNavigationClientProxy@@EEAAJXZ @ 0x180193310 (-OnDisconnectedCallout@BamoControllerNavigationClientProxy@@EEAAJXZ.c)
 *     _BamoControllerNavigationClientProxy::OnDisconnectedCallout_::_1_::dtor$0 @ 0x180193363 (_BamoControllerNavigationClientProxy--OnDisconnectedCallout_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedCallout@BamoControllerNavigationClientProxy@@EEAAJXZ @ 0x180193590 (-OnPropertiesRefreshedCallout@BamoControllerNavigationClientProxy@@EEAAJXZ.c)
 *     _BamoControllerNavigationClientProxy::OnPropertiesRefreshedCallout_::_1_::dtor$0 @ 0x1801935E3 (_BamoControllerNavigationClientProxy--OnPropertiesRefreshedCallout_--_1_--dtor$0.c)
 *     ?UpdateBounds@BamoControllerNavigationClientProxyImpl@BamoImpl@@QEAAJ_NPEBUtagRECT@@@Z @ 0x1801938C4 (-UpdateBounds@BamoControllerNavigationClientProxyImpl@BamoImpl@@QEAAJ_NPEBUtagRECT@@@Z.c)
 *     _BamoImpl::BamoControllerNavigationClientProxyImpl::UpdateBounds_::_1_::dtor$0 @ 0x1801939FC (_BamoImpl--BamoControllerNavigationClientProxyImpl--UpdateBounds_--_1_--dtor$0.c)
 *     _BamoImpl::BamoControllerNavigationClientProxyImpl::UpdateBounds_::_1_::dtor$1 @ 0x180193A08 (_BamoImpl--BamoControllerNavigationClientProxyImpl--UpdateBounds_--_1_--dtor$1.c)
 *     ?UpdateEnabled@BamoControllerNavigationClientProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x180193B74 (-UpdateEnabled@BamoControllerNavigationClientProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     _BamoImpl::BamoControllerNavigationClientProxyImpl::UpdateEnabled_::_1_::dtor$0 @ 0x180193CA1 (_BamoImpl--BamoControllerNavigationClientProxyImpl--UpdateEnabled_--_1_--dtor$0.c)
 *     _BamoImpl::BamoControllerNavigationClientProxyImpl::UpdateEnabled_::_1_::dtor$1 @ 0x180193CAD (_BamoImpl--BamoControllerNavigationClientProxyImpl--UpdateEnabled_--_1_--dtor$1.c)
 *     ?UpdateFeatures@BamoControllerNavigationClientProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x180193CC0 (-UpdateFeatures@BamoControllerNavigationClientProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 *     _BamoImpl::BamoControllerNavigationClientProxyImpl::UpdateFeatures_::_1_::dtor$0 @ 0x180193DEE (_BamoImpl--BamoControllerNavigationClientProxyImpl--UpdateFeatures_--_1_--dtor$0.c)
 *     _BamoImpl::BamoControllerNavigationClientProxyImpl::UpdateFeatures_::_1_::dtor$1 @ 0x180193DFA (_BamoImpl--BamoControllerNavigationClientProxyImpl--UpdateFeatures_--_1_--dtor$1.c)
 *     ?UpdateStartPosition@BamoControllerNavigationClientProxyImpl@BamoImpl@@QEAAJ_NPEBUtagPOINT@@@Z @ 0x1801941F8 (-UpdateStartPosition@BamoControllerNavigationClientProxyImpl@BamoImpl@@QEAAJ_NPEBUtagPOINT@@@Z.c)
 *     _BamoImpl::BamoControllerNavigationClientProxyImpl::UpdateStartPosition_::_1_::dtor$0 @ 0x18019432E (_BamoImpl--BamoControllerNavigationClientProxyImpl--UpdateStartPosition_--_1_--dtor$0.c)
 *     _BamoImpl::BamoControllerNavigationClientProxyImpl::UpdateStartPosition_::_1_::dtor$1 @ 0x18019433A (_BamoImpl--BamoControllerNavigationClientProxyImpl--UpdateStartPosition_--_1_--dtor$1.c)
 *     ?UpdateVisualReferenceId@BamoControllerNavigationClientProxyImpl@BamoImpl@@QEAAJ_N_K@Z @ 0x180194424 (-UpdateVisualReferenceId@BamoControllerNavigationClientProxyImpl@BamoImpl@@QEAAJ_N_K@Z.c)
 *     _BamoImpl::BamoControllerNavigationClientProxyImpl::UpdateVisualReferenceId_::_1_::dtor$0 @ 0x180194557 (_BamoImpl--BamoControllerNavigationClientProxyImpl--UpdateVisualReferenceId_--_1_--dtor$0.c)
 *     _BamoImpl::BamoControllerNavigationClientProxyImpl::UpdateVisualReferenceId_::_1_::dtor$1 @ 0x180194563 (_BamoImpl--BamoControllerNavigationClientProxyImpl--UpdateVisualReferenceId_--_1_--dtor$1.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800252B0 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
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
