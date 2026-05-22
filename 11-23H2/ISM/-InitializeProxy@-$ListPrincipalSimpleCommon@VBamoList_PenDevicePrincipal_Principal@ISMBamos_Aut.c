/*
 * XREFs of ?InitializeProxy@?$ListPrincipalSimpleCommon@VBamoList_PenDevicePrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_PenDevicePrincipal_Stub@2345@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@PEAVBamoPenDevicePrincipal@@@Bamo@Microsoft@@MEAAJPEAVBamoList_PenDevicePrincipal_Stub@ISMBamos_AutoBamos@Lib@23@@Z @ 0x18001A870
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800A0FDC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVBamoPenDevicePrincipal@@@Z @ 0x1801A4930 (--0-$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVBamoPenDevice.c)
 */

__int64 __fastcall Microsoft::Bamo::ListPrincipalSimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_Principal,ISMBamos_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_Stub,wil::com_ptr_t<BamoPenDevicePrincipal,wil::err_returncode_policy>,BamoPenDevicePrincipal *>::InitializeProxy(
        __int64 a1,
        __int64 a2)
{
  unsigned int v3; // esi
  __int64 v4; // rcx
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 (__fastcall *v8)(__int64, _QWORD, __int64); // rbx
  int v9; // eax
  int v10; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v4 = *(_QWORD *)(a1 + 56);
  if ( (*(_QWORD *)(a1 + 64) - v4) >> 3 )
  {
    v6 = a2 + 8;
    v7 = 0LL;
    do
    {
      v8 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v6 + 24LL);
      wil::com_ptr_t<BamoPenDevicePrincipal,wil::err_returncode_policy>::com_ptr_t<BamoPenDevicePrincipal,wil::err_returncode_policy>(
        &v12,
        *(_QWORD *)(v4 + 8 * v7));
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v12);
      v9 = v8(v6, v3, v12);
      if ( v9 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x135,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
          (const char *)(unsigned int)v9,
          v10);
      v4 = *(_QWORD *)(a1 + 56);
      v7 = ++v3;
    }
    while ( v3 < (unsigned __int64)((*(_QWORD *)(a1 + 64) - v4) >> 3) );
  }
  return 0LL;
}
