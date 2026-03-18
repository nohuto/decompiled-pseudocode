/*
 * XREFs of HviEnterKernelAperture @ 0x1405B5C64
 * Callers:
 *     HviCopyMemory @ 0x1405B5B64 (HviCopyMemory.c)
 *     HviCopyMemoryNonTemporal @ 0x1405B5BE0 (HviCopyMemoryNonTemporal.c)
 * Callees:
 *     HvipApertureVmfuncSwitchEptp @ 0x14042ADA0 (HvipApertureVmfuncSwitchEptp.c)
 *     HvipApertureDetectParameters @ 0x1405B5D10 (HvipApertureDetectParameters.c)
 *     HvipApertureDirectHypercall @ 0x1405B5E18 (HvipApertureDirectHypercall.c)
 */

char HviEnterKernelAperture()
{
  char result; // al

  result = byte_140D1BE6E;
  if ( !byte_140D1BE6E )
    result = HvipApertureDetectParameters();
  _disable();
  if ( !byte_140C0DC50 )
  {
    if ( byte_140D1BE6D )
      return HvipApertureVmfuncSwitchEptp();
    else
      return HvipApertureDirectHypercall(6LL, 1LL);
  }
  return result;
}
