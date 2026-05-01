/*
 * XREFs of ?erase@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@_NV?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@$0A@@std@@@std@@QEAA_KAEBUhstring@winrt@@@Z @ 0x1806F6EDC
 * Callers:
 *     ?HandlePackageUninstallEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUPackageCatalog@ApplicationModel@56@UPackageUninstallingEventArgs@856@@Z @ 0x1806F3900 (-HandlePackageUninstallEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA.c)
 * Callees:
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1800B5528 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18014DC58 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Find_last@Uhstring@winrt@@@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@_NV?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBUhstring@winrt@@_N@std@@PEAX@std@@@1@AEBUhstring@winrt@@_K@Z @ 0x1806EF700 (--$_Find_last@Uhstring@winrt@@@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@_NV-$_Uhash_compare@Uhstr.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<winrt::hstring,bool,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,bool>>,0>>::erase(
        __int64 a1,
        __int64 *a2)
{
  const unsigned __int8 *const *v2; // rax
  __int64 v3; // rcx
  __int64 appended; // rdi
  __int64 v5; // rcx
  __int64 v6; // r11
  winrt::Windows::Internal::Shell::implementation::AppBackupListener *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  winrt::Windows::Internal::Shell::implementation::AppBackupListener *v10; // rax
  __int64 v11; // r8
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  winrt::Windows::Internal::Shell::implementation::AppBackupListener *v14; // [rsp+30h] [rbp-18h] BYREF

  v2 = (const unsigned __int8 *const *)winrt::hstring::operator std::basic_string_view<unsigned short>(a2, &v13);
  appended = std::_Fnv1a_append_bytes(v3, *v2, 2 * _mm_srli_si128(*(__m128i *)v2, 8).m128i_u64[0]);
  v7 = std::_Hash<std::_Umap_traits<winrt::hstring,bool,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,bool>>,0>>::_Find_last<winrt::hstring>(
         v5,
         &v14,
         v6,
         appended)[1];
  if ( !v7 )
    return 0LL;
  v8 = qword_180990168;
  v9 = 2 * (appended & qword_180990180);
  if ( *(winrt::Windows::Internal::Shell::implementation::AppBackupListener **)(qword_180990168
                                                                              + 16 * (appended & qword_180990180)
                                                                              + 8) == v7 )
  {
    if ( *(winrt::Windows::Internal::Shell::implementation::AppBackupListener **)(qword_180990168
                                                                                + 16 * (appended & qword_180990180)) == v7 )
    {
      v10 = qword_180990158;
      *(_QWORD *)(qword_180990168 + 16 * (appended & qword_180990180)) = qword_180990158;
    }
    else
    {
      v10 = (winrt::Windows::Internal::Shell::implementation::AppBackupListener *)*((_QWORD *)v7 + 1);
    }
    *(_QWORD *)(v8 + 8 * v9 + 8) = v10;
  }
  else if ( *(winrt::Windows::Internal::Shell::implementation::AppBackupListener **)(qword_180990168
                                                                                   + 16 * (appended & qword_180990180)) == v7 )
  {
    *(_QWORD *)(qword_180990168 + 16 * (appended & qword_180990180)) = *(_QWORD *)v7;
  }
  v11 = *(_QWORD *)v7;
  --qword_180990160;
  **((_QWORD **)v7 + 1) = v11;
  *(_QWORD *)(v11 + 8) = *((_QWORD *)v7 + 1);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)v7 + 2);
  std::_Deallocate<16,0>(v7, 0x20uLL);
  return 1LL;
}
