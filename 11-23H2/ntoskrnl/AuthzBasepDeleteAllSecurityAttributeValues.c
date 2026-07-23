/*
 * XREFs of AuthzBasepDeleteAllSecurityAttributeValues @ 0x14066F034
 * Callers:
 *     AuthzBasepDeleteSecurityAttribute @ 0x140225C20 (AuthzBasepDeleteSecurityAttribute.c)
 *     AuthzBasepDeleteAllSecurityAttributes @ 0x14066F084 (AuthzBasepDeleteAllSecurityAttributes.c)
 * Callees:
 *     AuthzBasepAddSecurityAttributeValueToLists @ 0x1402259C8 (AuthzBasepAddSecurityAttributeValueToLists.c)
 *     AuthzBasepFreeSecurityAttributeValues @ 0x1402A8EA0 (AuthzBasepFreeSecurityAttributeValues.c)
 */

__int64 __fastcall AuthzBasepDeleteAllSecurityAttributeValues(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r11
  __int64 i; // rdx
  int v7; // eax
  __int64 result; // rax

  AuthzBasepFreeSecurityAttributeValues(a1, 1, a3, a4);
  v5 = a1 + 72;
  for ( i = *(_QWORD *)(a1 + 72); i != v5; i = *(_QWORD *)i )
  {
    v7 = *(_DWORD *)(i + 32);
    if ( (v7 & 2) == 0 )
    {
      *(_DWORD *)(i + 32) = v7 | 4;
      AuthzBasepAddSecurityAttributeValueToLists(a1, i, 0, 1);
    }
  }
  result = *(unsigned int *)(a1 + 60);
  *(_DWORD *)(a1 + 64) = result;
  return result;
}
