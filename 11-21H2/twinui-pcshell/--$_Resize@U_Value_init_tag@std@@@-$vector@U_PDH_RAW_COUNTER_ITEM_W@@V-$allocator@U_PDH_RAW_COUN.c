/*
 * XREFs of ??$_Resize@U_Value_init_tag@std@@@?$vector@U_PDH_RAW_COUNTER_ITEM_W@@V?$allocator@U_PDH_RAW_COUNTER_ITEM_W@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180329118
 * Callers:
 *     ?GetRawData@GamingOverlayExperienceManager@@AEAAJQEAXQEAKPEAV?$vector@U_PDH_RAW_COUNTER_ITEM_W@@V?$allocator@U_PDH_RAW_COUNTER_ITEM_W@@@std@@@std@@@Z @ 0x18022B9FC (-GetRawData@GamingOverlayExperienceManager@@AEAAJQEAXQEAKPEAV-$vector@U_PDH_RAW_COUNTER_ITEM_W@@.c)
 * Callees:
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@U_PDH_RAW_COUNTER_ITEM_W@@V?$allocator@U_PDH_RAW_COUNTER_ITEM_W@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1803291B4 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@U_PDH_RAW_COUNTER_ITEM_W@@V-$allocator@U_P.c)
 */

unsigned __int64 __fastcall std::vector<_PDH_RAW_COUNTER_ITEM_W>::_Resize<std::_Value_init_tag>(
        _QWORD *a1,
        unsigned __int64 a2)
{
  char *v2; // rsi
  unsigned __int64 v4; // rcx
  unsigned __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rbx

  v2 = (char *)a1[1];
  v4 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)&v2[-*a1] >> 4);
  if ( a2 >= v4 )
  {
    if ( a2 > v4 )
    {
      result = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[2] - *a1) >> 4);
      if ( a2 <= result )
      {
        v6 = a2 - v4;
        if ( v6 )
        {
          v7 = 48 * v6;
          result = (unsigned __int64)memset_0(v2, 0, 48 * v6);
          v2 += v7;
        }
        a1[1] = v2;
      }
      else
      {
        return std::vector<_PDH_RAW_COUNTER_ITEM_W>::_Resize_reallocate<std::_Value_init_tag>(a1);
      }
    }
  }
  else
  {
    result = *a1 + 48 * a2;
    a1[1] = result;
  }
  return result;
}
