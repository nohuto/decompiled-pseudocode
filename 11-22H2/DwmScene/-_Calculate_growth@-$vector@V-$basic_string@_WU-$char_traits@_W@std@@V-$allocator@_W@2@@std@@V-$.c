/*
 * XREFs of ?_Calculate_growth@?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@AEBA_K_K@Z @ 0x18001F508
 * Callers:
 *     ??$_Emplace_reallocate@_KAEB_KIIIH@?$vector@UTextureImageDesc@Engine@Spectre@@V?$allocator@UTextureImageDesc@Engine@Spectre@@@std@@@std@@QEAAPEAUTextureImageDesc@Engine@Spectre@@QEAU234@$$QEA_KAEB_K$$QEAI33$$QEAH@Z @ 0x180054DA4 (--$_Emplace_reallocate@_KAEB_KIIIH@-$vector@UTextureImageDesc@Engine@Spectre@@V-$allocator@UText.c)
 *     ??$_Emplace_reallocate@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@QEAAPEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@QEAV21@AEBV21@@Z @ 0x180058AAC (--$_Emplace_reallocate@AEBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@-$ve.c)
 *     ?_Clear_and_reserve_geometric@?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@AEAAX_K@Z @ 0x18005E6D4 (-_Clear_and_reserve_geometric@-$vector@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@.c)
 *     ??$_Insert_range@V?$move_iterator@PEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@1@V?$move_iterator@PEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@1@1Uforward_iterator_tag@1@@Z @ 0x1800DD700 (--$_Insert_range@V-$move_iterator@PEAV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<std::wstring>::_Calculate_growth(_QWORD *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9

  result = 0x7FFFFFFFFFFFFFFLL;
  v3 = (__int64)(a1[2] - *a1) >> 5;
  v4 = v3 >> 1;
  if ( v3 <= 0x7FFFFFFFFFFFFFFLL - (v3 >> 1) )
  {
    result = v4 + v3;
    if ( v4 + v3 < a2 )
      return a2;
  }
  return result;
}
