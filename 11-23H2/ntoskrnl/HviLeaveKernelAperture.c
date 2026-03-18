/*
 * XREFs of HviLeaveKernelAperture @ 0x1405B5CC4
 * Callers:
 *     HviCopyMemory @ 0x1405B5B64 (HviCopyMemory.c)
 *     HviCopyMemoryNonTemporal @ 0x1405B5BE0 (HviCopyMemoryNonTemporal.c)
 * Callees:
 *     HvipApertureVmfuncSwitchEptp @ 0x14042ADA0 (HvipApertureVmfuncSwitchEptp.c)
 *     HvipApertureDirectHypercall @ 0x1405B5E18 (HvipApertureDirectHypercall.c)
 */

__int64 HviLeaveKernelAperture()
{
  __int64 result; // rax

  if ( !byte_140C0DC50 )
  {
    if ( byte_140D1BE6D )
      result = HvipApertureVmfuncSwitchEptp();
    else
      result = HvipApertureDirectHypercall(6LL, 0LL);
  }
  _mm_lfence();
  _enable();
  return result;
}
