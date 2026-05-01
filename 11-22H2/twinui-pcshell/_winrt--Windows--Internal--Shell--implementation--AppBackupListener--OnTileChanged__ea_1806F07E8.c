/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileChanged_::_8_::_parameters_::__parameters_ @ 0x1806F07E8
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileAdded$_InitCoro$2_::_1_::dtor$1 @ 0x18025AD35 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--OnTileAdded$_I_ea_18025AD35.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileAdded$_ResumeCoro$1 @ 0x18025AD50 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--OnTileAdded$_ResumeCoro$1.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileChanged$_InitCoro$2_::_1_::dtor$1 @ 0x18025B3A9 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--OnTileChanged$_ea_18025B3A9.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileChanged$_ResumeCoro$1 @ 0x18025B3D0 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--OnTileChanged$_ResumeCoro$1.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileRemoved$_InitCoro$2_::_1_::dtor$1 @ 0x18025B889 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--OnTileRemoved$_ea_18025B889.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileRemoved$_ResumeCoro$1 @ 0x18025B8B0 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--OnTileRemoved$_ResumeCoro$1.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileChanged_::_8_::_parameters_::__parameters_(
        __int64 a1)
{
  winrt::Windows::Foundation::IUnknown *v2; // rcx

  v2 = (winrt::Windows::Foundation::IUnknown *)(a1 + 16);
  if ( *(_QWORD *)v2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v2);
  if ( *(_QWORD *)(a1 + 8) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)(a1 + 8));
}
