/*
 * XREFs of RtlAddAccessAllowedObjectAce @ 0x1409BAE90
 * Callers:
 *     LocalGetAclForString @ 0x14069C8EC (LocalGetAclForString.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x140735770 (RtlpAddKnownAce.c)
 *     RtlpAddKnownObjectAce @ 0x1409BB5A0 (RtlpAddKnownObjectAce.c)
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
