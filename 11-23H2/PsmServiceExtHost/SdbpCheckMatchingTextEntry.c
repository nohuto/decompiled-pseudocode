/*
 * XREFs of SdbpCheckMatchingTextEntry @ 0x180095598
 * Callers:
 *     SdbpCheckMatchingText @ 0x180095460 (SdbpCheckMatchingText.c)
 * Callees:
 *     memcpy_0 @ 0x1800534A2 (memcpy_0.c)
 *     SdbpInitializeSearchDBContext @ 0x1800967B8 (SdbpInitializeSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x180096BF8 (SdbpResolveMatchingFile.c)
 *     AslLogCallPrintf @ 0x1800982C0 (AslLogCallPrintf.c)
 *     AslFileNotFound @ 0x180098544 (AslFileNotFound.c)
 *     AslStringSearchA @ 0x180099394 (AslStringSearchA.c)
 *     AslStringSearchW @ 0x18009942C (AslStringSearchW.c)
 *     AslFileMappingCreate @ 0x180099698 (AslFileMappingCreate.c)
 *     AslFileMappingDelete @ 0x180099900 (AslFileMappingDelete.c)
 *     AslFileMappingEnsureMappedAs @ 0x180099A68 (AslFileMappingEnsureMappedAs.c)
 */

__int64 __fastcall SdbpCheckMatchingTextEntry(
        __int64 a1,
        __int64 a2,
        unsigned __int16 *a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        unsigned int a7,
        int *a8,
        _DWORD *a9)
{
  _DWORD *v11; // rdi
  PVOID v12; // rdx
  unsigned int v14; // r12d
  unsigned int *v15; // rbx
  int v16; // eax
  int *v17; // r14
  int v18; // edi
  __int64 v19; // r9
  int v20; // eax
  __int64 v21; // rcx
  int v22; // ecx
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  unsigned int v26; // esi
  unsigned int v27; // edi
  int v28; // r15d
  int v29; // r15d
  struct _PEB *v30; // rax
  unsigned int v31; // ebx
  PVOID Heap; // rax
  const void *v33; // rdx
  __int64 v34; // rax
  int v35; // ecx
  const char *v36; // r9
  int v37; // r8d
  __int64 v38; // [rsp+20h] [rbp-30h]
  PVOID v39; // [rsp+30h] [rbp-20h] BYREF
  PVOID P; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int64 v41; // [rsp+40h] [rbp-10h]
  int v42; // [rsp+98h] [rbp+48h]
  unsigned __int16 *v43; // [rsp+A0h] [rbp+50h]
  PVOID v45; // [rsp+C8h] [rbp+78h]

  v43 = a3;
  v11 = a9;
  v12 = 0LL;
  v42 = 0;
  v14 = 0;
  P = 0LL;
  v15 = 0LL;
  v39 = 0LL;
  *a8 = 0;
  *a9 = 0;
  if ( (*(_BYTE *)a2 & 1) == 0 )
  {
    v16 = SdbpInitializeSearchDBContext(a2);
    v12 = 0LL;
    if ( !v16 )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpCheckMatchingTextEntry",
        1905,
        (unsigned int)"Failed to initialize SEARCHDBCONTEXT");
      v12 = 0LL;
      goto LABEL_18;
    }
    a3 = v43;
  }
  v17 = *(int **)(a2 + 72);
  v18 = 0;
  if ( *v17 <= 0 )
    goto LABEL_15;
  while ( 1 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( a3[v19] );
    if ( !(unsigned int)SdbpResolveMatchingFile(a1, a2, a3, v19, &v17[12 * v18 + 2], &P) )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpCheckMatchingTextEntry",
        1929,
        (unsigned int)"Failed to resolve matching text file");
      goto LABEL_28;
    }
    v20 = AslFileMappingCreate(&v39, P);
    v15 = (unsigned int *)v39;
    v21 = (unsigned int)v20;
    if ( v20 >= 0 )
      v21 = (unsigned int)AslFileMappingEnsureMappedAs(v39, 0LL);
    if ( !(unsigned int)AslFileNotFound(v21) )
      break;
    AslFileMappingDelete(v15);
    v12 = 0LL;
    v15 = 0LL;
    v39 = 0LL;
    if ( P )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
      v15 = (unsigned int *)v39;
      v12 = 0LL;
    }
    a3 = v43;
    ++v18;
    P = 0LL;
    if ( v18 >= *v17 )
      goto LABEL_15;
  }
  if ( v22 < 0 )
  {
    LODWORD(v38) = v22;
    AslLogCallPrintf(1, (unsigned int)"SdbpCheckMatchingTextEntry", 1961, (unsigned int)"Failed to map file [%x]", v38);
LABEL_28:
    v12 = 0LL;
    goto LABEL_17;
  }
  if ( v18 > 0 )
    *a9 = 1;
  if ( !v15 )
    goto LABEL_15;
  v26 = a7;
  v27 = (unsigned int)v12;
  if ( (unsigned __int64)a7 >= *((_QWORD *)v15 + 3) )
    v26 = v15[6];
  v41 = *((_QWORD *)v15 + 4);
  if ( a5 <= v26 )
  {
    v28 = (int)v12;
    LOBYTE(v28) = a6 == 3;
    v29 = v28 + 1;
    if ( v26 )
    {
      while ( 1 )
      {
        if ( v27 > a5 )
          v27 += v29 - a5;
        v30 = NtCurrentPeb();
        v31 = v26 - v27;
        if ( v26 - v27 > 0x1000 )
          v31 = 4096;
        Heap = RtlAllocateHeap(v30->ProcessHeap, 8u, v31 + 2LL);
        v45 = Heap;
        if ( !Heap )
          break;
        v33 = (const void *)(v41 + v27);
        if ( (unsigned __int64)v33 < v41 )
        {
          v36 = "Overflow doing pointer addition";
          v37 = 2039;
          goto LABEL_54;
        }
        memcpy_0(Heap, v33, v31);
        if ( a6 == 1 || a6 == 2 )
        {
          v34 = AslStringSearchA(v45, v31, a4, a5);
          v35 = v42;
          if ( v34 )
            v35 = 1;
          v42 = v35;
        }
        else
        {
          if ( a6 != 3 )
          {
            v36 = "Unknown file encoding";
            v37 = 2073;
            goto LABEL_54;
          }
          if ( AslStringSearchW(v45, v31 >> 1, a4, a5 >> 1) )
            v42 = 1;
        }
        v27 += v31;
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v45);
        if ( v27 >= v26 )
        {
          v15 = (unsigned int *)v39;
          v12 = 0LL;
          goto LABEL_52;
        }
      }
      v36 = "Failed to allocate temp buffer";
      v37 = 2032;
LABEL_54:
      AslLogCallPrintf(1, (unsigned int)"SdbpCheckMatchingTextEntry", v37, (_DWORD)v36);
      v15 = (unsigned int *)v39;
      goto LABEL_28;
    }
LABEL_52:
    *a8 = v42;
  }
  else
  {
LABEL_15:
    *a8 = (int)v12;
  }
  v14 = 1;
LABEL_17:
  v11 = a9;
LABEL_18:
  v23 = *v43;
  LOWORD(v23) = v23 - 37;
  if ( (unsigned __int16)v23 <= 0x37u )
  {
    v24 = 0x80000000000201LL;
    if ( _bittest64(&v24, v23) )
      *v11 = 1;
  }
  if ( P != v12 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
    v15 = (unsigned int *)v39;
  }
  if ( v15 )
    AslFileMappingDelete(v15);
  return v14;
}
