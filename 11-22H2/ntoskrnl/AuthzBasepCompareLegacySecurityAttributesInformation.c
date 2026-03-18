/*
 * XREFs of AuthzBasepCompareLegacySecurityAttributesInformation @ 0x1407C79F4
 * Callers:
 *     NtCompareTokens @ 0x1407C7650 (NtCompareTokens.c)
 * Callees:
 *     AuthzBasepFindSecurityAttribute @ 0x14022D0E0 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepIsCompareRelevantAttribute @ 0x1407C7ABC (AuthzBasepIsCompareRelevantAttribute.c)
 *     AuthzBasepCompareSecurityAttribute @ 0x1407C7AF0 (AuthzBasepCompareSecurityAttribute.c)
 */

bool __fastcall AuthzBasepCompareLegacySecurityAttributesInformation(int *a1, __int64 a2)
{
  int v2; // ebp
  char v3; // bl
  int v4; // esi
  __int64 *v6; // r14
  const UNICODE_STRING *i; // rdi
  const UNICODE_STRING *SecurityAttribute; // rax
  _QWORD *j; // rdi

  v2 = *a1;
  v3 = 0;
  v4 = *(_DWORD *)a2;
  if ( !*a1 && !v4 )
    return 1;
  v6 = (__int64 *)(a1 + 2);
  for ( i = (const UNICODE_STRING *)*((_QWORD *)a1 + 1);
        i != (const UNICODE_STRING *)v6;
        i = *(const UNICODE_STRING **)&i->Length )
  {
    if ( (unsigned __int8)AuthzBasepIsCompareRelevantAttribute(i) )
    {
      SecurityAttribute = AuthzBasepFindSecurityAttribute(a2, i + 2);
      if ( !SecurityAttribute || !(unsigned __int8)AuthzBasepCompareSecurityAttribute(i, SecurityAttribute) )
        return v3;
    }
    else
    {
      --v2;
    }
  }
  for ( j = *(_QWORD **)(a2 + 8); j != (_QWORD *)(a2 + 8); j = (_QWORD *)*j )
  {
    if ( !(unsigned __int8)AuthzBasepIsCompareRelevantAttribute(j) )
      --v4;
  }
  return v2 == v4;
}
