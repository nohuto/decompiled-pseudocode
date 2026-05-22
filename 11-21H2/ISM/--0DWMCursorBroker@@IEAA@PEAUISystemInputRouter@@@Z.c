/*
 * XREFs of ??0DWMCursorBroker@@IEAA@PEAUISystemInputRouter@@@Z @ 0x18003BB9C
 * Callers:
 *     ?Create@DWMCursorBroker@@SAJPEAUISystemInputRouter@@PEAPEAUICursorBroker@@@Z @ 0x180040B94 (-Create@DWMCursorBroker@@SAJPEAUISystemInputRouter@@PEAPEAUICursorBroker@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@@std@@@std@@@std@@@2@@Z @ 0x18003A998 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_18003A998.c)
 *     ??0?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@1@AEBV?$allocator@U?$pair@$$CB_K_K@std@@@1@@Z @ 0x18003B1F0 (--0-$_Hash@V-$_Umap_traits@_K_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@@V-$all.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 */

// Hidden C++ exception states: #wind=5
DWMCursorBroker *__fastcall DWMCursorBroker::DWMCursorBroker(DWMCursorBroker *this, struct ISystemInputRouter *a2)
{
  char *v4; // rbx
  _QWORD *v5; // rax
  char *v7; // [rsp+50h] [rbp+18h] BYREF

  *((_QWORD *)this + 3) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 8) = 1;
  *(_QWORD *)this = &DWMCursorBroker::`vftable'{for `ICursorBroker'};
  *((_QWORD *)this + 1) = &DWMCursorBroker::`vftable'{for `IRemoteCursorBroker'};
  *((_QWORD *)this + 2) = &DWMCursorBroker::`vftable'{for `ISystemContextObserver'};
  *((_QWORD *)this + 3) = &DWMCursorBroker::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 5) = 0LL;
  v4 = (char *)this + 48;
  v7 = (char *)this + 48;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  *v5 = v5;
  v5[1] = v5;
  *((_QWORD *)v4 + 1) = v5;
  *((_QWORD *)v4 + 3) = 0LL;
  *((_QWORD *)v4 + 4) = 0LL;
  *((_QWORD *)v4 + 5) = 0LL;
  *((_QWORD *)v4 + 6) = 7LL;
  *((_QWORD *)v4 + 7) = 8LL;
  *(_DWORD *)v4 = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,std::unordered_map<unsigned long,Win32kInterop::TargetingInfo>>>>>>>::_Assign_grow(
    (__int64)(v4 + 24),
    0x10uLL,
    *((_QWORD *)v4 + 1));
  HIDWORD(v7) = ((unsigned __int64)this + 112) >> 32;
  LODWORD(v7) = 0;
  std::_Hash<std::_Umap_traits<unsigned __int64,unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::_Hash<std::_Umap_traits<unsigned __int64,unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>(
    (__int64)this + 112,
    &v7);
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 56) = a2;
  *(_QWORD *)((char *)this + 460) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  *((_BYTE *)this + 504) = 0;
  memset_0((char *)this + 208, 0, 0xF0uLL);
  return this;
}
