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
  NTSTATUS v6; // ebx
  char v7; // r12
  __int64 v8; // rcx
  ULONG v9; // esi
  ULONG MaximumLength; // eax
  int v11; // edx
  int v12; // r8d
  __int64 v13; // r9
  int v14; // r10d
  __int16 *v15; // rcx
  unsigned __int16 v16; // dx
  char *StringRoutine; // rax
  signed __int32 v19[8]; // [rsp+0h] [rbp-78h] BYREF
  int v20; // [rsp+30h] [rbp-48h]
  ULONG v21; // [rsp+88h] [rbp+10h] BYREF
  BOOLEAN v22; // [rsp+90h] [rbp+18h]
  ULONG v23; // [rsp+98h] [rbp+20h] BYREF

  v22 = AllocateDestinationString;
  v6 = 0;
  v7 = 0;
  RtlUnicodeToMultiByteSize(&v23, SourceString->Buffer, SourceString->Length);
  v9 = v23 + 1;
  v21 = v23 + 1;
  if ( v23 + 1 > 0xFFFF )
    return -1073741584;
  if ( AllocateDestinationString )
  {
    StringRoutine = (char *)NtdllpAllocateStringRoutine(v9);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
    DestinationString->MaximumLength = v9;
  }
  else
  {
    MaximumLength = DestinationString->MaximumLength;
    if ( v9 > MaximumLength )
    {
      if ( !(_WORD)MaximumLength )
        return -2147483643;
      v7 = 1;
    }
  }
  v20 = 0;
  if ( (unsigned __int8)RtlpIsUtf8Process(v8, SourceString->Length, (unsigned int)DestinationString->MaximumLength - 1) )
  {
    v15 = (__int16 *)&Utf8TableInfo;
  }
  else
  {
    _InterlockedOr(v19, 0);
    v15 = &GlobalRtlNlsState;
  }
  RtlUnicodeToCustomCPN((_DWORD)v15, v14, v12, (unsigned int)&v21, v13, v11);
  v20 = 0;
  v16 = v21;
  DestinationString->Buffer[v21] = 0;
  DestinationString->Length = v16;
  if ( v7 )
    return -2147483643;
  return v6;
}
