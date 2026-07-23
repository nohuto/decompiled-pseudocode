/*
 * XREFs of LdrpLoadDependentModuleW @ 0x1800E13B0
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x180024A58 (LdrpMapAndSnapDependency.c)
 * Callees:
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180019B28 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     LdrpLoadDependentModuleInternal @ 0x1800251E0 (LdrpLoadDependentModuleInternal.c)
 *     NtdllpFreeStringRoutine @ 0x180039640 (NtdllpFreeStringRoutine.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpLoadDependentModuleW(const void **a1, __int64 a2, __int64 a3, __int64 a4, char **a5, _QWORD *a6)
{
  int appended; // ebx
  _UNICODE_STRING OriginalName; // [rsp+30h] [rbp-148h] BYREF
  _WORD v11[128]; // [rsp+40h] [rbp-138h] BYREF

  OriginalName.Buffer = v11;
  *(_DWORD *)&OriginalName.Length = 0x1000000;
  v11[0] = 0;
  appended = LdrpAppendUnicodeStringToFilenameBuffer(&OriginalName.Length, a1);
  if ( appended < 0 || (appended = LdrpLoadDependentModuleInternal(&OriginalName, a2, a3, 9, a5, a6), appended < 0) )
  {
    *a5 = 0LL;
    **(_DWORD **)(a2 + 40) = appended;
  }
  if ( v11 != OriginalName.Buffer )
    NtdllpFreeStringRoutine(OriginalName.Buffer);
  return (unsigned int)appended;
}
