/*
 * XREFs of AuthzBasepAllocateSecurityAttributesList @ 0x14036AF8C
 * Callers:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14022C928 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepVerifyDesktopAppxPackageName @ 0x1405B8144 (SepVerifyDesktopAppxPackageName.c)
 *     SepCreateClaimAttributes @ 0x1407CF434 (SepCreateClaimAttributes.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x140841E14 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x1409D1444 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     AuthzBasepMemAlloc @ 0x14022588C (AuthzBasepMemAlloc.c)
 */

_QWORD *__fastcall AuthzBasepAllocateSecurityAttributesList(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)AuthzBasepMemAlloc(48LL, a2, 1950442835LL);
  if ( result )
  {
    *result = 0LL;
    result[2] = 0LL;
    result[3] = 0LL;
    result[5] = 0LL;
    result[2] = result + 1;
    result[1] = result + 1;
    result[5] = result + 4;
    result[4] = result + 4;
  }
  return result;
}
