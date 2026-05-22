/*
 * XREFs of ??1?$CalloutWrapper@VBamoSystemContextManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180131C14
 * Callers:
 *     ?OnDisconnectedThunk@BamoSystemContextManagerStubImpl@BamoImpl@@UEAAJXZ @ 0x180133CB0 (-OnDisconnectedThunk@BamoSystemContextManagerStubImpl@BamoImpl@@UEAAJXZ.c)
 *     _BamoImpl::BamoSystemContextManagerStubImpl::OnDisconnectedThunk_::_1_::dtor$0 @ 0x180133D14 (_BamoImpl--BamoSystemContextManagerStubImpl--OnDisconnectedThunk_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedThunk@BamoSystemContextManagerStubImpl@BamoImpl@@UEAAJXZ @ 0x180134380 (-OnPropertiesRefreshedThunk@BamoSystemContextManagerStubImpl@BamoImpl@@UEAAJXZ.c)
 *     _BamoImpl::BamoSystemContextManagerStubImpl::OnPropertiesRefreshedThunk_::_1_::dtor$0 @ 0x1801343E4 (_BamoImpl--BamoSystemContextManagerStubImpl--OnPropertiesRefreshedThunk_--_1_--dtor$0.c)
 *     ?RegisterSystemContextEndpoint@BamoSystemContextManagerPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x180134FFC (-RegisterSystemContextEndpoint@BamoSystemContextManagerPrincipalImpl@BamoImpl@@QEAAJI@Z.c)
 *     _BamoImpl::BamoSystemContextManagerPrincipalImpl::RegisterSystemContextEndpoint_::_1_::dtor$0 @ 0x180135159 (_BamoImpl--BamoSystemContextManagerPrincipalImpl--RegisterSystemContextEndpoint_--_1_--dtor$0.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18004665C (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSystemContextManagerPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoSystemContextManagerPrincipalImpl>(
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
