/*
 * XREFs of HviIsAnyHypervisorPresent @ 0x1C0002E08
 * Callers:
 *     HviGetHypervisorFeatures @ 0x1C0002DA8 (HviGetHypervisorFeatures.c)
 *     RegisterKernelPepIdleStatesV2 @ 0x1C003E99C (RegisterKernelPepIdleStatesV2.c)
 *     RegisterKernelPlatformStates @ 0x1C003F26C (RegisterKernelPlatformStates.c)
 *     ProcLibGlobalInit @ 0x1C00462E4 (ProcLibGlobalInit.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003340 (__security_check_cookie.c)
 */

bool HviIsAnyHypervisorPresent()
{
  char v1; // r8

  _RAX = 1LL;
  v1 = 0;
  __asm { cpuid }
  if ( (int)_RCX < 0 )
  {
    _RAX = 1073741825LL;
    __asm { cpuid }
    return (_DWORD)_RAX != 1986945624;
  }
  return v1;
}
