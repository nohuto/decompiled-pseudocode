/*
 * XREFs of HviIsAnyHypervisorPresent @ 0x1C002F148
 * Callers:
 *     ?ndisDoesSystemSupportSriov@@YAXXZ @ 0x1C002EF78 (-ndisDoesSystemSupportSriov@@YAXXZ.c)
 *     HviGetHardwareFeatures @ 0x1C00CCE68 (HviGetHardwareFeatures.c)
 *     HviIsHypervisorMicrosoftCompatible @ 0x1C00CCEE4 (HviIsHypervisorMicrosoftCompatible.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
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
