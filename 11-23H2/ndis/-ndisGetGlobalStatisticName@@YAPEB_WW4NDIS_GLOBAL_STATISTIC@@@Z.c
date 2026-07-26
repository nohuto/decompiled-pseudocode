/*
 * XREFs of ?ndisGetGlobalStatisticName@@YAPEB_WW4NDIS_GLOBAL_STATISTIC@@@Z @ 0x1C013681C
 * Callers:
 *     ?ndisCollectSingleStatisticForIoctl@@YAJPEBUNDIS_COLLECT_SINGLE_STATISTIC_IN@@PEAUNDIS_COLLECT_SINGLE_STATISTIC_OUT@@AEA_K@Z @ 0x1C0136764 (-ndisCollectSingleStatisticForIoctl@@YAJPEBUNDIS_COLLECT_SINGLE_STATISTIC_IN@@PEAUNDIS_COLLECT_S.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 */

__int64 __fastcall ndisGetGlobalStatisticName(int a1)
{
  _QWORD v2[24]; // [rsp+0h] [rbp-79h]

  v2[0] = L"NumCalls_NdisAllocateSharedMemory";
  v2[1] = L"NumCalls_NdisMAllocateSharedMemory_WithGenericHandle";
  v2[2] = L"CumulativeDuration_NdisAllocateSharedMemory_us";
  v2[3] = L"BytesAllocated_NdisAllocateSharedMemory";
  v2[4] = L"BytesFailed_NdisAllocateSharedMemory";
  v2[5] = L"NumCalls_NdisFreeSharedMemory";
  v2[6] = L"CumulativeDuration_NdisFreeSharedMemory_us";
  v2[7] = L"BytesFreed_NdisFreeSharedMemory";
  v2[8] = L"NumCalls_NdisMAllocateSharedMemory";
  v2[9] = L"CumulativeDuration_NdisMAllocateSharedMemory_us";
  v2[10] = L"BytesAllocated_NdisMAllocateSharedMemory";
  v2[11] = L"BytesFailed_NdisMAllocateSharedMemory";
  v2[12] = L"NumCalls_NdisMFreeSharedMemory";
  v2[13] = L"CumulativeDuration_NdisMFreeSharedMemory_us";
  v2[14] = L"BytesFreed_NdisMFreeSharedMemory";
  v2[15] = L"NumCalls_NdisMFreeSharedMemoryWorker";
  v2[16] = L"CumulativeDuration_NdisMFreeSharedMemoryWorker_us";
  v2[17] = L"NumCalls_ndisAllocateHistogramEntry_Failed";
  v2[18] = L"NumCalls_HalAllocateCommonBufferEx";
  v2[19] = L"BytesAllocated_HalAllocateCommonBufferEx";
  v2[20] = L"BytesFailed_HalAllocateCommonBufferEx";
  v2[21] = L"NumCalls_HalFreeCommonBuffer";
  v2[22] = L"BytesFreed_HalFreeCommonBuffer";
  if ( (unsigned __int64)a1 < 0x17 )
    return v2[a1];
  else
    return 0LL;
}
