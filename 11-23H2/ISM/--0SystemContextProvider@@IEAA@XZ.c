/*
 * XREFs of ??0SystemContextProvider@@IEAA@XZ @ 0x18003DD84
 * Callers:
 *     ??0InputConfigContextProvider@@AEAA@XZ @ 0x18003A498 (--0InputConfigContextProvider@@AEAA@XZ.c)
 *     ?Create@KernelContextProvider@@CAJPEAPEAV1@@Z @ 0x18003B6FC (-Create@KernelContextProvider@@CAJPEAPEAV1@@Z.c)
 *     wil::init_once_nothrow__lambda_ca82685424ac054990721f288eeb0943___ @ 0x1801BBB9C (wil--init_once_nothrow__lambda_ca82685424ac054990721f288eeb0943___.c)
 *     ?Create@DisplayOcclusionContextProvider@@CAJPEAPEAV1@@Z @ 0x1801BCBFC (-Create@DisplayOcclusionContextProvider@@CAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001DBCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x18003E074 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18003E2B8 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_s.c)
 */

// Hidden C++ exception states: #wind=3
SystemContextProvider *__fastcall SystemContextProvider::SystemContextProvider(SystemContextProvider *this)
{
  _DWORD *v2; // rbx
  size_t size_of; // rax
  _QWORD *v4; // rax

  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 4) = 1;
  *(_QWORD *)this = &SystemContextProvider::`vftable'{for `ISystemContextProvider'};
  *((_QWORD *)this + 1) = &SystemContextProvider::`vftable'{for `RefCountedObject'};
  v2 = (_DWORD *)((char *)this + 24);
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  size_of = std::_Get_size_of_n<24>(1LL);
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *v4 = v4;
  v4[1] = v4;
  *((_QWORD *)this + 4) = v4;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 7LL;
  *((_QWORD *)this + 10) = 8LL;
  *v2 = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<ISystemContextObserver *>>,std::_Iterator_base0>>>::_Assign_grow(
    (char *)this + 48,
    16LL,
    *((_QWORD *)this + 4));
  return this;
}
