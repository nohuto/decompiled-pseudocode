/*
 * XREFs of RtlSubAuthorityCountSid @ 0x18007E000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PUCHAR __cdecl RtlSubAuthorityCountSid(PSID Sid)
{
  return (PUCHAR)Sid + 1;
}
