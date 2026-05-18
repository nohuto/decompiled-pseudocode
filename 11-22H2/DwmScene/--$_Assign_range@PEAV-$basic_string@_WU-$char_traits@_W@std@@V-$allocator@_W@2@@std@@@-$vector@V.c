/*
 * XREFs of ??$_Assign_range@PEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@AEAAXPEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@0Uforward_iterator_tag@1@@Z @ 0x18005872C
 * Callers:
 *     ?CloneInternal@Camera@Engine@Spectre@@MEBAXV?$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBI@Z @ 0x18005AED0 (-CloneInternal@Camera@Engine@Spectre@@MEBAXV-$shared_ptr@VComponent@Engine@Spectre@@@std@@AEBI@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@YAXPEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@QEAV10@AEAV?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@0@@Z @ 0x18001E93C (--$_Destroy_range@V-$allocator@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@.c)
 *     ??$_Uninitialized_copy@PEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@YAPEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@0@@Z @ 0x18002501C (--$_Uninitialized_copy@PEAV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$al.c)
 *     ??$_Copy_unchecked@PEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAV12@@std@@YAPEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@PEAV10@00@Z @ 0x1800588F8 (--$_Copy_unchecked@PEAV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@PEAV12@@s.c)
 *     ?_Clear_and_reserve_geometric@?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@AEAAX_K@Z @ 0x18005E6D4 (-_Clear_and_reserve_geometric@-$vector@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@.c)
 */

__int64 __fastcall std::vector<std::wstring>::_Assign_range<std::wstring *>(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v5; // rsi
  __int64 v8; // rsi
  __int64 result; // rax
  __int64 v10; // rbx

  v3 = (a3 - a2) >> 5;
  v5 = (__int64)(a1[1] - *a1) >> 5;
  if ( v3 <= v5 )
  {
    v10 = *a1 + 32 * v3;
    std::_Copy_unchecked<std::wstring *,std::wstring *>(a2, a3, *a1);
    result = std::_Destroy_range<std::allocator<std::wstring>>(v10, a1[1]);
  }
  else
  {
    if ( v3 > (__int64)(a1[2] - *a1) >> 5 )
    {
      std::vector<std::wstring>::_Clear_and_reserve_geometric(a1, (a3 - a2) >> 5);
      v5 = 0LL;
    }
    v8 = a2 + 32 * v5;
    std::_Copy_unchecked<std::wstring *,std::wstring *>(a2, v8, *a1);
    result = (__int64)std::_Uninitialized_copy<std::wstring *>(v8, a3, (_QWORD *)a1[1]);
    v10 = result;
  }
  a1[1] = v10;
  return result;
}
