/*
 * XREFs of HviEnterKernelAperture @ 0x1405B61D4
 * Callers:
 *     HviCopyMemory @ 0x1405B60D4 (HviCopyMemory.c)
 *     HviCopyMemoryNonTemporal @ 0x1405B6150 (HviCopyMemoryNonTemporal.c)
 * Callees:
 *     HvipApertureVmfuncSwitchEptp @ 0x14042B130 (HvipApertureVmfuncSwitchEptp.c)
 *     HvipApertureDetectParameters @ 0x1405B6280 (HvipApertureDetectParameters.c)
 *     HvipApertureDirectHypercall @ 0x1405B6388 (HvipApertureDirectHypercall.c)
 */

char HviEnterKernelAperture()
{
  char result; // al

  result = byte_140D1BE5E;
  if ( !byte_140D1BE5E )
    result = HvipApertureDetectParameters();
  _disable();
  if ( !byte_140C0DC50 )
  {
    if ( byte_140D1BE5D )
      return HvipApertureVmfuncSwitchEptp();
    else
      return HvipApertureDirectHypercall(6LL, 1LL);
  }
  return result;
}
