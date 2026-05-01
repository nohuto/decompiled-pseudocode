/*
 * XREFs of SdbpCheckMatchingWildcardFiles @ 0x180095CE0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     memset_0 @ 0x1800536FA (memset_0.c)
 *     SdbpCheckAllAttributes @ 0x18009320C (SdbpCheckAllAttributes.c)
 *     SdbFindFirstTag @ 0x180093FA4 (SdbFindFirstTag.c)
 *     SdbGetStringTagPtr @ 0x180094294 (SdbGetStringTagPtr.c)
 *     SdbpInitializeSearchDBContext @ 0x180096B18 (SdbpInitializeSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x180096F58 (SdbpResolveMatchingFile.c)
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 *     AslFileMappingCreate @ 0x1800999F8 (AslFileMappingCreate.c)
 *     AslFileMappingDelete @ 0x180099C60 (AslFileMappingDelete.c)
 *     AslPathWildcardFindClose @ 0x18009DFA8 (AslPathWildcardFindClose.c)
 *     AslPathWildcardFindFirst @ 0x18009DFEC (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x18009E5BC (AslPathWildcardFindNext.c)
 */

__int64 __fastcall SdbpCheckMatchingWildcardFiles(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  _DWORD *v7; // r12
  unsigned int v8; // ebx
  PVOID v9; // rdi
  void *v10; // rsi
  unsigned int FirstTag; // eax
  __int64 StringTagPtr; // rax
  __int64 v13; // rdx
  __int64 v14; // r12
  int *v15; // r13
  int v16; // r15d
  int i; // eax
  __int64 result; // rax
  __int64 v19; // [rsp+20h] [rbp-E0h]
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v21; // [rsp+40h] [rbp-C0h] BYREF
  void *v22; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD *v24; // [rsp+58h] [rbp-A8h]
  __int64 v25; // [rsp+60h] [rbp-A0h]
  __int64 v26; // [rsp+68h] [rbp-98h]
  __int64 v27; // [rsp+70h] [rbp-90h]
  unsigned __int16 v28[264]; // [rsp+80h] [rbp-80h] BYREF

  v27 = a3;
  v25 = a2;
  v7 = a1;
  v8 = 0;
  v24 = a1;
  v21 = 0;
  v9 = 0LL;
  P = 0LL;
  v10 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  FirstTag = SdbFindFirstTag(a3, a5, 24577LL, a4);
  if ( FirstTag )
  {
    StringTagPtr = SdbGetStringTagPtr(a3, FirstTag);
    v26 = StringTagPtr;
    v13 = StringTagPtr;
    if ( !StringTagPtr )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpCheckMatchingWildcardFiles",
        3093,
        (unsigned int)"Failed to get the string from the database");
      goto LABEL_28;
    }
    v14 = -1LL;
    do
      ++v14;
    while ( *(_WORD *)(StringTagPtr + 2 * v14) );
    v8 = 1;
    if ( (*(_BYTE *)a6 & 1) == 0 )
    {
      if ( !(unsigned int)SdbpInitializeSearchDBContext(a6) )
      {
        AslLogCallPrintf(
          1,
          (unsigned int)"SdbpCheckMatchingWildcardFiles",
          3107,
          (unsigned int)"Failed to initialize SEARCHDBCONTEXT");
        v8 = 0;
LABEL_27:
        v7 = v24;
        goto LABEL_28;
      }
      v13 = v26;
    }
    v15 = *(int **)(a6 + 72);
    v16 = 0;
    if ( *v15 <= 0 )
    {
LABEL_26:
      *(_DWORD *)(a6 + 80) = 1;
    }
    else
    {
      while ( (unsigned int)SdbpResolveMatchingFile(v25, a6, v13, (unsigned int)v14, &v15[12 * v16 + 2], &P) )
      {
        AslPathWildcardFindClose(&v23);
        memset_0(v28, 0, 0x208uLL);
        v9 = P;
        for ( i = AslPathWildcardFindFirst(v28); i >= 0; i = AslPathWildcardFindNext(v28, 260LL, v23) )
        {
          if ( v10 )
          {
            AslFileMappingDelete(v10);
            v22 = 0LL;
          }
          i = AslFileMappingCreate(&v22, v28);
          v10 = v22;
          if ( i < 0 )
            break;
          if ( (int)SdbpCheckAllAttributes(&v21, v25, v27, a5, (__int64)v22) >= 0 )
            goto LABEL_26;
        }
        if ( i != -2147483642 )
        {
          LODWORD(v19) = i;
          AslLogCallPrintf(
            3,
            (unsigned int)"SdbpCheckMatchingWildcardFiles",
            3185,
            (unsigned int)"AslPathWildcardFindFirst/Next failed to find a file [%x]",
            v19);
        }
        if ( v9 )
        {
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
          v10 = v22;
          v9 = 0LL;
          P = 0LL;
        }
        if ( ++v16 >= *v15 )
          goto LABEL_26;
        v13 = v26;
      }
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpCheckMatchingWildcardFiles",
        3131,
        (unsigned int)"Failed to resolve matching file");
      v9 = P;
      v8 = 0;
    }
    goto LABEL_27;
  }
LABEL_28:
  AslPathWildcardFindClose(&v23);
  AslFileMappingDelete(v10);
  if ( v9 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  result = v8;
  *v7 = v21;
  return result;
}
