/*
 * XREFs of ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEB_K@1@V?$tuple@AEAU?$com_ptr@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAUWindowTabDataModel@Shell@UI@Internal@Windows@2@AEAUevent_token@2@AEAU82@@1@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEB_K@1@$$QEAV?$tuple@AEAU?$com_ptr@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAUWindowTabDataModel@Shell@UI@Internal@Windows@2@AEAUevent_token@2@AEAU82@@1@@Z @ 0x180034CD0
 * Callers:
 *     ??$_Try_emplace@AEB_KAEAU?$com_ptr@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAUWindowTabDataModel@Shell@UI@Internal@Windows@2@AEAUevent_token@2@AEAU82@@?$_Hash@V?$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@_N@1@AEB_KAEAU?$com_ptr@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAUWindowTabDataModel@Shell@UI@Internal@Windows@4@AEAUevent_token@4@3@Z @ 0x180034B74 (--$_Try_emplace@AEB_KAEAU-$com_ptr@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@.c)
 * Callees:
 *     ??0WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBU?$com_ptr@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@@5@AEBUWindowTabDataModel@2UI@345@Uevent_token@5@2@Z @ 0x1800354C8 (--0WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBU-$com_ptr@UTabProxyWindowFac.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _QWORD **a4,
        __int64 a5)
{
  _QWORD *v7; // r11
  __int64 *v8; // rax
  _QWORD *v9; // r10
  __int64 v10; // r8
  __int64 v11; // rdx

  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  v7 = operator new(0xF0uLL);
  a1[1] = v7;
  v8 = *(__int64 **)a5;
  v9 = *(_QWORD **)(a5 + 8);
  v10 = *(_QWORD *)(a5 + 16);
  v11 = *(_QWORD *)(a5 + 24);
  v7[2] = **a4;
  winrt::Windows::Internal::Shell::implementation::WindowData::WindowData((_DWORD)v7 + 24, v11, v10, *v9, *v8);
  return a1;
}
