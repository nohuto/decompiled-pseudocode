/*
 * XREFs of VmCreateMemoryRange @ 0x1409DC590
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     VmpInsertMemoryRange @ 0x1405F941C (VmpInsertMemoryRange.c)
 *     VmpAllocateMemoryRanges @ 0x1409DD064 (VmpAllocateMemoryRanges.c)
 *     VmpDecodePreallocationRangeHandle @ 0x1409DD208 (VmpDecodePreallocationRangeHandle.c)
 *     VmpFreeMemoryRanges @ 0x1409DD25C (VmpFreeMemoryRanges.c)
 *     VmpProcessContextSetup @ 0x1409DD7D0 (VmpProcessContextSetup.c)
 *     VmpValidateMemoryRangeParameters @ 0x1409DD93C (VmpValidateMemoryRangeParameters.c)
 */

__int64 __fastcall VmCreateMemoryRange(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _RTL_BALANCED_NODE *MemoryRanges; // rsi
  _KPROCESS *Process; // rbx
  unsigned __int64 v11; // rdi
  int inserted; // edi
  __int64 v13; // rax
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v15; // rbp
  unsigned __int64 ParentValue; // rdx
  _RTL_BALANCED_NODE *v17; // r15
  unsigned __int64 v18; // r12

  MemoryRanges = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( !VmTbFlushEnabled )
    VmTbFlushEnabled = 1;
  v11 = Process[2].Affinity.StaticBitmap[5];
  if ( !v11 )
  {
    inserted = VmpProcessContextSetup(a4);
    if ( inserted < 0 )
      return (unsigned int)inserted;
    v11 = Process[2].Affinity.StaticBitmap[5];
  }
  if ( a5 )
    MemoryRanges = (_RTL_BALANCED_NODE *)VmpDecodePreallocationRangeHandle(v11);
  if ( (unsigned int)VmpValidateMemoryRangeParameters(a1, a2, a3, a4) )
  {
    inserted = -1073741811;
  }
  else
  {
    v13 = *(_QWORD *)(v11 + 72);
    if ( v13 == -1 || v13 == a4 )
    {
      if ( !MemoryRanges )
      {
        MemoryRanges = (_RTL_BALANCED_NODE *)VmpAllocateMemoryRanges(1LL);
        if ( !MemoryRanges )
          return (unsigned int)-1073741670;
      }
      CurrentThread = KeGetCurrentThread();
      v15 = (volatile signed __int64 *)(v11 + 88);
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v11 + 88, 0LL);
      ParentValue = MemoryRanges[1].ParentValue;
      v17 = (_RTL_BALANCED_NODE *)(a2 >> 12);
      MemoryRanges[1].Children[0] = v17;
      MemoryRanges[1].Children[1] = (_RTL_BALANCED_NODE *)((char *)v17 + a3 - 1);
      v18 = a1 >> 12;
      *(_QWORD *)(ParentValue + 48) = v18;
      *(_QWORD *)(ParentValue + 56) = v18 + a3 - 1;
      inserted = VmpInsertMemoryRange((PEX_SPIN_LOCK)v11, MemoryRanges, a4);
      if ( inserted >= 0 )
      {
        MemoryRanges = 0LL;
        inserted = 0;
      }
      if ( (_InterlockedExchangeAdd64(v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v15);
      KeAbPostRelease((ULONG_PTR)v15);
      KeLeaveCriticalRegion();
    }
    else
    {
      inserted = -1073740007;
    }
  }
  if ( MemoryRanges )
    VmpFreeMemoryRanges(MemoryRanges);
  return (unsigned int)inserted;
}
