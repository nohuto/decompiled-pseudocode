/*
 * XREFs of ??1?$CalloutWrapper@VBamoEdgyControllerServerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180028C40
 * Callers:
 *     ?OnDisconnectedThunk@BamoEdgyControllerServerStubImpl@BamoImpl@@UEAAJXZ @ 0x180029A00 (-OnDisconnectedThunk@BamoEdgyControllerServerStubImpl@BamoImpl@@UEAAJXZ.c)
 *     _BamoImpl::BamoEdgyControllerServerStubImpl::OnDisconnectedThunk_::_1_::dtor$0 @ 0x180081CA0 (_BamoImpl--BamoEdgyControllerServerStubImpl--OnDisconnectedThunk_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedThunk@BamoEdgyControllerServerStubImpl@BamoImpl@@UEAAJXZ @ 0x180179EF0 (-OnPropertiesRefreshedThunk@BamoEdgyControllerServerStubImpl@BamoImpl@@UEAAJXZ.c)
 *     _BamoImpl::BamoEdgyControllerServerStubImpl::OnPropertiesRefreshedThunk_::_1_::dtor$0 @ 0x180179F5C (_BamoImpl--BamoEdgyControllerServerStubImpl--OnPropertiesRefreshedThunk_--_1_--dtor$0.c)
 *     ?RegisterEdgyControllerClient@BamoEdgyControllerServerPrincipalImpl@BamoImpl@@QEAAJPEBGI@Z @ 0x18017A070 (-RegisterEdgyControllerClient@BamoEdgyControllerServerPrincipalImpl@BamoImpl@@QEAAJPEBGI@Z.c)
 *     _BamoImpl::BamoEdgyControllerServerPrincipalImpl::RegisterEdgyControllerClient_::_1_::dtor$0 @ 0x18017A213 (_BamoImpl--BamoEdgyControllerServerPrincipalImpl--RegisterEdgyControllerClient_--_1_--dtor$0.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18002679C (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoEdgyControllerServerPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoEdgyControllerServerPrincipalImpl>(
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
