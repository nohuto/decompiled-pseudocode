/*
 * XREFs of RtlpHpHeapCheckCommitLimit @ 0x180047224
 * Callers:
 *     RtlpAllocateHeap @ 0x18003F1C0 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x180045D18 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x180045FCC (RtlpFindAndCommitPages.c)
 *     RtlpCommitBlock @ 0x1800467BC (RtlpCommitBlock.c)
 *     RtlpHpSegMgrCommit @ 0x180047080 (RtlpHpSegMgrCommit.c)
 *     RtlpInitializeHeapSegment @ 0x180047D5C (RtlpInitializeHeapSegment.c)
 *     RtlpHpSegHeapCheckCommitLimit @ 0x180064294 (RtlpHpSegHeapCheckCommitLimit.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x1801229C0 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpHeapCheckCommitLimit(__int64 a1, __int64 a2, int a3, __int64 *a4)
{
  unsigned int v4; // ebx
  unsigned __int64 v6; // rcx
  __int64 *v8; // rax
  __int64 v9; // r9

  v4 = 0;
  if ( !dword_180181238 && ((v6 = *a4) != 0 || (v6 = qword_180187F58) != 0) && a1 + a2 > v6 )
  {
    v8 = &qword_180187F58;
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
