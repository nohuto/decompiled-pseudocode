/*
 * XREFs of ??$emplace@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@1@$$QEAV?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1801A47C4
 * Callers:
 *     ?InsertWorker@?$ListPrincipalSimpleCommon@VBamoList_PenDevicePrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_PenDevicePrincipal_Stub@2345@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@PEAVBamoPenDevicePrincipal@@@Bamo@Microsoft@@AEAAJPEAVBaseBamoConnection@23@IPEAVBamoPenDevicePrincipal@@@Z @ 0x1801A54A0 (-InsertWorker@-$ListPrincipalSimpleCommon@VBamoList_PenDevicePrincipal_Principal@ISMBamos_AutoBa.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800A0FDC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Move_backward_unchecked@PEAV?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@PEAV12@@std@@YAPEAV?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@PEAV12@00@Z @ 0x1800A3FBC (--$_Move_backward_unchecked@PEAV-$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1800B9730 (--$_Emplace_reallocate@V-$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::vector<wil::com_ptr_t<BamoPenDevicePrincipal,wil::err_returncode_policy>>::emplace<wil::com_ptr_t<BamoPenDevicePrincipal,wil::err_returncode_policy>>(
        __int64 **a1,
        _QWORD *a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 *v6; // r8
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v12; // [rsp+28h] [rbp-10h] BYREF

  v6 = a1[1];
  if ( v6 == a1[2] )
  {
    *a2 = std::vector<wil::com_ptr_t<BamoPenDevicePrincipal,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<BamoPenDevicePrincipal,wil::err_returncode_policy>>(
            a1,
            a3,
            a4);
  }
  else
  {
    v7 = *a4;
    *a4 = 0LL;
    if ( a3 == v6 )
    {
      *v6 = v7;
      ++a1[1];
    }
    else
    {
      v12 = v7;
      v8 = *(v6 - 1);
      *(v6 - 1) = 0LL;
      *v6 = v8;
      ++a1[1];
      std::_Move_backward_unchecked<wil::com_ptr_t<BamoPenDevicePrincipal,wil::err_returncode_policy> *,wil::com_ptr_t<BamoPenDevicePrincipal,wil::err_returncode_policy> *>(
        a3,
        v6 - 1,
        v6);
      v9 = v12;
      v12 = 0LL;
      v10 = *a3;
      *a3 = v9;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v12);
    }
    *a2 = a3;
  }
  return a2;
}
