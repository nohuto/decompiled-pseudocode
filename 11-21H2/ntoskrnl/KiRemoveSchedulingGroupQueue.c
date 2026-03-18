/*
 * XREFs of KiRemoveSchedulingGroupQueue @ 0x140210CE4
 * Callers:
 *     KeSetSchedulingGroupRankBias @ 0x140207F60 (KeSetSchedulingGroupRankBias.c)
 *     KiResetScb @ 0x140208368 (KiResetScb.c)
 *     KiRemoveThreadFromScbQueue @ 0x1402108CC (KiRemoveThreadFromScbQueue.c)
 *     KiResortScbQueue @ 0x140210D6C (KiResortScbQueue.c)
 *     KiComputeGroupSchedulingRank @ 0x14022A040 (KiComputeGroupSchedulingRank.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140290B9C (KiGroupSchedulingQuantumEnd.c)
 *     KiSwapThread @ 0x1402B3140 (KiSwapThread.c)
 *     KiQueueReadyThread @ 0x1402B9970 (KiQueueReadyThread.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14034D8D0 (RtlRbRemoveNode.c)
 */

__int64 __fastcall KiRemoveSchedulingGroupQueue(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rsi
  __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 result; // rax

  v4 = a1 + 32560;
  do
  {
    v5 = (__int64 *)(a2 + 408);
    v6 = *(_QWORD *)(a2 + 408);
    v7 = v6 + 392;
    if ( !v6 )
      v7 = v4;
    if ( a3 )
      *(_QWORD *)(a2 + 56) += MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a2 + 64);
    *(_BYTE *)(a2 + 112) &= ~1u;
    result = RtlRbRemoveNode(v7, a2 + 88);
    a2 = *v5;
    if ( !*v5 || (*(_BYTE *)(a2 + 112) & 1) == 0 )
      break;
    result = *(_QWORD *)(a2 + 392);
    if ( (*(_BYTE *)(a2 + 400) & 1) == 0 )
      goto LABEL_12;
    if ( result )
    {
      result ^= a2 + 392;
LABEL_12:
      if ( result )
        return result;
    }
  }
  while ( !*(_WORD *)(a2 + 114) );
  return result;
}
