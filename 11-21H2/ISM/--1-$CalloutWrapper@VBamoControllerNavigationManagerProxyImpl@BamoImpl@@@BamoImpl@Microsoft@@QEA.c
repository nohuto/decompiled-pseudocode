/*
 * XREFs of ??1?$CalloutWrapper@VBamoControllerNavigationManagerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180104DA4
 * Callers:
 *     ?OnConnectedCallout@BamoControllerNavigationManagerProxy@@EEAAJXZ @ 0x18010E5E0 (-OnConnectedCallout@BamoControllerNavigationManagerProxy@@EEAAJXZ.c)
 *     _BamoControllerNavigationManagerProxy::OnConnectedCallout_::_1_::dtor$0 @ 0x18010E633 (_BamoControllerNavigationManagerProxy--OnConnectedCallout_--_1_--dtor$0.c)
 *     ?OnDisconnectedCallout@BamoControllerNavigationManagerProxy@@EEAAJXZ @ 0x18010F760 (-OnDisconnectedCallout@BamoControllerNavigationManagerProxy@@EEAAJXZ.c)
 *     _BamoControllerNavigationManagerProxy::OnDisconnectedCallout_::_1_::dtor$0 @ 0x18010F7B3 (_BamoControllerNavigationManagerProxy--OnDisconnectedCallout_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedCallout@BamoControllerNavigationManagerProxy@@EEAAJXZ @ 0x1801120F0 (-OnPropertiesRefreshedCallout@BamoControllerNavigationManagerProxy@@EEAAJXZ.c)
 *     _BamoControllerNavigationManagerProxy::OnPropertiesRefreshedCallout_::_1_::dtor$0 @ 0x180112143 (_BamoControllerNavigationManagerProxy--OnPropertiesRefreshedCallout_--_1_--dtor$0.c)
 *     ?UpdateEnabled@BamoControllerNavigationManagerProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x18011AEA4 (-UpdateEnabled@BamoControllerNavigationManagerProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     _BamoImpl::BamoControllerNavigationManagerProxyImpl::UpdateEnabled_::_1_::dtor$0 @ 0x18011AFB7 (_BamoImpl--BamoControllerNavigationManagerProxyImpl--UpdateEnabled_--_1_--dtor$0.c)
 *     _BamoImpl::BamoControllerNavigationManagerProxyImpl::UpdateEnabled_::_1_::dtor$1 @ 0x18011AFC3 (_BamoImpl--BamoControllerNavigationManagerProxyImpl--UpdateEnabled_--_1_--dtor$1.c)
 *     ?UpdatePaused@BamoControllerNavigationManagerProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x18011D624 (-UpdatePaused@BamoControllerNavigationManagerProxyImpl@BamoImpl@@QEAAJ_N0@Z.c)
 *     _BamoImpl::BamoControllerNavigationManagerProxyImpl::UpdatePaused_::_1_::dtor$0 @ 0x18011D73A (_BamoImpl--BamoControllerNavigationManagerProxyImpl--UpdatePaused_--_1_--dtor$0.c)
 *     _BamoImpl::BamoControllerNavigationManagerProxyImpl::UpdatePaused_::_1_::dtor$1 @ 0x18011D746 (_BamoImpl--BamoControllerNavigationManagerProxyImpl--UpdatePaused_--_1_--dtor$1.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18004665C (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationManagerProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationManagerProxyImpl>(
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
