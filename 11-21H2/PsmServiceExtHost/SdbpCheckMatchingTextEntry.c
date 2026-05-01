/*
 * XREFs of SdbpCheckMatchingTextEntry @ 0x18009A828
 * Callers:
 *     SdbpCheckMatchingText @ 0x18009A6F0 (SdbpCheckMatchingText.c)
 * Callees:
 *     memcpy_0 @ 0x180050222 (memcpy_0.c)
 *     SdbpInitializeSearchDBContext @ 0x18009BC38 (SdbpInitializeSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x18009C078 (SdbpResolveMatchingFile.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 *     AslFileNotFound @ 0x18009DEB4 (AslFileNotFound.c)
 *     AslStringSearchA @ 0x18009ECDC (AslStringSearchA.c)
 *     AslStringSearchW @ 0x18009ED74 (AslStringSearchW.c)
 *     AslFileMappingCreate @ 0x18009F03C (AslFileMappingCreate.c)
 *     AslFileMappingDelete @ 0x18009F2A4 (AslFileMappingDelete.c)
 *     AslFileMappingEnsureMappedAs @ 0x18009F40C (AslFileMappingEnsureMappedAs.c)
 */

__int64 __fastcall SdbpCheckMatchingTextEntry(
        __int64 a1,
        __int64 a2,
        unsigned __int16 *a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        int *a8,
        _DWORD *a9)
{
  _DWORD *v10; // rdi
  PVOID v11; // rdx
  unsigned int v13; // r13d
  unsigned __int64 *v14; // rbx
  int v15; // eax
  int *v16; // r14
  int v17; // edi
  __int64 v18; // r9
  int v19; // eax
  __int64 v20; // rcx
  int v21; // ecx
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  unsigned int v25; // esi
  unsigned int v26; // edi
  int v27; // r15d
  int v28; // r15d
  struct _PEB *v29; // rax
  unsigned int v30; // ebx
  PVOID Heap; // rax
  const void *v32; // rdx
  __int64 v33; // rax
  int v34; // ecx
  const char *v35; // r9
  int v36; // r8d
  PVOID v37; // [rsp+30h] [rbp-20h] BYREF
  PVOID P; // [rsp+38h] [rbp-18h] BYREF
  PVOID v39; // [rsp+40h] [rbp-10h]
  unsigned __int64 v40; // [rsp+48h] [rbp-8h]
  int v41; // [rsp+98h] [rbp+48h]
  unsigned __int16 *v42; // [rsp+A0h] [rbp+50h]

  v42 = a3;
  v10 = a9;
  v11 = 0LL;
  v41 = 0;
  v13 = 0;
  P = 0LL;
  v14 = 0LL;
  v37 = 0LL;
  *a8 = 0;
  *a9 = 0;
  if ( (*(_BYTE *)a2 & 1) == 0 )
  {
    v15 = SdbpInitializeSearchDBContext(a2);
    v11 = 0LL;
    if ( !v15 )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpCheckMatchingTextEntry",
        1699,
        (unsigned int)"Failed to initialize SEARCHDBCONTEXT");
      v11 = 0LL;
      goto LABEL_18;
    }
    a3 = v42;
  }
  v16 = *(int **)(a2 + 72);
  v17 = 0;
  if ( *v16 <= 0 )
    goto LABEL_15;
  while ( 1 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( a3[v18] );
    if ( !(unsigned int)SdbpResolveMatchingFile(a1, a2, a3, v18, &v16[12 * v17 + 2], &P) )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpCheckMatchingTextEntry",
        1723,
        (unsigned int)"Failed to resolve matching text file");
      goto LABEL_28;
    }
    v19 = AslFileMappingCreate(&v37, P);
    v14 = (unsigned __int64 *)v37;
    v20 = (unsigned int)v19;
    if ( v19 >= 0 )
      v20 = (unsigned int)AslFileMappingEnsureMappedAs(v37, 0LL);
    if ( !(unsigned int)AslFileNotFound(v20) )
      break;
    AslFileMappingDelete(v14);
    v11 = 0LL;
    v14 = 0LL;
    v37 = 0LL;
    if ( P )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
      v14 = (unsigned __int64 *)v37;
      v11 = 0LL;
    }
    a3 = v42;
    ++v17;
    P = 0LL;
    if ( v17 >= *v16 )
      goto LABEL_15;
  }
  if ( v21 < 0 )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpCheckMatchingTextEntry", 1755, (unsigned int)"Failed to map file [%x]");
LABEL_28:
    v11 = 0LL;
    goto LABEL_17;
  }
  if ( v17 > 0 )
    *a9 = 1;
  if ( !v14 )
    goto LABEL_15;
  v25 = a7;
  v26 = (unsigned int)v11;
  if ( a7 >= v14[3] )
    v25 = *((_DWORD *)v14 + 6);
  v40 = v14[4];
  if ( a5 <= v25 )
  {
    v27 = (int)v11;
    LOBYTE(v27) = a6 == 3;
    v28 = v27 + 1;
    if ( v25 )
    {
      while ( 1 )
      {
        if ( v26 > a5 )
          v26 += v28 - a5;
        v29 = NtCurrentPeb();
        v30 = v25 - v26;
        if ( v25 - v26 > 0x1000 )
          v30 = 4096;
        Heap = RtlAllocateHeap(v29->ProcessHeap, 8u, v30 + 2LL);
        v39 = Heap;
        if ( !Heap )
          break;
        v32 = (const void *)(v40 + v26);
        if ( (unsigned __int64)v32 < v40 )
        {
          v35 = "Overflow doing pointer addition";
          v36 = 1833;
          goto LABEL_54;
        }
        memcpy_0(Heap, v32, v30);
        if ( !a6 )
          goto LABEL_53;
        if ( a6 <= 2 )
        {
          v33 = AslStringSearchA(v39, v30, a4, a5);
          v34 = v41;
          if ( v33 )
            v34 = 1;
          v41 = v34;
        }
        else
        {
          if ( a6 != 3 )
          {
LABEL_53:
            v35 = "Unknown file encoding";
            v36 = 1867;
            goto LABEL_54;
          }
          if ( AslStringSearchW(v39, v30 >> 1, a4, a5 >> 1) )
            v41 = 1;
        }
        v26 += v30;
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v39);
        if ( v26 >= v25 )
        {
          v14 = (unsigned __int64 *)v37;
          v11 = 0LL;
          goto LABEL_52;
        }
      }
      v35 = "Failed to allocate temp buffer";
      v36 = 1826;
LABEL_54:
      AslLogCallPrintf(1, (unsigned int)"SdbpCheckMatchingTextEntry", v36, (_DWORD)v35);
      v14 = (unsigned __int64 *)v37;
      goto LABEL_28;
    }
LABEL_52:
    *a8 = v41;
  }
  else
  {
LABEL_15:
    *a8 = (int)v11;
  }
  v13 = 1;
LABEL_17:
  v10 = a9;
LABEL_18:
  v22 = *v42;
  LOWORD(v22) = v22 - 37;
  if ( (unsigned __int16)v22 <= 0x37u )
  {
    v23 = 0x80000000000201LL;
    if ( _bittest64(&v23, v22) )
      *v10 = 1;
  }
  if ( P != v11 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
    v14 = (unsigned __int64 *)v37;
  }
  if ( v14 )
    AslFileMappingDelete(v14);
  return v13;
}
