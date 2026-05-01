/*
 * XREFs of ??0?$list@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@AEBV01@@Z @ 0x180641F10
 * Callers:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7936b82dc4b721215efe4b8ef74a7a70__&___lambda_7936b82dc4b721215efe4b8ef74a7a70__&_ @ 0x180641264 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7936b82dc4b72.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_88c52b909d46191f2a7b9cf853665f36__&___lambda_88c52b909d46191f2a7b9cf853665f36__&_ @ 0x180641368 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_88c52b909d461.c)
 * Callees:
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x180093A9C (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Append_range_unchecked@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@U_Iterator_base0@2@@std@@V12@@?$_List_node_insert_op2@V?$allocator@U?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@@std@@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x1806415AC (--$_Append_range_unchecked@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List__ea_1806415AC.c)
 *     ??1?$_List_node_insert_op2@V?$allocator@U?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180642754 (--1-$_List_node_insert_op2@V-$allocator@U-$_List_node@V-$basic_string@GU-$char_traits@G@std@@V-$.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::list<std::wstring>::list<std::wstring>(_QWORD *a1, _QWORD ***a2)
{
  _QWORD *v3; // r8
  _QWORD *v4; // rdx
  size_t size_of; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v12; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+38h] [rbp-20h]
  _QWORD *v14; // [rsp+40h] [rbp-18h]
  __int64 v15; // [rsp+48h] [rbp-10h]

  *a1 = 0LL;
  a1[1] = 0LL;
  v3 = *a2;
  v4 = **a2;
  v12 = a1;
  v13 = 0LL;
  std::_List_node_insert_op2<std::allocator<std::_List_node<std::wstring,void *>>>::_Append_range_unchecked<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::wstring>>,std::_Iterator_base0>,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::wstring>>,std::_Iterator_base0>>(
    &v12,
    v4,
    v3);
  size_of = std::_Get_size_of_n<48>(1uLL);
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v7 = v6;
  v8 = v13;
  v13 = 0LL;
  if ( v8 )
  {
    v9 = v15;
    *v6 = v15;
    v10 = v14;
    v7[1] = v14;
    *(_QWORD *)(v9 + 8) = v7;
    *v10 = v7;
  }
  else
  {
    *v6 = v6;
    v6[1] = v6;
  }
  a1[1] = v8;
  *a1 = v7;
  std::_List_node_insert_op2<std::allocator<std::_List_node<std::wstring,void *>>>::~_List_node_insert_op2<std::allocator<std::_List_node<std::wstring,void *>>>(&v12);
  return a1;
}
