/*
 * XREFs of sub_140B2AE28 @ 0x140B2AE28
 * Callers:
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_140B2AEDC @ 0x140B2AEDC (sub_140B2AEDC.c)
 *     sub_140B2AFB8 @ 0x140B2AFB8 (sub_140B2AFB8.c)
 *     sub_140B2B090 @ 0x140B2B090 (sub_140B2B090.c)
 *     sub_140B4FF80 @ 0x140B4FF80 (sub_140B4FF80.c)
 */

__int64 sub_140B2AE28()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 result; // rax
  UNICODE_STRING v3; // [rsp+20h] [rbp-40h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-30h] BYREF
  UNICODE_STRING v5; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING v6; // [rsp+50h] [rbp-10h] BYREF

  DestinationString = 0LL;
  v6 = 0LL;
  v3 = 0LL;
  v5 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\LastGood");
  RtlInitUnicodeString(&v3, L"\\Registry\\Machine\\System\\LastKnownGoodRecovery\\LastGood");
  RtlInitUnicodeString(&v6, L"\\SystemRoot\\LastGood.Tmp");
  RtlInitUnicodeString(&v5, L"\\Registry\\Machine\\System\\LastKnownGoodRecovery\\LastGood.Tmp");
  result = sub_140B2B090(v1, v0);
  if ( (_BYTE)result )
  {
    sub_140B4FF80(&DestinationString, &v3);
    return sub_140B4FF80(&v6, &v5);
  }
  else if ( !(_DWORD)InitSafeBootMode )
  {
    result = sub_140B2AFB8(&DestinationString, &v6, 0LL);
    if ( (int)(result + 0x80000000) < 0 || (_DWORD)result == -1073741772 )
      return sub_140B2AEDC(&v3, &v5);
  }
  return result;
}
