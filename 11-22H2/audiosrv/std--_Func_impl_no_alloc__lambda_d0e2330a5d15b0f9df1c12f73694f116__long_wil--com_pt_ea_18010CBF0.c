/*
 * XREFs of std::_Func_impl_no_alloc__lambda_d0e2330a5d15b0f9df1c12f73694f116__long_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy__&_::_Do_call @ 0x18010CBF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_d0e2330a5d15b0f9df1c12f73694f116__long_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy____::_Do_call(
        __int64 a1,
        __int64 a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a2 + 104LL) + 152LL))(
         *(_QWORD *)(*(_QWORD *)a2 + 104LL),
         *(_QWORD *)(a1 + 8));
  v3 = v2;
  if ( v2 >= 0 )
    return 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x314,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
