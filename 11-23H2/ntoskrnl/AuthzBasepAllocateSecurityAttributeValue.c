/*
 * XREFs of AuthzBasepAllocateSecurityAttributeValue @ 0x14022595C
 * Callers:
 *     AuthzBasepAddSecurityAttributeValues @ 0x140225138 (AuthzBasepAddSecurityAttributeValues.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x140225480 (AuthzBasepDuplicateSecurityAttributes.c)
 * Callees:
 *     AuthzBasepMemAlloc @ 0x14022599C (AuthzBasepMemAlloc.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void *__fastcall AuthzBasepAllocateSecurityAttributeValue(unsigned int a1, __int64 a2)
{
  void *v2; // rax
  void *v3; // rbx

  v2 = (void *)AuthzBasepMemAlloc(a1 + 64LL, a2, 1950442835LL);
  v3 = v2;
  if ( v2 )
    memset(v2, 0, 0x40uLL);
  return v3;
}
