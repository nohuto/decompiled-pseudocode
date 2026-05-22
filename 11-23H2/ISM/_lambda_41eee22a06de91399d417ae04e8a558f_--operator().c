/*
 * XREFs of _lambda_41eee22a06de91399d417ae04e8a558f_::operator() @ 0x18009E5D8
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_41eee22a06de91399d417ae04e8a558f__void_Microsoft::WRL::ComPtr_BamoInputSystemInternalProxy__&_::_Do_call @ 0x1800A0180 (std--_Func_impl_no_alloc__lambda_41eee22a06de91399d417ae04e8a558f__void_Microsoft--_ea_1800A0180.c)
 * Callees:
 *     ??1?$com_ptr_t@VBamoSimpleHapticsControllerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180054ABC (--1-$com_ptr_t@VBamoSimpleHapticsControllerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_41eee22a06de91399d417ae04e8a558f_::operator()(_QWORD *a1, __int64 a2)
{
  void (__fastcall ***v3)(_QWORD); // rax
  void (__fastcall ***v4)(_QWORD); // rbx
  int v5; // eax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void (__fastcall ***v9)(_QWORD); // [rsp+30h] [rbp+8h] BYREF

  v3 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)a2 + 8LL) + 32LL))(*(_QWORD *)a2 + 8LL);
  v4 = v3;
  v9 = v3;
  if ( v3 )
    (**v3)(v3);
  v5 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD), _QWORD))v4[1][3])(v4 + 1, *a1);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x29,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\systemcontext\\endpoint\\systemcontextendpoint.cpp",
      (const char *)(unsigned int)v5,
      v7);
  return wil::com_ptr_t<BamoSimpleHapticsControllerProxy,wil::err_returncode_policy>::~com_ptr_t<BamoSimpleHapticsControllerProxy,wil::err_returncode_policy>((__int64 *)&v9);
}
