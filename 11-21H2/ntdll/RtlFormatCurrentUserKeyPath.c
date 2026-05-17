/*
 * XREFs of RtlFormatCurrentUserKeyPath @ 0x180047DC0
 * Callers:
 *     RtlpGetRegistryHandle @ 0x18000A5F4 (RtlpGetRegistryHandle.c)
 *     RtlOpenCurrentUser @ 0x18006F250 (RtlOpenCurrentUser.c)
 *     LdrpCodeAuthzInitialize @ 0x180082D6C (LdrpCodeAuthzInitialize.c)
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x180025C10 (NtdllpAllocateStringRoutine.c)
 *     RtlInitUnicodeStringEx @ 0x180047F30 (RtlInitUnicodeStringEx.c)
 *     RtlLengthSidAsUnicodeString @ 0x180047F80 (RtlLengthSidAsUnicodeString.c)
 *     RtlConvertSidToUnicodeString @ 0x180048370 (RtlConvertSidToUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x180048810 (RtlFreeUnicodeString.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtQueryInformationToken @ 0x1800A4490 (NtQueryInformationToken.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 */

__int64 __fastcall RtlFormatCurrentUserKeyPath(PUNICODE_STRING UnicodeString)
{
  __int64 result; // rax
  unsigned __int16 v3; // r14
  __int64 v4; // rcx
  wchar_t *StringRoutine; // rax
  unsigned int Length; // esi
  wchar_t *v7; // r15
  wchar_t *Buffer; // rax
  unsigned __int64 v9; // rdx
  NTSTATUS v10; // edi
  int v11; // [rsp+30h] [rbp-59h] BYREF
  UNICODE_STRING UnicodeStringa; // [rsp+38h] [rbp-51h] BYREF
  _BYTE v13[8]; // [rsp+48h] [rbp-41h] BYREF
  PSID Sid[12]; // [rsp+50h] [rbp-39h] BYREF

  result = NtQueryInformationToken(-6LL, 1LL, Sid, 88LL, v13);
  if ( (int)result >= 0 )
  {
    result = RtlLengthSidAsUnicodeString(Sid[0], &v11);
    if ( (int)result >= 0 )
    {
      v3 = v11;
      UnicodeString->Length = 0;
      v4 = (unsigned __int16)(v3 + 34);
      UnicodeString->MaximumLength = v4;
      StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(v4);
      UnicodeString->Buffer = StringRoutine;
      if ( StringRoutine )
      {
        if ( (int)RtlInitUnicodeStringEx(&UnicodeStringa, L"\\REGISTRY\\USER\\") >= 0 )
        {
          Length = UnicodeStringa.Length;
          if ( UnicodeString->Length + (unsigned int)UnicodeStringa.Length <= UnicodeString->MaximumLength )
          {
            v7 = &UnicodeString->Buffer[(unsigned __int64)UnicodeString->Length >> 1];
            memmove(v7, L"\\REGISTRY\\USER\\", UnicodeStringa.Length);
            UnicodeString->Length += Length;
            if ( (unsigned int)UnicodeString->Length + 1 < UnicodeString->MaximumLength )
              v7[(unsigned __int64)Length >> 1] = 0;
          }
        }
        Buffer = UnicodeString->Buffer;
        v9 = (unsigned __int64)UnicodeString->Length >> 1;
        UnicodeStringa.MaximumLength = v3;
        UnicodeStringa.Length = 0;
        UnicodeStringa.Buffer = &Buffer[v9];
        v10 = RtlConvertSidToUnicodeString(&UnicodeStringa, Sid[0], 0);
        if ( v10 < 0 )
          RtlFreeUnicodeString(UnicodeString);
        else
          UnicodeString->Length += UnicodeStringa.Length;
        return (unsigned int)v10;
      }
      else
      {
        return 3221225495LL;
      }
    }
  }
  return result;
}
