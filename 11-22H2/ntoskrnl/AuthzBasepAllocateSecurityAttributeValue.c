/*
 * XREFs of AuthzBasepAllocateSecurityAttributeValue @ 0x14022586C
 * Callers:
 *     AuthzBasepAddSecurityAttributeValues @ 0x140225050 (AuthzBasepAddSecurityAttributeValues.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x140225390 (AuthzBasepDuplicateSecurityAttributes.c)
 * Callees:
 *     AuthzBasepMemAlloc @ 0x1402258AC (AuthzBasepMemAlloc.c)
 *     memset @ 0x140435400 (memset.c)
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
