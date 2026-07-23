/*
 * XREFs of RtlAddAccessDeniedAceEx @ 0x140813800
 * Callers:
 *     PiAuCreateStandardSecurityObject @ 0x140B406C0 (PiAuCreateStandardSecurityObject.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x140735460 (RtlpAddKnownAce.c)
 */

NTSTATUS __cdecl RtlAddAccessDeniedAceEx(PACL Acl, ULONG AceRevision, ULONG AceFlags, ACCESS_MASK AccessMask, PSID Sid)
{
  return RtlpAddKnownAce(Acl, AceRevision, AceFlags, AccessMask, (unsigned __int8 *)Sid, 1u);
}
