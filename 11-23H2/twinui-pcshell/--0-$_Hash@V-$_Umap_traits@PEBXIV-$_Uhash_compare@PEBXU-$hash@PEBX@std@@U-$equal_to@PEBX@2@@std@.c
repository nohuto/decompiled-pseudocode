/*
 * XREFs of ??0?$_Hash@V?$_Umap_traits@PEBXIV?$_Uhash_compare@PEBXU?$hash@PEBX@std@@U?$equal_to@PEBX@2@@std@@V?$allocator@U?$pair@QEBXI@std@@@2@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@PEBXU?$hash@PEBX@std@@U?$equal_to@PEBX@2@@1@AEBV?$allocator@U?$pair@QEBXI@std@@@1@@Z @ 0x1800C4054
 * Callers:
 *     ??0?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAA@QEAVJSONOutputArchive@1@@Z @ 0x1800C1380 (--0-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAA@QEAVJSONOutputArchive@1@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<void const *,unsigned int,std::_Uhash_compare<void const *,std::hash<void const *>,std::equal_to<void const *>>,std::allocator<std::pair<void const * const,unsigned int>>,0>>::_Hash<std::_Umap_traits<void const *,unsigned int,std::_Uhash_compare<void const *,std::hash<void const *>,std::equal_to<void const *>>,std::allocator<std::pair<void const * const,unsigned int>>,0>>(
        __int64 a1,
        _DWORD *a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  unsigned __int64 v5; // rbp
  _QWORD *v6; // rdi
  _QWORD *v7; // rax
  unsigned __int64 v9; // rcx

  *(_DWORD *)a1 = *a2;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v3 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(32LL);
  *v3 = v3;
  v3[1] = v3;
  *(_QWORD *)(a1 + 8) = v3;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 7LL;
  *(_QWORD *)(a1 + 56) = 8LL;
  *(_DWORD *)a1 = 1065353216;
  v4 = v3;
  v5 = *(__int64 *)(a1 + 32) >> 3;
  if ( v5 >= 0x10 )
  {
    v9 = (unsigned __int64)(*(_QWORD *)(a1 + 32) + 7LL) >> 3;
    if ( v9 )
      memset64(0LL, (unsigned __int64)v3, v9);
  }
  else
  {
    v6 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(128LL);
    if ( v5 )
      std::_Deallocate<16,0>(*(_QWORD *)(a1 + 24), 8 * v5);
    *(_QWORD *)(a1 + 24) = v6;
    v7 = v6 + 16;
    *(_QWORD *)(a1 + 32) = v6 + 16;
    *(_QWORD *)(a1 + 40) = v6 + 16;
    while ( v6 != v7 )
      *v6++ = v4;
  }
  return a1;
}
