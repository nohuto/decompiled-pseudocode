/*
 * XREFs of RtlFormatCurrentUserKeyPath @ 0x18001AB50
 * Callers:
 *     LdrpCodeAuthzInitialize @ 0x180009B8C (LdrpCodeAuthzInitialize.c)
 *     RtlpGetRegistryHandle @ 0x18000AAF8 (RtlpGetRegistryHandle.c)
 *     RtlOpenCurrentUser @ 0x18000E890 (RtlOpenCurrentUser.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x18000E970 (RtlFreeUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x18001ACC0 (RtlInitUnicodeStringEx.c)
 *     RtlLengthSidAsUnicodeString @ 0x18001AD10 (RtlLengthSidAsUnicodeString.c)
 *     RtlConvertSidToUnicodeString @ 0x18001AD70 (RtlConvertSidToUnicodeString.c)
 *     NtdllpAllocateStringRoutine @ 0x180039660 (NtdllpAllocateStringRoutine.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtQueryInformationToken @ 0x1800A12D0 (NtQueryInformationToken.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 */

__int64 __fastcall RtlFormatCurrentUserKeyPath(PUNICODE_STRING UnicodeString)
{
  __int64 result; // rax
  __int64 v3; // rdx
  unsigned __int16 v4; // r15
  __int64 v5; // rcx
  wchar_t *StringRoutine; // rax
  unsigned int Length; // esi
  wchar_t *v8; // r14
  wchar_t *Buffer; // rax
  unsigned __int64 v10; // rdx
  NTSTATUS v11; // edi
  int v12; // [rsp+30h] [rbp-59h] BYREF
  UNICODE_STRING UnicodeStringa; // [rsp+38h] [rbp-51h] BYREF
  _BYTE v14[8]; // [rsp+48h] [rbp-41h] BYREF
  PSID Sid[12]; // [rsp+50h] [rbp-39h] BYREF

  result = NtQueryInformationToken(-6LL, 1LL, Sid, 88LL, v14);
  if ( (int)result >= 0 )
  {
    result = RtlLengthSidAsUnicodeString(Sid[0], &v12);
    if ( (int)result >= 0 )
    {
      v4 = v12;
      UnicodeString->Length = 0;
      v5 = (unsigned __int16)(v4 + 34);
      UnicodeString->MaximumLength = v5;
      StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(v5, v3);
      UnicodeString->Buffer = StringRoutine;
      if ( StringRoutine )
      {
        if ( (int)RtlInitUnicodeStringEx(&UnicodeStringa, L"\\REGISTRY\\USER\\") >= 0 )
        {
          Length = UnicodeStringa.Length;
          if ( UnicodeString->Length + (unsigned int)UnicodeStringa.Length <= UnicodeString->MaximumLength )
          {
            v8 = &UnicodeString->Buffer[(unsigned __int64)UnicodeString->Length >> 1];
            memmove(v8, L"\\REGISTRY\\USER\\", UnicodeStringa.Length);
            UnicodeString->Length += Length;
            if ( (unsigned int)UnicodeString->Length + 1 < UnicodeString->MaximumLength )
              v8[(unsigned __int64)Length >> 1] = 0;
          }
        }
        Buffer = UnicodeString->Buffer;
        v10 = (unsigned __int64)UnicodeString->Length >> 1;
        UnicodeStringa.MaximumLength = v4;
        UnicodeStringa.Length = 0;
        UnicodeStringa.Buffer = &Buffer[v10];
        v11 = RtlConvertSidToUnicodeString(&UnicodeStringa, Sid[0], 0);
        if ( v11 < 0 )
          RtlFreeUnicodeString(UnicodeString);
        else
          UnicodeString->Length += UnicodeStringa.Length;
        return (unsigned int)v11;
      }
      else
      {
        return 3221225495LL;
      }
    }
  }
  return result;
}
