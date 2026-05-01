/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1801BDAAC
 * Callers:
 *     ?RecoverRemoteSessionsData@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x18008CE7C (-RecoverRemoteSessionsData@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@w.c)
 *     ??1?$list@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18070E7AC (--1-$list@U-$pair@$$CBUhstring@winrt@@V-$unordered_set@IU-$hash@I@std@@U-$equal_to@I@2@V-$alloca.c)
 *     ??1?$unordered_map@Uhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@U?$hash@Uhstring@winrt@@@4@U?$equal_to@Uhstring@winrt@@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@std@@@4@@std@@QEAA@XZ @ 0x18070EAC8 (--1-$unordered_map@Uhstring@winrt@@V-$unordered_set@IU-$hash@I@std@@U-$equal_to@I@2@V-$allocator.c)
 *     ??1RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18070EC00 (--1RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x180728AB4 (-clear@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@V-$unordered_set@IU-$hash@I@std@@U-$equal_to@I@2@.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18022058C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBW4CloudPCState@Shell@Internal@Windows@w.c)
 */

void __fastcall std::_List_node<std::pair<winrt::hstring const,std::unordered_set<unsigned int>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<winrt::hstring const,std::unordered_set<unsigned int>>,void *>>>(
        __int64 a1,
        __int64 a2)
{
  void *v2; // rsi
  void *v3; // rdi
  __int64 v4; // rcx

  **(_QWORD **)(a2 + 8) = 0LL;
  v2 = *(void **)a2;
  if ( *(_QWORD *)a2 )
  {
    do
    {
      v3 = *(void **)v2;
      std::_Deallocate<16,0>(*((void **)v2 + 6), (*((_QWORD *)v2 + 7) - *((_QWORD *)v2 + 6)) & 0xFFFFFFFFFFFFFFF8uLL);
      *((_QWORD *)v2 + 6) = 0LL;
      *((_QWORD *)v2 + 7) = 0LL;
      *((_QWORD *)v2 + 8) = 0LL;
      std::_List_node<std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,unsigned int>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,unsigned int>,void *>>>(
        v4,
        *((_QWORD *)v2 + 4));
      std::_Deallocate<16,0>(*((void **)v2 + 4), 0x18uLL);
      winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)v2 + 2);
      std::_Deallocate<16,0>(v2, 0x58uLL);
      v2 = v3;
    }
    while ( v3 );
  }
}
