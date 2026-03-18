/*
 * XREFs of RtlpHpHeapCheckCommitLimit @ 0x140351BF4
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x140351880 (RtlpHpSegMgrCommit.c)
 *     RtlpHpSegHeapCheckCommitLimit @ 0x140371218 (RtlpHpSegHeapCheckCommitLimit.c)
 *     RtlpAllocateHeap @ 0x1405E80B0 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x1405E9C3C (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x1405E9E8C (RtlpFindAndCommitPages.c)
 *     RtlpInitializeHeapSegment @ 0x1405EA72C (RtlpInitializeHeapSegment.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x1405F1BBC (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpHeapCheckCommitLimit(__int64 a1, __int64 a2, int a3, unsigned __int64 *a4)
{
  unsigned __int64 v4; // r10
  unsigned int v5; // ebx
  __int64 *v7; // rax
  __int64 v8; // r9

  v4 = *a4;
  v5 = 0;
  if ( (*a4 || (v4 = qword_140C5A5D8) != 0) && a1 + a2 > v4 )
  {
    v7 = &qword_140C5A5D8;
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
