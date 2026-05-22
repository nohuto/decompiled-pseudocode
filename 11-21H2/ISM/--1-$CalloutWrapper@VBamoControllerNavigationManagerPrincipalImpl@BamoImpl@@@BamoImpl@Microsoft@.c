/*
 * XREFs of ??1?$CalloutWrapper@VBamoControllerNavigationManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1801711F8
 * Callers:
 *     ?OnDisconnectedThunk@BamoControllerNavigationManagerStubImpl@BamoImpl@@UEAAJXZ @ 0x180171FD0 (-OnDisconnectedThunk@BamoControllerNavigationManagerStubImpl@BamoImpl@@UEAAJXZ.c)
 *     _BamoImpl::BamoControllerNavigationManagerStubImpl::OnDisconnectedThunk_::_1_::dtor$0 @ 0x180172034 (_BamoImpl--BamoControllerNavigationManagerStubImpl--OnDisconnectedThunk_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedThunk@BamoControllerNavigationManagerStubImpl@BamoImpl@@UEAAJXZ @ 0x180172200 (-OnPropertiesRefreshedThunk@BamoControllerNavigationManagerStubImpl@BamoImpl@@UEAAJXZ.c)
 *     _BamoImpl::BamoControllerNavigationManagerStubImpl::OnPropertiesRefreshedThunk_::_1_::dtor$0 @ 0x180172264 (_BamoImpl--BamoControllerNavigationManagerStubImpl--OnPropertiesRefreshedThunk_--_1_--dtor$0.c)
 *     ?RegisterClient@BamoControllerNavigationManagerPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x18017280C (-RegisterClient@BamoControllerNavigationManagerPrincipalImpl@BamoImpl@@QEAAJI@Z.c)
 *     _BamoImpl::BamoControllerNavigationManagerPrincipalImpl::RegisterClient_::_1_::dtor$0 @ 0x180172969 (_BamoImpl--BamoControllerNavigationManagerPrincipalImpl--RegisterClient_--_1_--dtor$0.c)
 *     ?RegisterOverride@BamoControllerNavigationManagerPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x180172ED0 (-RegisterOverride@BamoControllerNavigationManagerPrincipalImpl@BamoImpl@@QEAAJI@Z.c)
 *     _BamoImpl::BamoControllerNavigationManagerPrincipalImpl::RegisterOverride_::_1_::dtor$0 @ 0x18017302D (_BamoImpl--BamoControllerNavigationManagerPrincipalImpl--RegisterOverride_--_1_--dtor$0.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18004665C (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationManagerPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationManagerPrincipalImpl>(
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
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v3,
          v5);
    }
  }
  if ( *(_QWORD *)a1 )
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)a1);
  return wil::com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>::~com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>((__int64 *)(a1 + 8));
}
