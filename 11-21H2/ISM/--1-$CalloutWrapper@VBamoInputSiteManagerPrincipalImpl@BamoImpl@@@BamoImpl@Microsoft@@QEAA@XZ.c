/*
 * XREFs of ??1?$CalloutWrapper@VBamoInputSiteManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18001FC6C
 * Callers:
 *     ?Thunk_RegisterInputSiteElement_8@?$IInputSiteManagerPrincipal_Receive@VBamoInputSiteManagerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18001C2C0 (-Thunk_RegisterInputSiteElement_8@-$IInputSiteManagerPrincipal_Receive@VBamoInputSiteManagerPrin.c)
 *     _IInputSiteManagerPrincipal_Receive_BamoImpl::BamoInputSiteManagerPrincipalImpl_::Thunk_RegisterInputSiteElement_8_::_1_::dtor$0 @ 0x180058050 (_IInputSiteManagerPrincipal_Receive_BamoImpl--BamoInputSiteManagerPrincipalImpl_--Thunk_Register.c)
 *     ?OnDisconnectedThunk@BamoInputSiteManagerStubImpl@BamoImpl@@UEAAJXZ @ 0x1801244C0 (-OnDisconnectedThunk@BamoInputSiteManagerStubImpl@BamoImpl@@UEAAJXZ.c)
 *     _BamoImpl::BamoInputSiteManagerStubImpl::OnDisconnectedThunk_::_1_::dtor$0 @ 0x180124524 (_BamoImpl--BamoInputSiteManagerStubImpl--OnDisconnectedThunk_--_1_--dtor$0.c)
 *     ?OnPropertiesRefreshedThunk@BamoInputSiteManagerStubImpl@BamoImpl@@UEAAJXZ @ 0x180124540 (-OnPropertiesRefreshedThunk@BamoInputSiteManagerStubImpl@BamoImpl@@UEAAJXZ.c)
 *     _BamoImpl::BamoInputSiteManagerStubImpl::OnPropertiesRefreshedThunk_::_1_::dtor$0 @ 0x1801245A4 (_BamoImpl--BamoInputSiteManagerStubImpl--OnPropertiesRefreshedThunk_--_1_--dtor$0.c)
 *     ?RegisterInputSiteElementWithHint@BamoInputSiteManagerPrincipalImpl@BamoImpl@@QEAAJIPEBUInputSiteId@@@Z @ 0x1801246DC (-RegisterInputSiteElementWithHint@BamoInputSiteManagerPrincipalImpl@BamoImpl@@QEAAJIPEBUInputSit.c)
 *     _BamoImpl::BamoInputSiteManagerPrincipalImpl::RegisterInputSiteElementWithHint_::_1_::dtor$0 @ 0x18012484A (_BamoImpl--BamoInputSiteManagerPrincipalImpl--RegisterInputSiteElementWithHint_--_1_--dtor$0.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteManagerPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoInputSiteManagerPrincipalImpl>(
        __int64 *a1)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rdi
  __int64 v5; // rcx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a1[1];
  if ( v2 )
  {
    if ( (a1[2] & 2) != 0 )
    {
      v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v2 - 16) + 48LL))(v2 - 16);
      if ( v3 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x87,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v3,
          v6);
    }
  }
  v4 = *a1;
  if ( *a1 )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + 16) + 24LL))(*(_QWORD *)(v4 + 16));
    *(_DWORD *)(v4 + 184) = GetCurrentThreadId();
  }
  v5 = a1[1];
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
}
