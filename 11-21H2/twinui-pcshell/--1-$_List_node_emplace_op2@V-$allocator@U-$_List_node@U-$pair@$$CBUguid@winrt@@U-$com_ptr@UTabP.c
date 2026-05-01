/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18001C0DC
 * Callers:
 *     ??$emplace@Uguid@winrt@@AEAU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@?$_Hash@V?$_Umap_traits@Uguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@@std@@@std@@@std@@_N@1@$$QEAUguid@winrt@@AEAU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@4@@Z @ 0x18001BF8C (--$emplace@Uguid@winrt@@AEAU-$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winr.c)
 *     _std::_Hash_std::_Umap_traits_winrt::guid_winrt::com_ptr_winrt::Windows::Internal::Shell::implementation::TabProxyWindow__std::_Uhash_compare_winrt::guid_std::hash_winrt::guid__std::equal_to_winrt::guid____std::allocator_std::pair_winrt::guid_const__winrt::com_ptr_winrt::Windows::Internal::Shell::implementation::TabProxyWindow______0___::emplace_winrt::guid_winrt::com_ptr_winrt::Windows::Internal::Shell::implementation::TabProxyWindow__&__::_1_::dtor$0 @ 0x18021449F (_std--_Hash_std--_Umap_traits_winrt--guid_winrt--com_ptr_winrt--Windows--Internal--Shell--implem.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18001B0D0 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<winrt::guid const,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<winrt::guid const,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( *(_QWORD *)(v2 + 32) )
    {
      result = winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref((__int64 *)(v2 + 32));
      v2 = *(_QWORD *)(a1 + 8);
    }
    if ( v2 )
      return std::_Deallocate<16,0>(v2, 40LL);
  }
  return result;
}
