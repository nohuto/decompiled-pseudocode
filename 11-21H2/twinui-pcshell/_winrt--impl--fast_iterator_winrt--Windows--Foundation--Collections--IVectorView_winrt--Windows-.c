/*
 * XREFs of _winrt::impl::fast_iterator_winrt::Windows::Foundation::Collections::IVectorView_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem___::operator__::_1_::dtor$1 @ 0x1801C4965
 * Callers:
 *     <none>
 * Callees:
 *     ??1IAppInstallManagerInternal@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@QEAA@XZ @ 0x18019B8AC (--1IAppInstallManagerInternal@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@win.c)
 */

void __fastcall winrt::impl::fast_iterator_winrt::Windows::Foundation::Collections::IVectorView_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem___::operator__::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~2u;
    winrt::Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IAppInstallManagerInternal::~IAppInstallManagerInternal(*(winrt::Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IAppInstallManagerInternal **)(a2 + 72));
  }
}
