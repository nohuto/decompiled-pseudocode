/*
 * XREFs of ??1RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1807202F0
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@EEAAXXZ @ 0x180723A10 (-_Destroy@-$_Ref_count_obj2@URemoteSessionInformation@implementation@Shell@Internal@Windows@winr.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@std@@IEAAXXZ @ 0x1800875EC (-_Tidy@-$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@w.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?revoke@?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@QEAAXXZ @ 0x18071D9F0 (-revoke@-$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::~RemoteSessionInformation(
        winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation *this)
{
  __int64 *v1; // rdi
  __int64 v3; // rdx

  v1 = (__int64 *)((char *)this + 136);
  winrt::event_revoker<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>::revoke((__int64)this + 136);
  if ( *v1 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v1);
  std::_Func_class<void,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &>::_Tidy(
    (__int64)this + 56,
    v3);
  if ( *((_QWORD *)this + 1) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation *)((char *)this + 8));
  if ( *(_QWORD *)this )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(this);
}
