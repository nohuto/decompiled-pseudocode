/*
 * XREFs of _lambda_ae5dab4ef41f4a05ed80b0bd0679c54f_::operator() @ 0x1801BC1E4
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_ae5dab4ef41f4a05ed80b0bd0679c54f__bool_wil::com_ptr_t_PenEventsClientCustomProxy_wil::err_exception_policy__bool_::_Do_call @ 0x1801BE630 (std--_Func_impl_no_alloc__lambda_ae5dab4ef41f4a05ed80b0bd0679c54f__bool_wil--com_pt_ea_1801BE630.c)
 * Callees:
 *     ??1?$com_ptr_t@VBamoSimpleHapticsControllerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18005582C (--1-$com_ptr_t@VBamoSimpleHapticsControllerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059DB0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall lambda_ae5dab4ef41f4a05ed80b0bd0679c54f_::operator()(__int64 a1, __int64 *a2, char a3)
{
  __int64 v5; // rdx
  char v6; // bl
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v6 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(*a2 + 8) + 112LL))(*a2 + 8) )
  {
    LOBYTE(v5) = a3;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(*a2 + 8) + 56LL))(*a2 + 8, v5);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1F4,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\events\\server\\peneventsdispat"
             "cherprincipal.cpp",
        (const char *)(unsigned int)v7);
    v6 = 1;
  }
  wil::com_ptr_t<BamoSimpleHapticsControllerProxy,wil::err_returncode_policy>::~com_ptr_t<BamoSimpleHapticsControllerProxy,wil::err_returncode_policy>(a2);
  return v6;
}
