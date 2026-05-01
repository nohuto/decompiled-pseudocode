/*
 * XREFs of SdbpResolveMatchingFile @ 0x180096F58
 * Callers:
 *     SdbpCheckMatchingDir @ 0x180094C00 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingFiles @ 0x180094DD0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingTextEntry @ 0x1800958F8 (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x180095CE0 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     memmove_0 @ 0x1800536EE (memmove_0.c)
 *     RtlULongLongMult @ 0x180094AF4 (RtlULongLongMult.c)
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 *     AslPathClean @ 0x18009D768 (AslPathClean.c)
 *     AslEnvExpandStrings2 @ 0x1800A01D0 (AslEnvExpandStrings2.c)
 *     AslEnvGetProcessWowInfo @ 0x1800A0404 (AslEnvGetProcessWowInfo.c)
 *     AslImageFileToArchitecture @ 0x1800A0950 (AslImageFileToArchitecture.c)
 */

__int64 __fastcall SdbpResolveMatchingFile(__int64 a1, __int64 a2, _WORD *a3, unsigned int a4, __int64 a5, _QWORD *a6)
{
  _QWORD *v6; // r12
  unsigned int v7; // ebx
  __int64 v12; // r15
  int ProcessWowInfo; // eax
  __int16 v14; // ax
  int v15; // ecx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  SIZE_T v19; // rsi
  char *Heap; // rax
  char *v21; // rdi
  int v22; // eax
  const char *v23; // r9
  int v24; // r8d
  __int16 v25; // ax
  int v26; // eax
  int v27; // r8d
  __int64 v29; // [rsp+20h] [rbp-30h]
  int v30; // [rsp+28h] [rbp-28h]
  __int64 v31; // [rsp+28h] [rbp-28h]
  int v32; // [rsp+30h] [rbp-20h]
  unsigned __int64 v33[2]; // [rsp+40h] [rbp-10h] BYREF
  __int16 v36; // [rsp+A8h] [rbp+58h] BYREF

  v6 = a6;
  v7 = 0;
  v33[0] = 0LL;
  v36 = -1;
  *a6 = 0LL;
  LOWORD(a6) = -1;
  if ( a4 )
  {
    v12 = a5;
    if ( *a3 == 37 )
    {
      ProcessWowInfo = AslEnvGetProcessWowInfo(&a6, &v36);
      if ( ProcessWowInfo < 0 )
      {
        AslLogCallPrintf(
          1,
          (unsigned int)"SdbpResolveMatchingFile",
          803,
          (unsigned int)"AslEnvGetProcessWowInfo failed [%x]",
          ProcessWowInfo);
        return v7;
      }
      v14 = AslImageFileToArchitecture(*(unsigned __int16 *)(a1 + 584));
      if ( v14 == -1 )
        v14 = v36;
      v15 = AslEnvExpandStrings2(*(_QWORD *)(a2 + 56), a3, 0LL, 0LL, v33, (_WORD)a6, v14);
      if ( (int)(v15 + 0x80000000) >= 0 && v15 != -1073741789 )
      {
        LODWORD(v29) = v15;
        AslLogCallPrintf(
          1,
          (unsigned int)"SdbpResolveMatchingFile",
          820,
          (unsigned int)"AslEnvExpandStrings2 failed [%x]",
          v29);
        return v7;
      }
      v16 = 2 * v33[0];
    }
    else
    {
      v17 = *(unsigned int *)(a5 + 8);
      v18 = v17 + a4;
      if ( v18 < v17 )
      {
        v27 = 833;
        goto LABEL_38;
      }
      v16 = v18 + 1;
      if ( v18 + 1 < v18 )
      {
        v27 = 838;
        goto LABEL_38;
      }
    }
    if ( v16 + 20 >= v16 )
    {
      v33[0] = v16 + 20;
      if ( (int)RtlULongLongMult(v16 + 20, 2uLL, v33) < 0 )
      {
        AslLogCallPrintf(1, (unsigned int)"SdbpResolveMatchingFile", 849, (unsigned int)"Invalid buffer size");
        return v7;
      }
      v19 = v33[0];
      if ( v33[0] < 0x208 )
        v19 = 520LL;
      Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v19);
      v21 = Heap;
      if ( !Heap )
      {
        AslLogCallPrintf(1, (unsigned int)"SdbpResolveMatchingFile", 857, (unsigned int)"Out of memory");
        return v7;
      }
      if ( *a3 == 37 )
      {
        v22 = AslEnvGetProcessWowInfo(&a6, &v36);
        if ( v22 < 0 )
        {
          v23 = "AslEnvGetProcessWowInfo failed [%x]";
          v24 = 869;
LABEL_32:
          LODWORD(v29) = v22;
          AslLogCallPrintf(1, (unsigned int)"SdbpResolveMatchingFile", v24, (_DWORD)v23, v29);
          goto LABEL_33;
        }
        v25 = AslImageFileToArchitecture(*(unsigned __int16 *)(a1 + 584));
        if ( v25 == -1 )
          v25 = v36;
        LOWORD(v32) = v25;
        LOWORD(v30) = (_WORD)a6;
        v26 = AslEnvExpandStrings2(*(_QWORD *)(a2 + 56), a3, v21, v19 >> 1, v33, v30, v32);
        if ( v26 < 0 )
        {
          LODWORD(v31) = v26;
          AslLogCallPrintf(
            1,
            (unsigned int)"SdbpResolveMatchingFile",
            886,
            (unsigned int)"AslEnvExpandStrings2 failed to expand strings for %ws [%x]",
            a3,
            v31);
LABEL_33:
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v21);
          return v7;
        }
      }
      else
      {
        memmove_0(Heap, *(const void **)v12, 2LL * *(unsigned int *)(v12 + 8));
        memmove_0(&v21[2 * *(unsigned int *)(v12 + 8)], a3, 2LL * (a4 + 1));
      }
      v22 = AslPathClean(v21, v21);
      if ( v22 >= 0 )
      {
        *v6 = v21;
        return 1;
      }
      v23 = "AslPathClean failed [%x]";
      v24 = 911;
      goto LABEL_32;
    }
    v27 = 844;
LABEL_38:
    AslLogCallPrintf(1, (unsigned int)"SdbpResolveMatchingFile", v27, (unsigned int)"Invalid path size");
    return v7;
  }
  AslLogCallPrintf(1, (unsigned int)"SdbpResolveMatchingFile", 782, (unsigned int)"Invalid match file length");
  return v7;
}
