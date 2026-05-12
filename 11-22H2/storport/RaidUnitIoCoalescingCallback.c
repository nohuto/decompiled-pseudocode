/*
 * XREFs of RaidUnitIoCoalescingCallback @ 0x1C004D2B0
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitAdaptiveIdleTimeout @ 0x1C00047A0 (RaidUnitAdaptiveIdleTimeout.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0008978 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidUnitMaintenanceTime @ 0x1C004D344 (RaidUnitMaintenanceTime.c)
 */

void __fastcall RaidUnitIoCoalescingCallback(int a1, __int64 a2, __int64 a3)
{
  BOOLEAN v5; // al
  int v6; // edx
  __int64 v7; // r8

  v5 = RaidUnitCheckAndAcquirePoFx(a3);
  v6 = 0;
  if ( v5 )
  {
    if ( (unsigned int)(a1 - 1) <= 1 )
    {
      v7 = *(_QWORD *)(a3 + 1792);
      LOBYTE(v6) = a1 == 1;
      if ( ((*(_DWORD *)(v7 + 32) >> 10) & 1) != v6 )
      {
        *(_DWORD *)(v7 + 32) = *(_DWORD *)(v7 + 32) & 0xFFFFFBFF | (v6 << 10);
        if ( (*(_DWORD *)(*(_QWORD *)(a3 + 1792) + 32LL) & 0x100) != 0 )
        {
          RaidUnitMaintenanceTime(a3);
          RaidUnitAdaptiveIdleTimeout(a3);
        }
      }
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a3 + 1784));
  }
}
