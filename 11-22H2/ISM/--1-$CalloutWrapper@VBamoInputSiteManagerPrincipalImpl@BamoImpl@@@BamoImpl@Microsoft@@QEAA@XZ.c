/*
 * XREFs of ??1?$CalloutWrapper@VBamoInputSiteManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800259E0
 * Callers:
 *     ?RegisterInputSiteElementWithHint@BamoInputSiteManagerPrincipalImpl@BamoImpl@@QEAAJIPEBUInputSiteId@@@Z @ 0x180025534 (-RegisterInputSiteElementWithHint@BamoInputSiteManagerPrincipalImpl@BamoImpl@@QEAAJIPEBUInputSit.c)
 *     ?Thunk_RegisterInputSiteElement_8@?$IInputSiteManagerPrincipal_Receive@VBamoInputSiteManagerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800256C0 (-Thunk_RegisterInputSiteElement_8@-$IInputSiteManagerPrincipal_Receive@VBamoInputSiteManagerPrin.c)
 *     ?OnDisconnectedThunk@BamoInputSiteManagerStubImpl@BamoImpl@@UEAAJXZ @ 0x180028370 (-OnDisconnectedThunk@BamoInputSiteManagerStubImpl@BamoImpl@@UEAAJXZ.c)
 *     _BamoImpl::BamoInputSiteManagerPrincipalImpl::RegisterInputSiteElementWithHint_::_1_::dtor$0 @ 0x180081A12 (_BamoImpl--BamoInputSiteManagerPrincipalImpl--RegisterInputSiteElementWithHint_--_1_--dtor$0.c)
 *     _IInputSiteManagerPrincipal_Receive_BamoImpl::BamoInputSiteManagerPrincipalImpl_::Thunk_RegisterInputSiteElement_8_::_1_::dtor$0 @ 0x180081A30 (_IInputSiteManagerPrincipal_Receive_BamoImpl--BamoInputSiteManagerPrincipalImpl_--Thunk_Register.c)
 *     ?OnPropertiesRefreshedThunk@BamoInputSiteManagerStubImpl@BamoImpl@@UEAAJXZ @ 0x18014D400 (-OnPropertiesRefreshedThunk@BamoInputSiteManagerStubImpl@BamoImpl@@UEAAJXZ.c)
 *     _BamoImpl::BamoInputSiteManagerStubImpl::OnPropertiesRefreshedThunk_::_1_::dtor$0 @ 0x18014D46C (_BamoImpl--BamoInputSiteManagerStubImpl--OnPropertiesRefreshedThunk_--_1_--dtor$0.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
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
