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
  __int64 *v6; // r15
  int v7; // eax
  int ExistingModule; // ebx
  __int64 v9; // rdx
  unsigned int v10; // eax
  __int128 v11; // xmm1
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r9
  bool v16; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v17; // [rsp+54h] [rbp-ACh] BYREF
  __int128 v18; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+68h] [rbp-98h] BYREF
  __int128 v20; // [rsp+70h] [rbp-90h] BYREF
  __int128 v21; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING v22; // [rsp+90h] [rbp-70h] BYREF
  _WORD v23[128]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v24[15]; // [rsp+1A0h] [rbp+A0h] BYREF
  char v25; // [rsp+21Ch] [rbp+11Ch]

  v1 = *(_QWORD *)(a1 + 48);
  v2 = *(_QWORD *)(a1 + 56);
  v19 = 0LL;
  v16 = 0;
  v22.Buffer = v23;
  v4 = 0;
  *(_DWORD *)&v22.Length = 0x1000000;
  v23[0] = 0;
  v17 = 0;
  v21 = 0LL;
  v18 = 0LL;
  if ( v1 && (v5 = *(unsigned int *)(v1 + 280), (((LdrpPolicyBits & 4) != 0 ? 32512 : 31488) & (unsigned int)v5) != 0) )
  {
    LdrpInitializeDllPath(*(void **)(v1 + 80), v5 & ((-(__int64)((LdrpPolicyBits & 4) != 0) & 0x400) + 31488) | 1, v24);
    v6 = v24;
  }
  else
  {
    LdrpInitializeDllPath(0LL, 0LL, v24);
    v6 = *(__int64 **)(a1 + 16);
  }
  while ( 1 )
  {
    v7 = LdrpSearchPath(
           (const void **)a1,
           (__int64)v6,
           (*(_DWORD *)(a1 + 32) & 8) != 0,
           (__int16 **)&v21,
           &v22,
           (__int64)&v20,
           (unsigned __int16 *)&v18,
           &v16,
           (__int64)&v17);
    ExistingModule = v7;
    if ( v16 )
      *(_DWORD *)(v2 + 104) |= 1u;
    if ( v7 == -1073741515 )
      break;
    if ( v7 < 0 )
      goto LABEL_14;
LABEL_8:
    v4 = 1;
    if ( !*(_QWORD *)(a1 + 176) )
    {
      ExistingModule = LdrpAppCompatRedirect(a1, &v18, (__int64)&v20, (__int64)&v22, v7);
      if ( ExistingModule < 0 )
        goto LABEL_14;
      if ( (*(_DWORD *)(a1 + 32) & 0x10000) != 0 )
        v17 |= 1u;
      v10 = LdrpHashUnicodeString((__int64)&v20, v9);
      *(_DWORD *)(v2 + 264) = v10;
      ExistingModule = LdrpFindExistingModule(
                         (unsigned __int16 *)&v20,
                         (unsigned __int64)&v18,
                         *(unsigned int *)(a1 + 32),
                         v10,
                         &v19);
      if ( ExistingModule != -1073741515 )
        goto LABEL_14;
    }
    LdrpFreeUnicodeString(v2 + 72);
    v11 = v20;
    *(_OWORD *)(v2 + 72) = v18;
    *(_OWORD *)(v2 + 88) = v11;
    v18 = 0LL;
    ExistingModule = LdrpMapDllNtFileName(a1, &v22);
    if ( ExistingModule != 1073741838 )
      goto LABEL_14;
    if ( v23 != v22.Buffer )
      NtdllpFreeStringRoutine((__int64)v22.Buffer);
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
    LdrpLoadContextReplaceModule(a1, v19);
  }
  else if ( (unsigned __int8)LdrpIsSecurityEtwLoggingEnabled() )
  {
    LdrpLogEtwDllSearchResults(v17, a1);
  }
  if ( v23 != v22.Buffer )
    NtdllpFreeStringRoutine((__int64)v22.Buffer);
  *(_DWORD *)&v22.Length = 0x1000000;
  v22.Buffer = v23;
  v23[0] = 0;
  LdrpFreeUnicodeString(&v18);
  if ( v25 )
    RtlReleasePath(v24[0], v12, v13, v14);
  return (unsigned int)ExistingModule;
}
