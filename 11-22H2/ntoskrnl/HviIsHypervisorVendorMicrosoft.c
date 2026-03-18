/*
 * XREFs of HviIsHypervisorVendorMicrosoft @ 0x140373BE0
 * Callers:
 *     KiIsHyperVCr3RspErrataPresent @ 0x140579318 (KiIsHyperVCr3RspErrataPresent.c)
 *     HvipApertureDetectParameters @ 0x1405B5DA0 (HvipApertureDetectParameters.c)
 *     EtwpTraceSystemInitialization @ 0x140B381EC (EtwpTraceSystemInitialization.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x140382EA0 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 */

bool HviIsHypervisorVendorMicrosoft()
{
  if ( !(unsigned __int8)HviIsAnyHypervisorPresent() )
    return 0;
  _RAX = 0x40000000LL;
  __asm { cpuid }
  if ( (_DWORD)_RBX != 1919117645 )
    return 0;
  return (_DWORD)_RCX == 1718580079 && (_DWORD)_RDX == 1984438388;
}
