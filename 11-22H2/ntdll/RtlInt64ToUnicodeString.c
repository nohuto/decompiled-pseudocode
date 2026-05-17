/*
 * XREFs of RtlInt64ToUnicodeString @ 0x1800F8F00
 * Callers:
 *     <none>
 * Callees:
 *     RtlAnsiStringToUnicodeString @ 0x180025040 (RtlAnsiStringToUnicodeString.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     RtlLargeIntegerToChar @ 0x1800F8FB0 (RtlLargeIntegerToChar.c)
 */

NTSTATUS __fastcall RtlInt64ToUnicodeString(__int64 a1, __int64 a2, UNICODE_STRING *a3)
{
  NTSTATUS result; // eax
  __int64 v5; // rax
  STRING SourceString; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v7[80]; // [rsp+30h] [rbp-68h] BYREF

  *(_QWORD *)&SourceString.Length = a1;
  result = ((__int64 (__fastcall *)(STRING *, __int64, __int64, _BYTE *))RtlLargeIntegerToChar)(
             &SourceString,
             a2,
             65LL,
             v7);
  if ( result >= 0 )
  {
    SourceString.MaximumLength = 65;
    SourceString.Buffer = v7;
    v5 = -1LL;
    do
      ++v5;
    while ( v7[v5] );
    SourceString.Length = v5;
    return RtlAnsiStringToUnicodeString(a3, &SourceString, 0);
  }
  return result;
}
