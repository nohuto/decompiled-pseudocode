/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18070A768
 * Callers:
 *     ?clear@?$_Hash@V?$_Umap_traits@W4CloudPCState@Shell@Internal@Windows@winrt@@V?$shared_ptr@UConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@@std@@V?$_Uhash_compare@W4CloudPCState@Shell@Internal@Windows@winrt@@U?$hash@W4CloudPCState@Shell@Internal@Windows@winrt@@@std@@U?$equal_to@W4CloudPCState@Shell@Internal@Windows@winrt@@@7@@7@V?$allocator@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@V?$shared_ptr@UConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@7@$0A@@std@@@std@@QEAAXXZ @ 0x1801BA44C (-clear@-$_Hash@V-$_Umap_traits@W4CloudPCState@Shell@Internal@Windows@winrt@@V-$shared_ptr@UConne.c)
 *     ??1?$list@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@V?$shared_ptr@UConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@V?$allocator@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@V?$shared_ptr@UConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18070E754 (--1-$list@U-$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@V-$shared_ptr@UConnectionStat.c)
 *     ??1?$unordered_map@IV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@U?$hash@I@2@U?$equal_to@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18070EA28 (--1-$unordered_map@IV-$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@.c)
 *     ??1RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18070EC00 (--1RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??1ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18071D394 (--1ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??1SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18071D4F4 (--1SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?_Destroy@?$_Ref_count_obj2@UBootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@@std@@EEAAXXZ @ 0x18071D820 (-_Destroy@-$_Ref_count_obj2@UBootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_List_node<std::pair<unsigned int const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::HostProcessData>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::HostProcessData>>,void *>>>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rbx
  std::_Ref_count_base *v3; // rcx
  _QWORD *v4; // rdi

  *a2[1] = 0LL;
  v2 = *a2;
  if ( *a2 )
  {
    do
    {
      v3 = (std::_Ref_count_base *)v2[4];
      v4 = (_QWORD *)*v2;
      if ( v3 )
        std::_Ref_count_base::_Decref(v3);
      std::_Deallocate<16,0>(v2, 0x28uLL);
      v2 = v4;
    }
    while ( v4 );
  }
}
