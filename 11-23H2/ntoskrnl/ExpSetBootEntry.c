/*
 * XREFs of ExpSetBootEntry @ 0x1409FD400
 * Callers:
 *     NtAddBootEntry @ 0x1409FEAD0 (NtAddBootEntry.c)
 *     NtModifyBootEntry @ 0x1409FF510 (NtModifyBootEntry.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseFastMutexUnsafe @ 0x140302880 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403028F0 (ExAcquireFastMutexUnsafe.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     strcmp @ 0x1403DB2D0 (strcmp.c)
 *     swprintf_s @ 0x1403DE5A0 (swprintf_s.c)
 *     ZwTranslateFilePath @ 0x14041EB70 (ZwTranslateFilePath.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     IoGetEnvironmentVariableEx @ 0x1406876A0 (IoGetEnvironmentVariableEx.c)
 *     SeSinglePrivilegeCheck @ 0x140737CF0 (SeSinglePrivilegeCheck.c)
 *     ExpSafeWcslen @ 0x14083E404 (ExpSafeWcslen.c)
 *     ExpVerifyFilePath @ 0x14083E710 (ExpVerifyFilePath.c)
 *     IoSetEnvironmentVariableEx @ 0x140950674 (IoSetEnvironmentVariableEx.c)
 *     ExpVerifyWindowsOsOptions @ 0x1409FEA58 (ExpVerifyWindowsOsOptions.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall ExpSetBootEntry(int a1, const void *a2, unsigned __int64 a3)
{
  unsigned int i; // r12d
  PFILE_PATH v5; // r13
  PFILE_PATH v6; // r15
  KPROCESSOR_MODE PreviousMode; // dl
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  size_t v12; // r14
  unsigned __int64 v13; // rax
  char *Pool2; // rax
  char *v15; // rdi
  char *v16; // rcx
  int v17; // esi
  int EnvironmentVariable; // ebx
  __int64 v19; // rsi
  char *v20; // r14
  _FILE_PATH *v21; // r15
  char *v22; // rsi
  int v23; // eax
  unsigned __int64 v24; // rdx
  size_t v25; // r14
  _FILE_PATH *v26; // rsi
  ULONG Length; // eax
  ULONG v28; // eax
  ULONG v29; // esi
  _WORD *v30; // rax
  _WORD *v31; // rbx
  int v32; // ecx
  char *v33; // rbx
  char *v34; // r14
  _FILE_PATH *v35; // r8
  struct _KTHREAD *v36; // rax
  _DWORD *v37; // r15
  ULONG v39; // [rsp+38h] [rbp-C0h] BYREF
  ULONG OutputFilePathLength[3]; // [rsp+3Ch] [rbp-BCh] BYREF
  PFILE_PATH InputFilePath; // [rsp+48h] [rbp-B0h]
  PFILE_PATH v42; // [rsp+50h] [rbp-A8h]
  ULONG v43; // [rsp+58h] [rbp-A0h] BYREF
  int v45; // [rsp+60h] [rbp-98h]
  unsigned int Size; // [rsp+64h] [rbp-94h]
  unsigned int Size_4; // [rsp+68h] [rbp-90h]
  unsigned int v48; // [rsp+6Ch] [rbp-8Ch]
  PVOID P; // [rsp+70h] [rbp-88h]
  PVOID v50; // [rsp+78h] [rbp-80h]
  char *v51; // [rsp+80h] [rbp-78h]
  void *Src; // [rsp+88h] [rbp-70h]
  _DWORD *v53; // [rsp+90h] [rbp-68h]
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-50h]
  size_t Dst[3]; // [rsp+B0h] [rbp-48h] BYREF

  v53 = (_DWORD *)a3;
  v50 = 0LL;
  i = 0;
  v5 = 0LL;
  InputFilePath = 0LL;
  v6 = 0LL;
  v42 = 0LL;
  P = 0LL;
  OutputFilePathLength[0] = 0;
  v43 = 0;
  v39 = 0;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v8 = (unsigned __int64)a2 + 4;
  v9 = 0x7FFFFFFF0000LL;
  if ( PreviousMode )
  {
    if ( v8 >= 0x7FFFFFFF0000LL )
      v8 = 0x7FFFFFFF0000LL;
    v10 = *(_DWORD *)v8;
    v48 = *(_DWORD *)v8;
  }
  else
  {
    v10 = *(_DWORD *)v8;
    v48 = *(_DWORD *)v8;
  }
  if ( v10 < 0x1C )
    return 3221225485LL;
  if ( PreviousMode )
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
      v10 = v48;
    }
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return 3221225569LL;
  }
  else
  {
    v12 = v10;
  }
  Pool2 = (char *)ExAllocatePool2(64LL, v12, 1920364101LL);
  v15 = Pool2;
  v50 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  memmove(Pool2, a2, v12);
  v16 = &v15[v12];
  v51 = &v15[v12];
  v17 = a1;
  if ( *(_DWORD *)v15 == 1 && (a1 || *((_DWORD *)v15 + 2) <= 0xFFFFu) )
  {
    *((_DWORD *)v15 + 3) &= 0x13u;
    Size = *((_DWORD *)v15 + 4);
    if ( (Size & 1) == 0 )
    {
      Size_4 = *((_DWORD *)v15 + 5);
      if ( (Size_4 & 3) == 0 )
      {
        v19 = *((unsigned int *)v15 + 6);
        if ( (unsigned int)v19 > v10 || (v20 = &v15[v19 + 28], v20 >= v16) )
        {
          EnvironmentVariable = -1073741811;
          goto LABEL_89;
        }
        if ( (unsigned int)v19 >= 8 && !strcmp(v15 + 28, "WINDOWS") )
        {
          if ( (unsigned int)v19 <= 0x14 )
          {
            EnvironmentVariable = -1073741811;
LABEL_88:
            v5 = InputFilePath;
            goto LABEL_89;
          }
          EnvironmentVariable = ExpVerifyWindowsOsOptions(v15 + 28, (unsigned int)v19);
          if ( EnvironmentVariable < 0 )
            goto LABEL_88;
          v45 = 1;
          v21 = (_FILE_PATH *)&v15[*((unsigned int *)v15 + 11) + 28];
        }
        else
        {
          v45 = 0;
          v21 = 0LL;
        }
        v22 = &v15[Size];
        Src = v22;
        v23 = ExpSafeWcslen(v22, (unsigned __int64)v51);
        if ( v23 == -1 )
        {
          EnvironmentVariable = -1073741811;
          v6 = v42;
          v5 = v42;
LABEL_89:
          v17 = a1;
          goto LABEL_90;
        }
        Size = 2 * v23 + 2;
        InputFilePath = (PFILE_PATH)&v15[Size_4];
        EnvironmentVariable = ExpVerifyFilePath(InputFilePath, v24);
        if ( EnvironmentVariable >= 0 )
        {
          if ( v20 > v22 || (v25 = Size, &v22[Size] > (char *)InputFilePath) )
          {
            EnvironmentVariable = -1073741811;
            goto LABEL_87;
          }
          if ( InputFilePath->Type == 4 )
          {
            Length = InputFilePath->Length;
            v42 = InputFilePath;
          }
          else
          {
            EnvironmentVariable = ZwTranslateFilePath(InputFilePath, 4u, 0LL, OutputFilePathLength);
            if ( EnvironmentVariable != -1073741789 )
              goto LABEL_87;
            v26 = (_FILE_PATH *)ExAllocatePool2(64LL, OutputFilePathLength[0], 1920364101LL);
            v42 = v26;
            if ( !v26 )
            {
              EnvironmentVariable = -1073741670;
              v6 = 0LL;
              goto LABEL_88;
            }
            v39 = OutputFilePathLength[0];
            EnvironmentVariable = ZwTranslateFilePath(InputFilePath, 4u, v26, &v39);
            if ( EnvironmentVariable < 0 )
            {
              v6 = v26;
              goto LABEL_88;
            }
            Length = OutputFilePathLength[0];
          }
          v28 = Length - 12;
          OutputFilePathLength[0] = v28;
          if ( !v45 || v21->Type == 4 )
          {
            v29 = *((_DWORD *)v15 + 6);
LABEL_55:
            Size_4 = v25 + v29 + v28 + 6;
            v30 = (_WORD *)ExAllocatePool2(64LL, Size_4, 1920364101LL);
            v31 = v30;
            P = v30;
            if ( !v30 )
            {
              EnvironmentVariable = -1073741670;
              goto LABEL_87;
            }
            *(_DWORD *)v30 = 0;
            v32 = 0;
            if ( (*((_DWORD *)v15 + 3) & 1) != 0 )
            {
              *(_DWORD *)v30 = 1;
              v32 = 1;
            }
            if ( (*((_DWORD *)v15 + 3) & 0x10) != 0 )
              *(_DWORD *)v30 = v32 | 8;
            v30[2] = OutputFilePathLength[0];
            memmove(v30 + 3, Src, v25);
            v33 = (char *)v31 + v25 + 6;
            memmove(v33, v42->FilePath, OutputFilePathLength[0]);
            v34 = &v33[OutputFilePathLength[0]];
            if ( !v45 || v21->Type == 4 )
            {
              memmove(&v33[OutputFilePathLength[0]], v15 + 28, v29);
            }
            else
            {
              memmove(&v33[OutputFilePathLength[0]], v15 + 28, *((unsigned int *)v15 + 11));
              *((_DWORD *)v34 + 3) = v29;
              v35 = (_FILE_PATH *)&v34[*((unsigned int *)v15 + 11)];
              v39 = v43;
              EnvironmentVariable = ZwTranslateFilePath(v21, 4u, v35, &v43);
              if ( EnvironmentVariable )
                goto LABEL_87;
            }
            v36 = KeGetCurrentThread();
            --v36->KernelApcDisable;
            ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
            if ( a1 )
            {
              for ( i = 0; i <= 0xFFFF; ++i )
              {
                swprintf_s((wchar_t *)Dst, 9uLL, L"Boot%04x", i);
                v39 = 0;
                EnvironmentVariable = IoGetEnvironmentVariableEx(
                                        Dst,
                                        (__int64)&EfiBootVariablesGuid,
                                        0LL,
                                        (int *)&v39,
                                        0LL);
                if ( EnvironmentVariable == -1073741568 && ((2 * ((i | (2 * i)) & 0xC4444444)) & i) != 0 )
                {
                  swprintf_s((wchar_t *)Dst, 9uLL, L"Boot%04X", i);
                  v39 = 0;
                  EnvironmentVariable = IoGetEnvironmentVariableEx(
                                          Dst,
                                          (__int64)&EfiBootVariablesGuid,
                                          0LL,
                                          (int *)&v39,
                                          0LL);
                }
                if ( EnvironmentVariable == -1073741568 )
                  break;
                if ( EnvironmentVariable && EnvironmentVariable != -1073741789 )
                  goto LABEL_83;
              }
              if ( i > 0xFFFF )
              {
                EnvironmentVariable = -1073741670;
LABEL_83:
                ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
                KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
                v15 = (char *)v50;
                goto LABEL_87;
              }
            }
            else
            {
              v37 = v50;
              i = *((_DWORD *)v50 + 2);
              swprintf_s((wchar_t *)Dst, 9uLL, L"Boot%04X", i);
              v39 = 0;
              EnvironmentVariable = IoGetEnvironmentVariableEx(
                                      Dst,
                                      (__int64)&EfiBootVariablesGuid,
                                      0LL,
                                      (int *)&v39,
                                      0LL);
              if ( EnvironmentVariable == -1073741568 && ((2 * ((v37[2] | (2 * v37[2])) & 0xC4444444)) & v37[2]) != 0 )
              {
                swprintf_s((wchar_t *)Dst, 9uLL, L"Boot%04x");
                v39 = 0;
                EnvironmentVariable = IoGetEnvironmentVariableEx(
                                        Dst,
                                        (__int64)&EfiBootVariablesGuid,
                                        0LL,
                                        (int *)&v39,
                                        0LL);
              }
              if ( EnvironmentVariable && EnvironmentVariable != -1073741789 )
                goto LABEL_83;
            }
            EnvironmentVariable = IoSetEnvironmentVariableEx(Dst, (__int64)&EfiBootVariablesGuid, (__int64)P, Size_4, 1);
            goto LABEL_83;
          }
          EnvironmentVariable = ZwTranslateFilePath(v21, 4u, 0LL, &v43);
          if ( EnvironmentVariable == -1073741789 )
          {
            v29 = v43 + *((_DWORD *)v15 + 6) - v21->Length;
            v28 = OutputFilePathLength[0];
            goto LABEL_55;
          }
        }
LABEL_87:
        v6 = v42;
        goto LABEL_88;
      }
    }
  }
  EnvironmentVariable = -1073741811;
LABEL_90:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v6 && v6 != v5 )
    ExFreePoolWithTag(v6, 0);
  ExFreePoolWithTag(v15, 0);
  if ( v17 && v53 && EnvironmentVariable >= 0 )
    *v53 = i;
  return (unsigned int)EnvironmentVariable;
}
