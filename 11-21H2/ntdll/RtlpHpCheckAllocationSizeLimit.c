/*
 * XREFs of RtlpHpCheckAllocationSizeLimit @ 0x18002E028
 * Callers:
 *     RtlpHpReAllocateHeap @ 0x18002DBE0 (RtlpHpReAllocateHeap.c)
 *     RtlpHpAllocateHeap @ 0x180055A4C (RtlpHpAllocateHeap.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x18011F650 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpCheckAllocationSizeLimit(unsigned __int64 a1, int a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v4; // rax
  __int64 v6; // r9

  v3 = 0;
  if ( !dword_180174238 && ((v4 = *(_QWORD *)(a3 + 16)) != 0 || (v4 = qword_18017AC28) != 0) && a1 > v4 )
  {
    v6 = *(_QWORD *)(a3 + 24);
    if ( v6 )
      RtlpLogHeapFailure(20, a2, 0, v6, a1, *(_QWORD *)(a3 + 16));
  }
  else
  {
    return 1;
  }
  return v3;
}
