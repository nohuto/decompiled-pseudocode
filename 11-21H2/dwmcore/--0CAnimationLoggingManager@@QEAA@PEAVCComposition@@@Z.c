/*
 * XREFs of ??0CAnimationLoggingManager@@QEAA@PEAVCComposition@@@Z @ 0x180065068
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800BE0A8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@2@@Z @ 0x18003080C (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_18003080C.c)
 *     ??$_Get_size_of_n@$0EI@@std@@YA_K_K@Z @ 0x180065038 (--$_Get_size_of_n@$0EI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800B6F20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

CAnimationLoggingManager *__fastcall CAnimationLoggingManager::CAnimationLoggingManager(
        CAnimationLoggingManager *this,
        struct CComposition *a2)
{
  SIZE_T size_of; // rax
  _QWORD *v4; // rax
  CAnimationLoggingManager *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CAnimationLoggingManager::`vftable';
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  size_of = std::_Get_size_of_n<72>(1uLL);
  v4 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *v4 = v4;
  v4[1] = v4;
  *((_QWORD *)this + 13) = v4;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 7LL;
  *((_QWORD *)this + 19) = 8LL;
  *((_DWORD *)this + 24) = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>>>>>>::_Assign_grow(
    (unsigned __int64 **)this + 15,
    0x10uLL,
    *((_QWORD *)this + 13));
  *((_QWORD *)this + 22) = 0LL;
  result = this;
  *((_QWORD *)this + 23) = 7LL;
  *((_WORD *)this + 80) = 0;
  *((_DWORD *)this + 48) = 0;
  return result;
}
