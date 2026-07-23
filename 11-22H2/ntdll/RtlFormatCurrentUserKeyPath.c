/*
 * XREFs of RtlFormatCurrentUserKeyPath @ 0x18001AD30
 * Callers:
 *     LdrpCodeAuthzInitialize @ 0x180009DAC (LdrpCodeAuthzInitialize.c)
 *     RtlpGetRegistryHandle @ 0x18000AD18 (RtlpGetRegistryHandle.c)
 *     RtlOpenCurrentUser @ 0x18000EAA0 (RtlOpenCurrentUser.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x18000EB80 (RtlFreeUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x18001AEA0 (RtlInitUnicodeStringEx.c)
 *     RtlLengthSidAsUnicodeString @ 0x18001AEF0 (RtlLengthSidAsUnicodeString.c)
 *     RtlConvertSidToUnicodeString @ 0x18001AF50 (RtlConvertSidToUnicodeString.c)
 *     NtdllpAllocateStringRoutine @ 0x1800397C0 (NtdllpAllocateStringRoutine.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtQueryInformationToken @ 0x18009F210 (NtQueryInformationToken.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 */

NTSTATUS __cdecl RtlFormatCurrentUserKeyPath(PUNICODE_STRING CurrentUserKeyPath)
{
  NTSTATUS result; // eax
  __int64 v3; // rdx
  unsigned __int16 v4; // r15
  __int64 v5; // rcx
  wchar_t *StringRoutine; // rax
  unsigned int Length; // esi
  wchar_t *v8; // r14
  wchar_t *Buffer; // rax
  unsigned __int64 v10; // rdx
  int v11; // edi
  ULONG StringLength; // [rsp+30h] [rbp-59h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-51h] BYREF
  ULONG ReturnLength; // [rsp+48h] [rbp-41h] BYREF
  PSID TokenInformation[12]; // [rsp+50h] [rbp-39h] BYREF

  result = NtQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFALL, 1u, TokenInformation, 0x58u, &ReturnLength);
  if ( result >= 0 )
  {
    result = RtlLengthSidAsUnicodeString(TokenInformation[0], &StringLength);
    if ( result >= 0 )
    {
      v4 = StringLength;
      CurrentUserKeyPath->Length = 0;
      v5 = (unsigned __int16)(v4 + 34);
      CurrentUserKeyPath->MaximumLength = v5;
      StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(v5, v3);
      CurrentUserKeyPath->Buffer = StringRoutine;
      if ( StringRoutine )
      {
        if ( RtlInitUnicodeStringEx(&DestinationString, L"\\REGISTRY\\USER\\") >= 0 )
        {
          Length = DestinationString.Length;
          if ( CurrentUserKeyPath->Length + (unsigned int)DestinationString.Length <= CurrentUserKeyPath->MaximumLength )
          {
            v8 = &CurrentUserKeyPath->Buffer[(unsigned __int64)CurrentUserKeyPath->Length >> 1];
            memmove(v8, L"\\REGISTRY\\USER\\", DestinationString.Length);
            CurrentUserKeyPath->Length += Length;
            if ( (unsigned int)CurrentUserKeyPath->Length + 1 < CurrentUserKeyPath->MaximumLength )
              v8[(unsigned __int64)Length >> 1] = 0;
          }
        }
        Buffer = CurrentUserKeyPath->Buffer;
        v10 = (unsigned __int64)CurrentUserKeyPath->Length >> 1;
        DestinationString.MaximumLength = v4;
        DestinationString.Length = 0;
        DestinationString.Buffer = &Buffer[v10];
        v11 = RtlConvertSidToUnicodeString(&DestinationString, TokenInformation[0], 0);
        if ( v11 < 0 )
          RtlFreeUnicodeString(CurrentUserKeyPath);
        else
          CurrentUserKeyPath->Length += DestinationString.Length;
        return v11;
      }
      else
      {
        return -1073741801;
      }
    }
  }
  return result;
}
