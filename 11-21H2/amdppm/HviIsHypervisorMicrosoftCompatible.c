/*
 * XREFs of HviIsHypervisorMicrosoftCompatible @ 0x1C000B9D4
 * Callers:
 *     HviGetHypervisorFeatures @ 0x1C000B938 (HviGetHypervisorFeatures.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002C70 (__security_check_cookie.c)
 *     HviIsAnyHypervisorPresent @ 0x1C000B978 (HviIsAnyHypervisorPresent.c)
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
