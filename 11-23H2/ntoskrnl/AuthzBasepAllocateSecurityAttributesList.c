/*
 * XREFs of AuthzBasepAllocateSecurityAttributesList @ 0x14036B12C
 * Callers:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14022CA38 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepVerifyDesktopAppxPackageName @ 0x1405B86B4 (SepVerifyDesktopAppxPackageName.c)
 *     SepCreateClaimAttributes @ 0x1407CF704 (SepCreateClaimAttributes.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x140842114 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x1409D1644 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     AuthzBasepMemAlloc @ 0x14022599C (AuthzBasepMemAlloc.c)
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
