/*
 * XREFs of RtlNewSecurityObjectEx @ 0x18000F510
 * Callers:
 *     <none>
 * Callees:
 *     RtlpNewSecurityObject @ 0x18000F5FC (RtlpNewSecurityObject.c)
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
           (int)ParentDescriptor,
           (int)CreatorDescriptor,
           (int)NewDescriptor,
           (unsigned __int64)&v9 & -(__int64)(ObjectType != 0LL),
           ObjectType != 0LL,
           IsDirectoryObject,
           AutoInheritFlags,
           Token,
           (__int64)GenericMapping);
}
