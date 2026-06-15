/*
 * XREFs of _lambda_283a894bf8929531b9ad677e2f0508f5_::operator() @ 0x18010B1B8
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_283a894bf8929531b9ad677e2f0508f5__bool_Microsoft::WRL::ComPtr_IProcessSubmixProxy__const_&_::_Do_call @ 0x18010CA00 (std--_Func_impl_no_alloc__lambda_283a894bf8929531b9ad677e2f0508f5__bool_Microsoft--_ea_18010CA00.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall lambda_283a894bf8929531b9ad677e2f0508f5_::operator()(__int64 a1, __int64 **a2)
{
  __int64 v5; // rdx
  int v6; // eax
  _DWORD *v7; // rcx
  char v8; // bl
  _DWORD *v9; // rax

  if ( (*(unsigned int (__fastcall **)(__int64 *))(**a2 + 216))(*a2) != **(_DWORD **)a1 )
    return 0;
  v5 = **a2;
  if ( **(_DWORD **)(a1 + 8) == 3 )
  {
    v6 = (*(__int64 (**)(void))(v5 + 144))();
    v7 = *(_DWORD **)(a1 + 16);
    v8 = 0;
    if ( v6 == *v7 || (*(unsigned __int8 (__fastcall **)(__int64 *))(**a2 + 152))(*a2) )
      return v8;
  }
  else if ( (*(unsigned int (**)(void))(v5 + 144))() != **(_DWORD **)(a1 + 16) )
  {
    v9 = *(_DWORD **)(a1 + 8);
    v8 = 0;
    if ( *v9 != 2 || !(*(unsigned __int8 (__fastcall **)(__int64 *))(**a2 + 152))(*a2) )
      return v8;
  }
  return 1;
}
