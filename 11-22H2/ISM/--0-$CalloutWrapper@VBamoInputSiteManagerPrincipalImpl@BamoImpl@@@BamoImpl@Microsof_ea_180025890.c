/*
 * XREFs of ??0?$CalloutWrapper@VBamoInputSiteManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoInputSiteManagerPrincipalImpl@1@@Z @ 0x180025890
 * Callers:
 *     ?RegisterInputSiteElementWithHint@BamoInputSiteManagerPrincipalImpl@BamoImpl@@QEAAJIPEBUInputSiteId@@@Z @ 0x180025534 (-RegisterInputSiteElementWithHint@BamoInputSiteManagerPrincipalImpl@BamoImpl@@QEAAJIPEBUInputSit.c)
 *     ?Thunk_RegisterInputSiteElement_8@?$IInputSiteManagerPrincipal_Receive@VBamoInputSiteManagerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800256C0 (-Thunk_RegisterInputSiteElement_8@-$IInputSiteManagerPrincipal_Receive@VBamoInputSiteManagerPrin.c)
 *     ?OnPropertiesRefreshedThunk@BamoInputSiteManagerStubImpl@BamoImpl@@UEAAJXZ @ 0x18014D400 (-OnPropertiesRefreshedThunk@BamoInputSiteManagerStubImpl@BamoImpl@@UEAAJXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteManagerPrincipalImpl>::CalloutWrapper<BamoImpl::BamoInputSiteManagerPrincipalImpl>(
        __int64 a1,
        __int64 a2,
        void (__fastcall ***a3)(_QWORD))
{
  int v5; // esi
  const char *v6; // r9
  __int64 v7; // rcx
  int v8; // eax
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = 3;
  if ( !a3 )
    v5 = 0;
  *(_QWORD *)(a1 + 8) = a3;
  if ( a3 )
    (**a3)(a3);
  *(_DWORD *)(a1 + 16) = v5;
  *(_QWORD *)a1 = 0LL;
  if ( !*(_DWORD *)(a2 + 188) )
  {
    *(_QWORD *)a1 = a2;
    if ( *(_DWORD *)(a2 + 184) != GetCurrentThreadId() )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x93F,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        v6);
    *(_DWORD *)(a2 + 184) = 0;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 16) + 32LL))(*(_QWORD *)(a2 + 16));
  }
  v7 = *(_QWORD *)(a1 + 8);
  if ( v7 )
  {
    if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v7 - 16) + 40LL))(v7 - 16);
      if ( v8 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x76,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v8,
          v10);
    }
  }
  return a1;
}
