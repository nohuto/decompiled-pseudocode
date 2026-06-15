/*
 * XREFs of ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18000DB90
 * Callers:
 *     _dynamic_initializer_for__TsSessionList__ @ 0x180001DE0 (_dynamic_initializer_for__TsSessionList__.c)
 *     ??0CDuckingManager@@QEAA@XZ @ 0x180008590 (--0CDuckingManager@@QEAA@XZ.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x180013158 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@.c)
 *     ??0AudioStateMonitorManager@@QEAA@XZ @ 0x1800147C0 (--0AudioStateMonitorManager@@QEAA@XZ.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@PEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@IEAAXXZ @ 0x18001DA90 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@PEAXV-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@.c)
 *     ??0CProcess@@QEAA@XZ @ 0x18001E904 (--0CProcess@@QEAA@XZ.c)
 *     ??0TSSession@@AEAA@XZ @ 0x18002AF1C (--0TSSession@@AEAA@XZ.c)
 *     ?Create@TSSession@@SAJKAEAV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@Z @ 0x18002BA9C (-Create@TSSession@@SAJKAEAV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@std@@@Z.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x18003122C (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@4@$0A@@std@@@std@@IEAAXXZ @ 0x180039EFC (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@_KV-$unique_ptr@UAudioStateMonitor@@U-$default_delete@UAu.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800081EC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18000E460 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

unsigned __int64 *__fastcall std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,std::unique_ptr<TSSession>>>>>>>::_Assign_grow(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v6; // rbp
  __int64 v7; // r14
  unsigned __int64 *v8; // rdi
  unsigned __int64 *result; // rax
  unsigned __int64 v10; // rcx

  v3 = *(_QWORD *)(a1 + 8);
  v6 = (__int64)(v3 - *(_QWORD *)a1) >> 3;
  if ( v6 >= a2 )
  {
    result = 0LL;
    v10 = (v3 - *(_QWORD *)a1 + 7) >> 3;
    if ( *(_QWORD *)a1 > v3 )
      v10 = 0LL;
    if ( v10 )
    {
      result = (unsigned __int64 *)a3;
      memset64(*(void **)a1, a3, v10);
    }
  }
  else
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
    v7 = a2;
    v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(8 * a2);
    if ( v6 )
      std::_Deallocate<16,0>(*(char **)a1, 8 * v6);
    result = &v8[v7];
    *(_QWORD *)a1 = v8;
    *(_QWORD *)(a1 + 8) = &v8[v7];
    *(_QWORD *)(a1 + 16) = &v8[v7];
    while ( v8 != result )
      *v8++ = a3;
  }
  return result;
}
