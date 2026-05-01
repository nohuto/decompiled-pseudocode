/*
 * XREFs of ?GetForCurrentProcess@InputSite@Input@Internal@UI@Windows@winrt@@SA@XZ @ 0x180418798
 * Callers:
 *     _lambda_0c5affb431bf714a4aabb516927c6336_::operator() @ 0x180235F10 (_lambda_0c5affb431bf714a4aabb516927c6336_--operator().c)
 *     _lambda_b4b97c4a9a2f7bde5cf75455e97a72d5_::operator() @ 0x180236F2C (_lambda_b4b97c4a9a2f7bde5cf75455e97a72d5_--operator().c)
 * Callees:
 *     ?GetForCurrentProcess@?$consume_Windows_UI_Internal_Input_IInputSiteStatics@UIInputSiteStatics@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180173B48 (-GetForCurrentProcess@-$consume_Windows_UI_Internal_Input_IInputSiteStatics@UIInputSiteStatics@I.c)
 *     ??$call@P6A?AUInputSite@Input@Internal@UI@Windows@winrt@@AEBUIInputSiteStatics@23456@@Z@?$factory_cache_entry@UInputSite@Input@Internal@UI@Windows@winrt@@UIInputSiteStatics@23456@@impl@winrt@@QEAA?A_P$$QEAP6A?AUInputSite@Input@Internal@UI@Windows@2@AEBUIInputSiteStatics@45672@@Z@Z @ 0x180173D4C (--$call@P6A-AUInputSite@Input@Internal@UI@Windows@winrt@@AEBUIInputSiteStatics@23456@@Z@-$factor.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::UI::Internal::Input::InputSite::GetForCurrentProcess(_QWORD *a1)
{
  const struct winrt::Windows::UI::Internal::Input::IInputSiteStatics *(__fastcall *v3)(const struct winrt::Windows::UI::Internal::Input::IInputSiteStatics *, __int64); // [rsp+48h] [rbp+10h] BYREF

  _InterlockedIncrement64(&qword_18098E108);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Internal::Input::InputSite,winrt::Windows::UI::Internal::Input::IInputSiteStatics> )
  {
    winrt::impl::consume_Windows_UI_Internal_Input_IInputSiteStatics<winrt::Windows::UI::Internal::Input::IInputSiteStatics>::GetForCurrentProcess(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Internal::Input::InputSite,winrt::Windows::UI::Internal::Input::IInputSiteStatics>,
      a1);
    _InterlockedDecrement64(&qword_18098E108);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098E108);
    v3 = _lambda_a5e19194432ba5e1a4e075778a86de15_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Internal::Input::InputSite,winrt::Windows::UI::Internal::Input::IInputSiteStatics>::call<winrt::Windows::UI::Internal::Input::InputSite (*)(winrt::Windows::UI::Internal::Input::IInputSiteStatics const &)>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))a1,
      (__int64)a1,
      (void (__fastcall **)(__int64, __int64 *))&v3);
  }
  return a1;
}
