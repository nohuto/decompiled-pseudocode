/*
 * XREFs of _lambda_c08ce6a39495b94ac81d1bf94c809a99_::__lambda_c08ce6a39495b94ac81d1bf94c809a99_ @ 0x18028246C
 * Callers:
 *     std::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_66e3247105c53d232400c257ddcfd6f2__0_ @ 0x180281B58 (std--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_66e3247105c53d232400c257.c)
 *     _std::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_66e3247105c53d232400c257ddcfd6f2__0__::_1_::dtor$0 @ 0x180281B9A (_std--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_66e3247105c53d232400c25.c)
 *     std::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_c08ce6a39495b94ac81d1bf94c809a99__0_ @ 0x180281C88 (std--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_c08ce6a39495b94ac81d1bf9.c)
 *     _std::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_c08ce6a39495b94ac81d1bf94c809a99__0__::_1_::dtor$0 @ 0x180281CCA (_std--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_c08ce6a39495b94ac81d1bf.c)
 *     std::_Func_impl_no_alloc__lambda_c08ce6a39495b94ac81d1bf94c809a99__void_::_Delete_this @ 0x180283AA0 (std--_Func_impl_no_alloc__lambda_c08ce6a39495b94ac81d1bf94c809a99__void_--_Delete_this.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801453A8 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall lambda_c08ce6a39495b94ac81d1bf94c809a99_::__lambda_c08ce6a39495b94ac81d1bf94c809a99_(__int64 a1)
{
  std::_Ref_count_base *v2; // rcx

  winrt::hstring::~hstring((void **)(a1 + 48));
  winrt::hstring::~hstring((void **)(a1 + 40));
  if ( *(_QWORD *)(a1 + 24) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)(a1 + 24));
  if ( *(_QWORD *)(a1 + 16) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)(a1 + 16));
  v2 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v2 )
    std::_Ref_count_base::_Decwref(v2);
}
