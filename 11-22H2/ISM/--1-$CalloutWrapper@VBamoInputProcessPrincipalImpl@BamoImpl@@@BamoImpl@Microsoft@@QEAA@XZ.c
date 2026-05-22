/*
 * XREFs of ??1?$CalloutWrapper@VBamoInputProcessPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800D9B88
 * Callers:
 *     ?OnDisconnectedThunk@BamoInputProcessStubImpl@BamoImpl@@UEAAJXZ @ 0x1800DA0D0 (-OnDisconnectedThunk@BamoInputProcessStubImpl@BamoImpl@@UEAAJXZ.c)
 *     _BamoImpl::BamoInputProcessStubImpl::OnDisconnectedThunk_::_1_::dtor$0 @ 0x1800DA140 (_BamoImpl--BamoInputProcessStubImpl--OnDisconnectedThunk_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedThunk@BamoInputProcessStubImpl@BamoImpl@@UEAAJXZ @ 0x1800DA200 (-OnPropertiesRefreshedThunk@BamoInputProcessStubImpl@BamoImpl@@UEAAJXZ.c)
 *     _BamoImpl::BamoInputProcessStubImpl::OnPropertiesRefreshedThunk_::_1_::dtor$0 @ 0x1800DA270 (_BamoImpl--BamoInputProcessStubImpl--OnPropertiesRefreshedThunk_--_1_--dtor$0.c)
 *     ?StopProcess@BamoInputProcessPrincipalImpl@BamoImpl@@QEAAJXZ @ 0x1800DA654 (-StopProcess@BamoInputProcessPrincipalImpl@BamoImpl@@QEAAJXZ.c)
 *     _BamoImpl::BamoInputProcessPrincipalImpl::StopProcess_::_1_::dtor$0 @ 0x1800DA769 (_BamoImpl--BamoInputProcessPrincipalImpl--StopProcess_--_1_--dtor$0.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18002679C (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnCallEpilog@BamoInputProcessPrincipal@@IEAAJXZ @ 0x1800D9FAC (-OnCallEpilog@BamoInputProcessPrincipal@@IEAAJXZ.c)
 */

__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputProcessPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoInputProcessPrincipalImpl>(
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
      v3 = BamoInputProcessPrincipal::OnCallEpilog((BamoInputProcessPrincipal *)(v2 - 16));
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
