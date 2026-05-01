/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::WindowData::SyncWindowTabDataModel_::_1_::dtor$6 @ 0x18021450B
 * Callers:
 *     <none>
 * Callees:
 *     ??1IPrelaunchActivatedEventArgs@Activation@ApplicationModel@Windows@winrt@@QEAA@XZ @ 0x180020144 (--1IPrelaunchActivatedEventArgs@Activation@ApplicationModel@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::WindowData::SyncWindowTabDataModel_::_1_::dtor_6(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs::~IPrelaunchActivatedEventArgs((winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs *)(a2 + 56));
  }
}
