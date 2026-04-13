/*
 * XREFs of ??$destroy@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@?$_Wrap_alloc@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@QEAAXPEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@@Z @ 0x180054BB0
 * Callers:
 *     _std::_Uninit_move_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______std::allocator_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______::_1_::catch$0 @ 0x1800EF62C (_std--_Uninit_move_std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--alloca.c)
 *     _std::_Uninit_move_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t______std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t______std::allocator_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t______std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t______::_1_::catch$0 @ 0x1800F5A1E (_std--_Uninit_move_std--basic_string_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t___.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Wrap_alloc<std::allocator<std::wstring>>::destroy<std::wstring>(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a2 + 24) >= 8uLL )
    operator delete(*(void **)a2);
  result = 0LL;
  *(_QWORD *)(a2 + 24) = 7LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_WORD *)a2 = 0;
  return result;
}
