/*
 * XREFs of ??1?$CalloutWrapper@VBamoInputSiteManagerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180121038
 * Callers:
 *     ?OnConnectedCallout@BamoInputSiteManagerProxy@@EEAAJXZ @ 0x1801299A0 (-OnConnectedCallout@BamoInputSiteManagerProxy@@EEAAJXZ.c)
 *     _BamoInputSiteManagerProxy::OnConnectedCallout_::_1_::dtor$0 @ 0x1801299F3 (_BamoInputSiteManagerProxy--OnConnectedCallout_--_1_--dtor$0.c)
 *     ?OnDisconnectedCallout@BamoInputSiteManagerProxy@@EEAAJXZ @ 0x18012AB20 (-OnDisconnectedCallout@BamoInputSiteManagerProxy@@EEAAJXZ.c)
 *     _BamoInputSiteManagerProxy::OnDisconnectedCallout_::_1_::dtor$0 @ 0x18012AB73 (_BamoInputSiteManagerProxy--OnDisconnectedCallout_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedCallout@BamoInputSiteManagerProxy@@EEAAJXZ @ 0x18012D620 (-OnPropertiesRefreshedCallout@BamoInputSiteManagerProxy@@EEAAJXZ.c)
 *     _BamoInputSiteManagerProxy::OnPropertiesRefreshedCallout_::_1_::dtor$0 @ 0x18012D673 (_BamoInputSiteManagerProxy--OnPropertiesRefreshedCallout_--_1_--dtor$0.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800252B0 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteManagerProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputSiteManagerProxyImpl>(
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
