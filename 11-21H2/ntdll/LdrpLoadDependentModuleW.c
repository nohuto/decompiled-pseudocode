/*
 * XREFs of LdrpLoadDependentModuleW @ 0x1800E1870
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x18003D014 (LdrpMapAndSnapDependency.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x180025BF0 (NtdllpFreeStringRoutine.c)
 *     LdrpLoadDependentModuleInternal @ 0x18003D8F0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180044FE8 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpLoadDependentModuleW(
        unsigned __int16 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char **a5,
        _QWORD *a6)
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
