/*
 * XREFs of sub_140856C80 @ 0x140856C80
 * Callers:
 *     sub_140856C0C @ 0x140856C0C (sub_140856C0C.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 */

const UNICODE_STRING *__fastcall sub_140856C80(__int64 a1, const WCHAR *a2)
{
  const UNICODE_STRING *v2; // rsi
  const UNICODE_STRING *v3; // rbx
  const UNICODE_STRING *v4; // rdi
  UNICODE_STRING String2; // [rsp+20h] [rbp-18h] BYREF

  v2 = (const UNICODE_STRING *)(a1 + 56);
  v3 = *(const UNICODE_STRING **)(a1 + 56);
  String2 = 0LL;
  RtlInitUnicodeString(&String2, a2);
  while ( v3 != v2 )
  {
    v4 = v3;
    v3 = *(const UNICODE_STRING **)&v3->Length;
    if ( RtlEqualUnicodeString(v4 + 1, &String2, 1u) )
      return v4;
  }
  return 0LL;
}
