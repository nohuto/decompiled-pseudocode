/*
 * XREFs of LdrpApplyFileNameRedirection @ 0x180044B54
 * Callers:
 *     LdrpPreprocessDllName @ 0x18004494C (LdrpPreprocessDllName.c)
 * Callees:
 *     ApiSetResolveToHost @ 0x180044D4C (ApiSetResolveToHost.c)
 *     LdrpLogDllState @ 0x180044F74 (LdrpLogDllState.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180044FE8 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x1800452F0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlInitUnicodeString @ 0x18004C040 (RtlInitUnicodeString.c)
 *     RtlGetNtSystemRoot @ 0x1800509E0 (RtlGetNtSystemRoot.c)
 *     LdrpGetFullPath @ 0x180050F20 (LdrpGetFullPath.c)
 *     LdrpFreeUnicodeString @ 0x180051B14 (LdrpFreeUnicodeString.c)
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
  void *ApiSetMap; // rdi
  int v11; // eax
  __int16 v12; // di
  int appended; // ebx
  unsigned __int16 v14; // ax
  char v15; // al
  NTSTATUS v16; // eax
  unsigned __int32 v17; // edi
  const WCHAR *NtSystemRoot; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // r9
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  bool v27; // zf
  _WORD v28[8]; // [rsp+50h] [rbp-48h] BYREF
  _UNICODE_STRING DynamicString; // [rsp+60h] [rbp-38h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-28h] BYREF

  v5 = NtCurrentPeb();
  v7 = a5;
  v9 = a2;
  ApiSetMap = v5->ApiSetMap;
  *a5 = 0;
  LdrpLogDllState(0LL, a2, 5328LL);
  v11 = ApiSetResolveToHost((_DWORD)ApiSetMap, (_DWORD)v9, a1 != 0 ? a1 + 88 : 0, (unsigned int)&a5, (__int64)v28);
  v12 = v28[0];
  appended = v11;
  if ( v11 >= 0 && (_BYTE)a5 )
  {
    if ( v28[0] )
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
    LdrpAppendUnicodeStringToFilenameBuffer(a4, &DestinationString, v20, v21);
    LdrpAppendUnicodeStringToFilenameBuffer(a4, &SlashSystem32SlashString, v22, v23);
    appended = LdrpAppendUnicodeStringToFilenameBuffer(a4, v28, v24, v25);
    if ( appended < 0 )
      return (unsigned int)appended;
    ProcessParameters = v5->ProcessParameters;
    if ( !ProcessParameters || (v27 = (ProcessParameters->Flags & 0x1000) == 0, v15 = 1, v27) )
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
      LdrpFreeUnicodeString(&DynamicString);
    }
    else if ( v16 == -1072365560 )
    {
      return (unsigned int)appended;
    }
    return v17;
  }
  return (unsigned int)appended;
}
