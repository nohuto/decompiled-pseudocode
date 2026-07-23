/*
 * XREFs of RtlUnicodeStringToAnsiString @ 0x18000DF80
 * Callers:
 *     LdrpGetModuleName @ 0x180001008 (LdrpGetModuleName.c)
 *     GetModuleFullPathName @ 0x18000B21C (GetModuleFullPathName.c)
 * Callees:
 *     RtlUnicodeToMultiByteSize @ 0x18000E090 (RtlUnicodeToMultiByteSize.c)
 *     RtlpIsUtf8Process @ 0x18000E12C (RtlpIsUtf8Process.c)
 *     RtlUnicodeToCustomCPN @ 0x18000E160 (RtlUnicodeToCustomCPN.c)
 *     NtdllpFreeStringRoutine @ 0x180025BF0 (NtdllpFreeStringRoutine.c)
 *     NtdllpAllocateStringRoutine @ 0x180025C10 (NtdllpAllocateStringRoutine.c)
 */

NTSTATUS __stdcall RtlUnicodeStringToAnsiString(
        PANSI_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  NTSTATUS v5; // ebx
  char v6; // r12
  __int64 v7; // rcx
  ULONG v8; // esi
  ULONG MaximumLength; // eax
  ULONG BytesInUnicodeString; // edx
  ULONG v11; // r8d
  WCHAR *UnicodeString; // r9
  CHAR *v13; // r10
  _CPTABLEINFO *v14; // rcx
  unsigned __int16 v15; // dx
  char *StringRoutine; // rax
  signed __int32 v18[8]; // [rsp+0h] [rbp-78h] BYREF
  int v19; // [rsp+30h] [rbp-48h]
  ULONG BytesInCustomCPString; // [rsp+88h] [rbp+10h] BYREF
  BOOLEAN v21; // [rsp+90h] [rbp+18h]
  ULONG v22; // [rsp+98h] [rbp+20h] BYREF

  v21 = AllocateDestinationString;
  v5 = 0;
  v6 = 0;
  RtlUnicodeToMultiByteSize(&v22, SourceString->Buffer, SourceString->Length);
  v8 = v22 + 1;
  BytesInCustomCPString = v22 + 1;
  if ( v22 + 1 > 0xFFFF )
    return -1073741584;
  if ( AllocateDestinationString )
  {
    StringRoutine = (char *)NtdllpAllocateStringRoutine(v8);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
    DestinationString->MaximumLength = v8;
  }
  else
  {
    MaximumLength = DestinationString->MaximumLength;
    if ( v8 > MaximumLength )
    {
      if ( !(_WORD)MaximumLength )
        return -2147483643;
      v6 = 1;
    }
  }
  v19 = 0;
  if ( (unsigned __int8)RtlpIsUtf8Process(v7) )
  {
    v14 = &Utf8TableInfo;
  }
  else
  {
    _InterlockedOr(v18, 0);
    v14 = &GlobalRtlNlsState;
  }
  RtlUnicodeToCustomCPN(v14, v13, v11, &BytesInCustomCPString, UnicodeString, BytesInUnicodeString);
  v19 = 0;
  v15 = BytesInCustomCPString;
  DestinationString->Buffer[BytesInCustomCPString] = 0;
  DestinationString->Length = v15;
  if ( v6 )
    return -2147483643;
  return v5;
}
