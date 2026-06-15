/*
 * XREFs of _std::vector_Microsoft::WRL::WeakRef_std::allocator_Microsoft::WRL::WeakRef___::_Emplace_reallocate_Microsoft::WRL::WeakRef_const_&__::_1_::catch$4 @ 0x18006D8F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@YAXPEAVWeakRef@WRL@Microsoft@@QEAV123@AEAV?$allocator@VWeakRef@WRL@Microsoft@@@0@@Z @ 0x180002D34 (--$_Destroy_range@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@YAXPEAVWeakRef@WRL@Microsoft@.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18006A663 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_Microsoft::WRL::WeakRef_std::allocator_Microsoft::WRL::WeakRef___::_Emplace_reallocate_Microsoft::WRL::WeakRef_const____::_1_::catch_4(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<Microsoft::WRL::WeakRef>>(*(__int64 **)(a2 + 136), *(__int64 **)(a2 + 32));
  std::_Deallocate<16,0>(*(void **)(a2 + 120), 8LL * *(_QWORD *)(a2 + 112));
  throw;
}
