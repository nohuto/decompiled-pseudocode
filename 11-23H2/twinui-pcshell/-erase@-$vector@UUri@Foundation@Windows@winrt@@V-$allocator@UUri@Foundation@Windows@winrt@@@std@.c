/*
 * XREFs of ?erase@?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UUri@Foundation@Windows@winrt@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UUri@Foundation@Windows@winrt@@@std@@@std@@@2@@Z @ 0x180249E34
 * Callers:
 *     ?RemoveAt@?$vector_base@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUri@Foundation@Windows@3@@winrt@@QEAAXI@Z @ 0x180241380 (-RemoveAt@-$vector_base@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUri@Foundation@.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 */

_QWORD *__fastcall std::vector<winrt::Windows::Foundation::Uri>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  winrt::Windows::Foundation::IUnknown *v3; // rbp
  winrt::Windows::Foundation::IUnknown *i; // rdi
  _QWORD *result; // rax

  v3 = *(winrt::Windows::Foundation::IUnknown **)(a1 + 8);
  for ( i = (winrt::Windows::Foundation::IUnknown *)(a3 + 8);
        i != v3;
        i = (winrt::Windows::Foundation::IUnknown *)((char *)i + 8) )
  {
    winrt::Windows::Foundation::IUnknown::operator=((winrt::Windows::Foundation::IUnknown *)((char *)i - 8), i);
  }
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(*(_QWORD *)(a1 + 8) - 8LL));
  *(_QWORD *)(a1 + 8) -= 8LL;
  result = a2;
  *a2 = a3;
  return result;
}
