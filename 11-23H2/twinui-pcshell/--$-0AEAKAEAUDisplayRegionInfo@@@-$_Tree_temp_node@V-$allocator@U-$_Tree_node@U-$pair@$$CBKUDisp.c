/*
 * XREFs of ??$?0AEAKAEAUDisplayRegionInfo@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBKUDisplayRegionInfo@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKUDisplayRegionInfo@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKUDisplayRegionInfo@@@std@@PEAX@1@AEAKAEAUDisplayRegionInfo@@@Z @ 0x18008FB74
 * Callers:
 *     ??$_Emplace@AEAKAEAUDisplayRegionInfo@@@?$_Tree@V?$_Tmap_traits@KUDisplayRegionInfo@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKUDisplayRegionInfo@@@std@@PEAX@std@@_N@1@AEAKAEAUDisplayRegionInfo@@@Z @ 0x18008F518 (--$_Emplace@AEAKAEAUDisplayRegionInfo@@@-$_Tree@V-$_Tmap_traits@KUDisplayRegionInfo@@U-$less@K@s.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned long const,DisplayRegionInfo>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned long const,DisplayRegionInfo>,void *>>>(
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
  v8 = operator new(0x40uLL);
  a1[1] = v8;
  v8[7] = *a4;
  *((_OWORD *)v8 + 2) = *(_OWORD *)a5;
  *((_QWORD *)v8 + 6) = *(_QWORD *)(a5 + 16);
  v8[14] = *(_DWORD *)(a5 + 24);
  *(_QWORD *)a1[1] = a3;
  *(_QWORD *)(a1[1] + 8LL) = a3;
  *(_QWORD *)(a1[1] + 16LL) = a3;
  for ( i = 0LL; i < 2; ++i )
    *(_BYTE *)(i + a1[1] + 24) = 0;
  return a1;
}
