/*
 * XREFs of AmdPctPlatformCounterState @ 0x1C0002E30
 * Callers:
 *     AmdPctEnumPlatfromCtr @ 0x1C0002DB0 (AmdPctEnumPlatfromCtr.c)
 *     AmdPctSnapPlatformCtrsEx @ 0x1C0002E8C (AmdPctSnapPlatformCtrsEx.c)
 *     AmdPrepareEnergyValue @ 0x1C0003070 (AmdPrepareEnergyValue.c)
 *     AmdConfigureEmu @ 0x1C0020480 (AmdConfigureEmu.c)
 *     AmdPctCheckCounterDependency @ 0x1C00204C0 (AmdPctCheckCounterDependency.c)
 *     AmdPctDiscoverCounters @ 0x1C00205D4 (AmdPctDiscoverCounters.c)
 *     AmdPctGetPlatformCtr @ 0x1C0020840 (AmdPctGetPlatformCtr.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AmdPctPlatformCounterState(__int64 a1, int a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // r9

  v2 = 0LL;
  if ( a2 >= 0 )
  {
    if ( a2 >= 2 )
    {
      if ( a2 < 3 )
      {
        v4 = *(_QWORD *)(*(_QWORD *)(a1 + 1248) + 32LL);
        if ( v4 )
          return v4 + 40LL * (a2 - 2);
      }
    }
    else
    {
      v3 = *(_QWORD *)(*(_QWORD *)(a1 + 1080) + 312LL);
      if ( v3 )
        return v3 + 40LL * a2;
    }
  }
  return v2;
}
