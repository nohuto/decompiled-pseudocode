/*
 * XREFs of ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@std@@@std@@@2@@Z @ 0x180013390
 * Callers:
 *     ??0AudioStateMonitorManager@@QEAA@XZ @ 0x180024CCC (--0AudioStateMonitorManager@@QEAA@XZ.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x180041F98 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@_KV-$unique_ptr@UAudioStateMonitor@@U-$default_delete@UA.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000AC20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180015DE0 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180016E18 (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x18001ED60 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

unsigned __int64 *__fastcall std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>>>>>>::_Assign_grow(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  void *v3; // rdi
  unsigned __int64 v5; // r8
  unsigned __int64 v7; // rbp
  __int64 v8; // r14
  unsigned __int64 *v9; // rdi
  void *v10; // rcx
  __int64 v11; // rdx
  unsigned __int64 *result; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // [rsp+40h] [rbp+8h] BYREF
  void *v15; // [rsp+48h] [rbp+10h] BYREF

  v3 = *(void **)a1;
  v5 = *(_QWORD *)(a1 + 8);
  v7 = (__int64)(v5 - *(_QWORD *)a1) >> 3;
  if ( v7 >= a2 )
  {
    result = 0LL;
    v13 = (unsigned __int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1 + 7LL) >> 3;
    if ( (unsigned __int64)v3 > v5 )
      v13 = 0LL;
    if ( v13 )
    {
      result = (unsigned __int64 *)a3;
      memset64(v3, a3, v13);
    }
  }
  else
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
    v8 = a2;
    v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(8 * a2);
    if ( v7 )
    {
      v10 = *(void **)a1;
      v11 = 8 * v7;
      v14 = 8 * v7;
      v15 = v10;
      if ( 8 * v7 >= 0x1000 )
      {
        std::_Adjust_manually_vector_aligned(&v15, &v14);
        v11 = v14;
        v10 = v15;
      }
      operator delete(v10, v11);
    }
    result = &v9[v8];
    *(_QWORD *)a1 = v9;
    *(_QWORD *)(a1 + 8) = &v9[v8];
    for ( *(_QWORD *)(a1 + 16) = &v9[v8]; v9 != result; ++v9 )
      *v9 = a3;
  }
  return result;
}
