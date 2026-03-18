/*
 * XREFs of HviIsHypervisorVendorMicrosoft @ 0x140383740
 * Callers:
 *     KiIsHyperVCr3RspErrataPresent @ 0x140579288 (KiIsHyperVCr3RspErrataPresent.c)
 *     HvipApertureDetectParameters @ 0x1405B5D10 (HvipApertureDetectParameters.c)
 *     EtwpTraceSystemInitialization @ 0x140B4C830 (EtwpTraceSystemInitialization.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x140382850 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 */

bool HviIsHypervisorVendorMicrosoft()
{
  if ( !HviIsAnyHypervisorPresent() )
    return 0;
  _RAX = 0x40000000LL;
  __asm { cpuid }
  if ( (_DWORD)_RBX != 1919117645 )
    return 0;
  return (_DWORD)_RCX == 1718580079 && (_DWORD)_RDX == 1984438388;
}
