/*
 * XREFs of RtlAddAccessAllowedObjectAce @ 0x1800F3FD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAddKnownObjectAce @ 0x1800F4AB0 (RtlpAddKnownObjectAce.c)
 */

NTSTATUS __cdecl RtlAddAccessAllowedObjectAce(
        PACL Acl,
        ULONG AceRevision,
        ULONG AceFlags,
        ACCESS_MASK AccessMask,
        PGUID ObjectTypeGuid,
        PGUID InheritedObjectTypeGuid,
        PSID Sid)
{
  if ( ObjectTypeGuid || InheritedObjectTypeGuid )
    return RtlpAddKnownObjectAce(Acl, (__int64)ObjectTypeGuid, (__int64)InheritedObjectTypeGuid, Sid, 5);
  else
    return RtlpAddKnownAce(Acl, AceRevision, AceFlags, AccessMask, (unsigned __int8 *)Sid, 0);
}
