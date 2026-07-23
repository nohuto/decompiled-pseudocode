/*
 * XREFs of NtAccessCheck @ 0x140346990
 * Callers:
 *     <none>
 * Callees:
 *     SeAccessCheckByType @ 0x1402B3D50 (SeAccessCheckByType.c)
 */

NTSTATUS __cdecl NtAccessCheck(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        HANDLE ClientToken,
        ACCESS_MASK DesiredAccess,
        PGENERIC_MAPPING GenericMapping,
        PPRIVILEGE_SET PrivilegeSet,
        PULONG PrivilegeSetLength,
        PACCESS_MASK GrantedAccess,
        PNTSTATUS AccessStatus)
{
  return SeAccessCheckByType(
           (__int16 *)SecurityDescriptor,
           0LL,
           ClientToken,
           DesiredAccess,
           0LL,
           0,
           GenericMapping,
           PrivilegeSet,
           PrivilegeSetLength,
           GrantedAccess,
           AccessStatus,
           0);
}
