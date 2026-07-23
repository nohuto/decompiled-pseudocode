/*
 * XREFs of RtlEqualDomainName @ 0x18000D520
 * Callers:
 *     RtlEqualComputerName @ 0x1800F5D40 (RtlEqualComputerName.c)
 * Callees:
 *     RtlCanonicalizeDomainName @ 0x18000D5A0 (RtlCanonicalizeDomainName.c)
 *     RtlFreeUnicodeString @ 0x18000EB80 (RtlFreeUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x180029E40 (RtlEqualUnicodeString.c)
 */

BOOLEAN __cdecl RtlEqualDomainName(PUNICODE_STRING String1, PUNICODE_STRING String2)
{
  BOOLEAN v2; // bl
  _UNICODE_STRING String2a; // [rsp+20h] [rbp-28h] BYREF
  _UNICODE_STRING String1a; // [rsp+30h] [rbp-18h] BYREF

  v2 = 0;
  if ( (int)RtlCanonicalizeDomainName(&String1a) >= 0 )
  {
    if ( (int)RtlCanonicalizeDomainName(&String2a) >= 0 )
    {
      v2 = RtlEqualUnicodeString(&String1a, &String2a, 0);
      RtlFreeUnicodeString(&String2a);
    }
    RtlFreeUnicodeString(&String1a);
  }
  return v2;
}
