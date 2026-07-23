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

NTSTATUS __cdecl RtlFormatCurrentUserKeyPath(PUNICODE_STRING CurrentUserKeyPath)
{
  NTSTATUS result; // eax
  unsigned __int16 v3; // r14
  SIZE_T v4; // rcx
  wchar_t *StringRoutine; // rax
  unsigned int Length; // esi
  wchar_t *v7; // r15
  wchar_t *Buffer; // rax
  unsigned __int64 v9; // rdx
  int v10; // edi
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
      v3 = StringLength;
      CurrentUserKeyPath->Length = 0;
      v4 = (unsigned __int16)(v3 + 34);
      CurrentUserKeyPath->MaximumLength = v4;
      StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(v4);
      CurrentUserKeyPath->Buffer = StringRoutine;
      if ( StringRoutine )
      {
        if ( RtlInitUnicodeStringEx(&DestinationString, L"\\REGISTRY\\USER\\") >= 0 )
        {
          Length = DestinationString.Length;
          if ( CurrentUserKeyPath->Length + (unsigned int)DestinationString.Length <= CurrentUserKeyPath->MaximumLength )
          {
            v7 = &CurrentUserKeyPath->Buffer[(unsigned __int64)CurrentUserKeyPath->Length >> 1];
            memmove(v7, L"\\REGISTRY\\USER\\", DestinationString.Length);
            CurrentUserKeyPath->Length += Length;
            if ( (unsigned int)CurrentUserKeyPath->Length + 1 < CurrentUserKeyPath->MaximumLength )
              v7[(unsigned __int64)Length >> 1] = 0;
          }
        }
        Buffer = CurrentUserKeyPath->Buffer;
        v9 = (unsigned __int64)CurrentUserKeyPath->Length >> 1;
        DestinationString.MaximumLength = v3;
        DestinationString.Length = 0;
        DestinationString.Buffer = &Buffer[v9];
        v10 = RtlConvertSidToUnicodeString(&DestinationString, TokenInformation[0], 0);
        if ( v10 < 0 )
          RtlFreeUnicodeString(CurrentUserKeyPath);
        else
          CurrentUserKeyPath->Length += DestinationString.Length;
        return v10;
      }
      else
      {
        return -1073741801;
      }
    }
  }
  return result;
}
