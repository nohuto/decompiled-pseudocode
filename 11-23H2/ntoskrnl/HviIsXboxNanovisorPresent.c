/*
 * XREFs of HviIsXboxNanovisorPresent @ 0x140351668
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1402C55B0 (PpmIdleExecuteTransition.c)
 *     HalpTscSynchronization @ 0x14039ACF0 (HalpTscSynchronization.c)
 *     KiIntSteerDetermineSteeringEnabled @ 0x140B748B0 (KiIntSteerDetermineSteeringEnabled.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

char HviIsXboxNanovisorPresent()
{
  char v0; // r8

  v0 = byte_140C097EC;
  if ( byte_140C097EC == -1 )
  {
    _RAX = 1LL;
    v0 = 0;
    __asm { cpuid }
    if ( (int)_RCX < 0 )
    {
      _RAX = 1073741825LL;
      __asm { cpuid }
      v0 = (_DWORD)_RAX == 1986945624;
    }
    byte_140C097EC = v0;
  }
  return v0;
}
