/*
 * XREFs of ?_Destroy@?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@AEAAXPEAV?$function@$$A6AX_N@Z@2@0@Z @ 0x180066E60
 * Callers:
 *     _std::vector_std::function_void___cdecl(bool)__std::allocator_std::function_void___cdecl(bool)_____::_Emplace_reallocate_std::function_void___cdecl(bool)__const_&__::_1_::catch$0 @ 0x180066450 (_std--vector_std--function_void___cdecl(bool)__std--allocator_std--function_void___cdecl(bool)__.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<std::function<void (bool)>>::_Destroy(__int64 a1, __int64 a2, __int64 a3)
{
  return std::_Destroy_range<std::allocator<std::function<void (bool)>>>(a2, a3);
}
