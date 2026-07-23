/*
 * XREFs of PopBootStatSet @ 0x1407EEFF8
 * Callers:
 *     PopPowerInformationInternal @ 0x1407ED5EC (PopPowerInformationInternal.c)
 * Callees:
 *     RtlULongLongMult @ 0x14022CE4C (RtlULongLongMult.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     PopBootStatAccessCheck @ 0x1407EC0D4 (PopBootStatAccessCheck.c)
 *     RtlUnlockBootStatusData @ 0x1407EC910 (RtlUnlockBootStatusData.c)
 *     RtlGetSetBootStatusData @ 0x1407ECD70 (RtlGetSetBootStatusData.c)
 *     RtlBootStatusItemInfo @ 0x1407ED0C8 (RtlBootStatusItemInfo.c)
 *     RtlLockBootStatusData @ 0x1407EF310 (RtlLockBootStatusData.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00C10 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopBootStatSet(__int64 a1, __int64 a2)
{
  char *Pool2; // r14
  KPROCESSOR_MODE PreviousMode; // r12
  struct _KTHREAD *CurrentThread; // rax
  int SetBootStatusData; // esi
  __int64 j; // r15
  __int64 v8; // r11
  char *v9; // rsi
  size_t v11; // rbx
  size_t v12; // rax
  __int64 i; // rdx
  char *v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rcx
  ULONG Size; // [rsp+30h] [rbp-58h] BYREF
  int Size_4; // [rsp+34h] [rbp-54h]
  unsigned int v20; // [rsp+38h] [rbp-50h] BYREF
  ULONG ReturnLength; // [rsp+3Ch] [rbp-4Ch] BYREF
  HANDLE FileHandle; // [rsp+40h] [rbp-48h] BYREF
  char *v23; // [rsp+48h] [rbp-40h]
  ULONGLONG pullResult; // [rsp+50h] [rbp-38h] BYREF
  int *v25; // [rsp+58h] [rbp-30h]
  char v27; // [rsp+A8h] [rbp+20h]

  pullResult = 0LL;
  ReturnLength = 0;
  v20 = 0;
  Size = 0;
  Pool2 = 0LL;
  FileHandle = 0LL;
  v27 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    SetBootStatusData = RtlULongLongMult(*(unsigned int *)(a1 + 8), 0x18uLL, &pullResult);
    if ( SetBootStatusData < 0 )
      goto LABEL_12;
    v11 = pullResult;
    Pool2 = (char *)ExAllocatePool2(256LL, pullResult, 544040269LL);
    v23 = Pool2;
    if ( !Pool2 )
    {
      SetBootStatusData = -1073741670;
      goto LABEL_12;
    }
    if ( v11 )
    {
      v12 = *(_QWORD *)(a1 + 16);
      if ( (v12 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v12 + v11 > 0x7FFFFFFF0000LL || v12 + v11 < v12 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(Pool2, *(const void **)(a1 + 16), v11);
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      Size_4 = i;
      if ( (unsigned int)i >= *(_DWORD *)(a1 + 8) )
        break;
      v14 = &Pool2[24 * i];
      v25 = (int *)v14;
      v15 = *((unsigned int *)v14 + 4);
      if ( (_DWORD)v15 )
      {
        v16 = *((_QWORD *)v14 + 1);
        v17 = v16 + v15;
        if ( v17 > 0x7FFFFFFF0000LL || v17 < v16 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
  }
  else
  {
    Pool2 = *(char **)(a1 + 16);
    v23 = Pool2;
  }
  v27 = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopBootStatLock, 0LL);
  SetBootStatusData = RtlLockBootStatusData(&FileHandle);
  if ( SetBootStatusData >= 0 )
  {
    if ( !PreviousMode
      || (SetBootStatusData = PopBootStatAccessCheck(FileHandle, PreviousMode, 2u), SetBootStatusData >= 0) )
    {
      for ( j = 0LL; ; j = (unsigned int)(j + 1) )
      {
        Size_4 = j;
        if ( (unsigned int)j >= *(_DWORD *)(a1 + 8) )
          break;
        v25 = (int *)&Pool2[24 * j];
        SetBootStatusData = RtlBootStatusItemInfo(*v25, &v20, &Size);
        if ( SetBootStatusData < 0 )
          break;
        if ( *(_DWORD *)(v8 + 16) < Size )
        {
          SetBootStatusData = -1073741811;
          break;
        }
        v9 = (char *)&PopBootStat + v20;
        memmove(v9, *(const void **)(v8 + 8), Size);
        SetBootStatusData = RtlGetSetBootStatusData(FileHandle, 0, (RTL_BSD_ITEM_TYPE)*v25, v9, Size, &ReturnLength);
        if ( a2 )
          *(_DWORD *)(a2 + 4 * j) = ReturnLength;
      }
    }
  }
LABEL_12:
  if ( FileHandle )
    RtlUnlockBootStatusData(FileHandle);
  if ( v27 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopBootStatLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopBootStatLock);
    KeAbPostRelease((ULONG_PTR)&PopBootStatLock);
    KeLeaveCriticalRegion();
  }
  if ( PreviousMode && Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)SetBootStatusData;
}
