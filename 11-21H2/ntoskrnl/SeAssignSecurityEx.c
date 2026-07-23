/*
 * XREFs of SeAssignSecurityEx @ 0x1406BC320
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402A49D0 @ 0x1402A49D0 (sub_1402A49D0.c)
 */

NTSTATUS __stdcall SeAssignSecurityEx(
        PSECURITY_DESCRIPTOR ParentDescriptor,
        PSECURITY_DESCRIPTOR ExplicitDescriptor,
        PSECURITY_DESCRIPTOR *NewDescriptor,
        GUID *ObjectType,
        BOOLEAN IsDirectoryObject,
        ULONG AutoInheritFlags,
        PSECURITY_SUBJECT_CONTEXT SubjectContext,
        PGENERIC_MAPPING GenericMapping,
        POOL_TYPE PoolType)
{
  return sub_1402A49D0(
           (int)ParentDescriptor,
           (int)ExplicitDescriptor,
           (int)NewDescriptor,
           (__int64)ObjectType,
           IsDirectoryObject,
           AutoInheritFlags,
           0LL,
           (__int64)SubjectContext,
           (__int64)GenericMapping);
}
