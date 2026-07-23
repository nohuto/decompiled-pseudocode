/*
 * XREFs of sub_140A27060 @ 0x140A27060
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14077CD90 @ 0x14077CD90 (sub_14077CD90.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 */

char __fastcall sub_140A27060(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v7; // bl
  const WCHAR *v8; // rdx
  unsigned int v10; // [rsp+40h] [rbp-69h] BYREF
  int v11; // [rsp+44h] [rbp-65h] BYREF
  UNICODE_STRING String2; // [rsp+48h] [rbp-61h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-51h] BYREF
  WCHAR SourceString[40]; // [rsp+70h] [rbp-39h] BYREF

  v10 = 0;
  v11 = 0;
  v7 = 0;
  DestinationString = 0LL;
  String2 = 0LL;
  if ( a4 )
  {
    v8 = *(const WCHAR **)a4;
    if ( !*(_QWORD *)a4
      || !*v8
      || RtlInitUnicodeStringEx(&DestinationString, v8) >= 0
      && (v10 = 78, (int)sub_14077CD90(a1, a2, 0LL, 9, (__int64)&v11, (__int64)SourceString, (__int64)&v10, 0) >= 0)
      && v11 == 1
      && v10 >= 2
      && (SourceString[38] = 0, RtlInitUnicodeStringEx(&String2, SourceString) >= 0)
      && RtlEqualUnicodeString(&DestinationString, &String2, 1u) )
    {
      v7 = 1;
      if ( *(_QWORD *)(a4 + 8) )
        return sub_14042A5E0(a1, a2);
    }
  }
  return v7;
}
