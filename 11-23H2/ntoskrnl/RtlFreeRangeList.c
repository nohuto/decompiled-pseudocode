/*
 * XREFs of RtlFreeRangeList @ 0x1408158D0
 * Callers:
 *     ArbTestAllocation @ 0x140814FE0 (ArbTestAllocation.c)
 *     RtlCopyRangeList @ 0x140815150 (RtlCopyRangeList.c)
 *     ArbBootAllocation @ 0x140815460 (ArbBootAllocation.c)
 *     ArbCommitAllocation @ 0x1408156C0 (ArbCommitAllocation.c)
 *     ArbInitializeRangeList @ 0x140936330 (ArbInitializeRangeList.c)
 *     ArbQueryConflict @ 0x140936520 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x1409368C0 (ArbRetestAllocation.c)
 *     ArbRollbackAllocation @ 0x140936A90 (ArbRollbackAllocation.c)
 *     ArbStartArbiter @ 0x140936CD0 (ArbStartArbiter.c)
 *     RtlMergeRangeLists @ 0x1409B8E50 (RtlMergeRangeLists.c)
 * Callees:
 *     RtlpDeleteRangeListEntry @ 0x140815938 (RtlpDeleteRangeListEntry.c)
 */

_QWORD *__fastcall RtlFreeRangeList(__int64 a1)
{
  _QWORD *result; // rax
  _QWORD *v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // r8
  _QWORD *v6; // rdx

  *(_DWORD *)(a1 + 16) = 0;
  result = *(_QWORD **)a1;
  *(_DWORD *)(a1 + 20) = 0;
  v3 = result - 5;
  while ( 1 )
  {
    v4 = *result - 40LL;
    if ( (_QWORD *)a1 == result )
      break;
    v5 = *result;
    if ( *(_QWORD **)(*result + 8LL) != result || (v6 = (_QWORD *)result[1], (_QWORD *)*v6 != result) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    RtlpDeleteRangeListEntry(v3);
    v3 = (_QWORD *)v4;
    result = (_QWORD *)(v4 + 40);
  }
  return result;
}
