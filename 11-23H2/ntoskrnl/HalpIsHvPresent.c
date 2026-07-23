/*
 * XREFs of HalpIsHvPresent @ 0x14037811C
 * Callers:
 *     HalSocRequestConfigurationData @ 0x140377F68 (HalSocRequestConfigurationData.c)
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1403780DC (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpArtAvailable @ 0x140378190 (HalpArtAvailable.c)
 *     HalpTimerFindIdealPerformanceCounterSource @ 0x14037AFB0 (HalpTimerFindIdealPerformanceCounterSource.c)
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x1403AF090 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     HalpNmiReboot @ 0x14051C2A0 (HalpNmiReboot.c)
 *     HalpProcInitSystem @ 0x140A8A680 (HalpProcInitSystem.c)
 *     HalpLbrInitialize @ 0x140A9138C (HalpLbrInitialize.c)
 *     HalpMiscGetParameters @ 0x140B6A208 (HalpMiscGetParameters.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
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
