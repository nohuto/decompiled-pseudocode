/*
 * XREFs of ??$_Append_range_unchecked@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@U_Iterator_base0@2@@std@@V12@@?$_List_node_insert_op2@V?$allocator@U?$_List_node@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@PEAX@std@@@std@@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x180678764
 * Callers:
 *     ??0?$list@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18067955C (--0-$list@U-$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@win.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x1800C14DC (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_List_node_insert_op2<std::allocator<std::_List_node<winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>,void *>>>::_Append_range_unchecked<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>>>,std::_Iterator_base0>,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>>>,std::_Iterator_base0>>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *v4; // rbx
  size_t size_of; // rax
  _QWORD *v7; // rax
  __int64 v8; // r8
  signed __int64 v9; // rdx
  bool v10; // zf
  signed __int64 v11; // rax
  size_t v12; // rax
  _QWORD *v13; // rcx
  __int64 v14; // r8
  signed __int64 v15; // rdx
  signed __int64 v16; // rax
  _QWORD *v17; // [rsp+28h] [rbp-8h]

  if ( a2 != a3 )
  {
    v4 = a2;
    if ( a1[1] )
      goto LABEL_12;
    size_of = std::_Get_size_of_n<24>(1uLL);
    v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    v17 = v7;
    v8 = v4[2];
    v7[2] = v8;
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 8);
      while ( v9 >= 0 )
      {
        v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 8), v9 + 1, v9);
        v10 = v9 == v11;
        v9 = v11;
        if ( v10 )
          goto LABEL_9;
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v9 + 24), 1u);
LABEL_9:
      v7 = v17;
    }
    a1[3] = v7;
    for ( a1[2] = v7; ; a1[2] = v13 )
    {
      ++a1[1];
      v4 = (_QWORD *)*v4;
LABEL_12:
      if ( v4 == a3 )
        break;
      v12 = std::_Get_size_of_n<24>(1uLL);
      v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
      v14 = v4[2];
      v13[2] = v14;
      if ( v14 )
      {
        v15 = *(_QWORD *)(v14 + 8);
        while ( v15 >= 0 )
        {
          v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 8), v15 + 1, v15);
          v10 = v15 == v16;
          v15 = v16;
          if ( v10 )
            goto LABEL_19;
        }
        _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v15 + 24), 1u);
      }
LABEL_19:
      *(_QWORD *)a1[2] = v13;
      v13[1] = a1[2];
    }
  }
}
