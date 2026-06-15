/*
 * XREFs of _std::vector_wistd::unique_ptr_tWAVEFORMATEX_wil::function_deleter_void_(__cdecl_)(void__)_&CoTaskMemFree____std::allocator_wistd::unique_ptr_tWAVEFORMATEX_wil::function_deleter_void_(__cdecl_)(void__)_&CoTaskMemFree_______::_Emplace_reallocate_wistd::unique_ptr_tWAVEFORMATEX_wil::function_deleter_void_(__cdecl_)(void__)_&CoTaskMemFree______::_1_::catch$15 @ 0x180168852
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1800759A0 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@UtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@std@@@std@@YAXPEAV?$unique_ptr@UtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAV12@AEAV?$allocator@V?$unique_ptr@UtWAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@0@@Z @ 0x18014A0A4 (--$_Destroy_range@V-$allocator@V-$unique_ptr@UtWAVEFORMATEX@@U-$function_deleter@P6AXPEAX@Z$1-Co.c)
 */

void __fastcall __noreturn std::vector_wistd::unique_ptr_tWAVEFORMATEX_wil::function_deleter_void____cdecl___void_____CoTaskMemFree____std::allocator_wistd::unique_ptr_tWAVEFORMATEX_wil::function_deleter_void____cdecl___void_____CoTaskMemFree_______::_Emplace_reallocate_wistd::unique_ptr_tWAVEFORMATEX_wil::function_deleter_void____cdecl___void_____CoTaskMemFree______::_1_::catch_15(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<wistd::unique_ptr<tWAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>>(
    *(void ***)(a2 + 112),
    *(void ***)(a2 + 136));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), 8LL * *(_QWORD *)(a2 + 120));
  throw;
}
