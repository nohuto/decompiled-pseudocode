/*
 * XREFs of _std::vector_std::function_void___cdecl(Microsoft::WRL::ComPtr_DataProviderPrincipal__&)__std::allocator_std::function_void___cdecl(Microsoft::WRL::ComPtr_DataProviderPrincipal__&)_____::_Emplace_reallocate_std::function_void___cdecl(Microsoft::WRL::ComPtr_DataProviderPrincipal__&)__const_&__::_1_::catch$3 @ 0x18010E1B4
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x18004E88C (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     _CxxThrowException_0 @ 0x180056DC6 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_std::function_void___cdecl_Microsoft::WRL::ComPtr_DataProviderPrincipal______std::allocator_std::function_void___cdecl_Microsoft::WRL::ComPtr_DataProviderPrincipal_________::_Emplace_reallocate_std::function_void___cdecl_Microsoft::WRL::ComPtr_DataProviderPrincipal______const____::_1_::catch_3(
        __int64 a1,
        __int64 a2)
{
  __int64 i; // rbx

  for ( i = *(_QWORD *)(a2 + 112); i != *(_QWORD *)(a2 + 120); i += 64LL )
    std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(i, a2);
  std::_Deallocate<16,0>(*(void **)(a2 + 32), *(_QWORD *)(a2 + 136) << 6);
  throw;
}
