/*
 * XREFs of RtlpHpCheckAllocationSizeLimit @ 0x180043928
 * Callers:
 *     RtlpHpReAllocateHeap @ 0x180041ECC (RtlpHpReAllocateHeap.c)
 *     RtlpHpAllocateHeap @ 0x180066CF4 (RtlpHpAllocateHeap.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x180121540 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpCheckAllocationSizeLimit(unsigned __int64 a1, int a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v4; // rax
  __int64 v6; // r9

  v3 = 0;
  if ( !dword_18017E828 && ((v4 = *(_QWORD *)(a3 + 16)) != 0 || (v4 = qword_180184E68) != 0) && a1 > v4 )
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
