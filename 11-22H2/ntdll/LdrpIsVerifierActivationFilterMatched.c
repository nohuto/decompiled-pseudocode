/*
 * XREFs of LdrpIsVerifierActivationFilterMatched @ 0x1800DEBB8
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x1800DD9FC (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800189D0 (RtlInitUnicodeString.c)
 *     LdrpLogInternal @ 0x180026D80 (LdrpLogInternal.c)
 *     RtlQueryApplicationKeyOption @ 0x18007D77C (RtlQueryApplicationKeyOption.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     LdrpIsSubstringFound @ 0x1800DEAF4 (LdrpIsSubstringFound.c)
 */

__int64 __fastcall LdrpIsVerifierActivationFilterMatched(__int64 a1, void *a2, void *a3)
{
  WCHAR *v4; // rbx
  __int64 v5; // rax
  WCHAR *v6; // rsi
  unsigned int v7; // edi
  WCHAR v8; // ax
  const WCHAR *v9; // rdx
  const char *v10; // rax
  __int64 v12; // [rsp+30h] [rbp-258h]
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-248h] BYREF
  WCHAR SourceString[256]; // [rsp+50h] [rbp-238h] BYREF

  SourceString[0] = 0;
  if ( (int)RtlQueryApplicationKeyOption(
              a2,
              a3,
              (__int64)L"VerifierActivationFilter",
              1LL,
              (__int64)SourceString,
              512,
              v12,
              0LL) < 0 )
  {
    return 1;
  }
  else
  {
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      8309,
      (__int64)"LdrpIsVerifierActivationFilterMatched",
      2u,
      "VerifierActivationFilter found, contents = \"%ws\"\n",
      SourceString);
    if ( SourceString[0] == 42 || !SourceString[0] )
    {
LABEL_18:
      v7 = 1;
    }
    else
    {
      v4 = SourceString;
      v5 = -1LL;
      do
        ++v5;
      while ( SourceString[v5] );
      v6 = &SourceString[v5];
      while ( 1 )
      {
        v7 = 0;
        if ( v4 >= v6 )
          break;
        while ( 1 )
        {
          v8 = *v4;
          if ( *v4 != 32 && v8 != 9 )
            break;
          ++v4;
        }
        v9 = v4;
        if ( !v8 )
          break;
        do
        {
          if ( v8 == 32 )
            break;
          if ( v8 == 9 )
            break;
          v8 = *++v4;
        }
        while ( *v4 );
        if ( v9 == v4 )
          break;
        *v4 = 0;
        RtlInitUnicodeString(&DestinationString, v9);
        if ( (unsigned int)LdrpIsSubstringFound(
                             (unsigned __int16 *)(*(_QWORD *)(a1 + 32) + 112LL),
                             &DestinationString.Length) )
          goto LABEL_18;
        ++v4;
      }
    }
    v10 = (const char *)&Flags;
    if ( !v7 )
      v10 = "not ";
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      8363,
      (__int64)"LdrpIsVerifierActivationFilterMatched",
      2u,
      "VerifierActivationFilter match %sfound.\n",
      v10);
  }
  return v7;
}
