/*
 * XREFs of HalpIsXboxNanovisorPresent @ 0x14037861C
 * Callers:
 *     HalpHvVpStartEnabled @ 0x140377550 (HalpHvVpStartEnabled.c)
 *     HalpApicSetupRegisterAccess @ 0x140377C1C (HalpApicSetupRegisterAccess.c)
 *     HalpHvIsFrequencyAvailable @ 0x14037975C (HalpHvIsFrequencyAvailable.c)
 *     HalpIsHvUsedForReboot @ 0x14050B848 (HalpIsHvUsedForReboot.c)
 *     HalpHvStartVirtualProcessor @ 0x14050C140 (HalpHvStartVirtualProcessor.c)
 *     HalpHvStartProcessor @ 0x14051B368 (HalpHvStartProcessor.c)
 *     HaliAcpiMachineStateInit @ 0x14085E050 (HaliAcpiMachineStateInit.c)
 *     HalpMiscGetParameters @ 0x140B6A208 (HalpMiscGetParameters.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 */

char HalpIsXboxNanovisorPresent()
{
  char v0; // r8

  v0 = byte_140C0995E;
  if ( byte_140C0995E == -1 )
  {
    v0 = 0;
    _RAX = 1LL;
    __asm { cpuid }
    if ( (int)_RCX < 0 )
    {
      _RAX = 1073741825LL;
      __asm { cpuid }
      v0 = (_DWORD)_RAX == 1986945624;
    }
    byte_140C0995E = v0;
  }
  return v0;
}
