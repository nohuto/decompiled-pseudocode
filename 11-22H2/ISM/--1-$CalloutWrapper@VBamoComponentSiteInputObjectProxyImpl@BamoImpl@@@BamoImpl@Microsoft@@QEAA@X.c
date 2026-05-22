/*
 * XREFs of ??1?$CalloutWrapper@VBamoComponentSiteInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18012E678
 * Callers:
 *     ?OnConnectedCallout@BamoComponentSiteInputObjectProxy@@EEAAJXZ @ 0x1801370D0 (-OnConnectedCallout@BamoComponentSiteInputObjectProxy@@EEAAJXZ.c)
 *     _BamoComponentSiteInputObjectProxy::OnConnectedCallout_::_1_::dtor$0 @ 0x180137123 (_BamoComponentSiteInputObjectProxy--OnConnectedCallout_--_1_--dtor$0.c)
 *     ?OnDisconnectedCallout@BamoComponentSiteInputObjectProxy@@EEAAJXZ @ 0x1801381E0 (-OnDisconnectedCallout@BamoComponentSiteInputObjectProxy@@EEAAJXZ.c)
 *     _BamoComponentSiteInputObjectProxy::OnDisconnectedCallout_::_1_::dtor$0 @ 0x180138233 (_BamoComponentSiteInputObjectProxy--OnDisconnectedCallout_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedCallout@BamoComponentSiteInputObjectProxy@@EEAAJXZ @ 0x18013ACE0 (-OnPropertiesRefreshedCallout@BamoComponentSiteInputObjectProxy@@EEAAJXZ.c)
 *     _BamoComponentSiteInputObjectProxy::OnPropertiesRefreshedCallout_::_1_::dtor$0 @ 0x18013AD33 (_BamoComponentSiteInputObjectProxy--OnPropertiesRefreshedCallout_--_1_--dtor$0.c)
 *     ?UpdateComponentViewId@BamoComponentSiteInputObjectProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x180142EE4 (-UpdateComponentViewId@BamoComponentSiteInputObjectProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 *     _BamoImpl::BamoComponentSiteInputObjectProxyImpl::UpdateComponentViewId_::_1_::dtor$0 @ 0x18014300F (_BamoImpl--BamoComponentSiteInputObjectProxyImpl--UpdateComponentViewId_--_1_--dtor$0.c)
 *     _BamoImpl::BamoComponentSiteInputObjectProxyImpl::UpdateComponentViewId_::_1_::dtor$1 @ 0x18014301B (_BamoImpl--BamoComponentSiteInputObjectProxyImpl--UpdateComponentViewId_--_1_--dtor$1.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18002679C (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoComponentSiteInputObjectProxyImpl>::~CalloutWrapper<BamoImpl::BamoComponentSiteInputObjectProxyImpl>(
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
