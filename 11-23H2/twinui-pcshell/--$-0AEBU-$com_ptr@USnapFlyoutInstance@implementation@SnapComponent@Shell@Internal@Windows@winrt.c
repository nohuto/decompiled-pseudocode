/*
 * XREFs of ??$?0AEBU?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@PEAX@std@@@1@AEBU?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@Z @ 0x180677F9C
 * Callers:
 *     ??$_Emplace@AEBU?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@?$list@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@QEAAPEAU?$_List_node@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@PEAX@1@QEAU21@AEBU?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@Z @ 0x180678928 (--$_Emplace@AEBU-$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Window.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x1800C14DC (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3)
{
  size_t size_of; // rax
  _QWORD *v6; // rax
  __int64 v7; // rdx
  signed __int64 v8; // rax
  signed __int64 v9; // rtt

  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  size_of = std::_Get_size_of_n<24>(1uLL);
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  a1[1] = v6;
  v7 = *a3;
  v6[2] = *a3;
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 8);
    while ( v8 >= 0 )
    {
      v9 = v8;
      v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 8), v8 + 1, v8);
      if ( v9 == v8 )
        return a1;
    }
    _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v8 + 24), 1u);
  }
  return a1;
}
