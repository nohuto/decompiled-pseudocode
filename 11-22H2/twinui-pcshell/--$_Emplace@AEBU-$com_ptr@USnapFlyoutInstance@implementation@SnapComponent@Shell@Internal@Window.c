/*
 * XREFs of ??$_Emplace@AEBU?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@?$list@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@QEAAPEAU?$_List_node@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@PEAX@1@QEAU21@AEBU?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@Z @ 0x180678928
 * Callers:
 *     SnapFlyoutHost::HideAsync$_ResumeCoro$1 @ 0x1802270C0 (SnapFlyoutHost--HideAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??$?0AEBU?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@PEAX@std@@@1@AEBU?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@Z @ 0x180677F9C (--$-0AEBU-$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1806797F4 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$com_ptr@USnapFlyoutInstance@implementa.c)
 */

_QWORD *__fastcall std::list<winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>>::_Emplace<winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance> const &>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  _QWORD *v5; // rcx
  _QWORD *v6; // rbx
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  _QWORD *v9; // [rsp+28h] [rbp-10h]

  if ( *(_QWORD *)(a1 + 8) == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("list too long");
  std::_List_node_emplace_op2<std::allocator<std::_List_node<winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>,void *>>>(
    &v8,
    a1,
    a3);
  ++*(_QWORD *)(a1 + 8);
  v5 = *(_QWORD **)(a2 + 8);
  *v9 = a2;
  v9[1] = v5;
  v6 = v9;
  v9 = 0LL;
  *(_QWORD *)(a2 + 8) = v6;
  *v5 = v6;
  std::_List_node_emplace_op2<std::allocator<std::_List_node<winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>,void *>>>(&v8);
  return v6;
}
