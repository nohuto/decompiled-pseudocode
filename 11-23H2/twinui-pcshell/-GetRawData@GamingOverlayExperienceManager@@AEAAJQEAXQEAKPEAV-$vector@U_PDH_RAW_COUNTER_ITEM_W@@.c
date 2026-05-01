/*
 * XREFs of ?GetRawData@GamingOverlayExperienceManager@@AEAAJQEAXQEAKPEAV?$vector@U_PDH_RAW_COUNTER_ITEM_W@@V?$allocator@U_PDH_RAW_COUNTER_ITEM_W@@@std@@@std@@@Z @ 0x1802D304A
 * Callers:
 *     ?PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x180404644 (-PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@U_PDH_RAW_COUNTER_ITEM_W@@V?$allocator@U_PDH_RAW_COUNTER_ITEM_W@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1803F6338 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@U_PDH_RAW_COUNTER_ITEM_W@@V-$allocator@U_P.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@U_PDH_RAW_COUNTER_ITEM_W@@@std@@@std@@YAPEAU_PDH_RAW_COUNTER_ITEM_W@@PEAU1@_KAEAV?$allocator@U_PDH_RAW_COUNTER_ITEM_W@@@0@@Z @ 0x1803F67A8 (--$_Uninitialized_value_construct_n@V-$allocator@U_PDH_RAW_COUNTER_ITEM_W@@@std@@@std@@YAPEAU_PD.c)
 */

PDH_STATUS __fastcall GamingOverlayExperienceManager::GetRawData(__int64 a1, void *a2, DWORD *a3, __int64 a4)
{
  PDH_STATUS result; // eax
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  DWORD dwBufferSize; // [rsp+30h] [rbp+8h] BYREF
  int v11; // [rsp+34h] [rbp+Ch]

  v11 = HIDWORD(a1);
  dwBufferSize = 0;
  if ( 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(a4 + 8) - *(_QWORD *)a4) >> 4) )
    *(_QWORD *)(a4 + 8) = *(_QWORD *)a4;
  result = PdhGetRawCounterArrayW(a2, &dwBufferSize, a3, 0LL);
  if ( result == -2147481646 )
  {
    v8 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(a4 + 8) - *(_QWORD *)a4) >> 4);
    if ( dwBufferSize < v8 )
    {
      v9 = *(_QWORD *)a4 + 48LL * dwBufferSize;
LABEL_10:
      *(_QWORD *)(a4 + 8) = v9;
      return PdhGetRawCounterArrayW(a2, &dwBufferSize, a3, *(PPDH_RAW_COUNTER_ITEM_W *)a4);
    }
    if ( dwBufferSize > v8 )
    {
      if ( dwBufferSize <= 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(a4 + 16) - *(_QWORD *)a4) >> 4) )
      {
        v9 = std::_Uninitialized_value_construct_n<std::allocator<_PDH_RAW_COUNTER_ITEM_W>>(
               *(_QWORD *)(a4 + 8),
               dwBufferSize - v8);
        goto LABEL_10;
      }
      std::vector<_PDH_RAW_COUNTER_ITEM_W>::_Resize_reallocate<std::_Value_init_tag>(a4);
    }
    return PdhGetRawCounterArrayW(a2, &dwBufferSize, a3, *(PPDH_RAW_COUNTER_ITEM_W *)a4);
  }
  return result;
}
