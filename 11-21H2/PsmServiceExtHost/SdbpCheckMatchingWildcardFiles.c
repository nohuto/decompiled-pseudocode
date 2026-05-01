/*
 * XREFs of SdbpCheckMatchingWildcardFiles @ 0x18009AC20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 *     SdbpCheckAllAttributes @ 0x1800981CC (SdbpCheckAllAttributes.c)
 *     SdbFindFirstTag @ 0x180098EE4 (SdbFindFirstTag.c)
 *     SdbGetStringTagPtr @ 0x1800991D4 (SdbGetStringTagPtr.c)
 *     SdbpInitializeSearchDBContext @ 0x18009BC38 (SdbpInitializeSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x18009C078 (SdbpResolveMatchingFile.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 *     AslFileMappingCreate @ 0x18009F03C (AslFileMappingCreate.c)
 *     AslFileMappingDelete @ 0x18009F2A4 (AslFileMappingDelete.c)
 *     AslPathWildcardFindClose @ 0x1800A42B0 (AslPathWildcardFindClose.c)
 *     AslPathWildcardFindFirst @ 0x1800A42F4 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x1800A48BC (AslPathWildcardFindNext.c)
 */

__int64 __fastcall SdbpCheckMatchingWildcardFiles(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  _DWORD *v7; // r15
  unsigned int v8; // r12d
  PVOID v9; // rdi
  void *v10; // rsi
  unsigned int FirstTag; // eax
  __int64 StringTagPtr; // r8
  const char *v13; // r9
  int v14; // r8d
  __int64 v15; // r13
  int *v16; // rdx
  int v17; // r15d
  __int64 v18; // rdx
  int i; // eax
  __int64 result; // rax
  unsigned int v21; // [rsp+30h] [rbp-D0h] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  void *v23; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B0h]
  __int64 v26; // [rsp+58h] [rbp-A8h]
  _DWORD *v27; // [rsp+60h] [rbp-A0h]
  __int64 v28; // [rsp+68h] [rbp-98h]
  int *v29; // [rsp+70h] [rbp-90h]
  _BYTE v30[528]; // [rsp+80h] [rbp-80h] BYREF

  v25 = a2;
  v28 = a3;
  v7 = a1;
  v27 = a1;
  v8 = 0;
  v9 = 0LL;
  v21 = 0;
  v10 = 0LL;
  P = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  if ( *(_QWORD *)(a6 + 88) )
  {
    v21 = 1;
LABEL_30:
    v8 = 1;
    goto LABEL_31;
  }
  FirstTag = SdbFindFirstTag(a3, a5, 24577);
  if ( !FirstTag )
    goto LABEL_31;
  StringTagPtr = SdbGetStringTagPtr(a3, FirstTag);
  v26 = StringTagPtr;
  if ( !StringTagPtr )
  {
    v13 = "Failed to get the string from the database";
    v14 = 2899;
LABEL_6:
    AslLogCallPrintf(1, (unsigned int)"SdbpCheckMatchingWildcardFiles", v14, (_DWORD)v13);
    goto LABEL_31;
  }
  v15 = -1LL;
  do
    ++v15;
  while ( *(_WORD *)(StringTagPtr + 2 * v15) );
  if ( (*(_BYTE *)a6 & 1) == 0 )
  {
    if ( !(unsigned int)SdbpInitializeSearchDBContext(a6) )
    {
      v13 = "Failed to initialize SEARCHDBCONTEXT";
      v14 = 2913;
      goto LABEL_6;
    }
    StringTagPtr = v26;
  }
  v16 = *(int **)(a6 + 72);
  v17 = 0;
  v29 = v16;
  if ( *v16 <= 0 )
  {
LABEL_29:
    v7 = v27;
    *(_DWORD *)(a6 + 80) = 1;
    goto LABEL_30;
  }
  while ( (unsigned int)SdbpResolveMatchingFile(v25, a6, StringTagPtr, (unsigned int)v15, &v16[12 * v17 + 2], &P) )
  {
    AslPathWildcardFindClose(&v24);
    memset_0(v30, 0, 0x208uLL);
    v9 = P;
    for ( i = AslPathWildcardFindFirst(v30, v18, P, &v24); i >= 0; i = AslPathWildcardFindNext(v30, 260LL, v24) )
    {
      if ( v10 )
      {
        AslFileMappingDelete(v10);
        v23 = 0LL;
      }
      i = AslFileMappingCreate(&v23, v30);
      v10 = v23;
      if ( i < 0 )
        break;
      if ( (int)SdbpCheckAllAttributes(&v21, v25, v28, a5, (__int64)v23) >= 0 )
        goto LABEL_29;
    }
    if ( i != -2147483642 )
      AslLogCallPrintf(
        3,
        (unsigned int)"SdbpCheckMatchingWildcardFiles",
        2991,
        (unsigned int)"AslPathWildcardFindFirst/Next failed to find a file [%x]");
    if ( v9 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
      v10 = v23;
      v9 = 0LL;
      P = 0LL;
    }
    v16 = v29;
    if ( ++v17 >= *v29 )
      goto LABEL_29;
    StringTagPtr = v26;
  }
  AslLogCallPrintf(
    1,
    (unsigned int)"SdbpCheckMatchingWildcardFiles",
    2937,
    (unsigned int)"Failed to resolve matching file");
  v9 = P;
  v7 = v27;
LABEL_31:
  AslPathWildcardFindClose(&v24);
  AslFileMappingDelete(v10);
  if ( v9 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  result = v8;
  *v7 = v21;
  return result;
}
