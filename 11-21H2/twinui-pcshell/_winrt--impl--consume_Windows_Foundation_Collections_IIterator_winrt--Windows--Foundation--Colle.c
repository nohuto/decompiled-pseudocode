/*
 * XREFs of _winrt::impl::consume_Windows_Foundation_Collections_IIterator_winrt::Windows::Foundation::Collections::IIterator_winrt::Windows::ApplicationModel::Package__winrt::Windows::ApplicationModel::Package_::Current_::_1_::dtor$0 @ 0x1801C60E4
 * Callers:
 *     <none>
 * Callees:
 *     ??1IAppInstallManagerInternal@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@QEAA@XZ @ 0x18019B8AC (--1IAppInstallManagerInternal@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@win.c)
 */

void __fastcall winrt::impl::consume_Windows_Foundation_Collections_IIterator_winrt::Windows::Foundation::Collections::IIterator_winrt::Windows::ApplicationModel::Package__winrt::Windows::ApplicationModel::Package_::Current_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    winrt::Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IAppInstallManagerInternal::~IAppInstallManagerInternal(*(winrt::Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IAppInstallManagerInternal **)(a2 + 72));
  }
}
