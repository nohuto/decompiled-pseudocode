/*
 * XREFs of ??1?$_Optional_destruct_base@UUri@Foundation@Windows@winrt@@$0A@@std@@QEAA@XZ @ 0x180234FD8
 * Callers:
 *     ??1?$removed_value@UUri@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x180235624 (--1-$removed_value@UUri@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ.c)
 *     ?RemoveAt@?$vector_base@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUri@Foundation@Windows@3@@winrt@@QEAAXI@Z @ 0x180241380 (-RemoveAt@-$vector_base@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUri@Foundation@.c)
 *     ?RemoveAtEnd@?$vector_base@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUri@Foundation@Windows@3@@winrt@@QEAAXXZ @ 0x18024149C (-RemoveAtEnd@-$vector_base@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUri@Foundati.c)
 *     ?SetAt@?$vector_base@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUri@Foundation@Windows@3@@winrt@@QEAAXIAEBUUri@Foundation@Windows@2@@Z @ 0x180242C48 (-SetAt@-$vector_base@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUri@Foundation@Win.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 */

void __fastcall std::_Optional_destruct_base<winrt::Windows::Foundation::Uri,0>::~_Optional_destruct_base<winrt::Windows::Foundation::Uri,0>(
        winrt::Windows::Foundation::IUnknown *a1)
{
  if ( *((_BYTE *)a1 + 8) )
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>(a1);
}
