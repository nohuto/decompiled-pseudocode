/*
 * XREFs of AuthzBasepAddSecurityAttribute @ 0x140224D4C
 * Callers:
 *     AuthzBasepSetSecurityAttributesToken @ 0x140224DF8 (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepReplaceSecurityAttribute @ 0x140225BB4 (AuthzBasepReplaceSecurityAttribute.c)
 * Callees:
 *     AuthzBasepAddSecurityAttributeValues @ 0x140225138 (AuthzBasepAddSecurityAttributeValues.c)
 *     AuthzBasepAllocateSecurityAttribute @ 0x140225740 (AuthzBasepAllocateSecurityAttribute.c)
 *     AuthzBasepAddSecurityAttributeToLists @ 0x140225B68 (AuthzBasepAddSecurityAttributeToLists.c)
 *     AuthzBasepFindSecurityAttribute @ 0x14022D1D0 (AuthzBasepFindSecurityAttribute.c)
 */

__int64 __fastcall AuthzBasepAddSecurityAttribute(__int64 a1, __int64 a2)
{
  bool v2; // zf
  __int64 SecurityAttribute; // rax
  __int64 v6; // r9
  __int64 v7; // r11
  __int64 v8; // rax
  __int64 v9; // r11
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_DWORD *)(a2 + 24) == 0;
  SourceString = 0LL;
  if ( v2 )
    return 3221225485LL;
  SourceString.Length = *(_WORD *)a2;
  SourceString.MaximumLength = SourceString.Length;
  SourceString.Buffer = *(wchar_t **)(a2 + 8);
  SecurityAttribute = AuthzBasepFindSecurityAttribute(a1, &SourceString);
  v7 = SecurityAttribute;
  if ( SecurityAttribute )
  {
    *(_DWORD *)(SecurityAttribute + 56) &= ~4u;
    goto LABEL_5;
  }
  v8 = AuthzBasepAllocateSecurityAttribute(&SourceString);
  v7 = v8;
  if ( v8 )
  {
    *(_DWORD *)(v8 + 52) = *(_DWORD *)(a2 + 20);
    *(_WORD *)(v8 + 48) = *(_WORD *)(a2 + 16);
LABEL_5:
    LOBYTE(v6) = 1;
    AuthzBasepAddSecurityAttributeToLists(a1, v7, 0LL, v6);
    return AuthzBasepAddSecurityAttributeValues(v9, a2);
  }
  return 3221225626LL;
}
