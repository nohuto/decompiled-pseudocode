/*
 * XREFs of RtlUnicodeStringToAnsiString @ 0x180018DA0
 * Callers:
 *     LdrpGetModuleName @ 0x180001008 (LdrpGetModuleName.c)
 *     GetModuleFullPathName @ 0x18007C7B8 (GetModuleFullPathName.c)
 * Callees:
 *     RtlUnicodeToMultiByteSize @ 0x180018EC0 (RtlUnicodeToMultiByteSize.c)
 *     RtlUnicodeToCustomCPN @ 0x180018F30 (RtlUnicodeToCustomCPN.c)
 *     RtlpIsUtf8Process @ 0x180018FD4 (RtlpIsUtf8Process.c)
 *     NtdllpFreeStringRoutine @ 0x1800397A0 (NtdllpFreeStringRoutine.c)
 *     NtdllpAllocateStringRoutine @ 0x1800397C0 (NtdllpAllocateStringRoutine.c)
 */

NTSTATUS __stdcall RtlUnicodeStringToAnsiString(
        PANSI_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  NTSTATUS v6; // ebx
  char v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  ULONG v10; // edi
  ULONG MaximumLength; // eax
  ULONG BytesInUnicodeString; // edx
  ULONG v13; // r8d
  WCHAR *UnicodeString; // r9
  CHAR *v15; // r10
  _CPTABLEINFO *v16; // rcx
  unsigned __int16 v17; // dx
  char *StringRoutine; // rax
  signed __int32 v20[8]; // [rsp+0h] [rbp-78h] BYREF
  int v21; // [rsp+30h] [rbp-48h]
  ULONG BytesInCustomCPString; // [rsp+88h] [rbp+10h] BYREF
  BOOLEAN v23; // [rsp+90h] [rbp+18h]
  ULONG v24; // [rsp+98h] [rbp+20h] BYREF

  v23 = AllocateDestinationString;
  v6 = 0;
  v7 = 0;
  RtlUnicodeToMultiByteSize(&v24, SourceString->Buffer, SourceString->Length);
  v10 = v24 + 1;
  BytesInCustomCPString = v24 + 1;
  if ( v24 + 1 > 0xFFFF )
    return -1073741584;
  if ( AllocateDestinationString )
  {
    StringRoutine = (char *)NtdllpAllocateStringRoutine(v10, v8);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
    DestinationString->MaximumLength = v10;
    LOWORD(MaximumLength) = v10;
  }
  else
  {
    MaximumLength = DestinationString->MaximumLength;
    if ( v10 > MaximumLength )
    {
      if ( !(_WORD)MaximumLength )
        return -2147483643;
      v7 = 1;
    }
  }
  v21 = 0;
  if ( (unsigned __int8)RtlpIsUtf8Process(v9, SourceString->Length, (unsigned int)(unsigned __int16)MaximumLength - 1) )
  {
    v16 = &Utf8TableInfo;
  }
  else
  {
    _InterlockedOr(v20, 0);
    v16 = &GlobalRtlNlsState;
  }
  RtlUnicodeToCustomCPN(v16, v15, v13, &BytesInCustomCPString, UnicodeString, BytesInUnicodeString);
  v21 = 0;
  v17 = BytesInCustomCPString;
  DestinationString->Buffer[BytesInCustomCPString] = 0;
  DestinationString->Length = v17;
  if ( v7 )
    return -2147483643;
  return v6;
}
