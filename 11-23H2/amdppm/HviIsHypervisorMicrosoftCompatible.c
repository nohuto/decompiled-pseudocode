/*
 * XREFs of HviIsHypervisorMicrosoftCompatible @ 0x1C000C3B8
 * Callers:
 *     HviGetHypervisorFeatures @ 0x1C000C31C (HviGetHypervisorFeatures.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002BE0 (__security_check_cookie.c)
 *     HviIsAnyHypervisorPresent @ 0x1C000C35C (HviIsAnyHypervisorPresent.c)
 */

bool HviIsHypervisorMicrosoftCompatible()
{
  if ( HviIsAnyHypervisorPresent() )
  {
    _RAX = 1073741825LL;
    __asm { cpuid }
  }
  else
  {
    LODWORD(_RAX) = 0;
  }
  return (_DWORD)_RAX == 824407624;
}
