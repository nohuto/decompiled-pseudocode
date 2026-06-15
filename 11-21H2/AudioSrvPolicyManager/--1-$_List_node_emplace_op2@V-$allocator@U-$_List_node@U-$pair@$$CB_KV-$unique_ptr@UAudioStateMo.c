/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800397B8
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_wistd::unique_ptr_AudioStateMonitor_wistd::default_delete_AudioStateMonitor____std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__wistd::unique_ptr_AudioStateMonitor_wistd::default_delete_AudioStateMonitor________0___::emplace_unsigned___int64_&_AudioStateMonitor____::_1_::dtor$0 @ 0x180046675 (_std--_Hash_std--_Umap_traits_unsigned___int64_wistd--unique_ptr_AudioStateMonitor__ea_180046675.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1AudioStateMonitor@@QEAA@XZ @ 0x180014EF4 (--1AudioStateMonitor@@QEAA@XZ.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned __int64 const,wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>>,void *>>>(
        __int64 a1)
{
  __int64 v1; // rax
  AudioStateMonitor *v3; // rbx
  char *v4; // rcx

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
  {
    v3 = *(AudioStateMonitor **)(v1 + 24);
    *(_QWORD *)(v1 + 24) = 0LL;
    if ( v3 )
    {
      AudioStateMonitor::~AudioStateMonitor(v3);
      operator delete(v3);
    }
  }
  v4 = *(char **)(a1 + 8);
  if ( v4 )
    std::_Deallocate<16,0>(v4, 0x20uLL);
}
