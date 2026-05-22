/*
 * XREFs of ??0MPCHeadUpdateListener@@QEAA@XZ @ 0x1800E0F98
 * Callers:
 *     std::call_once__lambda_a860493e5708769190ef41fba30dc41a___ @ 0x1800E0E34 (std--call_once__lambda_a860493e5708769190ef41fba30dc41a___.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001EAA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@2@@Z @ 0x1800E199C (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_1800E199C.c)
 */

// Hidden C++ exception states: #wind=2
MPCHeadUpdateListener *__fastcall MPCHeadUpdateListener::MPCHeadUpdateListener(MPCHeadUpdateListener *this)
{
  char *v2; // rbx
  _QWORD *v3; // rax

  *(_QWORD *)this = 1LL;
  v2 = (char *)this + 8;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  *v3 = v3;
  v3[1] = v3;
  *((_QWORD *)v2 + 1) = v3;
  *((_QWORD *)v2 + 3) = 0LL;
  *((_QWORD *)v2 + 4) = 0LL;
  *((_QWORD *)v2 + 5) = 0LL;
  *((_QWORD *)v2 + 6) = 7LL;
  *((_QWORD *)v2 + 7) = 8LL;
  *(_DWORD *)v2 = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>>>>>::_Assign_grow(
    v2 + 24,
    16LL,
    *((_QWORD *)v2 + 1));
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this + 4, 0, 0);
  *((_WORD *)this + 100) = 0;
  *((_BYTE *)this + 202) = 0;
  *((_DWORD *)this + 51) = 0;
  return this;
}
