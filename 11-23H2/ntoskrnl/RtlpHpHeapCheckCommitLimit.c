/*
 * XREFs of RtlpHpHeapCheckCommitLimit @ 0x140324948
 * Callers:
 *     RtlpHpSegHeapCheckCommitLimit @ 0x140324918 (RtlpHpSegHeapCheckCommitLimit.c)
 *     RtlpAllocateHeap @ 0x1405AB7B8 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x1405AD368 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x1405AD5BC (RtlpFindAndCommitPages.c)
 *     RtlpInitializeHeapSegment @ 0x1405ADE6C (RtlpInitializeHeapSegment.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x1405B503C (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpHeapCheckCommitLimit(__int64 a1, __int64 a2, int a3, unsigned __int64 *a4)
{
  unsigned __int64 v4; // r10
  unsigned int v5; // ebx
  __int64 *v7; // rax
  __int64 v8; // r9

  v4 = *a4;
  v5 = 0;
  if ( (*a4 || (v4 = qword_140C6B2D8) != 0) && a1 + a2 > v4 )
  {
    v7 = &qword_140C6B2D8;
    if ( *a4 )
      v7 = (__int64 *)a4;
    v8 = v7[1];
    if ( v8 )
      RtlpLogHeapFailure(21, a3, 0, v8, a1, a2);
  }
  else
  {
    return 1;
  }
  return v5;
}
