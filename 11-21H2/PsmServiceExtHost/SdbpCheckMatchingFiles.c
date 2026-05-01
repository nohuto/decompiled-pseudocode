/*
 * XREFs of SdbpCheckMatchingFiles @ 0x180099D10
 * Callers:
 *     <none>
 * Callees:
 *     SdbpCheckAllAttributes @ 0x1800981CC (SdbpCheckAllAttributes.c)
 *     SdbFindFirstTag @ 0x180098EE4 (SdbFindFirstTag.c)
 *     SdbGetStringTagPtr @ 0x1800991D4 (SdbGetStringTagPtr.c)
 *     SdbpInitializeSearchDBContext @ 0x18009BC38 (SdbpInitializeSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x18009C078 (SdbpResolveMatchingFile.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 *     AslFileNotFound @ 0x18009DEB4 (AslFileNotFound.c)
 *     AslFileMappingCreate @ 0x18009F03C (AslFileMappingCreate.c)
 *     AslFileMappingDelete @ 0x18009F2A4 (AslFileMappingDelete.c)
 */

__int64 __fastcall SdbpCheckMatchingFiles(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, _QWORD *a6)
{
  _QWORD *v6; // rsi
  _DWORD *v9; // r13
  unsigned int v10; // r14d
  PVOID v11; // rdi
  PVOID v12; // r15
  unsigned int FirstTag; // eax
  _WORD *StringTagPtr; // r13
  const char *v15; // r9
  int v16; // r8d
  unsigned int v17; // eax
  int v18; // ecx
  __int64 v19; // rdx
  int *v20; // r8
  int v21; // r12d
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  __int64 result; // rax
  unsigned int v25; // [rsp+30h] [rbp-20h] BYREF
  PVOID P; // [rsp+38h] [rbp-18h] BYREF
  __int64 v27; // [rsp+40h] [rbp-10h]
  int *v28; // [rsp+48h] [rbp-8h]

  v6 = a6;
  v25 = 0;
  P = 0LL;
  v9 = a1;
  v10 = 0;
  v11 = 0LL;
  v12 = 0LL;
  if ( a6[11] )
  {
    v25 = 1;
    goto LABEL_34;
  }
  FirstTag = SdbFindFirstTag(a3, a5, 24577);
  if ( FirstTag )
  {
    StringTagPtr = (_WORD *)SdbGetStringTagPtr(a3, FirstTag);
    if ( !StringTagPtr )
    {
      v15 = "Failed to get the string from the database";
      v16 = 2692;
LABEL_6:
      AslLogCallPrintf(1, (unsigned int)"SdbpCheckMatchingFiles", v16, (_DWORD)v15);
LABEL_7:
      v9 = a1;
      goto LABEL_35;
    }
    if ( v6[1] && *StringTagPtr == 42 )
    {
      v17 = SdbpCheckAllAttributes(&v25, a2, a3, a5, v6[1]);
      if ( (unsigned int)AslFileNotFound(v17) || v18 >= 0 )
        v10 = 1;
      else
        AslLogCallPrintf(
          1,
          (unsigned int)"SdbpCheckMatchingFiles",
          2717,
          (unsigned int)"Failed to check file attributes [%x]");
      goto LABEL_7;
    }
    v19 = -1LL;
    do
      ++v19;
    while ( StringTagPtr[v19] );
    v27 = v19;
    if ( (*(_BYTE *)v6 & 1) == 0 )
    {
      if ( !(unsigned int)SdbpInitializeSearchDBContext(v6) )
      {
        v15 = "Failed to initialize SEARCHDBCONTEXT";
        v16 = 2743;
        goto LABEL_6;
      }
      LODWORD(v19) = v27;
    }
    v20 = (int *)v6[9];
    v21 = 0;
    v28 = v20;
    if ( *v20 <= 0 )
      goto LABEL_30;
    while ( 1 )
    {
      if ( !(unsigned int)SdbpResolveMatchingFile(a2, v6, StringTagPtr, (unsigned int)v19, &v20[12 * v21 + 2], &P) )
      {
        AslLogCallPrintf(
          1,
          (unsigned int)"SdbpCheckMatchingFiles",
          2767,
          (unsigned int)"Failed to resolve matching file");
        v11 = P;
        goto LABEL_7;
      }
      v11 = P;
      a6 = 0LL;
      if ( (int)AslFileMappingCreate(&a6, P) < 0 )
        break;
      v12 = a6;
      if ( (int)SdbpCheckAllAttributes(&v25, a2, a3, a5, (__int64)a6) >= 0 )
      {
        if ( v21 > 0 )
          *((_DWORD *)v6 + 20) = 1;
LABEL_30:
        v22 = (unsigned __int16)*StringTagPtr;
        LOWORD(v22) = v22 - 37;
        if ( (unsigned __int16)v22 <= 0x37u )
        {
          v23 = 0x80000000000201LL;
          if ( _bittest64(&v23, v22) )
            *((_DWORD *)v6 + 20) = 1;
        }
        v9 = a1;
LABEL_34:
        v10 = 1;
        goto LABEL_35;
      }
      AslFileMappingDelete(v12);
      a6 = 0LL;
      v12 = 0LL;
      if ( v11 )
        goto LABEL_27;
LABEL_29:
      v20 = v28;
      ++v21;
      LODWORD(v19) = v27;
      v11 = 0LL;
      P = 0LL;
      if ( v21 >= *v28 )
        goto LABEL_30;
    }
    if ( v11 )
LABEL_27:
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
    v12 = a6;
    goto LABEL_29;
  }
LABEL_35:
  AslFileMappingDelete(v12);
  if ( v11 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  result = v10;
  *v9 = v25;
  return result;
}
