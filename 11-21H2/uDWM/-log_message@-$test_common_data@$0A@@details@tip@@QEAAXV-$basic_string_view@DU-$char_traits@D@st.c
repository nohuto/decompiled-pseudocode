/*
 * XREFs of ?log_message@?$test_common_data@$0A@@details@tip@@QEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z @ 0x1800F6358
 * Callers:
 *     ?log@?$tip_test@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@tip@@QEAAXV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800F6208 (-log@-$tip_test@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@tip@@QEAAXV-$basic_strin.c)
 * Callees:
 *     ?begin_update@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x18003FFFC (-begin_update@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 *     ??$emplace_back@AEAV?$basic_string_view@DU?$char_traits@D@std@@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QEAAAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@AEAV?$basic_string_view@DU?$char_traits@D@std@@@1@@Z @ 0x1800F2728 (--$emplace_back@AEAV-$basic_string_view@DU-$char_traits@D@std@@@std@@@-$vector@V-$basic_string@D.c)
 */

void __fastcall tip::details::test_common_data<0>::log_message(__int64 a1, const void **a2)
{
  __int64 v3; // rbx

  v3 = a1;
  if ( tip::details::test_common_data<0>::begin_update(a1) )
  {
    try
    {
      std::vector<std::string>::emplace_back<std::string_view &>((__int64 *)(v3 + 56), a2);
    }
    catch ( ... )
    {
      *(_DWORD *)(a1 + 24) |= 0x100000u;
      v3 = a1;
    }
  }
  tip::details::test_common_data<0>::end_update(v3);
}
