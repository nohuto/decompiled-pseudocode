/*
 * XREFs of RtlpWow64ThunkEnvironmentTo64 @ 0x180058E4C
 * Callers:
 *     RtlpInitEnvironmentBlock @ 0x18005876C (RtlpInitEnvironmentBlock.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800189D0 (RtlInitUnicodeString.c)
 *     RtlQueryEnvironmentVariable_U @ 0x180058F20 (RtlQueryEnvironmentVariable_U.c)
 *     RtlSetEnvironmentVariable @ 0x180058F90 (RtlSetEnvironmentVariable.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 */

NTSTATUS RtlpWow64ThunkEnvironmentTo64()
{
  PCWSTR *v0; // rbx
  __int64 v1; // rdi
  NTSTATUS result; // eax
  _UNICODE_STRING Value; // [rsp+20h] [rbp-258h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-248h] BYREF
  _UNICODE_STRING Name; // [rsp+40h] [rbp-238h] BYREF
  char v6; // [rsp+50h] [rbp-228h] BYREF

  v0 = (PCWSTR *)&unk_180131FC0;
  v1 = 3LL;
  do
  {
    RtlInitUnicodeString(&DestinationString, *(v0 - 2));
    *(_DWORD *)&Value.Length = 34078720;
    Value.Buffer = (wchar_t *)&v6;
    result = RtlQueryEnvironmentVariable_U(0LL, &DestinationString, &Value);
    if ( result >= 0 )
    {
      if ( !*(_BYTE *)v0 )
        RtlSetEnvironmentVariable(0LL, &DestinationString, 0LL);
      RtlInitUnicodeString(&Name, *(v0 - 4));
      result = RtlSetEnvironmentVariable(0LL, &Name, &Value);
    }
    v0 += 5;
    --v1;
  }
  while ( v1 );
  return result;
}
