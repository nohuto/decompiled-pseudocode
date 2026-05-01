/*
 * XREFs of ??0?$list@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@AEBV01@@Z @ 0x1805840DC
 * Callers:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ad47fb4abf013fdcb1f378688d8640ff__&___lambda_ad47fb4abf013fdcb1f378688d8640ff__&_ @ 0x180582A00 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ad47fb4abf013.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fd4539b3655cc22a40f9c1e0d2159299__&___lambda_fd4539b3655cc22a40f9c1e0d2159299__&_ @ 0x180582B04 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_fd4539b3655cc.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x1801093CC (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 *     ??$_Append_range_unchecked@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@U_Iterator_base0@2@@std@@V12@@?$_List_node_insert_op2@V?$allocator@U?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@@std@@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x180582D48 (--$_Append_range_unchecked@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_simple_types@.c)
 *     ??1?$_List_node_insert_op2@V?$allocator@U?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180584828 (--1-$_List_node_insert_op2@V-$allocator@U-$_List_node@V-$basic_string@GU-$char_traits@G@std@@V-$.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::list<std::wstring>::list<std::wstring>(_QWORD *a1, _QWORD **a2)
{
  _QWORD *v3; // r8
  size_t size_of; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+38h] [rbp-20h]
  _QWORD *v13; // [rsp+40h] [rbp-18h]
  __int64 v14; // [rsp+48h] [rbp-10h]

  *a1 = 0LL;
  a1[1] = 0LL;
  v3 = *a2;
  v11 = a1;
  v12 = 0LL;
  std::_List_node_insert_op2<std::allocator<std::_List_node<std::wstring,void *>>>::_Append_range_unchecked<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::wstring>>,std::_Iterator_base0>,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::wstring>>,std::_Iterator_base0>>(
    &v11,
    (_QWORD *)*v3,
    v3);
  size_of = std::_Get_size_of_n<48>(1uLL);
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v6 = v5;
  v7 = v12;
  v12 = 0LL;
  if ( v7 )
  {
    v8 = v14;
    *v5 = v14;
    v9 = v13;
    v6[1] = v13;
    *(_QWORD *)(v8 + 8) = v6;
    *v9 = v6;
  }
  else
  {
    *v5 = v5;
    v5[1] = v5;
  }
  a1[1] = v7;
  *a1 = v6;
  std::_List_node_insert_op2<std::allocator<std::_List_node<std::wstring,void *>>>::~_List_node_insert_op2<std::allocator<std::_List_node<std::wstring,void *>>>(&v11);
  return a1;
}
