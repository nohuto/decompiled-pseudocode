/*
 * XREFs of ??$?0AEBU?$pair@$$CBUhstring@winrt@@N@std@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@1@AEBU?$pair@$$CBUhstring@winrt@@N@1@@Z @ 0x1800F8994
 * Callers:
 *     ??$_Emplace_hint@AEBU?$pair@$$CBUhstring@winrt@@N@std@@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@1@QEAU21@AEBU?$pair@$$CBUhstring@winrt@@N@1@@Z @ 0x1800F8BE4 (--$_Emplace_hint@AEBU-$pair@$$CBUhstring@winrt@@N@std@@@-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@.c)
 * Callees:
 *     ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z @ 0x180041E0C (-create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z.c)
 *     ??0?$_Tree_temp_node_alloc@V?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@@1@@Z @ 0x1800F94B4 (--0-$_Tree_temp_node_alloc@V-$allocator@U-$_Tree_node@U-$pair@$$CBUhstring@winrt@@N@std@@PEAX@st.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<winrt::hstring const,double>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<winrt::hstring const,double>,void *>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v7; // rdi
  struct winrt::impl::hstring_header *hstring_on_heap; // r9
  __int64 i; // rcx

  std::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<winrt::hstring const,double>,void *>>>::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<winrt::hstring const,double>,void *>>>();
  v7 = *(_QWORD *)(a1 + 8);
  hstring_on_heap = *(struct winrt::impl::hstring_header **)a4;
  if ( *(_QWORD *)a4 )
  {
    if ( (*(_BYTE *)hstring_on_heap & 1) != 0 )
      hstring_on_heap = winrt::impl::create_hstring_on_heap(
                          *((winrt::impl **)hstring_on_heap + 2),
                          (winrt::impl *)*((unsigned int *)hstring_on_heap + 1));
    else
      _InterlockedExchangeAdd((volatile signed __int32 *)hstring_on_heap + 6, 1u);
  }
  *(_QWORD *)(v7 + 32) = hstring_on_heap;
  *(_QWORD *)(v7 + 40) = *(_QWORD *)(a4 + 8);
  **(_QWORD **)(a1 + 8) = a3;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = a3;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) = a3;
  for ( i = 0LL; i < 2; ++i )
    *(_BYTE *)(i + *(_QWORD *)(a1 + 8) + 24) = 0;
  return a1;
}
