/*
 * XREFs of _lambda_ad045d4b5c3bf658d2720d8e49b9b5c2_::__lambda_ad045d4b5c3bf658d2720d8e49b9b5c2_ @ 0x180280E3C
 * Callers:
 *     winrt::Windows::Foundation::EventHandler_winrt::Windows::Foundation::IInspectable_::EventHandler_winrt::Windows::Foundation::IInspectable___lambda_ad045d4b5c3bf658d2720d8e49b9b5c2___ @ 0x180280C50 (winrt--Windows--Foundation--EventHandler_winrt--Windows--Foundation--IInspectable_-_ea_180280C50.c)
 *     _winrt::Windows::Foundation::EventHandler_winrt::Windows::Foundation::IInspectable_::EventHandler_winrt::Windows::Foundation::IInspectable___lambda_ad045d4b5c3bf658d2720d8e49b9b5c2____::_1_::dtor$0 @ 0x180280C99 (_winrt--Windows--Foundation--EventHandler_winrt--Windows--Foundation--IInspectable__ea_180280C99.c)
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Foundation::IInspectable___lambda_ad045d4b5c3bf658d2720d8e49b9b5c2___::_implements_delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Foundation::IInspectable___lambda_ad045d4b5c3bf658d2720d8e49b9b5c2___ @ 0x180280E74 (winrt--impl--implements_delegate_winrt--Windows--Foundation--EventHandler_winrt--Wi_ea_180280E74.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801453A8 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall lambda_ad045d4b5c3bf658d2720d8e49b9b5c2_::__lambda_ad045d4b5c3bf658d2720d8e49b9b5c2_(_QWORD *a1)
{
  std::_Ref_count_base *v2; // rcx

  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 3));
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 2));
  v2 = (std::_Ref_count_base *)a1[1];
  if ( v2 )
    std::_Ref_count_base::_Decwref(v2);
}
