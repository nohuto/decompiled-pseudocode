/*
 * XREFs of ExpSetBootEntry @ 0x1409FD4A0
 * Callers:
 *     NtAddBootEntry @ 0x1409FF330 (NtAddBootEntry.c)
 *     NtModifyBootEntry @ 0x140A00490 (NtModifyBootEntry.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     strcmp @ 0x1403E2AE0 (strcmp.c)
 *     swprintf_s @ 0x1403E5D20 (swprintf_s.c)
 *     ZwTranslateFilePath @ 0x14041F160 (ZwTranslateFilePath.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     IoGetEnvironmentVariableEx @ 0x14093E520 (IoGetEnvironmentVariableEx.c)
 *     IoSetEnvironmentVariableEx @ 0x14093E830 (IoSetEnvironmentVariableEx.c)
 *     ExpSafeWcslen @ 0x1409FD474 (ExpSafeWcslen.c)
 *     ExpVerifyFilePath @ 0x1409FF178 (ExpVerifyFilePath.c)
 *     ExpVerifyWindowsOsOptions @ 0x1409FF2C4 (ExpVerifyWindowsOsOptions.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpSetBootEntry(int a1, const void *a2, unsigned __int64 a3)
{
  unsigned int i; // r15d
  __int64 v5; // r12
  void *v6; // r13
  KPROCESSOR_MODE PreviousMode; // dl
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  SIZE_T v12; // r14
  unsigned __int64 v13; // rax
  char *PoolWithTag; // rax
  char *v15; // rdi
  unsigned __int64 v16; // r14
  int v17; // esi
  int EnvironmentVariable; // ebx
  void *v19; // r14
  __int64 v20; // rsi
  __int64 v21; // r13
  char *v22; // rsi
  int v23; // eax
  PVOID v24; // rax
  PVOID v25; // rsi
  int v26; // eax
  int v27; // eax
  unsigned int v28; // esi
  PVOID v29; // rax
  _WORD *v30; // rbx
  unsigned int v31; // ecx
  int v32; // eax
  char *v33; // rbx
  struct _KTHREAD *v34; // rax
  _DWORD *v35; // r13
  __int64 v37[3]; // [rsp+38h] [rbp-C0h] BYREF
  unsigned __int64 v38; // [rsp+50h] [rbp-A8h]
  unsigned __int64 v39; // [rsp+58h] [rbp-A0h]
  int v40; // [rsp+60h] [rbp-98h]
  unsigned int Size; // [rsp+64h] [rbp-94h]
  int v43; // [rsp+6Ch] [rbp-8Ch]
  unsigned int v44; // [rsp+70h] [rbp-88h]
  unsigned int v45; // [rsp+74h] [rbp-84h]
  PVOID P; // [rsp+78h] [rbp-80h]
  char *v47; // [rsp+80h] [rbp-78h]
  void *Src; // [rsp+88h] [rbp-70h]
  _DWORD *v49; // [rsp+90h] [rbp-68h]
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-50h]
  wchar_t Dst[12]; // [rsp+B0h] [rbp-48h] BYREF

  v49 = (_DWORD *)a3;
  P = 0LL;
  i = 0;
  v5 = 0LL;
  v6 = 0LL;
  v40 = 0;
  memset(v37, 0, 16);
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v8 = (unsigned __int64)a2 + 4;
  v9 = 0x7FFFFFFF0000LL;
  if ( PreviousMode )
  {
    if ( v8 >= 0x7FFFFFFF0000LL )
      v8 = 0x7FFFFFFF0000LL;
    v10 = *(_DWORD *)v8;
    v45 = *(_DWORD *)v8;
  }
  else
  {
    v10 = *(_DWORD *)v8;
    v45 = *(_DWORD *)v8;
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
      v10 = v45;
    }
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return 3221225569LL;
  }
  else
  {
    v12 = v10;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v12, 0x72766E45u);
  v15 = PoolWithTag;
  P = PoolWithTag;
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
      v44 = *((_DWORD *)v15 + 5);
      if ( (v44 & 3) == 0 )
      {
        v20 = *((unsigned int *)v15 + 6);
        if ( (unsigned int)v20 > v10 || (v47 = &v15[v20 + 28], (unsigned __int64)v47 >= v16) )
        {
          EnvironmentVariable = -1073741811;
          v19 = (void *)v37[1];
          goto LABEL_93;
        }
        if ( (unsigned int)v20 >= 8 && !strcmp(v15 + 28, "WINDOWS") )
        {
          if ( (unsigned int)v20 <= 0x14 )
          {
            EnvironmentVariable = -1073741811;
LABEL_92:
            v19 = (void *)v37[1];
            v5 = v37[1];
            goto LABEL_93;
          }
          EnvironmentVariable = ExpVerifyWindowsOsOptions(v15 + 28, (unsigned int)v20);
          if ( EnvironmentVariable < 0 )
            goto LABEL_92;
          v43 = 1;
          v21 = (__int64)&v15[*((unsigned int *)v15 + 11) + 28];
        }
        else
        {
          v43 = 0;
          v21 = 0LL;
        }
        v22 = &v15[Size];
        Src = v22;
        v23 = ExpSafeWcslen(v22, v16);
        if ( v23 == -1 )
        {
          EnvironmentVariable = -1073741811;
          v19 = (void *)v37[1];
          v6 = (void *)v37[1];
          v5 = v37[1];
LABEL_93:
          v17 = a1;
          goto LABEL_94;
        }
        Size = 2 * v23 + 2;
        v38 = (unsigned __int64)&v15[v44];
        EnvironmentVariable = ExpVerifyFilePath(v38);
        if ( EnvironmentVariable >= 0 )
        {
          if ( v47 > v22 || (unsigned __int64)&v22[Size] > v38 )
          {
            EnvironmentVariable = -1073741811;
          }
          else
          {
            if ( *(_DWORD *)(v38 + 8) == 4 )
            {
              v26 = *(_DWORD *)(v38 + 4);
              v39 = v38;
              goto LABEL_52;
            }
            EnvironmentVariable = ZwTranslateFilePath(v38, 4LL);
            if ( EnvironmentVariable == -1073741789 )
            {
              v24 = ExAllocatePoolWithTag(NonPagedPoolNx, HIDWORD(v37[0]), 0x72766E45u);
              v25 = v24;
              v39 = (unsigned __int64)v24;
              if ( !v24 )
              {
                EnvironmentVariable = -1073741670;
                v6 = 0LL;
LABEL_47:
                v19 = (void *)v37[1];
LABEL_48:
                v5 = v38;
                goto LABEL_93;
              }
              memset(v24, 0, HIDWORD(v37[0]));
              LODWORD(v37[0]) = HIDWORD(v37[0]);
              EnvironmentVariable = ZwTranslateFilePath(v38, 4LL);
              if ( EnvironmentVariable < 0 )
              {
                v6 = v25;
                goto LABEL_47;
              }
              v26 = HIDWORD(v37[0]);
LABEL_52:
              v27 = v26 - 12;
              HIDWORD(v37[0]) = v27;
              if ( !v43 || *(_DWORD *)(v21 + 8) == 4 )
              {
                v28 = *((_DWORD *)v15 + 6);
              }
              else
              {
                EnvironmentVariable = ZwTranslateFilePath(v21, 4LL);
                if ( EnvironmentVariable != -1073741789 )
                {
LABEL_67:
                  v19 = (void *)v37[1];
                  goto LABEL_59;
                }
                v28 = v40 + *((_DWORD *)v15 + 6) - *(_DWORD *)(v21 + 4);
                v27 = HIDWORD(v37[0]);
              }
              v44 = Size + 6 + v28 + v27;
              v29 = ExAllocatePoolWithTag(NonPagedPoolNx, v44, 0x72766E45u);
              v19 = v29;
              v37[1] = (__int64)v29;
              if ( !v29 )
              {
                EnvironmentVariable = -1073741670;
LABEL_59:
                v6 = (void *)v39;
                goto LABEL_48;
              }
              v30 = v29;
              memset(v29, 0, v44);
              *(_DWORD *)v30 = 0;
              v31 = *((_DWORD *)v15 + 3);
              v32 = 0;
              if ( (v31 & 1) != 0 )
              {
                *(_DWORD *)v30 = 1;
                v31 = *((_DWORD *)v15 + 3);
                v32 = 1;
              }
              if ( (v31 & 0x10) != 0 )
                *(_DWORD *)v30 = v32 | 8;
              v30[2] = WORD2(v37[0]);
              memmove(v30 + 3, Src, Size);
              v33 = (char *)v30 + Size + 6;
              memmove(v33, (const void *)(v39 + 12), HIDWORD(v37[0]));
              if ( !v43 || *(_DWORD *)(v21 + 8) == 4 )
              {
                memmove(&v33[HIDWORD(v37[0])], v15 + 28, v28);
              }
              else
              {
                memmove(&v33[HIDWORD(v37[0])], v15 + 28, *((unsigned int *)v15 + 11));
                *(_DWORD *)&v33[HIDWORD(v37[0]) + 12] = v28;
                LODWORD(v37[0]) = v40;
                EnvironmentVariable = ZwTranslateFilePath(v21, 4LL);
                if ( EnvironmentVariable )
                  goto LABEL_67;
              }
              v34 = KeGetCurrentThread();
              --v34->KernelApcDisable;
              ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
              if ( a1 )
              {
                for ( i = 0; i <= 0xFFFF; ++i )
                {
                  swprintf_s(Dst, 9uLL, L"Boot%04x", i);
                  LODWORD(v37[0]) = 0;
                  EnvironmentVariable = IoGetEnvironmentVariableEx(
                                          Dst,
                                          (__int64)&EfiBootVariablesGuid,
                                          0LL,
                                          (int *)v37,
                                          0LL);
                  if ( EnvironmentVariable == -1073741568 && ((2 * ((i | (2 * i)) & 0xC4444444)) & i) != 0 )
                  {
                    swprintf_s(Dst, 9uLL, L"Boot%04X", i);
                    LODWORD(v37[0]) = 0;
                    EnvironmentVariable = IoGetEnvironmentVariableEx(
                                            Dst,
                                            (__int64)&EfiBootVariablesGuid,
                                            0LL,
                                            (int *)v37,
                                            0LL);
                  }
                  if ( EnvironmentVariable == -1073741568 )
                    break;
                  if ( EnvironmentVariable && EnvironmentVariable != -1073741789 )
                    goto LABEL_80;
                }
                if ( i > 0xFFFF )
                {
                  EnvironmentVariable = -1073741670;
LABEL_80:
                  v19 = (void *)v37[1];
LABEL_81:
                  ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
                  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
                  v15 = (char *)P;
                  goto LABEL_59;
                }
              }
              else
              {
                v35 = P;
                i = *((_DWORD *)P + 2);
                swprintf_s(Dst, 9uLL, L"Boot%04X", i);
                LODWORD(v37[0]) = 0;
                EnvironmentVariable = IoGetEnvironmentVariableEx(
                                        Dst,
                                        (__int64)&EfiBootVariablesGuid,
                                        0LL,
                                        (int *)v37,
                                        0LL);
                if ( EnvironmentVariable == -1073741568 && ((2 * ((v35[2] | (2 * v35[2])) & 0xC4444444)) & v35[2]) != 0 )
                {
                  swprintf_s(Dst, 9uLL, L"Boot%04x");
                  LODWORD(v37[0]) = 0;
                  EnvironmentVariable = IoGetEnvironmentVariableEx(
                                          Dst,
                                          (__int64)&EfiBootVariablesGuid,
                                          0LL,
                                          (int *)v37,
                                          0LL);
                }
                if ( EnvironmentVariable && EnvironmentVariable != -1073741789 )
                  goto LABEL_80;
              }
              v19 = (void *)v37[1];
              EnvironmentVariable = IoSetEnvironmentVariableEx(Dst, (__int64)&EfiBootVariablesGuid, v37[1], v44, 1);
              goto LABEL_81;
            }
          }
        }
        v19 = (void *)v37[1];
        v6 = (void *)v37[1];
        goto LABEL_48;
      }
    }
  }
  EnvironmentVariable = -1073741811;
  v19 = (void *)v37[1];
LABEL_94:
  if ( v19 )
    ExFreePoolWithTag(v19, 0);
  if ( v6 && v6 != (void *)v5 )
    ExFreePoolWithTag(v6, 0);
  ExFreePoolWithTag(v15, 0);
  if ( v17 && v49 && EnvironmentVariable >= 0 )
    *v49 = i;
  return (unsigned int)EnvironmentVariable;
}
