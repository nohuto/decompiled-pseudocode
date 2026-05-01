/*
 * XREFs of _winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Management::Deployment::PackageVolume___::await_resume_::_1_::dtor$1 @ 0x180248B2D
 * Callers:
 *     <none>
 * Callees:
 *     ??1ProtocolLauncherInfo@StateRepository@Internal@Windows@winrt@@QEAA@XZ @ 0x1801DA1D8 (--1ProtocolLauncherInfo@StateRepository@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Management::Deployment::PackageVolume___::await_resume_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~2u;
    winrt::Windows::Internal::StateRepository::ProtocolLauncherInfo::~ProtocolLauncherInfo(*(winrt::Windows::Foundation::IUnknown **)(a2 + 88));
  }
}
