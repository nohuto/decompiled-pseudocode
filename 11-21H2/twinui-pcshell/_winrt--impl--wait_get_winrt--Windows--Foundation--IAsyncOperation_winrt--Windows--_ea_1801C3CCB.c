/*
 * XREFs of _winrt::impl::wait_get_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem____::_1_::dtor$3 @ 0x1801C3CCB
 * Callers:
 *     <none>
 * Callees:
 *     ??1IAppInstallManagerInternal@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@QEAA@XZ @ 0x18019B8AC (--1IAppInstallManagerInternal@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@win.c)
 */

void __fastcall winrt::impl::wait_get_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem____::_1_::dtor_3(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~2u;
    winrt::Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IAppInstallManagerInternal::~IAppInstallManagerInternal(*(winrt::Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IAppInstallManagerInternal **)(a2 + 96));
  }
}
