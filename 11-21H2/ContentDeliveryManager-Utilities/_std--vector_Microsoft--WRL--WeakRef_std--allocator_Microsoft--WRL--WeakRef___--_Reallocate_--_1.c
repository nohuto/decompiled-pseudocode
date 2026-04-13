/*
 * XREFs of _std::vector_Microsoft::WRL::WeakRef_std::allocator_Microsoft::WRL::WeakRef___::_Reallocate_::_1_::catch$2 @ 0x1800F0CA7
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1800222FC (_CxxThrowException_0.c)
 *     ?deallocate@?$_Wrap_alloc@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAAXPEAVWeakRef@WRL@Microsoft@@_K@Z @ 0x180073C34 (-deallocate@-$_Wrap_alloc@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAAXPEAVWeakRef@WRL@.c)
 */

void __fastcall __noreturn std::vector_Microsoft::WRL::WeakRef_std::allocator_Microsoft::WRL::WeakRef___::_Reallocate_::_1_::catch_2(
        __int64 a1,
        __int64 a2)
{
  std::_Wrap_alloc<std::allocator<Microsoft::WRL::WeakRef>>::deallocate(a1, *(void **)(a2 + 88));
  throw;
}
