/*
 * XREFs of RtlSetControlSecurityDescriptor @ 0x14085CE60
 * Callers:
 *     DrvDbGetRegistrarSecurityDescriptor @ 0x14085CD78 (DrvDbGetRegistrarSecurityDescriptor.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1409BEBE4 (RtlpSysVolCreateSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlSetControlSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        SECURITY_DESCRIPTOR_CONTROL ControlBitsOfInterest,
        SECURITY_DESCRIPTOR_CONTROL ControlBitsToSet)
{
  if ( (~ControlBitsOfInterest & ControlBitsToSet) != 0 || (ControlBitsOfInterest & 0xC03F) != 0 )
    return -1073741811;
  *((_WORD *)SecurityDescriptor + 1) = ControlBitsToSet | *((_WORD *)SecurityDescriptor + 1) & ~ControlBitsOfInterest;
  return 0;
}
