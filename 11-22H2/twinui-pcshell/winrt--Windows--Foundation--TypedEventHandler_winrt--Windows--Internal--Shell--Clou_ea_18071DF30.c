/*
 * XREFs of winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Foundation::IInspectable_::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Foundation::IInspectable___lambda_c4158f368c90993acd5619817087aedd___ @ 0x18071DF30
 * Callers:
 *     ?SubscribeToRemoteSessionExitRequestedEvent@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x180722FA0 (-SubscribeToRemoteSessionExitRequestedEvent@RemoteSessionWindowManager@implementation@Shell@Inte.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801453A8 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Foundation::IInspectable_::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Foundation::IInspectable___lambda_c4158f368c90993acd5619817087aedd___(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // r8
  std::_Ref_count_base *v5; // rcx
  _QWORD *v7; // [rsp+38h] [rbp+10h]

  v7 = operator new(0x28uLL);
  v4 = *a2;
  *a2 = 0LL;
  v7[1] = v4;
  v7[2] = 0LL;
  v7[3] = 0LL;
  v7[2] = a2[1];
  v7[3] = a2[2];
  a2[1] = 0LL;
  a2[2] = 0LL;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v7 + 8) = 1;
  *v7 = off_1807CB538;
  *a1 = v7;
  v5 = (std::_Ref_count_base *)a2[2];
  if ( v5 )
    std::_Ref_count_base::_Decwref(v5);
  if ( *a2 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(a2);
  return a1;
}
