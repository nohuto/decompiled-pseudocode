/*
 * XREFs of RtlSubAuthoritySid @ 0x1800747F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PULONG __cdecl RtlSubAuthoritySid(PSID Sid, ULONG SubAuthority)
{
  return (PULONG)((char *)Sid + 4 * SubAuthority + 8);
}
