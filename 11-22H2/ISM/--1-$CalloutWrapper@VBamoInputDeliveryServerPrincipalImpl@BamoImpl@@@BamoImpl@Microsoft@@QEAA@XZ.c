/*
 * XREFs of ??1?$CalloutWrapper@VBamoInputDeliveryServerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180028BD8
 * Callers:
 *     ?OnDisconnectedThunk@BamoInputDeliveryServerStubImpl@BamoImpl@@UEAAJXZ @ 0x1800298D0 (-OnDisconnectedThunk@BamoInputDeliveryServerStubImpl@BamoImpl@@UEAAJXZ.c)
 *     _BamoImpl::BamoInputDeliveryServerStubImpl::OnDisconnectedThunk_::_1_::dtor$0 @ 0x180081C8E (_BamoImpl--BamoInputDeliveryServerStubImpl--OnDisconnectedThunk_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedThunk@BamoInputDeliveryServerStubImpl@BamoImpl@@UEAAJXZ @ 0x1801810B0 (-OnPropertiesRefreshedThunk@BamoInputDeliveryServerStubImpl@BamoImpl@@UEAAJXZ.c)
 *     _BamoImpl::BamoInputDeliveryServerStubImpl::OnPropertiesRefreshedThunk_::_1_::dtor$0 @ 0x18018111C (_BamoImpl--BamoInputDeliveryServerStubImpl--OnPropertiesRefreshedThunk_--_1_--dtor$0.c)
 *     ?RegisterInputAttemptedClient@BamoInputDeliveryServerPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x18018124C (-RegisterInputAttemptedClient@BamoInputDeliveryServerPrincipalImpl@BamoImpl@@QEAAJI@Z.c)
 *     _BamoImpl::BamoInputDeliveryServerPrincipalImpl::RegisterInputAttemptedClient_::_1_::dtor$0 @ 0x1801813DF (_BamoImpl--BamoInputDeliveryServerPrincipalImpl--RegisterInputAttemptedClient_--_1_--dtor$0.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18002679C (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputDeliveryServerPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoInputDeliveryServerPrincipalImpl>(
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
