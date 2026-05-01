/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@USwitchConnectedState@implementation@Shell@Internal@Windows@winrt@@@std@@EEAAXXZ @ 0x180733740
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@std@@IEAAXXZ @ 0x1800875EC (-_Tidy@-$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@w.c)
 */

void __fastcall std::_Ref_count_obj2<winrt::Windows::Internal::Shell::implementation::SwitchConnectedState>::_Destroy(
        __int64 a1,
        __int64 a2)
{
  std::_Func_class<void,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &>::_Tidy(
    a1 + 56,
    a2);
  winrt::Windows::Internal::Shell::implementation::SwitchConnectStateBase::~SwitchConnectStateBase((winrt::Windows::Internal::Shell::implementation::SwitchConnectStateBase *)(a1 + 24));
}
