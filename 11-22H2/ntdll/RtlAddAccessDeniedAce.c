/*
 * XREFs of RtlAddAccessDeniedAce @ 0x18008D000
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAddKnownAce @ 0x18001ABE4 (RtlpAddKnownAce.c)
 */

NTSTATUS __cdecl RtlAddAccessDeniedAce(PACL Acl, ULONG AceRevision, ACCESS_MASK AccessMask, PSID Sid)
{
  return RtlpAddKnownAce(Acl, AceRevision, 0, AccessMask, (unsigned __int8 *)Sid, 1);
}
