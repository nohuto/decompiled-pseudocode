/*
 * XREFs of winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreenId_::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreenId___lambda_e1015264fe649a72270f58c4e4d07372___ @ 0x1802816A4
 * Callers:
 *     ?ActivateProvider@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA?AUTransitionScreenId@TransitionScreen@CloudDesktop@3456@AEBU8893456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x180730220 (-ActivateProvider@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA-AUTr.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     _lambda_e1015264fe649a72270f58c4e4d07372_::__lambda_e1015264fe649a72270f58c4e4d07372_ @ 0x18028179C (_lambda_e1015264fe649a72270f58c4e4d07372_--__lambda_e1015264fe649a72270f58c4e4d07372_.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreenId_::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreenId___lambda_e1015264fe649a72270f58c4e4d07372___(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // rax
  _QWORD *v6; // [rsp+30h] [rbp+8h]

  v6 = operator new(0x28uLL);
  v6[1] = 0LL;
  v6[2] = 0LL;
  v6[1] = *a2;
  v6[2] = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  v4 = a2[2];
  a2[2] = 0LL;
  v6[3] = v4;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v6 + 8) = 1;
  *v6 = off_1807CBA48;
  *a1 = v6;
  lambda_e1015264fe649a72270f58c4e4d07372_::__lambda_e1015264fe649a72270f58c4e4d07372_(a2);
  return a1;
}
