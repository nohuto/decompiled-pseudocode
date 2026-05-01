/*
 * XREFs of ?DeleteWindow@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@AEBUhstring@6@@Z @ 0x180727C48
 * Callers:
 *     ?CleanUpRemoteSystem@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@@Z @ 0x18070F66C (-CleanUpRemoteSystem@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@.c)
 *     ?RemoveWindow@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUWindowId@UI@56@@Z @ 0x180717B68 (-RemoveWindow@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA_NA.c)
 *     ?RestoreRemoteSystemsDataAndNotifyOnLocal@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUhstring@6@AEBV?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@Z @ 0x180717EE4 (-RestoreRemoteSystemsDataAndNotifyOnLocal@RemoteSystemDataModel@factory_implementation@Shell@Int.c)
 * Callees:
 *     ??$find@X@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@@1@AEB_K@Z @ 0x18063615C (--$find@X@-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@@V.c)
 *     ??$_Try_emplace@AEBUhstring@winrt@@$$V@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@PEAX@std@@_N@1@AEBUhstring@winrt@@@Z @ 0x180726DA8 (--$_Try_emplace@AEBUhstring@winrt@@$$V@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@V-$u_ea_180726DA8.c)
 *     ?DeleteIdFromStorage@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@AEAAXAEB_KAEBUhstring@6@AEB_N@Z @ 0x1807279FC (-DeleteIdFromStorage@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?erase@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA_KAEB_K@Z @ 0x180728D40 (-erase@-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@@V-$a.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::DeleteWindow(
        winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper *SRWLock,
        const struct winrt::Windows::UI::WindowId *a2,
        const struct winrt::hstring *a3)
{
  __int64 v6; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // rax
  _BYTE v9[40]; // [rsp+20h] [rbp-28h] BYREF
  winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper *v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  LOBYTE(v10) = 0;
  winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::DeleteIdFromStorage(
    SRWLock,
    (unsigned __int64 *)a2,
    a3,
    (const bool *)&v10);
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  v10 = SRWLock;
  v6 = std::_Hash<std::_Umap_traits<winrt::hstring,std::unordered_set<unsigned __int64>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::unordered_set<unsigned __int64>>>,0>>::_Try_emplace<winrt::hstring const &,>(
         (unsigned __int64 *)SRWLock + 1,
         (__int64)v9,
         (__int64 *)a3);
  v7 = std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::find<void>(
         (_QWORD *)(*(_QWORD *)v6 + 24LL),
         &v11,
         (const unsigned __int8 *)a2);
  if ( *v7 != *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<winrt::hstring,std::unordered_set<unsigned __int64>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::unordered_set<unsigned __int64>>>,0>>::_Try_emplace<winrt::hstring const &,>(
                                       (unsigned __int64 *)SRWLock + 1,
                                       (__int64)v9,
                                       (__int64 *)a3)
                        + 32LL) )
  {
    v8 = (_QWORD *)std::_Hash<std::_Umap_traits<winrt::hstring,std::unordered_set<unsigned __int64>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::unordered_set<unsigned __int64>>>,0>>::_Try_emplace<winrt::hstring const &,>(
                     (unsigned __int64 *)SRWLock + 1,
                     (__int64)v9,
                     (__int64 *)a3);
    std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::erase(
      *v8 + 24LL,
      a2);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
}
