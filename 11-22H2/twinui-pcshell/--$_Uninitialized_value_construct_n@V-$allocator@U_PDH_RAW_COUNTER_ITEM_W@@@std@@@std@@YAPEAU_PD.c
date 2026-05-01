/*
 * XREFs of ??$_Uninitialized_value_construct_n@V?$allocator@U_PDH_RAW_COUNTER_ITEM_W@@@std@@@std@@YAPEAU_PDH_RAW_COUNTER_ITEM_W@@PEAU1@_KAEAV?$allocator@U_PDH_RAW_COUNTER_ITEM_W@@@0@@Z @ 0x1803F67A8
 * Callers:
 *     ?GetRawData@GamingOverlayExperienceManager@@AEAAJQEAXQEAKPEAV?$vector@U_PDH_RAW_COUNTER_ITEM_W@@V?$allocator@U_PDH_RAW_COUNTER_ITEM_W@@@std@@@std@@@Z @ 0x1802D304A (-GetRawData@GamingOverlayExperienceManager@@AEAAJQEAXQEAKPEAV-$vector@U_PDH_RAW_COUNTER_ITEM_W@@.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@U_PDH_RAW_COUNTER_ITEM_W@@V?$allocator@U_PDH_RAW_COUNTER_ITEM_W@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1803F6338 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@U_PDH_RAW_COUNTER_ITEM_W@@V-$allocator@U_P.c)
 * Callees:
 *     memset_0 @ 0x1801C750C (memset_0.c)
 */

char *__fastcall std::_Uninitialized_value_construct_n<std::allocator<_PDH_RAW_COUNTER_ITEM_W>>(char *a1, __int64 a2)
{
  char *v2; // rdi
  __int64 v3; // rbx

  v2 = a1;
  if ( a2 )
  {
    v3 = 48 * a2;
    memset_0(a1, 0, 48 * a2);
    v2 += v3;
  }
  return v2;
}
