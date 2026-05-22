/*
 * XREFs of ??1?$CalloutWrapper@VBamoShellHandwritingHostServerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800629B8
 * Callers:
 *     ?OnDisconnectedThunk@BamoShellHandwritingHostServerStubImpl@BamoImpl@@UEAAJXZ @ 0x180062EA0 (-OnDisconnectedThunk@BamoShellHandwritingHostServerStubImpl@BamoImpl@@UEAAJXZ.c)
 *     _BamoImpl::BamoShellHandwritingHostServerStubImpl::OnDisconnectedThunk_::_1_::dtor$0 @ 0x180062F0C (_BamoImpl--BamoShellHandwritingHostServerStubImpl--OnDisconnectedThunk_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedThunk@BamoShellHandwritingHostServerStubImpl@BamoImpl@@UEAAJXZ @ 0x180062FD0 (-OnPropertiesRefreshedThunk@BamoShellHandwritingHostServerStubImpl@BamoImpl@@UEAAJXZ.c)
 *     _BamoImpl::BamoShellHandwritingHostServerStubImpl::OnPropertiesRefreshedThunk_::_1_::dtor$0 @ 0x18006303C (_BamoImpl--BamoShellHandwritingHostServerStubImpl--OnPropertiesRefreshedThunk_--_1_--dtor$0.c)
 *     ?RegisterShellHandwritingHostClient@BamoShellHandwritingHostServerPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x180063170 (-RegisterShellHandwritingHostClient@BamoShellHandwritingHostServerPrincipalImpl@BamoImpl@@QEAAJI.c)
 *     _BamoImpl::BamoShellHandwritingHostServerPrincipalImpl::RegisterShellHandwritingHostClient_::_1_::dtor$0 @ 0x1800632E6 (_BamoImpl--BamoShellHandwritingHostServerPrincipalImpl--RegisterShellHandwritingHostClient_--_1_.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800252B0 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoShellHandwritingHostServerPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoShellHandwritingHostServerPrincipalImpl>(
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
  return wil::com_ptr_t<BamoImpl::BamoShellHandwritingHostClientProxyImpl,wil::err_returncode_policy>::~com_ptr_t<BamoImpl::BamoShellHandwritingHostClientProxyImpl,wil::err_returncode_policy>((__int64 *)(a1 + 8));
}
