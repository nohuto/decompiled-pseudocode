/*
 * XREFs of ??1?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x18071D228
 * Callers:
 *     _lambda_501a545e3e62ea2d6f88499b5047d98e_::operator() @ 0x18027AE10 (_lambda_501a545e3e62ea2d6f88499b5047d98e_--operator().c)
 *     __lambda_501a545e3e62ea2d6f88499b5047d98e_::operator()_::_1_::dtor$20 @ 0x18027B63E (__lambda_501a545e3e62ea2d6f88499b5047d98e_--operator()_--_1_--dtor$20.c)
 *     _winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::ActivateRemoteDesktopProvider_::_1_::dtor$8 @ 0x1807210C1 (_winrt--Windows--Internal--Shell--implementation--RemoteSessionWindowManager--Activ_ea_1807210C1.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::pair<winrt::hstring const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>>::~pair<winrt::hstring const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>>(
        __int64 a1)
{
  std::_Ref_count_base *v2; // rcx

  v2 = *(std::_Ref_count_base **)(a1 + 16);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)a1);
}
