/*
 * XREFs of SmCreatePartition @ 0x140706638
 * Callers:
 *     MiMakePartitionActive @ 0x140292890 (MiMakePartitionActive.c)
 *     SmProcessConfigRequest @ 0x14085BD4C (SmProcessConfigRequest.c)
 *     PspSetJobMemoryPartition @ 0x1409B2E24 (PspSetJobMemoryPartition.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208C40 (CmSiFreeMemory.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     SSHSupportAllocateNonPaged @ 0x14032D5E4 (SSHSupportAllocateNonPaged.c)
 *     SmPartitionInitialize @ 0x14084F5DC (SmPartitionInitialize.c)
 *     SmPartitionCleanup @ 0x1409D6DB8 (SmPartitionCleanup.c)
 */

__int64 __fastcall SmCreatePartition(__int64 a1)
{
  unsigned int v1; // edi
  __int64 NonPaged; // rax
  __int64 v5; // rsi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v7; // rcx
  _QWORD *v8; // rax

  v1 = 0;
  if ( !*(_QWORD *)(a1 + 24) )
  {
    NonPaged = SSHSupportAllocateNonPaged(3008LL, 0x61506D53u);
    v5 = NonPaged;
    if ( NonPaged )
    {
      SmPartitionInitialize(NonPaged);
      *(_QWORD *)(v5 + 1936) = a1;
      *(_DWORD *)(v5 + 2064) = SmGlobals;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C6B318, 0LL);
      if ( !*(_QWORD *)(a1 + 24) )
      {
        if ( dword_140C6B340 )
        {
          v7 = (_QWORD *)qword_140C6B310;
          v8 = (_QWORD *)(v5 + 1960);
          if ( *(__int64 **)qword_140C6B310 != &qword_140C6B308 )
            __fastfail(3u);
          *v8 = &qword_140C6B308;
          *(_QWORD *)(v5 + 1968) = v7;
          *v7 = v8;
          qword_140C6B310 = v5 + 1960;
        }
        *(_QWORD *)(a1 + 24) = v5;
        v5 = 0LL;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C6B318, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C6B318);
      KeAbPostRelease((ULONG_PTR)&qword_140C6B318);
      KeLeaveCriticalRegion();
      if ( v5 )
      {
        SmPartitionCleanup(v5);
        CmSiFreeMemory((PPRIVILEGE_SET)v5);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v1;
}
