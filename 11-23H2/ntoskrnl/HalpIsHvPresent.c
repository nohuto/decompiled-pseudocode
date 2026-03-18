/*
 * XREFs of HalpIsHvPresent @ 0x140377F7C
 * Callers:
 *     HalSocRequestConfigurationData @ 0x140377DC8 (HalSocRequestConfigurationData.c)
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x140377F3C (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpArtAvailable @ 0x140377FF0 (HalpArtAvailable.c)
 *     HalpTimerFindIdealPerformanceCounterSource @ 0x14037AE10 (HalpTimerFindIdealPerformanceCounterSource.c)
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x1403AEEB0 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     HalpNmiReboot @ 0x14051BD50 (HalpNmiReboot.c)
 *     HalpProcInitSystem @ 0x140A8A680 (HalpProcInitSystem.c)
 *     HalpLbrInitialize @ 0x140A9150C (HalpLbrInitialize.c)
 *     HalpMiscGetParameters @ 0x140B6A208 (HalpMiscGetParameters.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 */

char HalpIsHvPresent()
{
  char v0; // r8

  v0 = byte_140C0995F;
  if ( byte_140C0995F == -1 )
  {
    v0 = 0;
    _RAX = 1LL;
    __asm { cpuid }
    if ( (int)_RCX < 0 )
    {
      _RAX = 1073741825LL;
      __asm { cpuid }
      v0 = (_DWORD)_RAX != 1986945624;
    }
    byte_140C0995F = v0;
  }
  return v0;
}
