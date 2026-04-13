/*
 * XREFs of _std::_Uninit_move_Microsoft::WRL::WeakRef___Microsoft::WRL::WeakRef___std::allocator_Microsoft::WRL::WeakRef__Microsoft::WRL::WeakRef__::_1_::catch$1 @ 0x1800D6FC0
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180022B0C (_CxxThrowException_0.c)
 *     ??$destroy@VWeakRef@WRL@Microsoft@@@?$_Wrap_alloc@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAAXPEAVWeakRef@WRL@Microsoft@@@Z @ 0x180066840 (--$destroy@VWeakRef@WRL@Microsoft@@@-$_Wrap_alloc@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@st.c)
 */

void __fastcall __noreturn std::_Uninit_move_Microsoft::WRL::WeakRef___Microsoft::WRL::WeakRef___std::allocator_Microsoft::WRL::WeakRef__Microsoft::WRL::WeakRef__::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  __int64 *i; // rbx

  for ( i = *(__int64 **)(a2 + 72); i != *(__int64 **)(a2 + 64); ++i )
    std::_Wrap_alloc<std::allocator<Microsoft::WRL::WeakRef>>::destroy<Microsoft::WRL::WeakRef>(a1, i);
  throw;
}
