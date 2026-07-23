/*
 * XREFs of LdrpMapDllSearchPath @ 0x180051844
 * Callers:
 *     LdrpProcessWork @ 0x180051120 (LdrpProcessWork.c)
 *     LdrpLoadEnclaveModule @ 0x1800D8F64 (LdrpLoadEnclaveModule.c)
 * Callees:
 *     RtlReleasePath @ 0x18001CC00 (RtlReleasePath.c)
 *     NtdllpFreeStringRoutine @ 0x180025BF0 (NtdllpFreeStringRoutine.c)
 *     LdrpInitializeDllPath @ 0x180038594 (LdrpInitializeDllPath.c)
 *     LdrpHashUnicodeString @ 0x18004FB5C (LdrpHashUnicodeString.c)
 *     LdrpMapDllNtFileName @ 0x18004FDE4 (LdrpMapDllNtFileName.c)
 *     LdrpSearchPath @ 0x1800501B4 (LdrpSearchPath.c)
 *     LdrpAppCompatRedirect @ 0x180051484 (LdrpAppCompatRedirect.c)
 *     LdrpFindExistingModule @ 0x180051548 (LdrpFindExistingModule.c)
 *     LdrpFreeUnicodeString @ 0x180051B14 (LdrpFreeUnicodeString.c)
 *     LdrpIsSecurityEtwLoggingEnabled @ 0x180051B4C (LdrpIsSecurityEtwLoggingEnabled.c)
 *     LdrpLoadContextReplaceModule @ 0x180053F88 (LdrpLoadContextReplaceModule.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     LdrpLogEtwDllSearchResults @ 0x1800DB238 (LdrpLogEtwDllSearchResults.c)
 */

__int64 __fastcall LdrpMapDllSearchPath(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // rsi
  int v4; // r14d
  __int64 v5; // r8
  PWSTR *v6; // r15
  int v7; // eax
  int ExistingModule; // ebx
  int v9; // eax
  _UNICODE_STRING v10; // xmm1
  bool v12; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v13; // [rsp+54h] [rbp-ACh] BYREF
  _UNICODE_STRING v14; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+68h] [rbp-98h] BYREF
  _UNICODE_STRING v16; // [rsp+70h] [rbp-90h] BYREF
  __int128 v17; // [rsp+80h] [rbp-80h] BYREF
  _UNICODE_STRING v18; // [rsp+90h] [rbp-70h] BYREF
  _WORD v19[128]; // [rsp+A0h] [rbp-60h] BYREF
  PWSTR Path[15]; // [rsp+1A0h] [rbp+A0h] BYREF
  char v21; // [rsp+21Ch] [rbp+11Ch]

  v1 = *(_QWORD *)(a1 + 48);
  v2 = *(_QWORD *)(a1 + 56);
  v15 = 0LL;
  v12 = 0;
  v18.Buffer = v19;
  v4 = 0;
  *(_DWORD *)&v18.Length = 0x1000000;
  v19[0] = 0;
  v13 = 0;
  v17 = 0LL;
  v14 = 0LL;
  if ( v1 && (v5 = *(unsigned int *)(v1 + 280), (((LdrpPolicyBits & 4) != 0 ? 32512 : 31488) & (unsigned int)v5) != 0) )
  {
    LdrpInitializeDllPath(
      *(const WCHAR **)(v1 + 80),
      (const WCHAR *)(v5 & ((-(__int64)((LdrpPolicyBits & 4) != 0) & 0x400) + 31488) | 1),
      (const WCHAR **)Path);
    v6 = Path;
  }
  else
  {
    LdrpInitializeDllPath(0LL, 0LL, (const WCHAR **)Path);
    v6 = *(PWSTR **)(a1 + 16);
  }
  while ( 1 )
  {
    v7 = LdrpSearchPath(
           (const UNICODE_STRING *)a1,
           (__int64)v6,
           (*(_DWORD *)(a1 + 32) & 8) != 0,
           (__int16 **)&v17,
           &v18,
           (__int64)&v16,
           &v14,
           &v12,
           (__int64)&v13);
    ExistingModule = v7;
    if ( v12 )
      *(_DWORD *)(v2 + 104) |= 1u;
    if ( v7 == -1073741515 )
      break;
    if ( v7 < 0 )
      goto LABEL_14;
LABEL_8:
    v4 = 1;
    if ( !*(_QWORD *)(a1 + 176) )
    {
      ExistingModule = LdrpAppCompatRedirect(a1, &v14, (__int64)&v16, (__int64)&v18, v7);
      if ( ExistingModule < 0 )
        goto LABEL_14;
      if ( (*(_DWORD *)(a1 + 32) & 0x10000) != 0 )
        v13 |= 1u;
      v9 = LdrpHashUnicodeString(&v16);
      *(_DWORD *)(v2 + 264) = v9;
      ExistingModule = LdrpFindExistingModule(&v16.Length, &v14, *(_DWORD *)(a1 + 32), v9, &v15);
      if ( ExistingModule != -1073741515 )
        goto LABEL_14;
    }
    LdrpFreeUnicodeString(v2 + 72);
    v10 = v16;
    *(_UNICODE_STRING *)(v2 + 72) = v14;
    *(_UNICODE_STRING *)(v2 + 88) = v10;
    v14 = 0LL;
    ExistingModule = LdrpMapDllNtFileName(a1, &v18);
    if ( ExistingModule != 1073741838 )
      goto LABEL_14;
    if ( v19 != v18.Buffer )
      NtdllpFreeStringRoutine(v18.Buffer);
    *(_DWORD *)&v18.Length = 0x1000000;
    v18.Buffer = v19;
    v19[0] = 0;
  }
  if ( !v4 )
    goto LABEL_8;
  ExistingModule = -1073741701;
LABEL_14:
  if ( v15 )
  {
    LdrpLoadContextReplaceModule(a1, v15);
  }
  else if ( (unsigned __int8)LdrpIsSecurityEtwLoggingEnabled() )
  {
    LdrpLogEtwDllSearchResults(v13, a1);
  }
  if ( v19 != v18.Buffer )
    NtdllpFreeStringRoutine(v18.Buffer);
  *(_DWORD *)&v18.Length = 0x1000000;
  v18.Buffer = v19;
  v19[0] = 0;
  LdrpFreeUnicodeString(&v14);
  if ( v21 )
    RtlReleasePath(Path[0]);
  return (unsigned int)ExistingModule;
}
