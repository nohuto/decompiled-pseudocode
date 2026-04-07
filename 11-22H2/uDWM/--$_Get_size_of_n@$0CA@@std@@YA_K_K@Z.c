/*
 * XREFs of ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x18001BBFC
 * Callers:
 *     ??$_Emplace_reallocate@AEAV?$basic_string_view@DU?$char_traits@D@std@@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QEAAPEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@QEAV21@AEAV?$basic_string_view@DU?$char_traits@D@std@@@1@@Z @ 0x1800EF494 (--$_Emplace_reallocate@AEAV-$basic_string_view@DU-$char_traits@D@std@@@std@@@-$vector@V-$basic_s.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800B8D34 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Get_size_of_n<32>(unsigned __int64 a1)
{
  if ( a1 > 0x7FFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  return 32 * a1;
}
