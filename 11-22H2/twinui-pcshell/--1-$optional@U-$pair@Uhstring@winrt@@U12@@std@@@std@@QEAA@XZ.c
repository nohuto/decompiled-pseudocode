/*
 * XREFs of ??1?$optional@U?$pair@Uhstring@winrt@@U12@@std@@@std@@QEAA@XZ @ 0x1806F0A84
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::GetAppThatWasUpdatedOrInstalled_::_1_::dtor$8 @ 0x1806F3334 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--GetAppThatWasU_ea_1806F3334.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::RegistryWatcherCallback_::_1_::dtor$5 @ 0x1806F5BF5 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--RegistryWatche_ea_1806F5BF5.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

void __fastcall std::optional<std::pair<winrt::hstring,winrt::hstring>>::~optional<std::pair<winrt::hstring,winrt::hstring>>(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 16) )
  {
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(a1 + 8));
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)a1);
  }
}
