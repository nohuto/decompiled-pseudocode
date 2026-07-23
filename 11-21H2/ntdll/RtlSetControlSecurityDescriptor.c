/*
 * XREFs of RtlSetControlSecurityDescriptor @ 0x180071C90
 * Callers:
 *     RtlpSysVolCreateSecurityDescriptor @ 0x180071758 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlSetAttributesSecurityDescriptor @ 0x1800F2070 (RtlSetAttributesSecurityDescriptor.c)
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
