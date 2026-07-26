/*
 * XREFs of HviGetHardwareFeatures @ 0x1C00D34CC
 * Callers:
 *     ?ndisDoesSystemSupportSriov@@YAXXZ @ 0x1C002EB04 (-ndisDoesSystemSupportSriov@@YAXXZ.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1C002C108 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 */

__int64 HviGetHardwareFeatures()
{
  __int64 v0; // r10
  __int64 result; // rax

  if ( HviIsAnyHypervisorPresent() )
  {
    _RAX = 0x40000000LL;
    __asm { cpuid }
  }
  else
  {
    result = 0LL;
  }
  if ( (unsigned int)result < 0x40000006 )
  {
    *(_QWORD *)v0 = 0LL;
    *(_QWORD *)(v0 + 8) = 0LL;
  }
  else
  {
    _RAX = 1073741830LL;
    __asm { cpuid }
    *(_DWORD *)v0 = result;
    *(_DWORD *)(v0 + 4) = _RBX;
    *(_DWORD *)(v0 + 8) = _RCX;
    *(_DWORD *)(v0 + 12) = _RDX;
  }
  return result;
}
