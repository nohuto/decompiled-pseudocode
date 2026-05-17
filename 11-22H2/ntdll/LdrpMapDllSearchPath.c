/*
 * XREFs of LdrpMapDllSearchPath @ 0x180011078
 * Callers:
 *     LdrpProcessWork @ 0x1800114C8 (LdrpProcessWork.c)
 *     LdrpLoadEnclaveModule @ 0x1800D91B0 (LdrpLoadEnclaveModule.c)
 * Callees:
 *     LdrpMapDllNtFileName @ 0x180010BF4 (LdrpMapDllNtFileName.c)
 *     LdrpIsSecurityEtwLoggingEnabled @ 0x180011018 (LdrpIsSecurityEtwLoggingEnabled.c)
 *     LdrpFreeUnicodeString @ 0x180011348 (LdrpFreeUnicodeString.c)
 *     LdrpAppCompatRedirect @ 0x1800117D8 (LdrpAppCompatRedirect.c)
 *     LdrpHashUnicodeString @ 0x180014C14 (LdrpHashUnicodeString.c)
 *     LdrpInitializeDllPath @ 0x18002B234 (LdrpInitializeDllPath.c)
 *     LdrpFindExistingModule @ 0x18002DC0C (LdrpFindExistingModule.c)
 *     LdrpSearchPath @ 0x18002E074 (LdrpSearchPath.c)
 *     RtlReleasePath @ 0x180032EC0 (RtlReleasePath.c)
 *     NtdllpFreeStringRoutine @ 0x1800397A0 (NtdllpFreeStringRoutine.c)
 *     LdrpLoadContextReplaceModule @ 0x180072D94 (LdrpLoadContextReplaceModule.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     LdrpLogEtwDllSearchResults @ 0x1800DB750 (LdrpLogEtwDllSearchResults.c)
 */

__int64 __fastcall LdrpMapDllSearchPath(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // rsi
  int v4; // r14d
  __int64 v5; // r8
  _QWORD *v6; // r15
  int v7; // r8d
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int ExistingModule; // ebx
  int v13; // eax
  __int128 v14; // xmm1
  _BYTE v16[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v17; // [rsp+54h] [rbp-ACh] BYREF
  __int128 v18; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+68h] [rbp-98h] BYREF
  __int128 v20; // [rsp+70h] [rbp-90h] BYREF
  __int128 v21; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING v22; // [rsp+90h] [rbp-70h] BYREF
  _WORD v23[128]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v24[15]; // [rsp+1A0h] [rbp+A0h] BYREF
  char v25; // [rsp+21Ch] [rbp+11Ch]

  v1 = *(_QWORD *)(a1 + 48);
  v2 = *(_QWORD *)(a1 + 56);
  v19 = 0LL;
  v16[0] = 0;
  v22.Buffer = v23;
  v4 = 0;
  *(_DWORD *)&v22.Length = 0x1000000;
  v23[0] = 0;
  v17 = 0;
  v21 = 0LL;
  v18 = 0LL;
  if ( v1 && (v5 = *(unsigned int *)(v1 + 280), (((LdrpPolicyBits & 4) != 0 ? 32512 : 31488) & (unsigned int)v5) != 0) )
  {
    LdrpInitializeDllPath(*(_QWORD *)(v1 + 80), v5 & ((-(__int64)((LdrpPolicyBits & 4) != 0) & 0x400) + 31488) | 1, v24);
    v6 = v24;
  }
  else
  {
    LdrpInitializeDllPath(0LL, 0LL, v24);
    v6 = *(_QWORD **)(a1 + 16);
  }
  while ( 1 )
  {
    v7 = *(_DWORD *)(a1 + 32) >> 3;
    LOBYTE(v7) = (*(_DWORD *)(a1 + 32) & 8) != 0;
    v8 = LdrpSearchPath(
           a1,
           (_DWORD)v6,
           v7,
           (unsigned int)&v21,
           (__int64)&v22,
           (__int64)&v20,
           (__int64)&v18,
           (__int64)v16,
           (__int64)&v17);
    ExistingModule = v8;
    if ( v16[0] )
      *(_DWORD *)(v2 + 104) |= 1u;
    if ( v8 == -1073741515 )
      break;
    if ( v8 < 0 )
      goto LABEL_14;
LABEL_8:
    v4 = 1;
    if ( !*(_QWORD *)(a1 + 176) )
    {
      ExistingModule = LdrpAppCompatRedirect(a1, (unsigned int)&v18, (unsigned int)&v20, (unsigned int)&v22, v8);
      if ( ExistingModule < 0 )
        goto LABEL_14;
      if ( (*(_DWORD *)(a1 + 32) & 0x10000) != 0 )
        v17 |= 1u;
      v13 = LdrpHashUnicodeString(&v20);
      *(_DWORD *)(v2 + 264) = v13;
      ExistingModule = LdrpFindExistingModule(
                         (unsigned int)&v20,
                         (unsigned int)&v18,
                         *(_DWORD *)(a1 + 32),
                         v13,
                         (__int64)&v19);
      if ( ExistingModule != -1073741515 )
        goto LABEL_14;
    }
    LdrpFreeUnicodeString(v2 + 72);
    v14 = v20;
    *(_OWORD *)(v2 + 72) = v18;
    *(_OWORD *)(v2 + 88) = v14;
    v18 = 0LL;
    ExistingModule = LdrpMapDllNtFileName(a1, &v22);
    if ( ExistingModule != 1073741838 )
      goto LABEL_14;
    if ( v23 != v22.Buffer )
      NtdllpFreeStringRoutine(v22.Buffer);
    *(_DWORD *)&v22.Length = 0x1000000;
    v22.Buffer = v23;
    v23[0] = 0;
  }
  if ( !v4 )
    goto LABEL_8;
  ExistingModule = -1073741701;
LABEL_14:
  if ( v19 )
  {
    LdrpLoadContextReplaceModule(a1);
  }
  else if ( LdrpIsSecurityEtwLoggingEnabled(v9, 0LL, v10, v11) )
  {
    LdrpLogEtwDllSearchResults(v17, a1);
  }
  if ( v23 != v22.Buffer )
    NtdllpFreeStringRoutine(v22.Buffer);
  *(_DWORD *)&v22.Length = 0x1000000;
  v22.Buffer = v23;
  v23[0] = 0;
  LdrpFreeUnicodeString(&v18);
  if ( v25 )
    RtlReleasePath(v24[0]);
  return (unsigned int)ExistingModule;
}
