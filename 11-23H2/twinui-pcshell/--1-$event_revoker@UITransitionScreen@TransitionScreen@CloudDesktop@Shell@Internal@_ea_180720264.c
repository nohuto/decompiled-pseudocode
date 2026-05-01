/*
 * XREFs of ??1?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@X@impl@7@EAAHUevent_token@7@@_E1??_989impl@7@$BHA@AA@impl@winrt@@QEAA@XZ @ 0x180720264
 * Callers:
 *     ?SubsribeToTransitionScreenDismissEvent@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x180723308 (-SubsribeToTransitionScreenDismissEvent@RemoteSessionWindowManager@implementation@Shell@Internal.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??_9type@?$abi@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@X@impl@winrt@@$BHA@AA @ 0x1802ACF30 (--_9type@-$abi@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@X@.c)
 *     ?get@?$weak_ref@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x18071D998 (-get@-$weak_ref@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@.c)
 */

void __fastcall __1__event_revoker_UITransitionScreen_TransitionScreen_CloudDesktop_Shell_Internal_Windows_winrt___MP8type___abi_UITransitionScreen_TransitionScreen_CloudDesktop_Shell_Internal_Windows_winrt__X_impl_7_EAAHUevent_token_7___E1___989impl_7__BHA_AA_impl_winrt__QEAA_XZ(
        __int64 *a1)
{
  __int64 *v2; // rdi
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 )
  {
    v2 = winrt::weak_ref<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>::get(
           a1,
           &v3);
    if ( *v2 )
       winrt::impl::abi<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen,void>::type::`vcall'{112,{flat}}(*v2);
    if ( *v2 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v2);
  }
  if ( *a1 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(a1);
}
