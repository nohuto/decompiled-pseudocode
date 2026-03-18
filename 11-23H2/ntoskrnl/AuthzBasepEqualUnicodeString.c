/*
 * XREFs of AuthzBasepEqualUnicodeString @ 0x140225B88
 * Callers:
 *     AuthzBasepFindSecurityAttributeValue @ 0x140225904 (AuthzBasepFindSecurityAttributeValue.c)
 *     AuthzBasepFindSecurityAttribute @ 0x14022D0C0 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepFindTokenAttribute @ 0x14066ECB4 (AuthzBasepFindTokenAttribute.c)
 *     AuthzBasepFindSystemSecurityAttribute @ 0x1406B7784 (AuthzBasepFindSystemSecurityAttribute.c)
 * Callees:
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x140362080 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     RtlEqualUnicodeString @ 0x1406DA2F0 (RtlEqualUnicodeString.c)
 */

BOOLEAN __fastcall AuthzBasepEqualUnicodeString(const UNICODE_STRING *a1, const UNICODE_STRING *a2)
{
  if ( KeGetCurrentIrql() >= 2u )
    return AuthzBasepEqualUnicodeStringCaseSensitive();
  else
    return RtlEqualUnicodeString(a1, a2, 1u);
}
