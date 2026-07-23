/*
 * XREFs of RtlAddAccessAllowedAce @ 0x18007B3E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAddKnownAce @ 0x18001AA04 (RtlpAddKnownAce.c)
 */

NTSTATUS __cdecl RtlAddAccessAllowedAce(PACL Acl, ULONG AceRevision, ACCESS_MASK AccessMask, PSID Sid)
{
  return RtlpAddKnownAce(Acl, AceRevision, 0, AccessMask, (unsigned __int8 *)Sid, 0);
}
