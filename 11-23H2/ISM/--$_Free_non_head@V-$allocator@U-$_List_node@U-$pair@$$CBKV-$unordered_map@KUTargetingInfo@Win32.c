/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800F712C
 * Callers:
 *     ??1?$list@U?$pair@$$CBKV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@@std@@V?$allocator@U?$pair@$$CBKV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1800F7FFC (--1-$list@U-$pair@$$CBKV-$unordered_map@KUTargetingInfo@Win32kInterop@@U-$hash@K@std@@U-$equal_t.c)
 *     ??1?$unordered_map@KV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1800F81F0 (--1-$unordered_map@KV-$unordered_map@KUTargetingInfo@Win32kInterop@@U-$hash@K@std@@U-$equal_to@K.c)
 *     ??1Win32kInterop@@UEAA@XZ @ 0x1800F82B8 (--1Win32kInterop@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800F702C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@PE.c)
 */

void __fastcall std::_List_node<std::pair<unsigned long const,std::unordered_map<unsigned long,Win32kInterop::TargetingInfo>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,std::unordered_map<unsigned long,Win32kInterop::TargetingInfo>>,void *>>>(
        __int64 a1,
        __int64 a2)
{
  void **v2; // rdi
  void **v3; // rbx
  __int64 v4; // rcx

  **(_QWORD **)(a2 + 8) = 0LL;
  v2 = *(void ***)a2;
  if ( *(_QWORD *)a2 )
  {
    do
    {
      v3 = (void **)*v2;
      std::_Deallocate<16,0>(v2[6], ((_BYTE *)v2[7] - (_BYTE *)v2[6]) & 0xFFFFFFFFFFFFFFF8uLL);
      v2[6] = 0LL;
      v2[7] = 0LL;
      v2[8] = 0LL;
      std::_List_node<std::pair<unsigned long const,Win32kInterop::TargetingInfo>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,Win32kInterop::TargetingInfo>,void *>>>(
        v4,
        (_QWORD **)v2[4]);
      std::_Deallocate<16,0>(v2[4], 0x28uLL);
      std::_Deallocate<16,0>(v2, 0x58uLL);
      v2 = v3;
    }
    while ( v3 );
  }
}
