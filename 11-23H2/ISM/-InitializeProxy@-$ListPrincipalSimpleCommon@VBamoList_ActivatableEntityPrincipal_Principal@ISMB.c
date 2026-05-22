/*
 * XREFs of ?InitializeProxy@?$ListPrincipalSimpleCommon@VBamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_ActivatableEntityPrincipal_Stub@2345@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@PEAVBamoActivatableEntityPrincipal@@@Bamo@Microsoft@@MEAAJPEAVBamoList_ActivatableEntityPrincipal_Stub@ISMBamos_AutoBamos@Lib@23@@Z @ 0x1800140F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::Bamo::ListPrincipalSimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal,ISMBamos_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Stub,wil::com_ptr_t<BamoActivatableEntityPrincipal,wil::err_returncode_policy>,BamoActivatableEntityPrincipal *>::InitializeProxy(
        __int64 a1,
        __int64 a2)
{
  unsigned int v3; // edi
  __int64 v4; // r8
  __int64 v5; // r14
  __int64 v6; // rcx
  __int64 (__fastcall *v7)(__int64, _QWORD, __int64); // rbp
  __int64 v8; // rbx
  int v9; // eax
  int v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = 0;
  v4 = *(_QWORD *)(a1 + 56);
  if ( (*(_QWORD *)(a1 + 64) - v4) >> 3 )
  {
    v5 = a2 + 8;
    v6 = 0LL;
    do
    {
      v7 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v5 + 24LL);
      v8 = *(_QWORD *)(v4 + 8 * v6);
      if ( v8 )
      {
        (**(void (__fastcall ***)(_QWORD))v8)(*(_QWORD *)(v4 + 8 * v6));
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      }
      v9 = v7(v5, v3, v8);
      if ( v9 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x135,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
          (const char *)(unsigned int)v9,
          v11);
      ++v3;
      v4 = *(_QWORD *)(a1 + 56);
      v6 = v3;
    }
    while ( v3 < (unsigned __int64)((*(_QWORD *)(a1 + 64) - v4) >> 3) );
  }
  return 0LL;
}
