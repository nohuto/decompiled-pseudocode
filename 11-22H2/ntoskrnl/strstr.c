/*
 * XREFs of strstr @ 0x1403D8B70
 * Callers:
 *     InbvDetermineFunction @ 0x1403871F8 (InbvDetermineFunction.c)
 *     HalInitializeBios @ 0x14039ED70 (HalInitializeBios.c)
 *     KiDetermineRetpolineEnablement @ 0x1403B1A04 (KiDetermineRetpolineEnablement.c)
 *     HalpIommuInitializeDmaGuardPolicy @ 0x1403B4D94 (HalpIommuInitializeDmaGuardPolicy.c)
 *     HvlDebuggerSupportInitialize @ 0x1403B5C64 (HvlDebuggerSupportInitialize.c)
 *     SepIsOptionPresent @ 0x140824070 (SepIsOptionPresent.c)
 *     HvlPhase0Initialize @ 0x1408273D8 (HvlPhase0Initialize.c)
 *     KiInitializeBootStructures @ 0x140A8BDF0 (KiInitializeBootStructures.c)
 *     KiMatchLoadOption @ 0x140A902C0 (KiMatchLoadOption.c)
 *     KdInitSystem @ 0x140AB2040 (KdInitSystem.c)
 *     CcInitializeBcbProfiler @ 0x140B18354 (CcInitializeBcbProfiler.c)
 *     sub_140B1A730 @ 0x140B1A730 (sub_140B1A730.c)
 *     VhdInitialize @ 0x140B3F4DC (VhdInitialize.c)
 *     Phase1InitializationDiscard @ 0x140B4FF9C (Phase1InitializationDiscard.c)
 *     InbvDriverInitialize @ 0x140B52524 (InbvDriverInitialize.c)
 *     BvgaDriverInitialize @ 0x140B525E0 (BvgaDriverInitialize.c)
 *     InitBootProcessor @ 0x140B52774 (InitBootProcessor.c)
 *     HalpSetPlatformFlags @ 0x140B66E4C (HalpSetPlatformFlags.c)
 *     KiPerformGroupConfiguration @ 0x140B6A38C (KiPerformGroupConfiguration.c)
 *     ViInitSystemPhase0 @ 0x140B6A9C4 (ViInitSystemPhase0.c)
 *     HalpMiscGetParameters @ 0x140B6B158 (HalpMiscGetParameters.c)
 *     KeInitializeClock @ 0x140B6BA78 (KeInitializeClock.c)
 *     KitpInitAitSampleRate @ 0x140B731F4 (KitpInitAitSampleRate.c)
 *     MiInitializeBootDefaults @ 0x140B73284 (MiInitializeBootDefaults.c)
 *     MiInitializeSystemDefaults @ 0x140B737C0 (MiInitializeSystemDefaults.c)
 *     KiInitializeNxSupportDiscard @ 0x140B73EE8 (KiInitializeNxSupportDiscard.c)
 *     CimfsInitialize @ 0x140B75330 (CimfsInitialize.c)
 *     CmpGetBiosVersion @ 0x140B996AC (CmpGetBiosVersion.c)
 *     RamdiskStart @ 0x140B9C590 (RamdiskStart.c)
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
