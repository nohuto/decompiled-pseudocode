/*
 * XREFs of HviIsAnyHypervisorPresent @ 0x1C002C108
 * Callers:
 *     ?ndisDoesSystemSupportSriov@@YAXXZ @ 0x1C002EB04 (-ndisDoesSystemSupportSriov@@YAXXZ.c)
 *     HviGetHardwareFeatures @ 0x1C00D34CC (HviGetHardwareFeatures.c)
 *     HviIsHypervisorMicrosoftCompatible @ 0x1C00D3548 (HviIsHypervisorMicrosoftCompatible.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
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
