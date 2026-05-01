/*
 * XREFs of winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::DismissedArguments_::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::DismissedArguments___lambda_665315f8e7a3be3e9382c02473f3b139___ @ 0x18027A33C
 * Callers:
 *     ?SubsribeToTransitionScreenDismissEvent@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x180723308 (-SubsribeToTransitionScreenDismissEvent@RemoteSessionWindowManager@implementation@Shell@Internal.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     _lambda_c4158f368c90993acd5619817087aedd_::__lambda_c4158f368c90993acd5619817087aedd_ @ 0x18027AD34 (_lambda_c4158f368c90993acd5619817087aedd_--__lambda_c4158f368c90993acd5619817087aedd_.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::DismissedArguments_::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::DismissedArguments___lambda_665315f8e7a3be3e9382c02473f3b139___(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // r8
  _QWORD *v6; // [rsp+30h] [rbp+8h]

  v6 = operator new(0x28uLL);
  v4 = *a2;
  *a2 = 0LL;
  v6[1] = v4;
  v6[2] = 0LL;
  v6[3] = 0LL;
  v6[2] = a2[1];
  v6[3] = a2[2];
  a2[1] = 0LL;
  a2[2] = 0LL;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v6 + 8) = 1;
  *v6 = off_1807CB518;
  *a1 = v6;
  lambda_c4158f368c90993acd5619817087aedd_::__lambda_c4158f368c90993acd5619817087aedd_(a2);
  return a1;
}
