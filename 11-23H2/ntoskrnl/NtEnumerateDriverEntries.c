/*
 * XREFs of NtEnumerateDriverEntries @ 0x1409FEE50
 * Callers:
 *     <none>
 * Callees:
 *     ExUnlockUserBuffer @ 0x140206EC4 (ExUnlockUserBuffer.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseFastMutexUnsafe @ 0x140302880 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403028F0 (ExAcquireFastMutexUnsafe.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExLockUserBuffer @ 0x140687918 (ExLockUserBuffer.c)
 *     ProbeForWrite @ 0x140729580 (ProbeForWrite.c)
 *     SeSinglePrivilegeCheck @ 0x140737CF0 (SeSinglePrivilegeCheck.c)
 *     ExpSafeWcslen @ 0x14083E404 (ExpSafeWcslen.c)
 *     IoEnumerateEnvironmentVariablesEx @ 0x14083ED20 (IoEnumerateEnvironmentVariablesEx.c)
 *     ExpTranslateDriverEntryNameToId @ 0x1409FE328 (ExpTranslateDriverEntryNameToId.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

NTSTATUS __cdecl NtEnumerateDriverEntries(PVOID Buffer, PULONG BufferLength)
{
  PULONG v2; // r14
  unsigned int *v4; // r15
  NTSTATUS result; // eax
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v7; // rcx
  unsigned int v8; // edi
  _DWORD *v9; // rsi
  NTSTATUS v10; // ebx
  _DWORD *v11; // r13
  struct _KTHREAD *v12; // rax
  int v13; // r12d
  __int64 Pool2; // rax
  unsigned int *v15; // r14
  __int64 v16; // rax
  char *v17; // r8
  unsigned int v18; // eax
  __int64 v19; // r8
  unsigned int v20; // r9d
  unsigned int v21; // r10d
  unsigned __int64 v22; // rcx
  unsigned int v23; // edx
  BOOL v24; // r9d
  unsigned int v25; // edx
  size_t v26; // r8
  BOOL v27; // eax
  BOOL v28; // r9d
  unsigned int v29; // ecx
  unsigned int v30; // eax
  _DWORD *v31; // rcx
  size_t v32; // r8
  __int64 v33; // rax
  BOOL v34; // [rsp+38h] [rbp-A0h]
  int v35; // [rsp+3Ch] [rbp-9Ch] BYREF
  unsigned int v36; // [rsp+40h] [rbp-98h]
  unsigned int v37; // [rsp+44h] [rbp-94h]
  unsigned int v38; // [rsp+48h] [rbp-90h]
  NTSTATUS v39; // [rsp+4Ch] [rbp-8Ch]
  _DWORD *v40; // [rsp+50h] [rbp-88h] BYREF
  PVOID P; // [rsp+58h] [rbp-80h] BYREF
  unsigned __int64 v42; // [rsp+60h] [rbp-78h]
  size_t Size; // [rsp+68h] [rbp-70h]
  void *Src; // [rsp+70h] [rbp-68h]
  void *v45; // [rsp+78h] [rbp-60h]
  size_t v46; // [rsp+80h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp-40h]
  unsigned int v49; // [rsp+F8h] [rbp+20h] BYREF

  v2 = BufferLength;
  v40 = 0LL;
  P = 0LL;
  v4 = 0LL;
  if ( dword_140C31AB0 != 2 )
    return -1073741822;
  if ( (PVOID)((unsigned __int64)Buffer & 0xFFFFFFFFFFFFFFFCuLL) != Buffer )
    return -1073741811;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)BufferLength < 0x7FFFFFFF0000LL )
      v7 = (__int64)BufferLength;
    *(_DWORD *)v7 = *(_DWORD *)v7;
    v8 = Buffer != 0LL ? *BufferLength : 0;
    if ( v8 )
      ProbeForWrite(Buffer, v8, 4u);
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  else
  {
    v8 = Buffer != 0LL ? *BufferLength : 0;
  }
  if ( !v8
    || (result = ExLockUserBuffer((unsigned __int64)Buffer, v8, PreviousMode, IoWriteAccess, &v40, (struct _MDL **)&P),
        result >= 0) )
  {
    v9 = v40;
    v10 = 0;
    v34 = v8 != 0;
    v11 = 0LL;
    v12 = KeGetCurrentThread();
    --v12->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
    v49 = 0;
    v13 = IoEnumerateEnvironmentVariablesEx(2u, (__int64)ExpIsDriverEntry, 0LL, &v49);
    if ( v13 == -1073741789 )
    {
      Pool2 = ExAllocatePool2(64LL, v49, 1920364101LL);
      v4 = (unsigned int *)Pool2;
      if ( Pool2 )
        v13 = IoEnumerateEnvironmentVariablesEx(2u, (__int64)ExpIsDriverEntry, Pool2, &v49);
      else
        v13 = -1073741670;
    }
    else
    {
      v49 = 0;
    }
    ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v13 || !v49 )
      goto LABEL_53;
    v15 = v4;
    v42 = (unsigned __int64)v4 + 2 * v49;
    while ( 1 )
    {
      v35 = 0;
      v16 = *((_QWORD *)v15 + 2) - EfiDriverVariablesGuid;
      if ( !v16 )
        v16 = *((_QWORD *)v15 + 3) + 0x73D4FC671FFFF256LL;
      if ( !v16 && (unsigned int)ExpTranslateDriverEntryNameToId((wint_t *)v15 + 16, &v35) && v15[2] >= 8 )
      {
        v17 = (char *)v15 + v15[1];
        v38 = *((unsigned __int16 *)v17 + 2);
        Src = v17 + 6;
        v18 = ExpSafeWcslen((_WORD *)v17 + 3, v42);
        if ( v18 != -1 )
          v18 = 2 * v18 + 2;
        if ( v18 != -1 && v21 < v20 && v20 >= v21 + v18 + 6 )
          break;
      }
LABEL_49:
      v33 = *v15;
      if ( !(_DWORD)v33 )
      {
        v2 = BufferLength;
        if ( v11 )
          *v11 = 0;
LABEL_53:
        if ( v4 )
          ExFreePoolWithTag(v4, 0);
        if ( P )
          ExUnlockUserBuffer((struct _MDL *)P);
        if ( v13 < 0 )
          v10 = v13;
        *v2 = (_DWORD)v9 - (_DWORD)v40;
        return v10;
      }
      v15 = (unsigned int *)((char *)v15 + v33);
    }
    Size = v18;
    v45 = (void *)(v19 + v18 + 6LL);
    v22 = ((unsigned __int64)v9 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (_DWORD *)v22 != v9 )
    {
      v23 = v22 - (_DWORD)v9;
      v9 = (_DWORD *)(((unsigned __int64)v9 + 3) & 0xFFFFFFFFFFFFFFFCuLL);
      if ( v8 < v23 )
      {
        v24 = 0;
        v8 = 0;
        v10 = -1073741789;
LABEL_38:
        v36 = (v18 + 23) & 0xFFFFFFFC;
        v37 = v21 + v36 + 12;
        v25 = v37 + 4;
        v26 = v37 + 4;
        v46 = v26;
        if ( v8 < v37 + 4 )
          v10 = -1073741789;
        v39 = v10;
        v27 = 0;
        if ( v8 >= v25 )
          v27 = v24;
        v28 = v27;
        v34 = v27;
        v29 = v8;
        v30 = v8 - v25;
        v8 = 0;
        if ( v29 >= v25 )
          v8 = v30;
        if ( v28 )
        {
          memset(v9, 0, v26);
          v9[1] = 1;
          v9[2] = v37;
          v9[3] = v35;
          v9[4] = 20;
          v9[5] = v36;
          memmove(v9 + 6, Src, Size);
          v31 = (_DWORD *)((char *)v9 + v36 + 4);
          *v31 = 1;
          v32 = v38;
          v31[1] = v38 + 12;
          v31[2] = 4;
          memmove(v31 + 3, v45, v32);
          if ( v11 )
            *v11 = (_DWORD)v9 - (_DWORD)v11;
          v11 = v9;
          v10 = v39;
          v26 = v46;
        }
        v9 = (_DWORD *)((char *)v9 + v26);
        goto LABEL_49;
      }
      v8 -= v23;
    }
    v24 = v34;
    goto LABEL_38;
  }
  return result;
}
