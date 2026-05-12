/*
 * XREFs of RaidGetPortData @ 0x1C00216A4
 * Callers:
 *     StorpLogStatistics @ 0x1C001B410 (StorpLogStatistics.c)
 *     StorEtwResetCounters @ 0x1C00214EC (StorEtwResetCounters.c)
 *     StorPortInitialize @ 0x1C0042320 (StorPortInitialize.c)
 *     RaUnitGetInstances @ 0x1C005DD38 (RaUnitGetInstances.c)
 *     StorEtwEnableCallback @ 0x1C0067570 (StorEtwEnableCallback.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
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
