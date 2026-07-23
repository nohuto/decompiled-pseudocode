/*
 * XREFs of RtlNewSecurityObjectEx @ 0x18007E190
 * Callers:
 *     <none>
 * Callees:
 *     RtlpNewSecurityObject @ 0x180016C00 (RtlpNewSecurityObject.c)
 */

NTSTATUS __cdecl RtlNewSecurityObjectEx(
        PSECURITY_DESCRIPTOR ParentDescriptor,
        PSECURITY_DESCRIPTOR CreatorDescriptor,
        PSECURITY_DESCRIPTOR *NewDescriptor,
        GUID *ObjectType,
        BOOLEAN IsDirectoryObject,
        ULONG AutoInheritFlags,
        HANDLE Token,
        PGENERIC_MAPPING GenericMapping)
{
  GUID *v9; // [rsp+78h] [rbp+20h] BYREF

  v9 = ObjectType;
  return RtlpNewSecurityObject(
           (__int64)ParentDescriptor,
           CreatorDescriptor,
           NewDescriptor,
           (unsigned __int64)&v9 & -(__int64)(ObjectType != 0LL),
           ObjectType != 0LL,
           IsDirectoryObject,
           AutoInheritFlags,
           Token,
           GenericMapping);
}
