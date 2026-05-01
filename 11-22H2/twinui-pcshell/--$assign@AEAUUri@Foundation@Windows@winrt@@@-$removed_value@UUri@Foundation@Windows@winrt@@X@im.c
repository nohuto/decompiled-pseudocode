/*
 * XREFs of ??$assign@AEAUUri@Foundation@Windows@winrt@@@?$removed_value@UUri@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXAEAUUri@Foundation@Windows@2@@Z @ 0x18022F908
 * Callers:
 *     ?RemoveAt@?$vector_base@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUri@Foundation@Windows@3@@winrt@@QEAAXI@Z @ 0x180241380 (-RemoveAt@-$vector_base@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUri@Foundation@.c)
 *     ?RemoveAtEnd@?$vector_base@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUri@Foundation@Windows@3@@winrt@@QEAAXXZ @ 0x18024149C (-RemoveAtEnd@-$vector_base@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUri@Foundati.c)
 *     ?SetAt@?$vector_base@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUri@Foundation@Windows@3@@winrt@@QEAAXIAEBUUri@Foundation@Windows@2@@Z @ 0x180242C48 (-SetAt@-$vector_base@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUri@Foundation@Win.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 */

__int64 __fastcall winrt::impl::removed_value<winrt::Windows::Foundation::Uri,void>::assign<winrt::Windows::Foundation::Uri &>(
        winrt::Windows::Foundation::IUnknown *a1,
        __int64 *a2)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 8) )
  {
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>(a1);
    *((_BYTE *)a1 + 8) = 0;
  }
  result = *a2;
  *a2 = 0LL;
  *(_QWORD *)a1 = result;
  *((_BYTE *)a1 + 8) = 1;
  return result;
}
