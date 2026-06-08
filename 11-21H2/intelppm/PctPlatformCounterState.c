/*
 * XREFs of PctPlatformCounterState @ 0x1C0024EC0
 * Callers:
 *     ConfigureIntelEmu @ 0x1C00248C0 (ConfigureIntelEmu.c)
 *     PctSnapPlatformCtrs @ 0x1C0024AA0 (PctSnapPlatformCtrs.c)
 *     PrepareEnergyValue @ 0x1C0024C70 (PrepareEnergyValue.c)
 *     PctEnumPlatfromCtr @ 0x1C0024CC0 (PctEnumPlatfromCtr.c)
 *     PctDiscoverPlatformCtrs @ 0x1C0024D20 (PctDiscoverPlatformCtrs.c)
 *     PctGetPlatformCtr @ 0x1C002DF20 (PctGetPlatformCtr.c)
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
