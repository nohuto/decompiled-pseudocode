/*
 * XREFs of HviIsAnyHypervisorPresent @ 0x1C005EDB0
 * Callers:
 *     AcpiRootIsFeatureSupported @ 0x1C003D940 (AcpiRootIsFeatureSupported.c)
 *     HviGetHypervisorFeatures @ 0x1C005ED30 (HviGetHypervisorFeatures.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
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
