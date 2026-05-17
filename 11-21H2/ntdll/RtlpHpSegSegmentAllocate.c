/*
 * XREFs of RtlpHpSegSegmentAllocate @ 0x1800563A4
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x180018680 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegContextReserve @ 0x1800550B4 (RtlpHpSegContextReserve.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     RtlCSparseBitmapBitmaskWrite @ 0x1800564C0 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlpHpSegMgrAllocate @ 0x1800566B4 (RtlpHpSegMgrAllocate.c)
 *     RtlpHpSegSegmentFree @ 0x180057A70 (RtlpHpSegSegmentFree.c)
 *     RtlpHeapLogRangeReserve @ 0x18011508C (RtlpHeapLogRangeReserve.c)
 *     RtlpLogHeapCommit @ 0x180116BD4 (RtlpLogHeapCommit.c)
 *     RtlpHpTlLogMemStats @ 0x180118400 (RtlpHpTlLogMemStats.c)
 */

__int64 __fastcall RtlpHpSegSegmentAllocate(__int64 a1, int a2)
{
  unsigned int v2; // esi
  __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // r8
  unsigned int v7; // edx
  __int64 v8; // r13
  _BOOL8 v9; // r15
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r12
  __int64 v12; // rcx
  __int64 v13; // rcx

  v2 = a2 + 2;
  v4 = 0LL;
  v5 = RtlpHpSegMgrAllocate(a1, (unsigned int)(a2 + 2));
  if ( v5 )
  {
    v7 = -*(_DWORD *)a1;
    v8 = v7;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1), (unsigned __int64)v7 >> 12);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 8), v2);
    v9 = v7 != 0x100000;
    v10 = 2 * ((unsigned __int64)(v5 - qword_18017B718) >> 20);
    v11 = v10 + 2 * ((unsigned __int64)v7 >> 20);
    while ( v10 < v11 )
    {
      if ( (int)RtlCSparseBitmapBitmaskWrite(&unk_18017B720, v10, v6, v9 + 1) < 0 )
      {
        RtlpHpSegSegmentFree(a1, v5, v2, 0LL);
        return v4;
      }
      v10 += 2LL;
    }
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v12 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v12 = 2147353472LL;
    if ( *(_BYTE *)v12 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapCommit(*(_QWORD *)(a1 + 56), v5, v2 << 12, 12LL);
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v13 = (__int64)NtCurrentPeb()->SharedData + 558;
    else
      v13 = 2147353480LL;
    if ( *(_BYTE *)v13 )
      RtlpHeapLogRangeReserve(*(_QWORD *)(a1 + 56), v5, v8);
    if ( (RtlpHpHeapFeatures & 8) != 0 )
      RtlpHpTlLogMemStats(*(_QWORD *)(a1 + 56), a1 + *(__int16 *)(a1 + 22));
    return v5;
  }
  return v4;
}
