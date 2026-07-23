/*
 * XREFs of strstr @ 0x1403D93B0
 * Callers:
 *     InbvDetermineFunction @ 0x1403881D8 (InbvDetermineFunction.c)
 *     HalInitializeBios @ 0x14039F240 (HalInitializeBios.c)
 *     KiDetermineRetpolineEnablement @ 0x1403B2274 (KiDetermineRetpolineEnablement.c)
 *     HalpIommuInitializeDmaGuardPolicy @ 0x1403B5604 (HalpIommuInitializeDmaGuardPolicy.c)
 *     HvlDebuggerSupportInitialize @ 0x1403B64D4 (HvlDebuggerSupportInitialize.c)
 *     HvlPhase0Initialize @ 0x140820198 (HvlPhase0Initialize.c)
 *     SepIsOptionPresent @ 0x1408230A8 (SepIsOptionPresent.c)
 *     KiInitializeBootStructures @ 0x140A8B590 (KiInitializeBootStructures.c)
 *     KiMatchLoadOption @ 0x140A90140 (KiMatchLoadOption.c)
 *     KdInitSystem @ 0x140AB1040 (KdInitSystem.c)
 *     CcInitializeBcbProfiler @ 0x140B17354 (CcInitializeBcbProfiler.c)
 *     sub_140B19730 @ 0x140B19730 (sub_140B19730.c)
 *     VhdInitialize @ 0x140B3BDDC (VhdInitialize.c)
 *     Phase1InitializationDiscard @ 0x140B4FFBC (Phase1InitializationDiscard.c)
 *     InbvDriverInitialize @ 0x140B52524 (InbvDriverInitialize.c)
 *     BvgaDriverInitialize @ 0x140B525E0 (BvgaDriverInitialize.c)
 *     InitBootProcessor @ 0x140B52774 (InitBootProcessor.c)
 *     HalpSetPlatformFlags @ 0x140B65AAC (HalpSetPlatformFlags.c)
 *     KiPerformGroupConfiguration @ 0x140B69430 (KiPerformGroupConfiguration.c)
 *     ViInitSystemPhase0 @ 0x140B69A68 (ViInitSystemPhase0.c)
 *     HalpMiscGetParameters @ 0x140B6A208 (HalpMiscGetParameters.c)
 *     KeInitializeClock @ 0x140B6AB28 (KeInitializeClock.c)
 *     KitpInitAitSampleRate @ 0x140B721AC (KitpInitAitSampleRate.c)
 *     MiInitializeBootDefaults @ 0x140B7223C (MiInitializeBootDefaults.c)
 *     MiInitializeSystemDefaults @ 0x140B72778 (MiInitializeSystemDefaults.c)
 *     KiInitializeNxSupportDiscard @ 0x140B7313C (KiInitializeNxSupportDiscard.c)
 *     CimfsInitialize @ 0x140B74594 (CimfsInitialize.c)
 *     CmpGetBiosVersion @ 0x140B986AC (CmpGetBiosVersion.c)
 *     RamdiskStart @ 0x140B9B590 (RamdiskStart.c)
 * Callees:
 *     <none>
 */

char *__cdecl strstr(const char *Str, const char *SubStr)
{
  char *v3; // r8
  signed __int64 v5; // r9
  const char *v6; // rdx

  v3 = (char *)Str;
  if ( !*SubStr )
    return (char *)Str;
  if ( *Str )
  {
    v5 = Str - SubStr;
    while ( 2 )
    {
      v6 = SubStr;
      do
      {
        if ( !*v6 )
          return v3;
        if ( v6[v5] != *v6 )
          break;
        ++v6;
      }
      while ( v6[v5] );
      if ( !*v6 )
        return v3;
      ++v3;
      ++v5;
      if ( *v3 )
        continue;
      break;
    }
  }
  return 0LL;
}
