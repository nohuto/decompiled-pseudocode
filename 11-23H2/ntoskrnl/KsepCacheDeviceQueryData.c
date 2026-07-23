/*
 * XREFs of KsepCacheDeviceQueryData @ 0x140808E7C
 * Callers:
 *     KsepDbCacheQueryDeviceData @ 0x140808E08 (KsepDbCacheQueryDeviceData.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x1406DA320 (RtlEqualUnicodeString.c)
 */

const UNICODE_STRING *__fastcall KsepCacheDeviceQueryData(__int64 a1, const WCHAR *a2)
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
