/*
 * XREFs of ??$?0AEAKAEAUAugmentedInputCacheState@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@PEAX@1@AEAKAEAUAugmentedInputCacheState@@@Z @ 0x1800D3BAC
 * Callers:
 *     ??$_Emplace@AEAKAEAUAugmentedInputCacheState@@@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@PEAX@std@@_N@1@AEAKAEAUAugmentedInputCacheState@@@Z @ 0x1800D3CD0 (--$_Emplace@AEAKAEAUAugmentedInputCacheState@@@-$_Tree@V-$_Tmap_traits@KUAugmentedInputCacheStat.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned long const,AugmentedInputCacheState>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned long const,AugmentedInputCacheState>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5)
{
  _DWORD *v8; // rax
  __int64 i; // rcx

  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  v8 = operator new(0x30uLL);
  a1[1] = v8;
  v8[7] = *a4;
  *((_QWORD *)v8 + 4) = *(_QWORD *)a5;
  v8[10] = *(_DWORD *)(a5 + 8);
  *(_QWORD *)a1[1] = a3;
  *(_QWORD *)(a1[1] + 8LL) = a3;
  *(_QWORD *)(a1[1] + 16LL) = a3;
  for ( i = 0LL; i < 2; ++i )
    *(_BYTE *)(i + a1[1] + 24) = 0;
  return a1;
}
