/*
 * XREFs of HviIsHypervisorMicrosoftCompatible @ 0x1C00CCEE4
 * Callers:
 *     ?ndisDoesSystemSupportSriov@@YAXXZ @ 0x1C002EF78 (-ndisDoesSystemSupportSriov@@YAXXZ.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1C002F148 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
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
