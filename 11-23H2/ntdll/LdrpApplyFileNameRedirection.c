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

__int64 __fastcall LdrpApplyFileNameRedirection(__int64 a1, __int64 a2, __int64 a3, _WORD *a4, _BYTE *a5)
{
  struct _PEB *v5; // r15
  _BYTE *v7; // r12
  __int64 v9; // rbp
  void *ApiSetMap; // rbx
  int v11; // eax
  __int16 v12; // di
  int appended; // ebx
  unsigned __int16 v14; // ax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  char v19; // al
  int v20; // eax
  unsigned int v21; // ebp
  const WCHAR *NtSystemRoot; // rax
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  bool v25; // zf
  _WORD v26[8]; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v27[16]; // [rsp+60h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-38h] BYREF

  v5 = NtCurrentPeb();
  v7 = a5;
  v9 = a2;
  ApiSetMap = v5->ApiSetMap;
  *a5 = 0;
  LdrpLogDllState(0LL, a2, 5328LL);
  v11 = ApiSetResolveToHost((_DWORD)ApiSetMap, v9, a1 != 0 ? a1 + 88 : 0, (unsigned int)&a5, (__int64)v26);
  v12 = v26[0];
  appended = v11;
  if ( v11 >= 0 && (_BYTE)a5 )
  {
    if ( v26[0] )
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
    *a4 = 0;
    NtSystemRoot = (const WCHAR *)RtlGetNtSystemRoot(v16, v15, v17, v18);
    RtlInitUnicodeString(&DestinationString, NtSystemRoot);
    LdrpAppendUnicodeStringToFilenameBuffer(a4, &DestinationString);
    LdrpAppendUnicodeStringToFilenameBuffer(a4, &SlashSystem32SlashString);
    appended = LdrpAppendUnicodeStringToFilenameBuffer(a4, v26);
    if ( appended < 0 )
      return (unsigned int)appended;
    ProcessParameters = v5->ProcessParameters;
    if ( !ProcessParameters || (v25 = (ProcessParameters->Flags & 0x1000) == 0, v19 = 1, v25) )
      v19 = 0;
    LODWORD(v9) = (_DWORD)a4;
  }
  else
  {
    v19 = 1;
    if ( appended < 0 )
      return (unsigned int)appended;
  }
  if ( v19 && !LdrpIsSecureProcess )
  {
    v20 = RtlDosApplyFileIsolationRedirection_Ustr(1, v9, (unsigned int)L"\b\n", 0, (__int64)v27, 0LL, 0LL, 0LL, 0LL);
    v21 = v20;
    if ( v20 >= 0 )
    {
      *v7 = 1;
      LdrpGetFullPath(v27, a4);
      LdrpFreeUnicodeString((__int64)v27);
    }
    else if ( v20 == -1072365560 )
    {
      return (unsigned int)appended;
    }
    return v21;
  }
  return (unsigned int)appended;
}
