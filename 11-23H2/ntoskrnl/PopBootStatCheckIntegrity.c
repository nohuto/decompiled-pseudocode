/*
 * XREFs of PopBootStatCheckIntegrity @ 0x14084D53C
 * Callers:
 *     PopPowerInformationInternal @ 0x1407ED06C (PopPowerInformationInternal.c)
 * Callees:
 *     RtlULongLongMult @ 0x14022CE2C (RtlULongLongMult.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1402BD960 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140435700 (memmove.c)
 *     ProbeForWrite @ 0x140729380 (ProbeForWrite.c)
 *     PopBootStatAccessCheck @ 0x1407EBB54 (PopBootStatAccessCheck.c)
 *     RtlUnlockBootStatusData @ 0x1407EC390 (RtlUnlockBootStatusData.c)
 *     RtlLockBootStatusData @ 0x1407EED90 (RtlLockBootStatusData.c)
 *     RtlCheckBootStatusIntegrity @ 0x14084D67C (RtlCheckBootStatusIntegrity.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00B60 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopBootStatCheckIntegrity(__int64 a1)
{
  __int64 Pool2; // rdi
  KPROCESSOR_MODE PreviousMode; // r14
  struct _KTHREAD *CurrentThread; // rax
  int v5; // esi
  size_t v7; // rbx
  size_t v8; // rax
  __int64 i; // rbx
  HANDLE Handle; // [rsp+28h] [rbp-50h] BYREF
  __int64 v11; // [rsp+30h] [rbp-48h]
  ULONGLONG pullResult; // [rsp+38h] [rbp-40h] BYREF
  __int64 v13; // [rsp+40h] [rbp-38h]
  char v14; // [rsp+98h] [rbp+20h]

  pullResult = 0LL;
  Pool2 = 0LL;
  Handle = 0LL;
  v14 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v5 = RtlULongLongMult(*(unsigned int *)(a1 + 8), 0x18uLL, &pullResult);
    if ( v5 < 0 )
      goto LABEL_8;
    v7 = pullResult;
    Pool2 = ExAllocatePool2(256LL, pullResult, 544040269LL);
    v11 = Pool2;
    if ( !Pool2 )
    {
      v5 = -1073741670;
      goto LABEL_8;
    }
    if ( v7 )
    {
      v8 = *(_QWORD *)(a1 + 16);
      if ( (v8 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v8 + v7 > 0x7FFFFFFF0000LL || v8 + v7 < v8 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove((void *)Pool2, *(const void **)(a1 + 16), v7);
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 8); i = (unsigned int)(i + 1) )
    {
      v13 = Pool2 + 24 * i;
      ProbeForWrite(*(volatile void **)(v13 + 8), *(unsigned int *)(v13 + 16), 1u);
    }
  }
  else
  {
    Pool2 = *(_QWORD *)(a1 + 16);
    v11 = Pool2;
  }
  v14 = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopBootStatLock, 0LL);
  v5 = RtlLockBootStatusData(&Handle);
  if ( v5 >= 0 )
  {
    if ( !PreviousMode || (v5 = PopBootStatAccessCheck(Handle, PreviousMode, 1u), v5 >= 0) )
    {
      v5 = RtlCheckBootStatusIntegrity(Handle);
      if ( v5 >= 0 )
      {
        if ( *(_DWORD *)(Pool2 + 16) )
          **(_BYTE **)(Pool2 + 8) = 0;
        else
          v5 = -1073741811;
      }
    }
  }
LABEL_8:
  if ( Handle )
    RtlUnlockBootStatusData(Handle);
  if ( v14 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopBootStatLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopBootStatLock);
    KeAbPostRelease((ULONG_PTR)&PopBootStatLock);
    KeLeaveCriticalRegion();
  }
  if ( PreviousMode && Pool2 )
    ExFreePoolWithTag((PVOID)Pool2, 0);
  return (unsigned int)v5;
}
