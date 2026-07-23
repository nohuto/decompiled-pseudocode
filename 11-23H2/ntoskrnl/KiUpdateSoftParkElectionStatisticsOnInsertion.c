/*
 * XREFs of KiUpdateSoftParkElectionStatisticsOnInsertion @ 0x140372A38
 * Callers:
 *     KiUpdateLocalReadyQueueStatisticsOnInsertion @ 0x14041101C (KiUpdateLocalReadyQueueStatisticsOnInsertion.c)
 * Callees:
 *     KiScheduleSoftParkElectionIfNecessary @ 0x140234DC0 (KiScheduleSoftParkElectionIfNecessary.c)
 *     KeQueryGroupAffinityEx @ 0x1403B6BA0 (KeQueryGroupAffinityEx.c)
 *     KiAcquireSoftParkElectionLock @ 0x140410424 (KiAcquireSoftParkElectionLock.c)
 */

__int64 __fastcall KiUpdateSoftParkElectionStatisticsOnInsertion(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  unsigned int v5; // eax
  __int16 v6; // dx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 result; // rax

  v2 = *(_DWORD *)(a2 + 84);
  *(_BYTE *)(a2 + 1648) = *(_BYTE *)(a2 + 512);
  *(_DWORD *)(a2 + 2292) = v2;
  v5 = *(_DWORD *)(a2 + 80);
  if ( v5 <= v2 )
    v5 = v2;
  *(_BYTE *)(a2 + 1650) = v5 >= KiDynamicHeteroCpuPolicyExpectedCycles;
  *(_BYTE *)(a2 + 1649) = *(_BYTE *)(a2 + 516);
  v6 = *(_WORD *)(a1 + 662);
  *(_OWORD *)(a2 + 2304) = 0LL;
  v7 = *(_QWORD *)(a2 + 576);
  *(_WORD *)(a2 + 2312) = v6;
  *(_QWORD *)(a2 + 2304) = KeQueryGroupAffinityEx(v7);
  if ( *(_DWORD *)(a2 + 2292) > (unsigned int)KeSoftParkedQueueThreshold )
    *(_DWORD *)(a2 + 2292) = KeSoftParkedQueueThreshold;
  KiAcquireSoftParkElectionLock(a1);
  *(_QWORD *)(a2 + 2296) = *(_QWORD *)(a1 + 696);
  ++*(_DWORD *)(a1 + 704);
  *(_QWORD *)(a1 + 712) += *(unsigned int *)(a2 + 2292);
  *(_QWORD *)(a1 + 1680) |= *(_QWORD *)(a2 + 2304);
  v8 = *(unsigned __int8 *)(a2 + 1649) + 8 * (*(unsigned __int8 *)(a2 + 1650) + 2LL * *(unsigned __int8 *)(a2 + 1648));
  *(_QWORD *)(a1 + 8 * v8 + 784) += *(unsigned int *)(a2 + 2292);
  result = KiScheduleSoftParkElectionIfNecessary(a1);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 688), 0LL);
  return result;
}
