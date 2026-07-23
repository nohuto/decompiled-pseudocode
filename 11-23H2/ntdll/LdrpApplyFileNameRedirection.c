/*
 * XREFs of LdrpApplyFileNameRedirection @ 0x1800198D4
 * Callers:
 *     LdrpPreprocessDllName @ 0x1800196B0 (LdrpPreprocessDllName.c)
 * Callees:
 *     LdrpFreeUnicodeString @ 0x180011138 (LdrpFreeUnicodeString.c)
 *     RtlInitUnicodeString @ 0x1800187C0 (RtlInitUnicodeString.c)
 *     RtlGetNtSystemRoot @ 0x180018810 (RtlGetNtSystemRoot.c)
 *     LdrpLogDllState @ 0x180019AB4 (LdrpLogDllState.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180019B28 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     ApiSetResolveToHost @ 0x180019BC0 (ApiSetResolveToHost.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18001B5B0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     LdrpGetFullPath @ 0x18002DDA0 (LdrpGetFullPath.c)
 */

__int64 __fastcall LdrpApplyFileNameRedirection(
        __int64 a1,
        _UNICODE_STRING *a2,
        __int64 a3,
        _UNICODE_STRING *a4,
        _BYTE *a5)
{
  struct _PEB *v5; // r15
  _BYTE *v7; // r12
  _UNICODE_STRING *v9; // rbp
  void *ApiSetMap; // rbx
  int v11; // eax
  __int16 v12; // di
  int appended; // ebx
  unsigned __int16 v14; // ax
  char v15; // al
  NTSTATUS v16; // eax
  unsigned __int32 v17; // ebp
  const WCHAR *NtSystemRoot; // rax
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  bool v21; // zf
  _WORD v22[8]; // [rsp+50h] [rbp-58h] BYREF
  _UNICODE_STRING DynamicString; // [rsp+60h] [rbp-48h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-38h] BYREF

  v5 = NtCurrentPeb();
  v7 = a5;
  v9 = a2;
  ApiSetMap = v5->ApiSetMap;
  *a5 = 0;
  LdrpLogDllState(0LL, a2, 5328LL);
  v11 = ApiSetResolveToHost((_DWORD)ApiSetMap, (_DWORD)v9, a1 != 0 ? a1 + 88 : 0, (unsigned int)&a5, (__int64)v22);
  v12 = v22[0];
  appended = v11;
  if ( v11 >= 0 && (_BYTE)a5 )
  {
    if ( v22[0] )
      v14 = 5329;
    else
      v14 = 5330;
  }
  else
  {
    v14 = 5331;
  }
  LdrpLogDllState(0LL, v9, v14);
  if ( (_BYTE)a5 )
  {
    if ( !v12 )
      return (unsigned int)-1073740671;
    a4->Length = 0;
    NtSystemRoot = RtlGetNtSystemRoot();
    RtlInitUnicodeString(&DestinationString, NtSystemRoot);
    LdrpAppendUnicodeStringToFilenameBuffer(a4, &DestinationString);
    LdrpAppendUnicodeStringToFilenameBuffer(a4, &SlashSystem32SlashString);
    appended = LdrpAppendUnicodeStringToFilenameBuffer(a4, v22);
    if ( appended < 0 )
      return (unsigned int)appended;
    ProcessParameters = v5->ProcessParameters;
    if ( !ProcessParameters || (v21 = (ProcessParameters->Flags & 0x1000) == 0, v15 = 1, v21) )
      v15 = 0;
    v9 = a4;
  }
  else
  {
    v15 = 1;
    if ( appended < 0 )
      return (unsigned int)appended;
  }
  if ( v15 && !LdrpIsSecureProcess )
  {
    v16 = RtlDosApplyFileIsolationRedirection_Ustr(
            1u,
            v9,
            (PUNICODE_STRING)&LdrpDefaultExtension,
            0LL,
            &DynamicString,
            0LL,
            0LL,
            0LL,
            0LL);
    v17 = v16;
    if ( v16 >= 0 )
    {
      *v7 = 1;
      LdrpGetFullPath(&DynamicString, a4);
      LdrpFreeUnicodeString((__int64)&DynamicString);
    }
    else if ( v16 == -1072365560 )
    {
      return (unsigned int)appended;
    }
    return v17;
  }
  return (unsigned int)appended;
}
