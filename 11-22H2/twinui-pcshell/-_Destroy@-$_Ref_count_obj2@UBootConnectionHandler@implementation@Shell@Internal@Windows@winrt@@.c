/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@UBootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@@std@@EEAAXXZ @ 0x18071D820
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18070A768 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBIV-$shared_ptr@UHostProcessData@impleme.c)
 */

void __fastcall std::_Ref_count_obj2<winrt::Windows::Internal::Shell::implementation::BootConnectionHandler>::_Destroy(
        __int64 a1)
{
  __int64 v2; // rcx

  std::_Deallocate<16,0>(*(void **)(a1 + 48), (*(_QWORD *)(a1 + 56) - *(_QWORD *)(a1 + 48)) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  std::_List_node<std::pair<unsigned int const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::HostProcessData>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::HostProcessData>>,void *>>>(
    v2,
    *(_QWORD ***)(a1 + 32));
  std::_Deallocate<16,0>(*(void **)(a1 + 32), 0x28uLL);
}
