/*
 * XREFs of sub_1409FD4A0 @ 0x1409FD4A0
 * Callers:
 *     sub_1409FF330 @ 0x1409FF330 (sub_1409FF330.c)
 *     sub_140A00490 @ 0x140A00490 (sub_140A00490.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     strcmp @ 0x1403E2AE0 (strcmp.c)
 *     swprintf_s @ 0x1403E5D20 (swprintf_s.c)
 *     ZwTranslateFilePath @ 0x14041F160 (ZwTranslateFilePath.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     sub_14093E520 @ 0x14093E520 (sub_14093E520.c)
 *     sub_14093E830 @ 0x14093E830 (sub_14093E830.c)
 *     sub_1409FD474 @ 0x1409FD474 (sub_1409FD474.c)
 *     sub_1409FF178 @ 0x1409FF178 (sub_1409FF178.c)
 *     sub_1409FF2C4 @ 0x1409FF2C4 (sub_1409FF2C4.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1409FD4A0(int a1, const void *a2, unsigned __int64 a3)
{
  unsigned int i; // r15d
  PVOID v5; // r12
  PVOID v6; // r13
  KPROCESSOR_MODE v7; // dl
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  SIZE_T v12; // r14
  unsigned __int64 v13; // rax
  char *PoolWithTag; // rax
  char *v15; // rdi
  unsigned __int64 v16; // r14
  int v17; // esi
  int v18; // ebx
  PVOID v19; // r14
  __int64 v20; // rsi
  _FILE_PATH *v21; // r13
  char *v22; // rsi
  int v23; // eax
  unsigned int v24; // r14d
  _FILE_PATH *v25; // rax
  _FILE_PATH *v26; // rsi
  ULONG Length; // eax
  ULONG v28; // eax
  ULONG v29; // esi
  size_t v30; // rbx
  PVOID v31; // rax
  size_t v32; // r8
  _WORD *v33; // rbx
  unsigned int v34; // ecx
  int v35; // eax
  __int64 v36; // r14
  char *v37; // rbx
  char *v38; // r14
  _FILE_PATH *v39; // r8
  struct _KTHREAD *v40; // rax
  _DWORD *v41; // r13
  ULONG v43; // [rsp+38h] [rbp-C0h] BYREF
  ULONG OutputFilePathLength; // [rsp+3Ch] [rbp-BCh] BYREF
  PVOID P; // [rsp+40h] [rbp-B8h]
  PFILE_PATH InputFilePath; // [rsp+50h] [rbp-A8h]
  PFILE_PATH v47; // [rsp+58h] [rbp-A0h]
  ULONG v48; // [rsp+60h] [rbp-98h] BYREF
  unsigned int Size; // [rsp+64h] [rbp-94h]
  int v51; // [rsp+6Ch] [rbp-8Ch]
  unsigned int v52; // [rsp+70h] [rbp-88h]
  unsigned int v53; // [rsp+74h] [rbp-84h]
  PVOID v54; // [rsp+78h] [rbp-80h]
  char *v55; // [rsp+80h] [rbp-78h]
  void *Src; // [rsp+88h] [rbp-70h]
  _DWORD *v57; // [rsp+90h] [rbp-68h]
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-50h]
  wchar_t Dst[12]; // [rsp+B0h] [rbp-48h] BYREF

  v57 = (_DWORD *)a3;
  v54 = 0LL;
  i = 0;
  v5 = 0LL;
  v6 = 0LL;
  P = 0LL;
  OutputFilePathLength = 0;
  v48 = 0;
  v43 = 0;
  CurrentThread = KeGetCurrentThread();
  v7 = *((_BYTE *)CurrentThread + 562);
  v8 = (unsigned __int64)a2 + 4;
  v9 = 0x7FFFFFFF0000LL;
  if ( v7 )
  {
    if ( v8 >= 0x7FFFFFFF0000LL )
      v8 = 0x7FFFFFFF0000LL;
    v10 = *(_DWORD *)v8;
    v53 = *(_DWORD *)v8;
  }
  else
  {
    v10 = *(_DWORD *)v8;
    v53 = *(_DWORD *)v8;
  }
  if ( v10 < 0x1C )
    return 3221225485LL;
  if ( v7 )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = v10;
    v13 = (unsigned __int64)a2 + v10;
    if ( v13 > 0x7FFFFFFF0000LL || v13 < (unsigned __int64)a2 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( a3 )
    {
      if ( a3 < 0x7FFFFFFF0000LL )
        v9 = a3;
      *(_DWORD *)v9 = *(_DWORD *)v9;
      v10 = v53;
    }
    if ( !SeSinglePrivilegeCheck(stru_140D3CA50, v7) )
      return 3221225569LL;
  }
  else
  {
    v12 = v10;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v12, 0x72766E45u);
  v15 = PoolWithTag;
  v54 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memmove(PoolWithTag, a2, v12);
  v16 = (unsigned __int64)&v15[v12];
  v17 = a1;
  if ( *(_DWORD *)v15 == 1 && (a1 || *((_DWORD *)v15 + 2) <= 0xFFFFu) )
  {
    *((_DWORD *)v15 + 3) &= 0x13u;
    Size = *((_DWORD *)v15 + 4);
    if ( (Size & 1) == 0 )
    {
      v52 = *((_DWORD *)v15 + 5);
      if ( (v52 & 3) == 0 )
      {
        v20 = *((unsigned int *)v15 + 6);
        if ( (unsigned int)v20 > v10 || (v55 = &v15[v20 + 28], (unsigned __int64)v55 >= v16) )
        {
          v18 = -1073741811;
          v19 = P;
          goto LABEL_93;
        }
        if ( (unsigned int)v20 >= 8 && !strcmp(v15 + 28, "WINDOWS") )
        {
          if ( (unsigned int)v20 <= 0x14 )
          {
            v18 = -1073741811;
LABEL_92:
            v19 = P;
            v5 = P;
            goto LABEL_93;
          }
          v18 = sub_1409FF2C4(v15 + 28, (unsigned int)v20);
          if ( v18 < 0 )
            goto LABEL_92;
          v51 = 1;
          v21 = (_FILE_PATH *)&v15[*((unsigned int *)v15 + 11) + 28];
        }
        else
        {
          v51 = 0;
          v21 = 0LL;
        }
        v22 = &v15[Size];
        Src = v22;
        v23 = sub_1409FD474(v22, v16);
        if ( v23 == -1 )
        {
          v18 = -1073741811;
          v19 = P;
          v6 = P;
          v5 = P;
LABEL_93:
          v17 = a1;
          goto LABEL_94;
        }
        Size = 2 * v23 + 2;
        InputFilePath = (PFILE_PATH)&v15[v52];
        v18 = sub_1409FF178(InputFilePath);
        if ( v18 >= 0 )
        {
          if ( v55 > v22 || (v24 = Size, &v22[Size] > (char *)InputFilePath) )
          {
            v18 = -1073741811;
          }
          else
          {
            if ( InputFilePath->Type == 4 )
            {
              Length = InputFilePath->Length;
              v47 = InputFilePath;
              goto LABEL_52;
            }
            v18 = ZwTranslateFilePath(InputFilePath, 4u, 0LL, &OutputFilePathLength);
            if ( v18 == -1073741789 )
            {
              v25 = (_FILE_PATH *)ExAllocatePoolWithTag(NonPagedPoolNx, OutputFilePathLength, 0x72766E45u);
              v26 = v25;
              v47 = v25;
              if ( !v25 )
              {
                v18 = -1073741670;
                v6 = 0LL;
LABEL_47:
                v19 = P;
LABEL_48:
                v5 = InputFilePath;
                goto LABEL_93;
              }
              memset(v25, 0, OutputFilePathLength);
              v43 = OutputFilePathLength;
              v18 = ZwTranslateFilePath(InputFilePath, 4u, v26, &v43);
              if ( v18 < 0 )
              {
                v6 = v26;
                goto LABEL_47;
              }
              Length = OutputFilePathLength;
LABEL_52:
              v28 = Length - 12;
              OutputFilePathLength = v28;
              if ( !v51 || v21->Type == 4 )
              {
                v29 = *((_DWORD *)v15 + 6);
              }
              else
              {
                v18 = ZwTranslateFilePath(v21, 4u, 0LL, &v48);
                if ( v18 != -1073741789 )
                {
LABEL_67:
                  v19 = P;
                  goto LABEL_59;
                }
                v29 = v48 + *((_DWORD *)v15 + 6) - v21->Length;
                v28 = OutputFilePathLength;
              }
              v52 = v24 + 6 + v29 + v28;
              v30 = v52;
              v31 = ExAllocatePoolWithTag(NonPagedPoolNx, v52, 0x72766E45u);
              v19 = v31;
              P = v31;
              if ( !v31 )
              {
                v18 = -1073741670;
LABEL_59:
                v6 = v47;
                goto LABEL_48;
              }
              v32 = v30;
              v33 = v31;
              memset(v31, 0, v32);
              *(_DWORD *)v33 = 0;
              v34 = *((_DWORD *)v15 + 3);
              v35 = 0;
              if ( (v34 & 1) != 0 )
              {
                *(_DWORD *)v33 = 1;
                v34 = *((_DWORD *)v15 + 3);
                v35 = 1;
              }
              if ( (v34 & 0x10) != 0 )
                *(_DWORD *)v33 = v35 | 8;
              v33[2] = OutputFilePathLength;
              v36 = Size;
              memmove(v33 + 3, Src, Size);
              v37 = (char *)v33 + v36 + 6;
              memmove(v37, v47->FilePath, OutputFilePathLength);
              v38 = &v37[OutputFilePathLength];
              if ( !v51 || v21->Type == 4 )
              {
                memmove(&v37[OutputFilePathLength], v15 + 28, v29);
              }
              else
              {
                memmove(&v37[OutputFilePathLength], v15 + 28, *((unsigned int *)v15 + 11));
                *((_DWORD *)v38 + 3) = v29;
                v39 = (_FILE_PATH *)&v38[*((unsigned int *)v15 + 11)];
                v43 = v48;
                v18 = ZwTranslateFilePath(v21, 4u, v39, &v48);
                if ( v18 )
                  goto LABEL_67;
              }
              v40 = KeGetCurrentThread();
              --*((_WORD *)v40 + 242);
              ExAcquireFastMutexUnsafe(&stru_140C11680);
              if ( a1 )
              {
                for ( i = 0; i <= 0xFFFF; ++i )
                {
                  swprintf_s(Dst, 9uLL, L"Boot%04x", i);
                  v43 = 0;
                  v18 = sub_14093E520(Dst, (__int64)&qword_140042090, 0LL, (int *)&v43, 0LL);
                  if ( v18 == -1073741568 && ((2 * ((i | (2 * i)) & 0xC4444444)) & i) != 0 )
                  {
                    swprintf_s(Dst, 9uLL, L"Boot%04X", i);
                    v43 = 0;
                    v18 = sub_14093E520(Dst, (__int64)&qword_140042090, 0LL, (int *)&v43, 0LL);
                  }
                  if ( v18 == -1073741568 )
                    break;
                  if ( v18 && v18 != -1073741789 )
                    goto LABEL_80;
                }
                if ( i > 0xFFFF )
                {
                  v18 = -1073741670;
LABEL_80:
                  v19 = P;
LABEL_81:
                  ExReleaseFastMutexUnsafe(&stru_140C11680);
                  sub_1402F9540((__int64)KeGetCurrentThread());
                  v15 = (char *)v54;
                  goto LABEL_59;
                }
              }
              else
              {
                v41 = v54;
                i = *((_DWORD *)v54 + 2);
                swprintf_s(Dst, 9uLL, L"Boot%04X", i);
                v43 = 0;
                v18 = sub_14093E520(Dst, (__int64)&qword_140042090, 0LL, (int *)&v43, 0LL);
                if ( v18 == -1073741568 && ((2 * ((v41[2] | (2 * v41[2])) & 0xC4444444)) & v41[2]) != 0 )
                {
                  swprintf_s(Dst, 9uLL, L"Boot%04x");
                  v43 = 0;
                  v18 = sub_14093E520(Dst, (__int64)&qword_140042090, 0LL, (int *)&v43, 0LL);
                }
                if ( v18 && v18 != -1073741789 )
                  goto LABEL_80;
              }
              v19 = P;
              v18 = sub_14093E830(Dst, (__int64)&qword_140042090, (__int64)P, v52, 1);
              goto LABEL_81;
            }
          }
        }
        v19 = P;
        v6 = P;
        goto LABEL_48;
      }
    }
  }
  v18 = -1073741811;
  v19 = P;
LABEL_94:
  if ( v19 )
    ExFreePoolWithTag(v19, 0);
  if ( v6 && v6 != v5 )
    ExFreePoolWithTag(v6, 0);
  ExFreePoolWithTag(v15, 0);
  if ( v17 && v57 && v18 >= 0 )
    *v57 = i;
  return (unsigned int)v18;
}
