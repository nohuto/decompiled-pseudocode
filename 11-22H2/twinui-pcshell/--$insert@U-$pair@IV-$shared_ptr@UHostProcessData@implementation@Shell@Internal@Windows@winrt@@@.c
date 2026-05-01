/*
 * XREFs of ??$insert@U?$pair@IV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@$0A@@?$unordered_map@IV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@U?$hash@I@2@U?$equal_to@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@2@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@IV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@1@@Z @ 0x18072778C
 * Callers:
 *     ?SaveProcessData@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAAXV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x180728148 (-SaveProcessData@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEA.c)
 * Callees:
 *     ??$emplace@U?$pair@IV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@?$_Hash@V?$_Umap_traits@IV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@IV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@1@@Z @ 0x180727420 (--$emplace@U-$pair@IV-$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@.c)
 */

__int64 __fastcall std::unordered_map<unsigned int,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::HostProcessData>>::insert<std::pair<unsigned int,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::HostProcessData>>,0>(
        _QWORD *a1,
        __int64 a2,
        unsigned __int8 *a3)
{
  std::_Hash<std::_Umap_traits<unsigned int,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::HostProcessData>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::HostProcessData>>>,0>>::emplace<std::pair<unsigned int,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::HostProcessData>>>(
    a1,
    a2,
    a3);
  return a2;
}
