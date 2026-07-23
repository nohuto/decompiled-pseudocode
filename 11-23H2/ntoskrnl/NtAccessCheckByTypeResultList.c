/*
 * XREFs of NtAccessCheckByTypeResultList @ 0x1405B7DE0
 * Callers:
 *     <none>
 * Callees:
 *     SeAccessCheckByType @ 0x1402B3D50 (SeAccessCheckByType.c)
 */

NTSTATUS __cdecl NtAccessCheckByTypeResultList(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSID PrincipalSelfSid,
        HANDLE ClientToken,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE_LIST ObjectTypeList,
        ULONG ObjectTypeListLength,
        PGENERIC_MAPPING GenericMapping,
        PPRIVILEGE_SET PrivilegeSet,
        PULONG PrivilegeSetLength,
        PACCESS_MASK GrantedAccess,
        PNTSTATUS AccessStatus)
{
  return SeAccessCheckByType(
           (__int16 *)SecurityDescriptor,
           PrincipalSelfSid,
           ClientToken,
           DesiredAccess,
           (__int64)ObjectTypeList,
           ObjectTypeListLength,
           GenericMapping,
           PrivilegeSet,
           PrivilegeSetLength,
           GrantedAccess,
           AccessStatus,
           1);
}
