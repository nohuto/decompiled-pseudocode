/*
 * XREFs of RtlFormatCurrentUserKeyPath @ 0x14066B5D0
 * Callers:
 *     RtlpGetRegistryHandle @ 0x14077FDA0 (RtlpGetRegistryHandle.c)
 *     RtlOpenCurrentUser @ 0x1407F4A70 (RtlOpenCurrentUser.c)
 *     AslRegistryBuildUserPath @ 0x140843B58 (AslRegistryBuildUserPath.c)
 *     _RegRtlOpenPredefinedKey @ 0x14085D278 (_RegRtlOpenPredefinedKey.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1402DFAC0 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwQueryInformationToken @ 0x14041BB80 (ZwQueryInformationToken.c)
 *     RtlConvertSidToUnicodeString @ 0x140669DD0 (RtlConvertSidToUnicodeString.c)
 *     RtlLengthSidAsUnicodeString @ 0x14066B6D8 (RtlLengthSidAsUnicodeString.c)
 *     ExpAllocateStringRoutine @ 0x1406BE560 (ExpAllocateStringRoutine.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 */

NTSTATUS __fastcall RtlFormatCurrentUserKeyPath(PUNICODE_STRING UnicodeString)
{
  NTSTATUS result; // eax
  unsigned __int16 v3; // di
  SIZE_T v4; // rcx
  wchar_t *StringRoutine; // rax
  wchar_t *Buffer; // rax
  unsigned __int64 v7; // rdx
  NTSTATUS v8; // edi
  int v9; // [rsp+38h] [rbp-39h] BYREF
  ULONG ReturnLength; // [rsp+3Ch] [rbp-35h] BYREF
  UNICODE_STRING UnicodeStringa; // [rsp+40h] [rbp-31h] BYREF
  PSID TokenInformation[12]; // [rsp+58h] [rbp-19h] BYREF

  ReturnLength = 0;
  v9 = 0;
  *(_DWORD *)(&UnicodeStringa.MaximumLength + 1) = 0;
  result = ZwQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFALL, TokenUser, TokenInformation, 0x58u, &ReturnLength);
  if ( result >= 0 )
  {
    result = RtlLengthSidAsUnicodeString(TokenInformation[0], &v9);
    if ( result >= 0 )
    {
      v3 = v9;
      UnicodeString->Length = 0;
      v4 = (unsigned __int16)(v3 + 34);
      UnicodeString->MaximumLength = v4;
      StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v4);
      UnicodeString->Buffer = StringRoutine;
      if ( StringRoutine )
      {
        RtlAppendUnicodeToString(UnicodeString, L"\\REGISTRY\\USER\\");
        Buffer = UnicodeString->Buffer;
        v7 = (unsigned __int64)UnicodeString->Length >> 1;
        UnicodeStringa.MaximumLength = v3;
        UnicodeStringa.Length = 0;
        UnicodeStringa.Buffer = &Buffer[v7];
        v8 = RtlConvertSidToUnicodeString(&UnicodeStringa, TokenInformation[0], 0);
        if ( v8 < 0 )
          RtlFreeUnicodeString(UnicodeString);
        else
          UnicodeString->Length += UnicodeStringa.Length;
        return v8;
      }
      else
      {
        return -1073741801;
      }
    }
  }
  return result;
}
