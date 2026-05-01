/*
 * XREFs of ??$_Uninitialized_value_construct_n@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@std@@YAPEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@PEAV10@_KAEAV?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@0@@Z @ 0x1804149A8
 * Callers:
 *     ??$load@VJSONInputArchive@cereal@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@4@@cereal@@YAXAEAVJSONInputArchive@0@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z @ 0x1801B21BC (--$load@VJSONInputArchive@cereal@@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1804146DC (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@V-$basic_string@DU-$char_traits@D@std@@V-$.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@std@@YAXPEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@QEAV10@AEAV?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@0@@Z @ 0x180414104 (--$_Destroy_range@V-$allocator@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@@st.c)
 */

_QWORD *__fastcall std::_Uninitialized_value_construct_n<std::allocator<std::string>>(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  for ( ; a2; --a2 )
  {
    *a1 = 0LL;
    a1[2] = 0LL;
    a1[3] = 15LL;
    a1 += 4;
  }
  std::_Destroy_range<std::allocator<std::string>>((__int64)a1, (__int64)a1, a3);
  return a1;
}
