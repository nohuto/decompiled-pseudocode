/*
 * XREFs of ObGetObjectSecurity @ 0x140736200
 * Callers:
 *     SepSetProcessTrustLabelAceForToken @ 0x1402B3740 (SepSetProcessTrustLabelAceForToken.c)
 *     DifObGetObjectSecurityWrapper @ 0x1405E8510 (DifObGetObjectSecurityWrapper.c)
 * Callees:
 *     ObpGetObjectSecurity @ 0x140736220 (ObpGetObjectSecurity.c)
 */

NTSTATUS __stdcall ObGetObjectSecurity(
        PVOID Object,
        PSECURITY_DESCRIPTOR *SecurityDescriptor,
        PBOOLEAN MemoryAllocated)
{
  return ObpGetObjectSecurity(Object, SecurityDescriptor, MemoryAllocated, 0LL);
}
