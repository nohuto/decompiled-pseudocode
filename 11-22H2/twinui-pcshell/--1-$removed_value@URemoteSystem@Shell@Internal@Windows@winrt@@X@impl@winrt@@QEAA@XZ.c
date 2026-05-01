/*
 * XREFs of ??1?$removed_value@URemoteSystem@Shell@Internal@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x18070E93C
 * Callers:
 *     _winrt::map_base_winrt::impl::map_impl_winrt::hstring_winrt::Windows::Internal::Shell::RemoteSystem_std::map_winrt::hstring_winrt::Windows::Internal::Shell::RemoteSystem_std::less_winrt::hstring__std::allocator_std::pair_winrt::hstring_const__winrt::Windows::Internal::Shell::RemoteSystem______winrt::impl::single_threaded_collection_base__winrt::hstring_winrt::Windows::Internal::Shell::RemoteSystem_::Insert_::_1_::dtor$0 @ 0x180713B49 (_winrt--map_base_winrt--impl--map_impl_winrt--hstring_winrt--Windows--Internal--Shell--RemoteSys.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

void __fastcall winrt::impl::removed_value<winrt::Windows::Internal::Shell::RemoteSystem,void>::~removed_value<winrt::Windows::Internal::Shell::RemoteSystem,void>(
        winrt::Windows::Foundation::IUnknown *a1)
{
  if ( *((_BYTE *)a1 + 8) )
  {
    if ( *(_QWORD *)a1 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref(a1);
  }
}
