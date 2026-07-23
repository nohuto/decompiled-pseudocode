/*
 * XREFs of RtlAddAuditAccessObjectAce @ 0x1409B80E0
 * Callers:
 *     sub_140675DA8 @ 0x140675DA8 (sub_140675DA8.c)
 * Callees:
 *     sub_1407B4900 @ 0x1407B4900 (sub_1407B4900.c)
 *     sub_1409B84A4 @ 0x1409B84A4 (sub_1409B84A4.c)
 */

NTSTATUS __cdecl RtlAddAuditAccessObjectAce(
        PACL Acl,
        ULONG AceRevision,
        ULONG AceFlags,
        ACCESS_MASK AccessMask,
        PGUID ObjectTypeGuid,
        PGUID InheritedObjectTypeGuid,
        PSID Sid,
        BOOLEAN AuditSuccess,
        BOOLEAN AuditFailure)
{
  ULONG v9; // eax
  int v10; // r8d

  v9 = AceFlags | 0x40;
  if ( !AuditSuccess )
    v9 = AceFlags;
  v10 = v9 | 0x80;
  if ( !AuditFailure )
    v10 = v9;
  if ( ObjectTypeGuid || InheritedObjectTypeGuid )
    return sub_1409B84A4(Acl, (__int64)ObjectTypeGuid, (__int64)InheritedObjectTypeGuid, Sid, 7);
  else
    return sub_1407B4900(Acl, AceRevision, v10, AccessMask, (unsigned __int8 *)Sid, 2u);
}
