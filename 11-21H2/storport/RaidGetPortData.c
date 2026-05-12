/*
 * XREFs of RaidGetPortData @ 0x1C00035F0
 * Callers:
 *     StorEtwResetCounters @ 0x1C0002B64 (StorEtwResetCounters.c)
 *     StorpLogStatistics @ 0x1C00037DC (StorpLogStatistics.c)
 *     StorPortInitialize @ 0x1C003F980 (StorPortInitialize.c)
 *     StorEtwEnableCallback @ 0x1C005A5CC (StorEtwEnableCallback.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 */

__int64 RaidGetPortData()
{
  __int64 result; // rax
  __int64 v1; // rbx
  _QWORD *v2; // rax

  if ( RaidpPortData )
  {
    _InterlockedIncrement((volatile signed __int32 *)RaidpPortData);
    return RaidpPortData;
  }
  result = RaidAllocatePool(64LL, 40LL, 1146118482LL, 0LL);
  v1 = result;
  if ( result )
  {
    v2 = (_QWORD *)(result + 8);
    v2[1] = v2;
    *v2 = v2;
    KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 24));
    *(_DWORD *)(v1 + 32) = 0;
    *(_DWORD *)v1 = 1;
    RaidpPortData = v1;
    return RaidpPortData;
  }
  return result;
}
