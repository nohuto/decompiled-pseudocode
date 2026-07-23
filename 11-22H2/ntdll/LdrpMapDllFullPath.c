/*
 * XREFs of LdrpMapDllFullPath @ 0x180011690
 * Callers:
 *     LdrpProcessWork @ 0x1800114C8 (LdrpProcessWork.c)
 *     LdrpLoadEnclaveModule @ 0x1800D91B0 (LdrpLoadEnclaveModule.c)
 * Callees:
 *     LdrpMapDllNtFileName @ 0x180010BF4 (LdrpMapDllNtFileName.c)
 *     LdrpAppCompatRedirect @ 0x1800117D8 (LdrpAppCompatRedirect.c)
 *     LdrpHashUnicodeString @ 0x180014C14 (LdrpHashUnicodeString.c)
 *     LdrpResolveDllName @ 0x18002AA44 (LdrpResolveDllName.c)
 *     LdrpFindExistingModule @ 0x18002DC0C (LdrpFindExistingModule.c)
 *     NtdllpFreeStringRoutine @ 0x1800397A0 (NtdllpFreeStringRoutine.c)
 *     LdrpLoadContextReplaceModule @ 0x180072D94 (LdrpLoadContextReplaceModule.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpMapDllFullPath(__int64 a1)
{
  __int64 v1; // r15
  int v2; // eax
  int v4; // eax
  int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp-D0h] BYREF
  _UNICODE_STRING v8; // [rsp+40h] [rbp-C0h] BYREF
  _WORD v9[128]; // [rsp+50h] [rbp-B0h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  v8.Buffer = v9;
  v2 = *(_DWORD *)(a1 + 32);
  v7 = 0LL;
  *(_DWORD *)&v8.Length = 0x1000000;
  v9[0] = 0;
  v4 = LdrpResolveDllName(a1, (unsigned int)&v8, (int)v1 + 88, (int)v1 + 72, v2);
  v5 = v4;
  if ( *(_QWORD *)(a1 + 176) )
  {
    if ( v4 < 0 )
      goto LABEL_6;
  }
  else
  {
    v5 = LdrpAppCompatRedirect(a1, (int)v1 + 72, (int)v1 + 88, (unsigned int)&v8, v4);
    if ( v5 < 0 )
      goto LABEL_6;
    *(_DWORD *)(v1 + 264) = LdrpHashUnicodeString(v1 + 88);
    LdrpFindExistingModule((PUNICODE_STRING)(v1 + 88), (PUNICODE_STRING)(v1 + 72), (__int64)&v7);
    if ( v7 )
    {
      LdrpLoadContextReplaceModule(a1);
      goto LABEL_6;
    }
  }
  v5 = LdrpMapDllNtFileName(a1, &v8);
  if ( v5 == 1073741838 )
    v5 = -1073741701;
LABEL_6:
  if ( v9 != v8.Buffer )
    NtdllpFreeStringRoutine(v8.Buffer);
  return (unsigned int)v5;
}
