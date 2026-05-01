/*
 * XREFs of ?GetRawData@GamingOverlayExperienceManager@@AEAAJQEAXQEAKPEAV?$vector@U_PDH_RAW_COUNTER_ITEM_W@@V?$allocator@U_PDH_RAW_COUNTER_ITEM_W@@@std@@@std@@@Z @ 0x18022B9FC
 * Callers:
 *     ?PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x1803368A4 (-PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@U_PDH_RAW_COUNTER_ITEM_W@@V?$allocator@U_PDH_RAW_COUNTER_ITEM_W@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180329118 (--$_Resize@U_Value_init_tag@std@@@-$vector@U_PDH_RAW_COUNTER_ITEM_W@@V-$allocator@U_PDH_RAW_COUN.c)
 */

PDH_STATUS __fastcall GamingOverlayExperienceManager::GetRawData(__int64 a1, void *a2, DWORD *a3, __int64 a4)
{
  PDH_STATUS result; // eax
  DWORD dwBufferSize; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+34h] [rbp+Ch]

  v9 = HIDWORD(a1);
  dwBufferSize = 0;
  if ( 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(a4 + 8) - *(_QWORD *)a4) >> 4) )
    *(_QWORD *)(a4 + 8) = *(_QWORD *)a4;
  result = PdhGetRawCounterArrayW(a2, &dwBufferSize, a3, 0LL);
  if ( result == -2147481646 )
  {
    std::vector<_PDH_RAW_COUNTER_ITEM_W>::_Resize<std::_Value_init_tag>(a4, dwBufferSize);
    return PdhGetRawCounterArrayW(a2, &dwBufferSize, a3, *(PPDH_RAW_COUNTER_ITEM_W *)a4);
  }
  return result;
}
