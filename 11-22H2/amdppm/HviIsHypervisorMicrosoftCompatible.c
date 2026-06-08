/*
 * XREFs of HviIsHypervisorMicrosoftCompatible @ 0x1C000C318
 * Callers:
 *     HviGetHypervisorFeatures @ 0x1C000C27C (HviGetHypervisorFeatures.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002BC0 (__security_check_cookie.c)
 *     HviIsAnyHypervisorPresent @ 0x1C000C2BC (HviIsAnyHypervisorPresent.c)
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
