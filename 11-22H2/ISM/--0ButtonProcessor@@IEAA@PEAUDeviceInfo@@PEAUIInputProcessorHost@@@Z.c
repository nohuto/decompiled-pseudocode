/*
 * XREFs of ??0ButtonProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x1801E57B4
 * Callers:
 *     ?Create@ButtonProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1801E5C00 (-Create@ButtonProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001EAA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x180039C40 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@2@@Z @ 0x1800E199C (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_1800E199C.c)
 */

// Hidden C++ exception states: #wind=3
ButtonProcessor *__fastcall ButtonProcessor::ButtonProcessor(
        ButtonProcessor *this,
        struct DeviceInfo *a2,
        struct IInputProcessorHost *a3)
{
  _DWORD *v4; // rbx
  size_t size_of; // rax
  _QWORD *v6; // rax

  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 4) = 1;
  *(_QWORD *)this = &ButtonProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &ButtonProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 3) = a3;
  *((_QWORD *)this + 4) = a2;
  v4 = (_DWORD *)((char *)this + 40);
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  size_of = std::_Get_size_of_n<40>(1uLL);
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *v6 = v6;
  v6[1] = v6;
  *((_QWORD *)this + 6) = v6;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 7LL;
  *((_QWORD *)this + 12) = 8LL;
  *v4 = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>>>>>::_Assign_grow(
    (__int64)this + 64,
    0x10uLL,
    *((_QWORD *)this + 6));
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  memset_0((char *)this + 136, 0, 0x100uLL);
  return this;
}
