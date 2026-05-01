/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180035460
 * Callers:
 *     ??$_Try_emplace@AEB_KAEAU?$com_ptr@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAUWindowTabDataModel@Shell@UI@Internal@Windows@2@AEAUevent_token@2@AEAU82@@?$_Hash@V?$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@_N@1@AEB_KAEAU?$com_ptr@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAUWindowTabDataModel@Shell@UI@Internal@Windows@4@AEAUevent_token@4@3@Z @ 0x180034B74 (--$_Try_emplace@AEB_KAEAU-$com_ptr@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@.c)
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_winrt::Windows::Internal::Shell::implementation::WindowData_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__winrt::Windows::Internal::Shell::implementation::WindowData____0___::_Try_emplace_unsigned___int64_const_&_winrt::com_ptr_winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory__&_winrt::Windows::Internal::UI::Shell::WindowTabDataModel_&_winrt::event_token_&_winrt::event_token_&__::_1_::dtor$0 @ 0x1802BE63D (_std--_Hash_std--_Umap_traits_unsigned___int64_winrt--Windows--Internal--Shell--implementation--.c)
 * Callees:
 *     ??1WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1800356C0 (--1WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    winrt::Windows::Internal::Shell::implementation::WindowData::~WindowData((winrt::Windows::Internal::Shell::implementation::WindowData *)(v2 + 24));
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
    std::_Deallocate<16,0>(v3, 240LL);
}
