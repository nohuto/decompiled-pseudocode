/*
 * XREFs of RtlAddAccessAllowedObjectAce @ 0x1409B7D90
 * Callers:
 *     sub_140675DA8 @ 0x140675DA8 (sub_140675DA8.c)
 * Callees:
 *     sub_1407B4900 @ 0x1407B4900 (sub_1407B4900.c)
 *     sub_1409B84A4 @ 0x1409B84A4 (sub_1409B84A4.c)
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
    return sub_1409B84A4(Acl, (__int64)ObjectTypeGuid, (__int64)InheritedObjectTypeGuid, Sid, 5);
  else
    return sub_1407B4900(Acl, AceRevision, AceFlags, AccessMask, (unsigned __int8 *)Sid, 0);
}
