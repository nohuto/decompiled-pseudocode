/*
 * XREFs of _std::vector_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____std::allocator_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t_______::_Reallocate_::_1_::catch$0 @ 0x1800F5BD3
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1800222FC (_CxxThrowException_0.c)
 *     ?deallocate@?$_Wrap_alloc@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@QEAAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@_K@Z @ 0x18006A198 (-deallocate@-$_Wrap_alloc@V-$allocator@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@.c)
 */

void __fastcall __noreturn std::vector_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____std::allocator_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t_______::_Reallocate_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Wrap_alloc<std::allocator<std::wstring>>::deallocate(a1, *(void **)(a2 + 104));
  throw;
}
