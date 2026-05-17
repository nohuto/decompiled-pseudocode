/*
 * XREFs of RtlpEstimateAllocatedSize @ 0x180083670
 * Callers:
 *     RtlpQueryExtendedInformationHeap @ 0x1800833B0 (RtlpQueryExtendedInformationHeap.c)
 *     RtlpLogHeapContractEvent @ 0x180116C84 (RtlpLogHeapContractEvent.c)
 *     RtlpLogHeapCreateEvent @ 0x180116D3C (RtlpLogHeapCreateEvent.c)
 *     RtlpLogHeapExtendEvent @ 0x180116E68 (RtlpLogHeapExtendEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpEstimateAllocatedSize(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = *(_QWORD *)(a1 + 576) - 16LL * *(_QWORD *)(a1 + 192);
  if ( *(_BYTE *)(a1 + 418) == 2 )
  {
    v2 = *(_QWORD *)(a1 + 408);
    if ( v2 )
      result -= *(_QWORD *)(v2 + 72);
  }
  return result;
}
