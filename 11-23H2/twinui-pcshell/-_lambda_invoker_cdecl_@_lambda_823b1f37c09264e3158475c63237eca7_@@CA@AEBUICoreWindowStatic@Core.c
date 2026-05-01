/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_823b1f37c09264e3158475c63237eca7_@@CA@AEBUICoreWindowStatic@Core@UI@Windows@winrt@@@Z @ 0x18006FA90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetForCurrentThread@?$consume_Windows_UI_Core_ICoreWindowStatic@UICoreWindowStatic@Core@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18006FAB8 (-GetForCurrentThread@-$consume_Windows_UI_Core_ICoreWindowStatic@UICoreWindowStatic@Core@UI@Wind.c)
 */

const struct winrt::Windows::UI::Core::ICoreWindowStatic *__fastcall _lambda_823b1f37c09264e3158475c63237eca7_::_lambda_invoker_cdecl_(
        const struct winrt::Windows::UI::Core::ICoreWindowStatic *a1,
        __int64 a2)
{
  winrt::impl::consume_Windows_UI_Core_ICoreWindowStatic<winrt::Windows::UI::Core::ICoreWindowStatic>::GetForCurrentThread(
    a2,
    a1);
  return a1;
}
