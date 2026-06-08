/*
 * XREFs of PctPlatformCounterState @ 0x1C0001EE0
 * Callers:
 *     PrepareEnergyValue @ 0x1C0001E90 (PrepareEnergyValue.c)
 *     PctSnapPlatformCtrsEx @ 0x1C0003AD4 (PctSnapPlatformCtrsEx.c)
 *     PctGetPlatformCtr @ 0x1C00258F0 (PctGetPlatformCtr.c)
 *     PctEnumPlatfromCtr @ 0x1C0025960 (PctEnumPlatfromCtr.c)
 *     PctDiscoverPlatformCtrs @ 0x1C0025F30 (PctDiscoverPlatformCtrs.c)
 *     ConfigureIntelEmu @ 0x1C0026140 (ConfigureIntelEmu.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PctPlatformCounterState(__int64 a1, int a2)
{
  __int64 v2; // r8
  __int64 v3; // r9

  v2 = 0LL;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 1080) + 312LL);
  if ( v3 )
    return v3 + 40LL * a2;
  return v2;
}
