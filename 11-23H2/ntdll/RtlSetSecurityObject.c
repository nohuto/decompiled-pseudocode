/*
 * XREFs of RtlSetSecurityObject @ 0x18007A4B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSetSecurityObject @ 0x18007A4E8 (RtlpSetSecurityObject.c)
 */

NTSTATUS __cdecl RtlSetSecurityObject(
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR ModificationDescriptor,
        PSECURITY_DESCRIPTOR *ObjectsSecurityDescriptor,
        PGENERIC_MAPPING GenericMapping,
        HANDLE TokenHandle)
{
  return RtlpSetSecurityObject(
           0,
           SecurityInformation,
           (int)ModificationDescriptor,
           (int)ObjectsSecurityDescriptor,
           0,
           0,
           (__int64)GenericMapping,
           TokenHandle);
}
