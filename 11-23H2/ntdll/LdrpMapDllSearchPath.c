/*
 * XREFs of LdrpMapDllSearchPath @ 0x180010E68
 * Callers:
 *     LdrpProcessWork @ 0x1800112B8 (LdrpProcessWork.c)
 *     LdrpLoadEnclaveModule @ 0x1800D8B60 (LdrpLoadEnclaveModule.c)
 * Callees:
 *     LdrpMapDllNtFileName @ 0x1800109E4 (LdrpMapDllNtFileName.c)
 *     LdrpIsSecurityEtwLoggingEnabled @ 0x180010E08 (LdrpIsSecurityEtwLoggingEnabled.c)
 *     LdrpFreeUnicodeString @ 0x180011138 (LdrpFreeUnicodeString.c)
 *     LdrpAppCompatRedirect @ 0x1800115C8 (LdrpAppCompatRedirect.c)
 *     LdrpHashUnicodeString @ 0x180014A04 (LdrpHashUnicodeString.c)
 *     LdrpInitializeDllPath @ 0x18002B064 (LdrpInitializeDllPath.c)
 *     LdrpFindExistingModule @ 0x18002DA3C (LdrpFindExistingModule.c)
 *     LdrpSearchPath @ 0x18002DEA4 (LdrpSearchPath.c)
 *     RtlReleasePath @ 0x180032D60 (RtlReleasePath.c)
 *     NtdllpFreeStringRoutine @ 0x180039640 (NtdllpFreeStringRoutine.c)
 *     LdrpLoadContextReplaceModule @ 0x180073404 (LdrpLoadContextReplaceModule.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     LdrpLogEtwDllSearchResults @ 0x1800DB100 (LdrpLogEtwDllSearchResults.c)
 */

__int64 __fastcall LdrpMapDllSearchPath(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // rsi
  int v4; // r14d
  __int64 v5; // r8
  PWSTR *v6; // r15
  int v7; // r8d
  int v8; // eax
  int ExistingModule; // ebx
  _UNICODE_STRING v10; // xmm1
  _BYTE v12[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v13; // [rsp+54h] [rbp-ACh] BYREF
  _UNICODE_STRING v14; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+68h] [rbp-98h] BYREF
  _UNICODE_STRING String1; // [rsp+70h] [rbp-90h] BYREF
  __int128 v17; // [rsp+80h] [rbp-80h] BYREF
  _UNICODE_STRING v18; // [rsp+90h] [rbp-70h] BYREF
  _WORD v19[128]; // [rsp+A0h] [rbp-60h] BYREF
  PWSTR Path[15]; // [rsp+1A0h] [rbp+A0h] BYREF
  char v21; // [rsp+21Ch] [rbp+11Ch]

  v1 = *(_QWORD *)(a1 + 48);
  v2 = *(_QWORD *)(a1 + 56);
  v15 = 0LL;
  v12[0] = 0;
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
      *(_QWORD *)(v1 + 80),
      v5 & ((-(__int64)((LdrpPolicyBits & 4) != 0) & 0x400) + 31488) | 1,
      Path);
    v6 = Path;
  }
  else
  {
    LdrpInitializeDllPath(0LL, 0LL, Path);
    v6 = *(PWSTR **)(a1 + 16);
  }
  while ( 1 )
  {
    v7 = *(_DWORD *)(a1 + 32) >> 3;
    LOBYTE(v7) = (*(_DWORD *)(a1 + 32) & 8) != 0;
    v8 = LdrpSearchPath(
           a1,
           (_DWORD)v6,
           v7,
           (unsigned int)&v17,
           (__int64)&v18,
           (__int64)&String1,
           (__int64)&v14,
           (__int64)v12,
           (__int64)&v13);
    ExistingModule = v8;
    if ( v12[0] )
      *(_DWORD *)(v2 + 104) |= 1u;
    if ( v8 == -1073741515 )
      break;
    if ( v8 < 0 )
      goto LABEL_14;
LABEL_8:
    v4 = 1;
    if ( !*(_QWORD *)(a1 + 176) )
    {
      ExistingModule = LdrpAppCompatRedirect(a1, (unsigned int)&v14, (unsigned int)&String1, (unsigned int)&v18, v8);
      if ( ExistingModule < 0 )
        goto LABEL_14;
      if ( (*(_DWORD *)(a1 + 32) & 0x10000) != 0 )
        v13 |= 1u;
      *(_DWORD *)(v2 + 264) = LdrpHashUnicodeString(&String1);
      ExistingModule = LdrpFindExistingModule(&String1, &v14, (__int64)&v15);
      if ( ExistingModule != -1073741515 )
        goto LABEL_14;
    }
    LdrpFreeUnicodeString(v2 + 72);
    v10 = String1;
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
    LdrpLoadContextReplaceModule(a1);
  }
  else if ( LdrpIsSecurityEtwLoggingEnabled() )
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
