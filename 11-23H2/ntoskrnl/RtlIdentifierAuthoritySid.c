/*
 * XREFs of RtlIdentifierAuthoritySid @ 0x1406C4F30
 * Callers:
 *     SepCreateTokenEx @ 0x140229820 (SepCreateTokenEx.c)
 * Callees:
 *     <none>
 */

PSID_IDENTIFIER_AUTHORITY __stdcall RtlIdentifierAuthoritySid(PSID Sid)
{
  return (PSID_IDENTIFIER_AUTHORITY)((char *)Sid + 2);
}
