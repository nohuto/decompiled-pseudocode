/*
 * XREFs of ExpSetDriverEntry @ 0x1409FDB90
 * Callers:
 *     NtAddDriverEntry @ 0x1409FEB00 (NtAddDriverEntry.c)
 *     NtModifyDriverEntry @ 0x1409FF540 (NtModifyDriverEntry.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseFastMutexUnsafe @ 0x140302880 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403028F0 (ExAcquireFastMutexUnsafe.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     swprintf_s @ 0x1403DE5A0 (swprintf_s.c)
 *     ZwTranslateFilePath @ 0x14041EB70 (ZwTranslateFilePath.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     IoGetEnvironmentVariableEx @ 0x1406876A0 (IoGetEnvironmentVariableEx.c)
 *     SeSinglePrivilegeCheck @ 0x140737CF0 (SeSinglePrivilegeCheck.c)
 *     ExpSafeWcslen @ 0x14083E404 (ExpSafeWcslen.c)
 *     ExpVerifyFilePath @ 0x14083E710 (ExpVerifyFilePath.c)
 *     IoSetEnvironmentVariableEx @ 0x140950674 (IoSetEnvironmentVariableEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall ExpSetDriverEntry(int a1, const void *a2, unsigned __int64 a3)
{
  _DWORD *v3; // r12
  unsigned int i; // r14d
  _FILE_PATH *v6; // r15
  _FILE_PATH *v7; // r13
  KPROCESSOR_MODE PreviousMode; // dl
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // eax
  size_t v13; // rbx
  unsigned __int64 v14; // rax
  _DWORD *Pool2; // rax
  _DWORD *v16; // rdi
  int v17; // esi
  int EnvironmentVariable; // ebx
  __int64 v19; // rax
  char *v20; // rsi
  int v21; // eax
  unsigned __int64 v22; // rdx
  __int64 v23; // r8
  size_t v24; // r13
  _FILE_PATH *v25; // r8
  ULONG Length; // eax
  _WORD *v27; // rbx
  char *v28; // rcx
  struct _KTHREAD *v29; // rax
  ULONG v31; // [rsp+38h] [rbp-B0h] BYREF
  ULONG OutputFilePathLength; // [rsp+40h] [rbp-A8h] BYREF
  _DWORD *v33; // [rsp+48h] [rbp-A0h]
  size_t Size; // [rsp+50h] [rbp-98h]
  _FILE_PATH *v35; // [rsp+58h] [rbp-90h]
  PVOID v37; // [rsp+68h] [rbp-80h]
  unsigned int v38; // [rsp+70h] [rbp-78h]
  PVOID P; // [rsp+78h] [rbp-70h]
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp-58h]
  size_t Dst[3]; // [rsp+98h] [rbp-50h] BYREF

  v3 = (_DWORD *)a3;
  v33 = (_DWORD *)a3;
  v37 = 0LL;
  i = 0;
  v6 = 0LL;
  v7 = 0LL;
  v35 = 0LL;
  P = 0LL;
  OutputFilePathLength = 0;
  v31 = 0;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v9 = (unsigned __int64)a2 + 4;
  v10 = 0x7FFFFFFF0000LL;
  if ( PreviousMode )
  {
    if ( v9 >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    v11 = *(_DWORD *)v9;
    v38 = v11;
  }
  else
  {
    v11 = *(_DWORD *)v9;
    v38 = v11;
  }
  if ( v11 < 0x14 )
    return 3221225485LL;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = v11;
    v14 = (unsigned __int64)a2 + v11;
    if ( v14 > 0x7FFFFFFF0000LL || v14 < (unsigned __int64)a2 )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( a3 )
    {
      if ( a3 < 0x7FFFFFFF0000LL )
        v10 = a3;
      *(_DWORD *)v10 = *(_DWORD *)v10;
    }
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return 3221225569LL;
  }
  else
  {
    v13 = v11;
  }
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, v13, 1920364101LL);
  v16 = Pool2;
  v37 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  memmove(Pool2, a2, v13);
  v17 = a1;
  if ( *v16 == 1 )
  {
    if ( !a1 && v16[2] > 0xFFFFu || (v19 = (unsigned int)v16[3], (v19 & 1) != 0) || (v16[4] & 3) != 0 )
    {
      EnvironmentVariable = -1073741811;
LABEL_64:
      v3 = v33;
      goto LABEL_65;
    }
    v20 = (char *)v16 + v19;
    v21 = ExpSafeWcslen((_DWORD *)((char *)v16 + v19), (unsigned __int64)v16 + v13);
    if ( v21 == -1 )
    {
      EnvironmentVariable = -1073741811;
LABEL_63:
      v17 = a1;
      goto LABEL_64;
    }
    LODWORD(Size) = 2 * v21 + 2;
    v6 = (_FILE_PATH *)((char *)v16 + v23);
    EnvironmentVariable = ExpVerifyFilePath((_DWORD *)((char *)v16 + v23), v22);
    if ( EnvironmentVariable < 0 )
      goto LABEL_63;
    v24 = (unsigned int)Size;
    if ( &v20[(unsigned int)Size] > (char *)v6 )
    {
      EnvironmentVariable = -1073741811;
      goto LABEL_62;
    }
    if ( v6->Type == 4 )
    {
      Length = v6->Length;
      v35 = v6;
    }
    else
    {
      EnvironmentVariable = ZwTranslateFilePath(v6, 4u, 0LL, &OutputFilePathLength);
      if ( EnvironmentVariable != -1073741789 )
        goto LABEL_62;
      v25 = (_FILE_PATH *)ExAllocatePool2(64LL, OutputFilePathLength, 1920364101LL);
      v35 = v25;
      if ( !v25 )
      {
        EnvironmentVariable = -1073741670;
        v7 = 0LL;
        goto LABEL_63;
      }
      v31 = OutputFilePathLength;
      EnvironmentVariable = ZwTranslateFilePath(v6, 4u, v25, &v31);
      if ( EnvironmentVariable < 0 )
      {
LABEL_62:
        v7 = v35;
        goto LABEL_63;
      }
      Length = OutputFilePathLength;
    }
    OutputFilePathLength = Length - 12;
    LODWORD(Size) = Size + 6 + Length - 12;
    v27 = (_WORD *)ExAllocatePool2(64LL, (unsigned int)Size, 1920364101LL);
    P = v27;
    if ( !v27 )
    {
      EnvironmentVariable = -1073741670;
      goto LABEL_62;
    }
    v27[2] = OutputFilePathLength;
    memmove(v27 + 3, v20, v24);
    v28 = (char *)v27 + v24 + 6;
    v7 = v35;
    memmove(v28, v35->FilePath, OutputFilePathLength);
    v29 = KeGetCurrentThread();
    --v29->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
    if ( a1 )
    {
      for ( i = 0; i <= 0xFFFF; ++i )
      {
        swprintf_s((wchar_t *)Dst, 0xBuLL, L"Driver%04x", i);
        v31 = 0;
        EnvironmentVariable = IoGetEnvironmentVariableEx(Dst, (__int64)&EfiDriverVariablesGuid, 0LL, (int *)&v31, 0LL);
        if ( EnvironmentVariable == -1073741568 && ((2 * ((i | (2 * i)) & 0xC4444444)) & i) != 0 )
        {
          swprintf_s((wchar_t *)Dst, 0xBuLL, L"Driver%04X", i);
          v31 = 0;
          EnvironmentVariable = IoGetEnvironmentVariableEx(Dst, (__int64)&EfiDriverVariablesGuid, 0LL, (int *)&v31, 0LL);
        }
        if ( EnvironmentVariable == -1073741568 )
          break;
        if ( EnvironmentVariable && EnvironmentVariable != -1073741789 )
          goto LABEL_60;
      }
      if ( i > 0xFFFF )
      {
        EnvironmentVariable = -1073741670;
LABEL_60:
        ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v16 = v37;
        goto LABEL_63;
      }
    }
    else
    {
      i = *((_DWORD *)v37 + 2);
      swprintf_s((wchar_t *)Dst, 0xBuLL, L"Driver%04X", i);
      v31 = 0;
      EnvironmentVariable = IoGetEnvironmentVariableEx(Dst, (__int64)&EfiDriverVariablesGuid, 0LL, (int *)&v31, 0LL);
      if ( EnvironmentVariable == -1073741568
        && ((2 * ((*((_DWORD *)v37 + 2) | (2 * *((_DWORD *)v37 + 2))) & 0xC4444444)) & *((_DWORD *)v37 + 2)) != 0 )
      {
        swprintf_s((wchar_t *)Dst, 0xBuLL, L"Driver%04x");
        v31 = 0;
        EnvironmentVariable = IoGetEnvironmentVariableEx(Dst, (__int64)&EfiDriverVariablesGuid, 0LL, (int *)&v31, 0LL);
      }
      if ( EnvironmentVariable && EnvironmentVariable != -1073741789 )
        goto LABEL_60;
    }
    EnvironmentVariable = IoSetEnvironmentVariableEx(Dst, (__int64)&EfiDriverVariablesGuid, (__int64)P, Size, 1);
    goto LABEL_60;
  }
  EnvironmentVariable = -1073741811;
LABEL_65:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v7 && v7 != v6 )
    ExFreePoolWithTag(v7, 0);
  ExFreePoolWithTag(v16, 0);
  if ( v17 && v3 && EnvironmentVariable >= 0 )
    *v3 = i;
  return (unsigned int)EnvironmentVariable;
}
