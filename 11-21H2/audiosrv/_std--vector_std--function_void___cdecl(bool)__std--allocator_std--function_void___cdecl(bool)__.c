/*
 * XREFs of _std::vector_std::function_void___cdecl(bool)__std::allocator_std::function_void___cdecl(bool)_____::_Emplace_reallocate_std::function_void___cdecl(bool)__const_&__::_1_::catch$0 @ 0x180066450
 * Callers:
 *     <none>
 * Callees:
 *     ?_Destroy@?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@AEAAXPEAV?$function@$$A6AX_N@Z@2@0@Z @ 0x180066E60 (-_Destroy@-$vector@V-$function@$$A6AX_N@Z@std@@V-$allocator@V-$function@$$A6AX_N@Z@std@@@2@@std@.c)
 *     ?deallocate@?$allocator@V?$function@$$A6AX_N@Z@std@@@std@@QEAAXQEAV?$function@$$A6AX_N@Z@2@_K@Z @ 0x180067460 (-deallocate@-$allocator@V-$function@$$A6AX_N@Z@std@@@std@@QEAAXQEAV-$function@$$A6AX_N@Z@2@_K@Z.c)
 *     _CxxThrowException_0 @ 0x18006A663 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_std::function_void___cdecl_bool___std::allocator_std::function_void___cdecl_bool______::_Emplace_reallocate_std::function_void___cdecl_bool___const____::_1_::catch_0(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rcx

  std::vector<std::function<void (bool)>>::_Destroy(a1, a2[14], a2[17]);
  std::allocator<std::function<void (bool)>>::deallocate(v3, a2[4], a2[15]);
  throw;
}
