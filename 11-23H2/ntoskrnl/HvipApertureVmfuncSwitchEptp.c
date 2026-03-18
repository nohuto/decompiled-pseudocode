/*
 * XREFs of HvipApertureVmfuncSwitchEptp @ 0x14042ADA0
 * Callers:
 *     HviEnterKernelAperture @ 0x1405B5C64 (HviEnterKernelAperture.c)
 *     HviLeaveKernelAperture @ 0x1405B5CC4 (HviLeaveKernelAperture.c)
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
