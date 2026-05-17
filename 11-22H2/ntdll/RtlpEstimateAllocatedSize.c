/*
 * XREFs of RtlpEstimateAllocatedSize @ 0x18008ACC0
 * Callers:
 *     RtlpQueryExtendedInformationHeap @ 0x18008A9F0 (RtlpQueryExtendedInformationHeap.c)
 *     RtlpLogHeapContractEvent @ 0x180117070 (RtlpLogHeapContractEvent.c)
 *     RtlpLogHeapCreateEvent @ 0x180117128 (RtlpLogHeapCreateEvent.c)
 *     RtlpLogHeapExtendEvent @ 0x180117254 (RtlpLogHeapExtendEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpEstimateAllocatedSize(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v3; // rcx

  v1 = *(_QWORD *)(a1 + 576) - 16LL * *(_QWORD *)(a1 + 192);
  if ( *(_BYTE *)(a1 + 418) == 2 )
  {
    v3 = *(_QWORD *)(a1 + 408);
    if ( v3 )
      v1 -= *(_QWORD *)(v3 + 72);
  }
  return v1;
}
