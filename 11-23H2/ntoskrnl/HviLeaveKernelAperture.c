/*
 * XREFs of HviLeaveKernelAperture @ 0x1405B6234
 * Callers:
 *     HviCopyMemory @ 0x1405B60D4 (HviCopyMemory.c)
 *     HviCopyMemoryNonTemporal @ 0x1405B6150 (HviCopyMemoryNonTemporal.c)
 * Callees:
 *     HvipApertureVmfuncSwitchEptp @ 0x14042B130 (HvipApertureVmfuncSwitchEptp.c)
 *     HvipApertureDirectHypercall @ 0x1405B6388 (HvipApertureDirectHypercall.c)
 */

__int64 HviLeaveKernelAperture()
{
  __int64 result; // rax

  if ( !byte_140C0DC50 )
  {
    if ( byte_140D1BE5D )
      result = HvipApertureVmfuncSwitchEptp();
    else
      result = HvipApertureDirectHypercall(6LL, 0LL);
  }
  _mm_lfence();
  _enable();
  return result;
}
