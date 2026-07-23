/*
 * XREFs of RtlAddAuditAccessAce @ 0x1409BB150
 * Callers:
 *     SepInitProcessAuditSd @ 0x140387AB0 (SepInitProcessAuditSd.c)
 *     ObInitSystem @ 0x140B4E9F8 (ObInitSystem.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x140735770 (RtlpAddKnownAce.c)
 */

NTSTATUS __cdecl RtlAddAuditAccessAce(
        PACL Acl,
        ULONG AceRevision,
        ACCESS_MASK AccessMask,
        PSID Sid,
        BOOLEAN AuditSuccess,
        BOOLEAN AuditFailure)
{
  return RtlpAddKnownAce(Acl, 2u, 192, AccessMask, (unsigned __int8 *)SeWorldSid, 2u);
}
