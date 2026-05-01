/*
 * XREFs of SdbpCheckMatchingFiles @ 0x180094A70
 * Callers:
 *     <none>
 * Callees:
 *     SdbpCheckAllAttributes @ 0x180092EAC (SdbpCheckAllAttributes.c)
 *     SdbFindFirstTag @ 0x180093C44 (SdbFindFirstTag.c)
 *     SdbGetStringTagPtr @ 0x180093F34 (SdbGetStringTagPtr.c)
 *     SdbpInitializeSearchDBContext @ 0x1800967B8 (SdbpInitializeSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x180096BF8 (SdbpResolveMatchingFile.c)
 *     AslLogCallPrintf @ 0x1800982C0 (AslLogCallPrintf.c)
 *     AslFileNotFound @ 0x180098544 (AslFileNotFound.c)
 *     AslFileMappingCreate @ 0x180099698 (AslFileMappingCreate.c)
 *     AslFileMappingDelete @ 0x180099900 (AslFileMappingDelete.c)
 */

__int64 __fastcall SdbpCheckMatchingFiles(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, _QWORD *a6)
{
  _DWORD *v8; // rsi
  unsigned int v9; // r14d
  PVOID v10; // rdi
  PVOID v11; // r15
  unsigned int FirstTag; // eax
  _WORD *StringTagPtr; // r13
  _QWORD *v14; // rsi
  unsigned int v15; // eax
  int v16; // ecx
  __int64 v17; // rdx
  int *v18; // r8
  int v19; // r12d
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  __int64 result; // rax
  __int64 v23; // [rsp+20h] [rbp-30h]
  unsigned int v24; // [rsp+30h] [rbp-20h] BYREF
  PVOID P; // [rsp+38h] [rbp-18h] BYREF
  __int64 v26; // [rsp+40h] [rbp-10h]
  int *v27; // [rsp+48h] [rbp-8h]

  v24 = 0;
  v8 = a1;
  P = 0LL;
  v9 = 0;
  v10 = 0LL;
  v11 = 0LL;
  FirstTag = SdbFindFirstTag(a3, a5, 24577LL, a4);
  if ( !FirstTag )
    goto LABEL_32;
  StringTagPtr = (_WORD *)SdbGetStringTagPtr(a3, FirstTag);
  if ( !StringTagPtr )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpCheckMatchingFiles",
      2888,
      (unsigned int)"Failed to get the string from the database");
    goto LABEL_32;
  }
  v14 = a6;
  if ( *StringTagPtr != 42 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( StringTagPtr[v17] );
    v26 = v17;
    if ( (*(_BYTE *)a6 & 1) == 0 )
    {
      if ( !(unsigned int)SdbpInitializeSearchDBContext(a6) )
      {
        AslLogCallPrintf(
          1,
          (unsigned int)"SdbpCheckMatchingFiles",
          2947,
          (unsigned int)"Failed to initialize SEARCHDBCONTEXT");
        goto LABEL_31;
      }
      LODWORD(v17) = v26;
    }
    v18 = (int *)v14[9];
    v19 = 0;
    v27 = v18;
    if ( *v18 <= 0 )
      goto LABEL_27;
    while ( 1 )
    {
      if ( !(unsigned int)SdbpResolveMatchingFile(a2, v14, StringTagPtr, (unsigned int)v17, &v18[12 * v19 + 2], &P) )
      {
        AslLogCallPrintf(
          1,
          (unsigned int)"SdbpCheckMatchingFiles",
          2971,
          (unsigned int)"Failed to resolve matching file");
        v10 = P;
        goto LABEL_31;
      }
      v10 = P;
      a6 = 0LL;
      if ( (int)AslFileMappingCreate(&a6, P) < 0 )
        break;
      v11 = a6;
      if ( (int)SdbpCheckAllAttributes(&v24, a2, a3, a5, (__int64)a6) >= 0 )
      {
        if ( v19 > 0 )
          *((_DWORD *)v14 + 20) = 1;
LABEL_27:
        v20 = (unsigned __int16)*StringTagPtr;
        LOWORD(v20) = v20 - 37;
        if ( (unsigned __int16)v20 <= 0x37u )
        {
          v21 = 0x80000000000201LL;
          if ( _bittest64(&v21, v20) )
            *((_DWORD *)v14 + 20) = 1;
        }
LABEL_30:
        v9 = 1;
        goto LABEL_31;
      }
      AslFileMappingDelete(v11);
      a6 = 0LL;
      v11 = 0LL;
      if ( v10 )
        goto LABEL_24;
LABEL_26:
      v18 = v27;
      ++v19;
      LODWORD(v17) = v26;
      v10 = 0LL;
      P = 0LL;
      if ( v19 >= *v27 )
        goto LABEL_27;
    }
    if ( v10 )
LABEL_24:
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
    v11 = a6;
    goto LABEL_26;
  }
  if ( !a6[1] )
  {
    v24 = 1;
    goto LABEL_30;
  }
  v15 = SdbpCheckAllAttributes(&v24, a2, a3, a5, a6[1]);
  if ( (unsigned int)AslFileNotFound(v15) || v16 >= 0 )
  {
    v9 = 1;
  }
  else
  {
    LODWORD(v23) = v16;
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpCheckMatchingFiles",
      2913,
      (unsigned int)"Failed to check file attributes [%x]",
      v23);
  }
LABEL_31:
  v8 = a1;
LABEL_32:
  AslFileMappingDelete(v11);
  if ( v10 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  result = v9;
  *v8 = v24;
  return result;
}
