/*
 * XREFs of ?deallocate@?$_Wrap_alloc@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAAXPEAVWeakRef@WRL@Microsoft@@_K@Z @ 0x180073C34
 * Callers:
 *     _std::vector_Microsoft::WRL::WeakRef_std::allocator_Microsoft::WRL::WeakRef___::_Reallocate_::_1_::catch$2 @ 0x1800F0CA7 (_std--vector_Microsoft--WRL--WeakRef_std--allocator_Microsoft--WRL--WeakRef___--_Reallocate_--_1.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Wrap_alloc<std::allocator<Microsoft::WRL::WeakRef>>::deallocate(__int64 a1, void *a2)
{
  operator delete(a2);
}
