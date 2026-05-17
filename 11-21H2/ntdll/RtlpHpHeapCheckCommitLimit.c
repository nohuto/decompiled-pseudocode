/*
 * XREFs of RtlpHpHeapCheckCommitLimit @ 0x18002283C
 * Callers:
 *     RtlpCommitBlock @ 0x180020728 (RtlpCommitBlock.c)
 *     RtlpExtendHeap @ 0x180020860 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x180020B1C (RtlpFindAndCommitPages.c)
 *     RtlpHpSegMgrCommit @ 0x180023B70 (RtlpHpSegMgrCommit.c)
 *     RtlpAllocateHeap @ 0x18002B160 (RtlpAllocateHeap.c)
 *     RtlpInitializeHeapSegment @ 0x1800304FC (RtlpInitializeHeapSegment.c)
 *     RtlpHpSegHeapCheckCommitLimit @ 0x18005908C (RtlpHpSegHeapCheckCommitLimit.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x18011F650 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpHeapCheckCommitLimit(__int64 a1, __int64 a2, int a3, __int64 *a4)
{
  unsigned int v4; // ebx
  unsigned __int64 v6; // rcx
  __int64 *v8; // rax
  __int64 v9; // r9

  v4 = 0;
  if ( !dword_180174238 && ((v6 = *a4) != 0 || (v6 = qword_18017AC18) != 0) && a1 + a2 > v6 )
  {
    v8 = &qword_18017AC18;
    if ( *a4 )
      v8 = a4;
    v9 = v8[1];
    if ( v9 )
      RtlpLogHeapFailure(21, a3, 0, v9, a1, a2);
  }
  else
  {
    return 1;
  }
  return v4;
}
