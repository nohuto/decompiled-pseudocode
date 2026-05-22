/*
 * XREFs of ?_Unchecked_erase@?$list@U?$pair@$$CBKV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@@std@@V?$allocator@U?$pair@$$CBKV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@@std@@@2@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBKV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@@std@@PEAX@2@QEAU32@@Z @ 0x18010A51C
 * Callers:
 *     ?erase@?$_Hash@V?$_Umap_traits@KV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@@std@@@2@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x18010A6D0 (-erase@-$_Hash@V-$_Umap_traits@KV-$unordered_map@KUTargetingInfo@Win32kInterop@@U-$hash@K@std@@U.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180105AAC (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@PE.c)
 */

_QWORD *__fastcall std::list<std::pair<unsigned long const,std::unordered_map<unsigned long,Win32kInterop::TargetingInfo>>>::_Unchecked_erase(
        __int64 a1,
        void *a2)
{
  _QWORD *v2; // rbx
  __int64 v4; // rcx

  v2 = *(_QWORD **)a2;
  --*(_QWORD *)(a1 + 8);
  **((_QWORD **)a2 + 1) = v2;
  v2[1] = *((_QWORD *)a2 + 1);
  std::_Deallocate<16,0>(*((void **)a2 + 6), (*((_QWORD *)a2 + 7) - *((_QWORD *)a2 + 6)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)a2 + 6) = 0LL;
  *((_QWORD *)a2 + 7) = 0LL;
  *((_QWORD *)a2 + 8) = 0LL;
  std::_List_node<std::pair<unsigned long const,Win32kInterop::TargetingInfo>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,Win32kInterop::TargetingInfo>,void *>>>(
    v4,
    *((_QWORD ***)a2 + 4));
  std::_Deallocate<16,0>(*((void **)a2 + 4), 0x28uLL);
  std::_Deallocate<16,0>(a2, 0x58uLL);
  return v2;
}
