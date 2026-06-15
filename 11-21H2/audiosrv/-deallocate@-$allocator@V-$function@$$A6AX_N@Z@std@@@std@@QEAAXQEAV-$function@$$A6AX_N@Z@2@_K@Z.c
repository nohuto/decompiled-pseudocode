/*
 * XREFs of ?deallocate@?$allocator@V?$function@$$A6AX_N@Z@std@@@std@@QEAAXQEAV?$function@$$A6AX_N@Z@2@_K@Z @ 0x180067460
 * Callers:
 *     _std::vector_std::function_void___cdecl(bool)__std::allocator_std::function_void___cdecl(bool)_____::_Emplace_reallocate_std::function_void___cdecl(bool)__const_&__::_1_::catch$0 @ 0x180066450 (_std--vector_std--function_void___cdecl(bool)__std--allocator_std--function_void___cdecl(bool)__.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<std::function<void (bool)>>::deallocate(__int64 a1, void *a2, __int64 a3)
{
  std::_Deallocate<16,0>(a2, a3 << 6);
}
