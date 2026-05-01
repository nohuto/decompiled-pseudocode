/*
 * XREFs of ??1?$optional@Uhstring@winrt@@@std@@QEAA@XZ @ 0x1806C74E4
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::GetAppThatWasDeleted_::_1_::dtor$4 @ 0x1806F2B5F (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--GetAppThatWasD_ea_1806F2B5F.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::RegistryWatcherCallback_::_1_::dtor$1 @ 0x1806F5BD1 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--RegistryWatche_ea_1806F5BD1.c)
 *     _winrt::vector_base_winrt::impl::vector_impl_winrt::hstring_std::vector_winrt::hstring_std::allocator_winrt::hstring____winrt::impl::single_threaded_collection_base__winrt::hstring_::RemoveAt_::_1_::dtor$0 @ 0x1806FBE1C (_winrt--vector_base_winrt--impl--vector_impl_winrt--hstring_std--vector_winrt--hstring_std--allo.c)
 *     _winrt::vector_base_winrt::impl::vector_impl_winrt::hstring_std::vector_winrt::hstring_std::allocator_winrt::hstring____winrt::impl::single_threaded_collection_base__winrt::hstring_::RemoveAtEnd_::_1_::dtor$0 @ 0x1806FBF54 (_winrt--vector_base_winrt--impl--vector_impl_winrt--hstring_std--vector_winrt--hstr_ea_1806FBF54.c)
 *     _winrt::vector_base_winrt::impl::vector_impl_winrt::hstring_std::vector_winrt::hstring_std::allocator_winrt::hstring____winrt::impl::single_threaded_collection_base__winrt::hstring_::SetAt_::_1_::dtor$0 @ 0x1806FC28F (_winrt--vector_base_winrt--impl--vector_impl_winrt--hstring_std--vector_winrt--hstr_ea_1806FC28F.c)
 *     _winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::GetSystemId_::_1_::dtor$1 @ 0x1807134AB (_winrt--Windows--Internal--Shell--factory_implementation--RemoteSystemDataModel--Ge_ea_1807134AB.c)
 *     _winrt::map_base_winrt::impl::map_impl_unsigned_int_winrt::hstring_std::map_unsigned_int_winrt::hstring_std::less_unsigned_int__std::allocator_std::pair_unsigned_int_const__winrt::hstring______winrt::impl::single_threaded_collection_base__unsigned_int_winrt::hstring_::Insert_::_1_::dtor$0 @ 0x180713A88 (_winrt--map_base_winrt--impl--map_impl_unsigned_int_winrt--hstring_std--map_unsigned_int_winrt--.c)
 *     _winrt::map_base_winrt::impl::map_impl_unsigned___int64_winrt::hstring_std::map_unsigned___int64_winrt::hstring_std::less_unsigned___int64__std::allocator_std::pair_unsigned___int64_const__winrt::hstring______winrt::impl::single_threaded_collection_base__unsigned___int64_winrt::hstring_::Insert_::_1_::dtor$0 @ 0x180713BF8 (_winrt--map_base_winrt--impl--map_impl_unsigned___int64_winrt--hstring_std--map_unsigned___int64.c)
 *     _winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::RemoveWindow_::_1_::dtor$1 @ 0x180717CF5 (_winrt--Windows--Internal--Shell--factory_implementation--RemoteSystemDataModel--Re_ea_180717CF5.c)
 *     _winrt::impl::consume_Windows_Foundation_Collections_IMap_winrt::Windows::Foundation::Collections::IMap_unsigned_int_winrt::hstring__unsigned_int_winrt::hstring_::TryLookup_::_1_::dtor$0 @ 0x1807195E6 (_winrt--impl--consume_Windows_Foundation_Collections_IMap_winrt--Windows--Foundatio_ea_1807195E6.c)
 *     _winrt::impl::consume_Windows_Foundation_Collections_IMap_winrt::Windows::Foundation::Collections::IMap_unsigned___int64_winrt::hstring__unsigned___int64_winrt::hstring_::TryLookup_::_1_::dtor$0 @ 0x180719767 (_winrt--impl--consume_Windows_Foundation_Collections_IMap_winrt--Windows--Foundatio_ea_180719767.c)
 *     _winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::UnregisterRemoteDesktopProcess_::_1_::dtor$1 @ 0x180719BEA (_winrt--Windows--Internal--Shell--factory_implementation--RemoteSystemDataModel--Un_ea_180719BEA.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

void __fastcall std::optional<winrt::hstring>::~optional<winrt::hstring>(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)a1);
}
