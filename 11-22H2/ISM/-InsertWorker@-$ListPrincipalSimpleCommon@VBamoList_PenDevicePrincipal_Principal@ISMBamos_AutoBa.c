/*
 * XREFs of ?InsertWorker@?$ListPrincipalSimpleCommon@VBamoList_PenDevicePrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_PenDevicePrincipal_Stub@2345@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@PEAVBamoPenDevicePrincipal@@@Bamo@Microsoft@@AEAAJPEAVBaseBamoConnection@23@IPEAVBamoPenDevicePrincipal@@@Z @ 0x1801B3480
 * Callers:
 *     ?Add@?$ListPrincipalSimpleCommon@VBamoList_PenDevicePrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_PenDevicePrincipal_Stub@2345@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@PEAVBamoPenDevicePrincipal@@@Bamo@Microsoft@@QEAAJPEAVBamoPenDevicePrincipal@@@Z @ 0x1801B2B6C (-Add@-$ListPrincipalSimpleCommon@VBamoList_PenDevicePrincipal_Principal@ISMBamos_AutoBamos@Lib@B.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800B3604 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsDisconnected@BaseBamoConnection@Bamo@Microsoft@@QEBA_NXZ @ 0x1800B73FC (-IsDisconnected@BaseBamoConnection@Bamo@Microsoft@@QEBA_NXZ.c)
 *     ??$emplace@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@1@$$QEAV?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1801B27A4 (--$emplace@V-$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@-$vector@V-$.c)
 *     ??0?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVBamoPenDevicePrincipal@@@Z @ 0x1801B2910 (--0-$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVBamoPenDevice.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::Bamo::ListPrincipalSimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_Principal,ISMBamos_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_Stub,wil::com_ptr_t<BamoPenDevicePrincipal,wil::err_returncode_policy>,BamoPenDevicePrincipal *>::InsertWorker(
        _QWORD *a1,
        Microsoft::Bamo::BaseBamoConnection *a2,
        unsigned int a3,
        char *a4)
{
  __int64 v5; // r15
  __int64 **v8; // rbx
  const char *v9; // r9
  Microsoft::Bamo::BaseBamoConnection *v10; // rcx
  int v11; // eax
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v5 = a3;
  v8 = (__int64 **)(a1 + 7);
  if ( a3 > (unsigned __int64)((__int64)(a1[8] - a1[7]) >> 3) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x14D,
      (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
      a4);
  wil::com_ptr_t<BamoPenDevicePrincipal,wil::err_returncode_policy>::com_ptr_t<BamoPenDevicePrincipal,wil::err_returncode_policy>(
    &v15,
    (void (__fastcall ***)(_QWORD))a4);
  try
  {
    std::vector<wil::com_ptr_t<BamoPenDevicePrincipal,wil::err_returncode_policy>>::emplace<wil::com_ptr_t<BamoPenDevicePrincipal,wil::err_returncode_policy>>(
      v8,
      v13,
      &(*v8)[v5],
      &v15);
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v15);
    v10 = a2;
  }
  catch ( ... )
  {
    wil::details::in1diag3::FailFast_CaughtException(
      retaddr,
      (void *)0x153,
      (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
      v9);
  }
  if ( !Microsoft::Bamo::BaseBamoConnection::IsDisconnected(v10) )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, char *))(a1[1] + 24LL))(a1 + 1, (unsigned int)v5, a4);
    if ( v11 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x157,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        (const char *)(unsigned int)v11,
        v13[0]);
  }
  return 0LL;
}
