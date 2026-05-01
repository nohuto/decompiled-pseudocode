/*
 * XREFs of SdbpResolveMatchingFile @ 0x18009C078
 * Callers:
 *     SdbpCheckMatchingDir @ 0x180099B40 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingFiles @ 0x180099D10 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingTextEntry @ 0x18009A828 (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x18009AC20 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     memmove_0 @ 0x18005022E (memmove_0.c)
 *     RtlULongLongMult @ 0x180099A34 (RtlULongLongMult.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 *     AslEnvExpandStrings2 @ 0x1800A3010 (AslEnvExpandStrings2.c)
 *     AslEnvGetProcessWowInfo @ 0x1800A3244 (AslEnvGetProcessWowInfo.c)
 *     AslImageFileToArchitecture @ 0x1800A379C (AslImageFileToArchitecture.c)
 *     AslPathClean @ 0x1800A3B30 (AslPathClean.c)
 */

__int64 __fastcall SdbpResolveMatchingFile(__int64 a1, __int64 a2, _WORD *a3, unsigned int a4, __int64 a5, _QWORD *a6)
{
  _QWORD *v6; // r12
  unsigned int v7; // ebx
  const char *v12; // r9
  int v13; // r8d
  __int64 v14; // r15
  __int16 v15; // ax
  int v16; // ecx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  SIZE_T v20; // rsi
  char *Heap; // rax
  char *v22; // rdi
  const char *v23; // r9
  int v24; // r8d
  __int16 v25; // ax
  int v27; // [rsp+28h] [rbp-28h]
  int v28; // [rsp+30h] [rbp-20h]
  unsigned __int64 v29[2]; // [rsp+40h] [rbp-10h] BYREF
  __int16 v32; // [rsp+A8h] [rbp+58h] BYREF

  v6 = a6;
  v7 = 0;
  v29[0] = 0LL;
  v32 = -1;
  *a6 = 0LL;
  LOWORD(a6) = -1;
  if ( !a4 )
  {
    v12 = "Invalid match file length";
    v13 = 576;
LABEL_38:
    AslLogCallPrintf(1, (unsigned int)"SdbpResolveMatchingFile", v13, (_DWORD)v12);
    return v7;
  }
  v14 = a5;
  if ( *a3 == 37 )
  {
    if ( (int)AslEnvGetProcessWowInfo(&a6, &v32) < 0 )
    {
      v12 = "AslEnvGetProcessWowInfo failed [%x]";
      v13 = 597;
      goto LABEL_38;
    }
    v15 = AslImageFileToArchitecture(*(unsigned __int16 *)(a1 + 576));
    if ( v15 == -1 )
      v15 = v32;
    v16 = AslEnvExpandStrings2(*(_QWORD *)(a2 + 56), a3, 0LL, 0LL, v29, (_WORD)a6, v15);
    if ( (int)(v16 + 0x80000000) >= 0 && v16 != -1073741789 )
    {
      v12 = "AslEnvExpandStrings2 failed [%x]";
      v13 = 614;
      goto LABEL_38;
    }
    v17 = 2 * v29[0];
  }
  else
  {
    v18 = *(unsigned int *)(a5 + 8);
    v19 = v18 + a4;
    if ( v19 < v18 )
    {
      v13 = 627;
LABEL_37:
      v12 = "Invalid path size";
      goto LABEL_38;
    }
    v17 = v19 + 1;
    if ( v19 + 1 < v19 )
    {
      v13 = 632;
      goto LABEL_37;
    }
  }
  if ( v17 + 20 < v17 )
  {
    v13 = 638;
    goto LABEL_37;
  }
  v29[0] = v17 + 20;
  if ( (int)RtlULongLongMult(v17 + 20, 2uLL, v29) < 0 )
  {
    v12 = "Invalid buffer size";
    v13 = 643;
    goto LABEL_38;
  }
  v20 = v29[0];
  if ( v29[0] < 0x208 )
    v20 = 520LL;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v20);
  v22 = Heap;
  if ( !Heap )
  {
    v12 = "Out of memory";
    v13 = 651;
    goto LABEL_38;
  }
  if ( *a3 != 37 )
  {
    memmove_0(Heap, *(const void **)v14, 2LL * *(unsigned int *)(v14 + 8));
    memmove_0(&v22[2 * *(unsigned int *)(v14 + 8)], a3, 2LL * (a4 + 1));
    goto LABEL_30;
  }
  if ( (int)AslEnvGetProcessWowInfo(&a6, &v32) < 0 )
  {
    v23 = "AslEnvGetProcessWowInfo failed [%x]";
    v24 = 663;
LABEL_32:
    AslLogCallPrintf(1, (unsigned int)"SdbpResolveMatchingFile", v24, (_DWORD)v23);
    goto LABEL_33;
  }
  v25 = AslImageFileToArchitecture(*(unsigned __int16 *)(a1 + 576));
  if ( v25 == -1 )
    v25 = v32;
  LOWORD(v28) = v25;
  LOWORD(v27) = (_WORD)a6;
  if ( (int)AslEnvExpandStrings2(*(_QWORD *)(a2 + 56), a3, v22, v20 >> 1, v29, v27, v28) >= 0 )
  {
LABEL_30:
    if ( (int)AslPathClean(v22, v22) >= 0 )
    {
      *v6 = v22;
      return 1;
    }
    v23 = "AslPathClean failed [%x]";
    v24 = 705;
    goto LABEL_32;
  }
  AslLogCallPrintf(
    1,
    (unsigned int)"SdbpResolveMatchingFile",
    680,
    (unsigned int)"AslEnvExpandStrings2 failed to expand strings for %ws [%x]");
LABEL_33:
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v22);
  return v7;
}
