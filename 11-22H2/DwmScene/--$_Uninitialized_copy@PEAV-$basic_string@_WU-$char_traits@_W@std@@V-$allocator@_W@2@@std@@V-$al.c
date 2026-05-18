/*
 * XREFs of ??$_Uninitialized_copy@PEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@YAPEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@0@@Z @ 0x18002501C
 * Callers:
 *     ??$_Assign_range@PEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@AEAAXPEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@0Uforward_iterator_tag@1@@Z @ 0x18005872C (--$_Assign_range@PEAV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@-$vector@V.c)
 * Callees:
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x180012440 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@YAXPEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@QEAV10@AEAV?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@0@@Z @ 0x18001E93C (--$_Destroy_range@V-$allocator@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Uninitialized_copy<std::wstring *>(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 32LL )
  {
    std::wstring::wstring(a3, i);
    a3 += 4;
  }
  std::_Destroy_range<std::allocator<std::wstring>>((__int64)a3, (__int64)a3);
  return a3;
}
