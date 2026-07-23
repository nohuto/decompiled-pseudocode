/*
 * XREFs of HvipApertureVmfuncSwitchEptp @ 0x14042B130
 * Callers:
 *     HviEnterKernelAperture @ 0x1405B61D4 (HviEnterKernelAperture.c)
 *     HviLeaveKernelAperture @ 0x1405B6234 (HviLeaveKernelAperture.c)
 * Callees:
 *     <none>
 */

__int64 HvipApertureVmfuncSwitchEptp()
{
  __int64 result; // rax

  result = 0LL;
  __asm { vmfunc }
  return result;
}
