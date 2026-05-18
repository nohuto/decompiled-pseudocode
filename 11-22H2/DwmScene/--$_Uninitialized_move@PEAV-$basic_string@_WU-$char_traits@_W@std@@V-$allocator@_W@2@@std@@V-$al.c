/*
 * XREFs of ??$_Uninitialized_move@PEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@YAPEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@0@@Z @ 0x18001EEB8
 * Callers:
 *     ??$_Emplace_reallocate@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@QEAAPEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@QEAV21@AEBV21@@Z @ 0x180058AAC (--$_Emplace_reallocate@AEBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@-$ve.c)
 *     ??$_Insert_range@V?$move_iterator@PEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@1@V?$move_iterator@PEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@1@1Uforward_iterator_tag@1@@Z @ 0x1800DD700 (--$_Insert_range@V-$move_iterator@PEAV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@.c)
 *     ?_Reallocate_exactly@?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@AEAAX_K@Z @ 0x1800DFBE4 (-_Reallocate_exactly@-$vector@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@YAXPEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@QEAV10@AEAV?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@0@@Z @ 0x18001E93C (--$_Destroy_range@V-$allocator@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@.c)
 */

__int64 __fastcall std::_Uninitialized_move<std::wstring *>(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r8
  _QWORD *v5; // rax

  v3 = a3;
  if ( a1 != a2 )
  {
    v4 = a3 - (_QWORD)a1;
    v5 = a1 + 3;
    do
    {
      *(_QWORD *)v3 = 0LL;
      *(_QWORD *)((char *)v5 + v4 - 8) = 0LL;
      *(_QWORD *)((char *)v5 + v4) = 0LL;
      *(_OWORD *)v3 = *(_OWORD *)(v5 - 3);
      *(_OWORD *)(v3 + 16) = *(_OWORD *)(v5 - 1);
      *(v5 - 1) = 0LL;
      v3 += 32LL;
      *v5 = 7LL;
      *((_WORD *)v5 - 12) = 0;
      v5 += 4;
    }
    while ( v5 - 3 != a2 );
  }
  std::_Destroy_range<std::allocator<std::wstring>>(v3, v3);
  return v3;
}
