/*
 * XREFs of LdrpMapDllFullPath @ 0x18005133C
 * Callers:
 *     LdrpProcessWork @ 0x180051120 (LdrpProcessWork.c)
 *     LdrpLoadEnclaveModule @ 0x1800D8F64 (LdrpLoadEnclaveModule.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x180025BF0 (NtdllpFreeStringRoutine.c)
 *     LdrpResolveDllName @ 0x18004F58C (LdrpResolveDllName.c)
 *     LdrpHashUnicodeString @ 0x18004FB5C (LdrpHashUnicodeString.c)
 *     LdrpMapDllNtFileName @ 0x18004FDE4 (LdrpMapDllNtFileName.c)
 *     LdrpAppCompatRedirect @ 0x180051484 (LdrpAppCompatRedirect.c)
 *     LdrpFindExistingModule @ 0x180051548 (LdrpFindExistingModule.c)
 *     LdrpLoadContextReplaceModule @ 0x180053F88 (LdrpLoadContextReplaceModule.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpMapDllFullPath(__int64 a1)
{
  __int64 v1; // r15
  int v2; // eax
  int v4; // eax
  int v5; // ebx
  __int64 v6; // rdx
  int v7; // eax
  __int64 v9; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING v10; // [rsp+40h] [rbp-C0h] BYREF
  _WORD v11[128]; // [rsp+50h] [rbp-B0h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  v10.Buffer = v11;
  v2 = *(_DWORD *)(a1 + 32);
  v9 = 0LL;
  *(_DWORD *)&v10.Length = 0x1000000;
  v11[0] = 0;
  v4 = LdrpResolveDllName((_OWORD *)a1, (__int64)&v10, v1 + 88, (_OWORD *)(v1 + 72), v2);
  v5 = v4;
  if ( *(_QWORD *)(a1 + 176) )
  {
    if ( v4 < 0 )
      goto LABEL_6;
  }
  else
  {
    v5 = LdrpAppCompatRedirect(a1, (int)v1 + 72, (int)v1 + 88, (unsigned int)&v10, v4);
    if ( v5 < 0 )
      goto LABEL_6;
    v7 = LdrpHashUnicodeString(v1 + 88, v6);
    *(_DWORD *)(v1 + 264) = v7;
    LdrpFindExistingModule(v1 + 88, v1 + 72, *(_DWORD *)(a1 + 32), v7, (__int64)&v9);
    if ( v9 )
    {
      LdrpLoadContextReplaceModule(a1, v9);
      goto LABEL_6;
    }
  }
  v5 = LdrpMapDllNtFileName(a1, &v10);
  if ( v5 == 1073741838 )
    v5 = -1073741701;
LABEL_6:
  if ( v11 != v10.Buffer )
    NtdllpFreeStringRoutine((__int64)v10.Buffer);
  return (unsigned int)v5;
}
