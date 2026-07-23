/*
 * XREFs of PopBootStatGet @ 0x1407EC7B8
 * Callers:
 *     PopPowerInformationInternal @ 0x1407ED33C (PopPowerInformationInternal.c)
 * Callees:
 *     RtlULongLongMult @ 0x14022CF3C (RtlULongLongMult.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     ProbeForWrite @ 0x140729580 (ProbeForWrite.c)
 *     PopBootStatAccessCheck @ 0x1407EBE24 (PopBootStatAccessCheck.c)
 *     RtlUnlockBootStatusData @ 0x1407EC660 (RtlUnlockBootStatusData.c)
 *     RtlGetSetBootStatusData @ 0x1407ECAC0 (RtlGetSetBootStatusData.c)
 *     RtlBootStatusItemInfo @ 0x1407ECE18 (RtlBootStatusItemInfo.c)
 *     RtlLockBootStatusData @ 0x1407EF060 (RtlLockBootStatusData.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopBootStatGet(__int64 a1, __int64 a2)
{
  char *Pool2; // rsi
  KPROCESSOR_MODE PreviousMode; // r15
  NTSTATUS SetBootStatusData; // r14d
  size_t v6; // rbx
  size_t v7; // rax
  __int64 i; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 j; // r12
  __int64 v11; // r11
  ULONG ReturnLength; // [rsp+30h] [rbp-68h] BYREF
  int v14; // [rsp+34h] [rbp-64h]
  unsigned int v15; // [rsp+38h] [rbp-60h] BYREF
  HANDLE FileHandle; // [rsp+40h] [rbp-58h] BYREF
  int v17; // [rsp+48h] [rbp-50h] BYREF
  RTL_BSD_ITEM_TYPE DataClass; // [rsp+4Ch] [rbp-4Ch]
  PVOID P; // [rsp+50h] [rbp-48h]
  ULONGLONG pullResult; // [rsp+58h] [rbp-40h] BYREF
  char *v21; // [rsp+60h] [rbp-38h]
  void *Src; // [rsp+68h] [rbp-30h]
  char v24; // [rsp+B8h] [rbp+20h]

  pullResult = 0LL;
  ReturnLength = 0;
  v15 = 0;
  v17 = 0;
  Pool2 = 0LL;
  FileHandle = 0LL;
  v24 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    SetBootStatusData = RtlULongLongMult(*(unsigned int *)(a1 + 8), 0x18uLL, &pullResult);
    if ( SetBootStatusData < 0 )
      goto LABEL_25;
    v6 = pullResult;
    Pool2 = (char *)ExAllocatePool2(256LL, pullResult, 544040269LL);
    P = Pool2;
    if ( !Pool2 )
    {
      SetBootStatusData = -1073741670;
      goto LABEL_25;
    }
    if ( v6 )
    {
      v7 = *(_QWORD *)(a1 + 16);
      if ( (v7 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v7 + v6 > 0x7FFFFFFF0000LL || v7 + v6 < v7 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(Pool2, *(const void **)(a1 + 16), v6);
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      v14 = i;
      if ( (unsigned int)i >= *(_DWORD *)(a1 + 8) )
        break;
      v21 = &Pool2[24 * i];
      ProbeForWrite(*((volatile void **)v21 + 1), *((unsigned int *)v21 + 4), 1u);
    }
  }
  else
  {
    Pool2 = *(char **)(a1 + 16);
    P = Pool2;
  }
  v24 = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopBootStatLock, 0LL);
  SetBootStatusData = RtlLockBootStatusData(&FileHandle);
  if ( SetBootStatusData >= 0 )
  {
    if ( !PreviousMode
      || (SetBootStatusData = PopBootStatAccessCheck(FileHandle, PreviousMode, 1u), SetBootStatusData >= 0) )
    {
      for ( j = 0LL; ; j = (unsigned int)(j + 1) )
      {
        v14 = j;
        if ( (unsigned int)j >= *(_DWORD *)(a1 + 8) )
          break;
        v21 = &Pool2[24 * j];
        DataClass = *(_DWORD *)v21;
        SetBootStatusData = RtlBootStatusItemInfo((unsigned int)DataClass, &v15, &v17);
        if ( SetBootStatusData < 0 )
          break;
        Src = (char *)&PopBootStat + v15;
        SetBootStatusData = RtlGetSetBootStatusData(
                              FileHandle,
                              1u,
                              DataClass,
                              Src,
                              *(_DWORD *)(v11 + 16),
                              &ReturnLength);
        if ( SetBootStatusData >= 0 && ReturnLength )
          memmove(*((void **)v21 + 1), Src, ReturnLength);
        if ( a2 )
          *(_DWORD *)(a2 + 4 * j) = ReturnLength;
      }
    }
  }
LABEL_25:
  if ( FileHandle )
    RtlUnlockBootStatusData(FileHandle);
  if ( v24 )
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
