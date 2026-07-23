/*
 * XREFs of MiReferenceControlAreaFileWithTag @ 0x1402A2680
 * Callers:
 *     MiMakeSystemCacheRangeValid @ 0x140267AF0 (MiMakeSystemCacheRangeValid.c)
 *     MiFlushSectionInternal @ 0x1402759E0 (MiFlushSectionInternal.c)
 *     MiLogPageAccess @ 0x14027CE40 (MiLogPageAccess.c)
 *     MmFlushSection @ 0x140287720 (MmFlushSection.c)
 *     MiGatherMappedPages @ 0x140297FB4 (MiGatherMappedPages.c)
 *     MiReferenceControlAreaFile @ 0x1402A2664 (MiReferenceControlAreaFile.c)
 *     MiCompleteRestrictedImageFault @ 0x1402E30E0 (MiCompleteRestrictedImageFault.c)
 *     MiWriteComplete @ 0x1402F45B0 (MiWriteComplete.c)
 *     MiMakeSystemCachePteValid @ 0x14034605C (MiMakeSystemCachePteValid.c)
 *     MiCreateSystemSection @ 0x14035F940 (MiCreateSystemSection.c)
 *     MiDeprioritizeVad @ 0x1403C701C (MiDeprioritizeVad.c)
 *     MiSetPagesModified @ 0x140628E4C (MiSetPagesModified.c)
 *     PsReferenceProcessFilePointer @ 0x14069A0A0 (PsReferenceProcessFilePointer.c)
 *     PspInitializeFullProcessImageName @ 0x1406B3498 (PspInitializeFullProcessImageName.c)
 *     MmGetFileObjectForSection @ 0x14076C3F0 (MmGetFileObjectForSection.c)
 *     DbgkCreateThread @ 0x14076FE0C (DbgkCreateThread.c)
 * Callees:
 *     ObpFastReplenishReference @ 0x1402246EC (ObpFastReplenishReference.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7E90 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6B50 (ObfReferenceObjectWithTag.c)
 *     ExAcquireSpinLockShared @ 0x1403148B0 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     ObpPushStackInfo @ 0x1405830C8 (ObpPushStackInfo.c)
 */

unsigned __int64 __fastcall MiReferenceControlAreaFileWithTag(__int64 a1, ULONG a2)
{
  signed __int64 v4; // r8
  signed __int64 v5; // rax
  signed __int64 v6; // rbx
  unsigned int v7; // r8d
  unsigned __int64 v8; // rbx
  unsigned __int64 v10; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v14; // edx
  bool v15; // zf

  _m_prefetchw((const void *)(a1 + 64));
  v4 = *(_QWORD *)(a1 + 64);
  if ( (v4 & 0xF) != 0 )
  {
    do
    {
      v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), v4 - 1, v4);
      if ( v4 == v5 )
        break;
      v4 = v5;
    }
    while ( (v5 & 0xF) != 0 );
  }
  v6 = v4;
  v7 = v4 & 0xF;
  v8 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v7 <= 1 )
  {
    if ( !v7 )
    {
LABEL_9:
      v10 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 72));
      v8 = *(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v8 )
        ObfReferenceObjectWithTag((PVOID)(*(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFFFFF0uLL), a2);
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
      if ( (_DWORD)KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
          && CurrentIrql <= 0xFu
          && (unsigned __int8)v10 <= 0xFu
          && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
          v15 = (v14 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v14;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v10);
      return v8;
    }
    ObpFastReplenishReference((signed __int64 *)(a1 + 64), v8);
  }
  if ( ObpTraceFlags )
    ObpPushStackInfo(v8 - 48);
  if ( !v8 )
    goto LABEL_9;
  return v8;
}
