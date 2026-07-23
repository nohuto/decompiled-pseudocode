/*
 * XREFs of RtlNewSecurityObjectWithMultipleInheritance @ 0x1800E31C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpNewSecurityObject @ 0x180016C00 (RtlpNewSecurityObject.c)
 */

NTSTATUS __cdecl RtlNewSecurityObjectWithMultipleInheritance(
        PSECURITY_DESCRIPTOR ParentDescriptor,
        PSECURITY_DESCRIPTOR CreatorDescriptor,
        PSECURITY_DESCRIPTOR *NewDescriptor,
        GUID **ObjectType,
        ULONG GuidCount,
        BOOLEAN IsDirectoryObject,
        ULONG AutoInheritFlags,
        HANDLE Token,
        PGENERIC_MAPPING GenericMapping)
{
  return RtlpNewSecurityObject(
           (__int64)ParentDescriptor,
           CreatorDescriptor,
           NewDescriptor,
           (__int64)ObjectType,
           GuidCount,
           IsDirectoryObject,
           AutoInheritFlags,
           Token,
           GenericMapping);
}
