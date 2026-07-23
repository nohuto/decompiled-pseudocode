/*
 * XREFs of ObGetObjectSecurity @ 0x1407363F0
 * Callers:
 *     SepSetProcessTrustLabelAceForToken @ 0x1402B39D0 (SepSetProcessTrustLabelAceForToken.c)
 *     DifObGetObjectSecurityWrapper @ 0x1405E8A80 (DifObGetObjectSecurityWrapper.c)
 * Callees:
 *     ObpGetObjectSecurity @ 0x140736410 (ObpGetObjectSecurity.c)
 */

NTSTATUS __stdcall ObGetObjectSecurity(
        PVOID Object,
        PSECURITY_DESCRIPTOR *SecurityDescriptor,
        PBOOLEAN MemoryAllocated)
{
  return ObpGetObjectSecurity(Object, SecurityDescriptor, MemoryAllocated, 0LL);
}
