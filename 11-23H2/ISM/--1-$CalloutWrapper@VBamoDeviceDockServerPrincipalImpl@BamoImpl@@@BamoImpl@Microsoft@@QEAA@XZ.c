/*
 * XREFs of ??1?$CalloutWrapper@VBamoDeviceDockServerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800278F0
 * Callers:
 *     ?OnDisconnectedThunk@BamoDeviceDockServerStubImpl@BamoImpl@@UEAAJXZ @ 0x180028460 (-OnDisconnectedThunk@BamoDeviceDockServerStubImpl@BamoImpl@@UEAAJXZ.c)
 *     _BamoImpl::BamoDeviceDockServerStubImpl::OnDisconnectedThunk_::_1_::dtor$0 @ 0x18006DABC (_BamoImpl--BamoDeviceDockServerStubImpl--OnDisconnectedThunk_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedThunk@BamoDeviceDockServerStubImpl@BamoImpl@@UEAAJXZ @ 0x18019D550 (-OnPropertiesRefreshedThunk@BamoDeviceDockServerStubImpl@BamoImpl@@UEAAJXZ.c)
 *     _BamoImpl::BamoDeviceDockServerStubImpl::OnPropertiesRefreshedThunk_::_1_::dtor$0 @ 0x18019D5BC (_BamoImpl--BamoDeviceDockServerStubImpl--OnPropertiesRefreshedThunk_--_1_--dtor$0.c)
 *     ?RegisterDeviceDockClient@BamoDeviceDockServerPrincipalImpl@BamoImpl@@QEAAJIW4DockWatcherRoutingPolicy@Input@Internal@UI@Windows@@@Z @ 0x18019DD5C (-RegisterDeviceDockClient@BamoDeviceDockServerPrincipalImpl@BamoImpl@@QEAAJIW4DockWatcherRouting.c)
 *     _BamoImpl::BamoDeviceDockServerPrincipalImpl::RegisterDeviceDockClient_::_1_::dtor$0 @ 0x18019DEFF (_BamoImpl--BamoDeviceDockServerPrincipalImpl--RegisterDeviceDockClient_--_1_--dtor$0.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800252B0 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoDeviceDockServerPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoDeviceDockServerPrincipalImpl>(
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
      v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v2 - 16) + 48LL))(v2 - 16);
      if ( v3 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x87,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v3,
          v5);
    }
  }
  if ( *(_QWORD *)a1 )
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)a1);
  return wil::com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>::~com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>((__int64 *)(a1 + 8));
}
