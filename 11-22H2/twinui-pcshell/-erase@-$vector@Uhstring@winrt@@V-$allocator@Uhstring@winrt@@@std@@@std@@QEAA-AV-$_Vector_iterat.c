/*
 * XREFs of ?erase@?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@Uhstring@winrt@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uhstring@winrt@@@std@@@std@@@2@@Z @ 0x1806FC744
 * Callers:
 *     ?RemoveAt@?$vector_base@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@@winrt@@QEAAXI@Z @ 0x1806FBD50 (-RemoveAt@-$vector_base@U-$vector_impl@Uhstring@winrt@@V-$vector@Uhstring@winrt@@V-$allocator@Uh.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

_QWORD *__fastcall std::vector<winrt::hstring>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v8; // rsi
  __int64 v9; // rdi
  _QWORD *result; // rax

  v3 = *(_QWORD *)(a1 + 8);
  v4 = a3 + 8;
  v8 = a3;
  while ( v4 != v3 )
  {
    v9 = *(_QWORD *)(v8 + 8);
    *(_QWORD *)(v8 + 8) = 0LL;
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)v8);
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)v8);
    *(_QWORD *)v8 = v9;
    v8 += 8LL;
    v4 = v8 + 8;
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(*(_QWORD *)(a1 + 8) - 8LL));
  *(_QWORD *)(a1 + 8) -= 8LL;
  result = a2;
  *a2 = a3;
  return result;
}
