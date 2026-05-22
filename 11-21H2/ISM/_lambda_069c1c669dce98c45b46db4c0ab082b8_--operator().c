/*
 * XREFs of _lambda_069c1c669dce98c45b46db4c0ab082b8_::operator() @ 0x18018FE84
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_069c1c669dce98c45b46db4c0ab082b8__bool_wil::com_ptr_t_PenEventsClientCustomProxy_wil::err_exception_policy__bool_::_Do_call @ 0x180192440 (std--_Func_impl_no_alloc__lambda_069c1c669dce98c45b46db4c0ab082b8__bool_wil--com_pt_ea_180192440.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007FD5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VBamoManualDragAreaClientProxy@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180087394 (--1-$com_ptr_t@VBamoManualDragAreaClientProxy@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall lambda_069c1c669dce98c45b46db4c0ab082b8_::operator()(__int64 a1, __int64 *a2, char a3)
{
  __int64 v5; // rdx
  char v6; // bl
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v6 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(*a2 + 8) + 104LL))(*a2 + 8) )
  {
    LOBYTE(v5) = a3;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(*a2 + 8) + 40LL))(*a2 + 8, v5);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        484LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\events\\server\\peneventsdi"
                 "spatcherprincipal.cpp",
        (const char *)(unsigned int)v7);
    v6 = 1;
  }
  wil::com_ptr_t<BamoManualDragAreaClientProxy,wil::err_returncode_policy>::~com_ptr_t<BamoManualDragAreaClientProxy,wil::err_returncode_policy>(a2);
  return v6;
}
