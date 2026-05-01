/*
 * XREFs of ??$find@X@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@_NV?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@_N@std@@@std@@@std@@@1@AEBUhstring@winrt@@@Z @ 0x1806F013C
 * Callers:
 *     ?HandlePackageUninstallEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXUPackageCatalog@ApplicationModel@56@UPackageUninstallingEventArgs@856@@Z @ 0x1806F3900 (-HandlePackageUninstallEvent@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA.c)
 * Callees:
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1800B5528 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18014DC58 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Find_last@Uhstring@winrt@@@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@_NV?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBUhstring@winrt@@_N@std@@PEAX@std@@@1@AEBUhstring@winrt@@_K@Z @ 0x1806EF700 (--$_Find_last@Uhstring@winrt@@@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@_NV-$_Uhash_compare@Uhstr.c)
 */

winrt::Windows::Internal::Shell::implementation::AppBackupListener **__fastcall std::_Hash<std::_Umap_traits<winrt::hstring,bool,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,bool>>,0>>::find<void>(
        __int64 a1,
        winrt::Windows::Internal::Shell::implementation::AppBackupListener **a2,
        __int64 *a3)
{
  const unsigned __int8 *const *v4; // rax
  __int64 v5; // rcx
  __int64 appended; // rax
  __int64 v7; // rcx
  __int64 v8; // r11
  winrt::Windows::Internal::Shell::implementation::AppBackupListener **v9; // rax
  winrt::Windows::Internal::Shell::implementation::AppBackupListener *v10; // rcx
  winrt::Windows::Internal::Shell::implementation::AppBackupListener **result; // rax
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  winrt::Windows::Internal::Shell::implementation::AppBackupListener *v13; // [rsp+30h] [rbp-18h] BYREF

  v4 = (const unsigned __int8 *const *)winrt::hstring::operator std::basic_string_view<unsigned short>(a3, &v12);
  appended = std::_Fnv1a_append_bytes(v5, *v4, 2 * _mm_srli_si128(*(__m128i *)v4, 8).m128i_u64[0]);
  v9 = std::_Hash<std::_Umap_traits<winrt::hstring,bool,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,bool>>,0>>::_Find_last<winrt::hstring>(
         v7,
         &v13,
         v8,
         appended);
  v10 = qword_180990158;
  if ( v9[1] )
    v10 = v9[1];
  result = a2;
  *a2 = v10;
  return result;
}
