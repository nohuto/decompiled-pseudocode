/*
 * XREFs of HviIsHypervisorMicrosoftCompatible @ 0x1C00D3548
 * Callers:
 *     ?ndisDoesSystemSupportSriov@@YAXXZ @ 0x1C002EB04 (-ndisDoesSystemSupportSriov@@YAXXZ.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1C002C108 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
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
