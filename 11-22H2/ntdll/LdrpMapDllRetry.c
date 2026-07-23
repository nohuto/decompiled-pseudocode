/*
 * XREFs of LdrpMapDllRetry @ 0x180072C9C
 * Callers:
 *     LdrpProcessWork @ 0x1800114C8 (LdrpProcessWork.c)
 * Callees:
 *     LdrpMapDllNtFileName @ 0x180010BF4 (LdrpMapDllNtFileName.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180019D38 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     LdrpGetNtPathFromDosPath @ 0x18002B2F4 (LdrpGetNtPathFromDosPath.c)
 *     LdrpFindExistingModule @ 0x18002DC0C (LdrpFindExistingModule.c)
 *     NtdllpFreeStringRoutine @ 0x1800397A0 (NtdllpFreeStringRoutine.c)
 *     LdrpLoadContextReplaceModule @ 0x180072D94 (LdrpLoadContextReplaceModule.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpMapDllRetry(__int64 a1)
{
  __int64 v1; // rax
  const void **v3; // rsi
  unsigned int ExistingModule; // ebx
  int appended; // eax
  __int64 v7; // [rsp+30h] [rbp-D0h] BYREF
  _UNICODE_STRING v8; // [rsp+40h] [rbp-C0h] BYREF
  _WORD v9[128]; // [rsp+50h] [rbp-B0h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  *(_DWORD *)&v8.Length = 0x1000000;
  v8.Buffer = v9;
  v3 = (const void **)(v1 + 72);
  v9[0] = 0;
  ExistingModule = LdrpFindExistingModule(
                     (PUNICODE_STRING)(v1 + 88),
                     (PUNICODE_STRING)(v1 + 72),
                     *(_DWORD *)(a1 + 32),
                     *(_DWORD *)(v1 + 264),
                     &v7);
  if ( v7 )
  {
    LdrpLoadContextReplaceModule(a1);
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 32) & 0x10000000) != 0 )
      appended = LdrpAppendUnicodeStringToFilenameBuffer(&v8.Length, v3);
    else
      appended = LdrpGetNtPathFromDosPath((_UNICODE_STRING *)v3, &v8);
    ExistingModule = appended;
    if ( appended >= 0 )
      ExistingModule = LdrpMapDllNtFileName(a1, &v8);
  }
  if ( v9 != v8.Buffer )
    NtdllpFreeStringRoutine(v8.Buffer);
  return ExistingModule;
}
