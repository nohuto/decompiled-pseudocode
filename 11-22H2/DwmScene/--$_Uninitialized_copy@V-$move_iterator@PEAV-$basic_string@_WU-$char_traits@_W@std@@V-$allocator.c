/*
 * XREFs of ??$_Uninitialized_copy@V?$move_iterator@PEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@YAPEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@V?$move_iterator@PEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@0@0PEAV10@AEAV?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@0@@Z @ 0x1800DDCCC
 * Callers:
 *     ??$_Insert_range@V?$move_iterator@PEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@1@V?$move_iterator@PEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@1@1Uforward_iterator_tag@1@@Z @ 0x1800DD700 (--$_Insert_range@V-$move_iterator@PEAV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@YAXPEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@QEAV10@AEAV?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@0@@Z @ 0x18001E93C (--$_Destroy_range@V-$allocator@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@.c)
 */

__int64 __fastcall std::_Uninitialized_copy<std::move_iterator<std::wstring *>>(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rbx
  _QWORD *v4; // rax
  __int64 v5; // r8
  _OWORD *v6; // rcx

  v3 = a3;
  v4 = (_QWORD *)(a1 + 24);
  v5 = a3 - a1;
  while ( 1 )
  {
    v6 = v4 - 3;
    if ( v4 - 3 == a2 )
      break;
    *(_QWORD *)v3 = 0LL;
    *(_QWORD *)((char *)v4 + v5 - 8) = 0LL;
    *(_QWORD *)((char *)v4 + v5) = 0LL;
    *(_OWORD *)v3 = *v6;
    *(_OWORD *)(v3 + 16) = v6[1];
    v3 += 32LL;
    *(v4 - 1) = 0LL;
    *v4 = 7LL;
    v4 += 4;
    *(_WORD *)v6 = 0;
  }
  std::_Destroy_range<std::allocator<std::wstring>>(v3, v3);
  return v3;
}
