/*
 * XREFs of std::_Func_impl_no_alloc__lambda_474822bcb7857d6aa1fb8a0760217871__void_::_Do_call @ 0x180044490
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_474822bcb7857d6aa1fb8a0760217871__void_::_Do_call(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(v1 + 24);
  v3 = *(_QWORD *)(v1 + 16);
  LOBYTE(v3) = *(_DWORD *)(v3 + 112) == 0;
  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 72LL))(v2, v3);
  if ( (int)result < 0 )
    winrt::throw_hresult((unsigned int)result);
  return result;
}
