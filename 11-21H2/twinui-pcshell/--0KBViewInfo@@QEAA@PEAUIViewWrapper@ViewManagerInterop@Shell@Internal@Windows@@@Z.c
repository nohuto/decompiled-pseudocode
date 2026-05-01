/*
 * XREFs of ??0KBViewInfo@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18045A968
 * Callers:
 *     ??$make_shared@UKBViewInfo@@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@std@@YA?AV?$shared_ptr@UKBViewInfo@@@0@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18045A5CC (--$make_shared@UKBViewInfo@@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@std@.c)
 * Callees:
 *     ??4?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18006A230 (--4-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x18010B0F4 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18022C508 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_const_iterator@V-$_List_v_ea_18022C508.c)
 */

// Hidden C++ exception states: #wind=5
KBViewInfo *__fastcall KBViewInfo::KBViewInfo(
        KBViewInfo *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  char *v4; // rbx
  size_t size_of; // rax
  _QWORD *v6; // rax

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_WORD *)this + 16) = 0;
  *((_BYTE *)this + 34) = 1;
  v4 = (char *)this + 40;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  size_of = std::_Get_size_of_n<24>(1uLL);
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *v6 = v6;
  v6[1] = v6;
  *((_QWORD *)v4 + 1) = v6;
  *((_QWORD *)v4 + 3) = 0LL;
  *((_QWORD *)v4 + 4) = 0LL;
  *((_QWORD *)v4 + 5) = 0LL;
  *((_QWORD *)v4 + 6) = 7LL;
  *((_QWORD *)v4 + 7) = 8LL;
  *(_DWORD *)v4 = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<unsigned __int64>>,std::_Iterator_base0>>>::_Assign_grow(
    (__int64)(v4 + 24),
    0x10uLL,
    *((_QWORD *)v4 + 1));
  *((_DWORD *)this + 26) = -1;
  *((_QWORD *)this + 14) = 0LL;
  *(_OWORD *)((char *)this + 120) = 0LL;
  *(_OWORD *)((char *)this + 136) = 0LL;
  *((_DWORD *)this + 38) = 0;
  *(_QWORD *)((char *)this + 156) = 0LL;
  *((_DWORD *)this + 41) = 0;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::operator=(
    (__int64 *)this,
    (__int64)a2);
  *((_QWORD *)this + 26) = GetTickCount64();
  return this;
}
