/*
 * XREFs of ??1?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@XZ @ 0x1806F0AB4
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BuildRegistryKeyMap_::_1_::dtor$7 @ 0x1806F23B4 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--BuildRegistryK_ea_1806F23B4.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::GetAppThatWasUpdatedOrInstalled_::_1_::dtor$11 @ 0x1806F3364 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--GetAppThatWasU_ea_1806F3364.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall std::pair<winrt::hstring const,std::wstring>::~pair<winrt::hstring const,std::wstring>(
        volatile signed __int32 **a1)
{
  std::wstring::_Tidy_deallocate((__int64)(a1 + 1));
  winrt::handle_type<winrt::impl::hstring_traits>::close(a1);
}
