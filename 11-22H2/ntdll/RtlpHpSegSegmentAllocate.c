/*
 * XREFs of RtlpHpSegSegmentAllocate @ 0x18004AB08
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x180035030 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegContextReserve @ 0x180066748 (RtlpHpSegContextReserve.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     RtlCSparseBitmapBitmaskWrite @ 0x18004AC24 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlpHpSegMgrAllocate @ 0x18004AE20 (RtlpHpSegMgrAllocate.c)
 *     RtlpHpSegSegmentFree @ 0x180065678 (RtlpHpSegSegmentFree.c)
 *     RtlpHeapLogRangeReserve @ 0x180115474 (RtlpHeapLogRangeReserve.c)
 *     RtlpLogHeapCommit @ 0x180116FC0 (RtlpLogHeapCommit.c)
 *     RtlpHpTlLogMemStats @ 0x1801187FC (RtlpHpTlLogMemStats.c)
 */

__int64 __fastcall RtlpHpSegSegmentAllocate(__int64 a1, int a2, int a3)
{
  unsigned int v3; // esi
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // r8
  unsigned int v8; // edx
  __int64 v9; // r13
  _BOOL8 v10; // r15
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // r12
  __int64 v13; // rcx
  __int64 v14; // rcx

  v3 = a2 + 2;
  v5 = 0LL;
  v6 = RtlpHpSegMgrAllocate(a1, a2 + 2, a3);
  if ( v6 )
  {
    v8 = -*(_DWORD *)a1;
    v9 = v8;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1), (unsigned __int64)v8 >> 12);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 8), v3);
    v10 = v8 != 0x100000;
    v11 = 2 * ((unsigned __int64)(v6 - qword_1801859B8) >> 20);
    v12 = v11 + 2 * ((unsigned __int64)v8 >> 20);
    while ( v11 < v12 )
    {
      if ( (int)RtlCSparseBitmapBitmaskWrite(&BaseAddress, v11, v7, v10 + 1) < 0 )
      {
        RtlpHpSegSegmentFree(a1);
        return v5;
      }
      v11 += 2LL;
    }
    if ( RtlGetCurrentServiceSessionId() )
      v13 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v13 = 2147353472LL;
    if ( *(_BYTE *)v13 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapCommit(*(_QWORD *)(a1 + 56), v6, v3 << 12, 12LL);
    if ( RtlGetCurrentServiceSessionId() )
      v14 = (__int64)NtCurrentPeb()->SharedData + 558;
    else
      v14 = 2147353480LL;
    if ( *(_BYTE *)v14 )
      RtlpHeapLogRangeReserve(*(_QWORD *)(a1 + 56), v6, v9);
    if ( (RtlpHpHeapFeatures & 8) != 0 )
      RtlpHpTlLogMemStats(*(_QWORD *)(a1 + 56), a1 + *(__int16 *)(a1 + 22));
    return v6;
  }
  return v5;
}
