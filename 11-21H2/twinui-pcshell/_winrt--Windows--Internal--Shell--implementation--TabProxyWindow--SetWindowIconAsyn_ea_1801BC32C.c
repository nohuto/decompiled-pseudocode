/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync$_ResumeCoro$1_::_1_::dtor$6 @ 0x1801BC32C
 * Callers:
 *     <none>
 * Callees:
 *     ??1IPrelaunchActivatedEventArgs@Activation@ApplicationModel@Windows@winrt@@QEAA@XZ @ 0x180020144 (--1IPrelaunchActivatedEventArgs@Activation@ApplicationModel@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync__ResumeCoro_1_::_1_::dtor_6(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 152) = *(_QWORD *)(a2 + 288) + 128LL;
  winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs::~IPrelaunchActivatedEventArgs(*(winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs **)(a2 + 152));
}
