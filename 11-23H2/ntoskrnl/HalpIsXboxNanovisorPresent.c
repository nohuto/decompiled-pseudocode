/*
 * XREFs of HalpIsXboxNanovisorPresent @ 0x1403787BC
 * Callers:
 *     HalpHvVpStartEnabled @ 0x1403776F0 (HalpHvVpStartEnabled.c)
 *     HalpApicSetupRegisterAccess @ 0x140377DBC (HalpApicSetupRegisterAccess.c)
 *     HalpHvIsFrequencyAvailable @ 0x1403798FC (HalpHvIsFrequencyAvailable.c)
 *     HalpIsHvUsedForReboot @ 0x14050BD98 (HalpIsHvUsedForReboot.c)
 *     HalpHvStartVirtualProcessor @ 0x14050C690 (HalpHvStartVirtualProcessor.c)
 *     HalpHvStartProcessor @ 0x14051B8B8 (HalpHvStartProcessor.c)
 *     HaliAcpiMachineStateInit @ 0x14085E290 (HaliAcpiMachineStateInit.c)
 *     HalpMiscGetParameters @ 0x140B6A208 (HalpMiscGetParameters.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
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
