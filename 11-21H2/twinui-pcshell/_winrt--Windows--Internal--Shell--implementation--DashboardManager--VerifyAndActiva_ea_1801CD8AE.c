/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1_::_1_::dtor$15 @ 0x1801CD8AE
 * Callers:
 *     <none>
 * Callees:
 *     ??1IPrelaunchActivatedEventArgs@Activation@ApplicationModel@Windows@winrt@@QEAA@XZ @ 0x180020144 (--1IPrelaunchActivatedEventArgs@Activation@ApplicationModel@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync__ResumeCoro_1_::_1_::dtor_15(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 168) = *(_QWORD *)(a2 + 40) + 624LL;
  winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs::~IPrelaunchActivatedEventArgs(*(winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs **)(a2 + 168));
}
