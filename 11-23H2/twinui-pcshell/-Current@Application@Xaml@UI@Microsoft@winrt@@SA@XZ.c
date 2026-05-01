/*
 * XREFs of ?Current@Application@Xaml@UI@Microsoft@winrt@@SA@XZ @ 0x18002DD80
 * Callers:
 *     winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::UseMrtShim_WASDK$_ResumeCoro$1 @ 0x1801FAFF0 (winrt--Windows--Internal--Shell--XamlExplorerHost--WASDK--implementation--UseMrtShim_WASDK$_Resu.c)
 * Callees:
 *     ??$call@P6A?AUApplication@Xaml@UI@Microsoft@winrt@@AEBUIApplicationStatics@2345@@Z@?$factory_cache_entry@UApplication@Xaml@UI@Microsoft@winrt@@UIApplicationStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AUApplication@Xaml@UI@Microsoft@2@AEBUIApplicationStatics@4562@@Z@Z @ 0x18002DED8 (--$call@P6A-AUApplication@Xaml@UI@Microsoft@winrt@@AEBUIApplicationStatics@2345@@Z@-$factory_cac.c)
 *     ?Current@?$consume_Microsoft_UI_Xaml_IApplicationStatics@UIApplicationStatics@Xaml@UI@Microsoft@winrt@@@impl@winrt@@QEBA@XZ @ 0x18006FB58 (-Current@-$consume_Microsoft_UI_Xaml_IApplicationStatics@UIApplicationStatics@Xaml@UI@Microsoft@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Microsoft::UI::Xaml::Application::Current(__int64 a1)
{
  __int64 (__fastcall *v3)(const struct winrt::Microsoft::UI::Xaml::IApplicationStatics *); // [rsp+48h] [rbp+10h] BYREF

  _InterlockedIncrement64(&qword_18098E7A8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Microsoft::UI::Xaml::Application,winrt::Microsoft::UI::Xaml::IApplicationStatics> )
  {
    winrt::impl::consume_Microsoft_UI_Xaml_IApplicationStatics<winrt::Microsoft::UI::Xaml::IApplicationStatics>::Current(
      &winrt::impl::factory_cache_entry_v<winrt::Microsoft::UI::Xaml::Application,winrt::Microsoft::UI::Xaml::IApplicationStatics>,
      a1);
    _InterlockedDecrement64(&qword_18098E7A8);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098E7A8);
    v3 = _lambda_8224e4d308cbf97647b3288a7c678613_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Microsoft::UI::Xaml::Application,winrt::Microsoft::UI::Xaml::IApplicationStatics>::call<winrt::Microsoft::UI::Xaml::Application (*)(winrt::Microsoft::UI::Xaml::IApplicationStatics const &)>(
      a1,
      a1,
      &v3);
  }
  return a1;
}
