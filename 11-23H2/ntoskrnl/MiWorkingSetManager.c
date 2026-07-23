/*
 * XREFs of MiWorkingSetManager @ 0x14021D5F0
 * Callers:
 *     KeBalanceSetManager @ 0x1403946E0 (KeBalanceSetManager.c)
 *     MiPartitionWorkingSetManager @ 0x140629AA0 (MiPartitionWorkingSetManager.c)
 * Callees:
 *     MiSignalLargePageRebuild @ 0x14021D424 (MiSignalLargePageRebuild.c)
 *     MiNumberWsSwapPagefiles @ 0x14021D8C0 (MiNumberWsSwapPagefiles.c)
 *     MiScanPagefiles @ 0x14021D8FC (MiScanPagefiles.c)
 *     MiWakeBadPageSignalThread @ 0x14021D9B8 (MiWakeBadPageSignalThread.c)
 *     MiReclaimUnusedUltraMdlMaps @ 0x14021DA18 (MiReclaimUnusedUltraMdlMaps.c)
 *     MiAdjustPteBins @ 0x14021DCE8 (MiAdjustPteBins.c)
 *     MiPruneProcessLargePageCaches @ 0x14021E690 (MiPruneProcessLargePageCaches.c)
 *     MiWakePageZeroing @ 0x14021E7A4 (MiWakePageZeroing.c)
 *     MiAdjustCachedStacks @ 0x14021E8BC (MiAdjustCachedStacks.c)
 *     MiCheckLogPinDriverAddresses @ 0x14021EBC8 (MiCheckLogPinDriverAddresses.c)
 *     MiFreeUnusedSlabPages @ 0x14021ED0C (MiFreeUnusedSlabPages.c)
 *     MiAdjustModifiedPageLoad @ 0x14021F234 (MiAdjustModifiedPageLoad.c)
 *     MiScheduleZeroPageThreads @ 0x14021F3CC (MiScheduleZeroPageThreads.c)
 *     MiLogPeriodicTelemetry @ 0x14021F654 (MiLogPeriodicTelemetry.c)
 *     MiProcessWorkingSets @ 0x14021FA10 (MiProcessWorkingSets.c)
 *     KePulseEvent @ 0x1402206A0 (KePulseEvent.c)
 *     KeQueryUnbiasedInterruptTime @ 0x1402235A0 (KeQueryUnbiasedInterruptTime.c)
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     MiEmptyDecayClusterTimers @ 0x14025B1B0 (MiEmptyDecayClusterTimers.c)
 *     MiReleaseSystemCacheView @ 0x1402A03D0 (MiReleaseSystemCacheView.c)
 *     ExQueueWorkItemToPartition @ 0x1402B982C (ExQueueWorkItemToPartition.c)
 *     PsReferencePartitionSafe @ 0x1402F9EAC (PsReferencePartitionSafe.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiHandleForceTrimWorkingSets @ 0x140635010 (MiHandleForceTrimWorkingSets.c)
 *     MiQueueExtentPfnDeletion @ 0x14063F608 (MiQueueExtentPfnDeletion.c)
 */

__int64 __fastcall MiWorkingSetManager(__int64 a1, int a2)
{
  __int64 v4; // rdi
  int v5; // ebp
  int v6; // eax
  int v7; // eax
  int v8; // eax
  __int64 v9; // rdx
  char v10; // si
  ULONGLONG UnbiasedInterruptTime; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  signed __int32 v15[8]; // [rsp+0h] [rbp-B8h] BYREF
  _BYTE v16[112]; // [rsp+20h] [rbp-98h] BYREF

  memset(v16, 0, sizeof(v16));
  v4 = *(_QWORD *)(a1 + 16920);
  v5 = 0;
  if ( !*(_QWORD *)(v4 + 88) )
    *(_QWORD *)(v4 + 88) = KeGetCurrentThread();
  MiWakePageZeroing(a1, 0LL, 2LL);
  if ( (_UNKNOWN *)a1 == &MiSystemPartition )
  {
    MiReclaimUnusedUltraMdlMaps();
    MiCheckLogPinDriverAddresses();
    MiWakeBadPageSignalThread();
  }
  MiEmptyDecayClusterTimers(a1);
  MiFreeUnusedSlabPages(a1);
  MiPruneProcessLargePageCaches(a1, 1LL);
  MiReleaseSystemCacheView(a1, 0LL);
  v6 = *(_DWORD *)(v4 + 32) + 1;
  *(_DWORD *)(v4 + 32) = v6;
  if ( v6 == *(_DWORD *)(v4 + 36) )
  {
    v7 = *(_DWORD *)(v4 + 24);
    *(_DWORD *)(v4 + 32) = 0;
    v8 = ((_BYTE)v7 + 1) & 0xF;
    *(_DWORD *)(v4 + 24) = v8;
    v9 = ((_BYTE)v8 - 8) & 0xF;
    if ( *(_QWORD *)(88 * v9 + a1 + 5312) )
      KeSetEvent((PRKEVENT)(a1 + 24 * (v9 + 293)), 0, 0);
  }
  if ( (_UNKNOWN *)a1 == &MiSystemPartition && !a2 )
    KePulseEvent(&Event, 0, 0);
  MiLogPeriodicTelemetry(a1);
  v16[4] = 1;
  while ( 1 )
  {
    v10 = v16[4];
    MiProcessWorkingSets(a1, v16);
    if ( (*(_DWORD *)(v4 + 40) & 0x400) != 0 )
      MiHandleForceTrimWorkingSets(a1);
    if ( v16[4] == 1 )
      break;
    if ( v10 == v16[4] )
    {
      v16[4] = 1;
      ++*(_DWORD *)(v4 + 2576);
    }
    else
    {
      MiAdjustModifiedPageLoad(a1, *(_QWORD *)(v4 + 2336), *(unsigned int *)(v4 + 120));
      ++*(_DWORD *)(v4 + 2572);
      MiScanPagefiles(a1);
      v5 = 1;
    }
  }
  if ( (_UNKNOWN *)a1 == &MiSystemPartition )
  {
    MiAdjustPteBins();
    if ( byte_140C6572A )
      MiQueueExtentPfnDeletion(0LL);
  }
  MiAdjustCachedStacks(a1);
  if ( !v5 )
  {
    MiAdjustModifiedPageLoad(a1, *(_QWORD *)(v4 + 2336), *(unsigned int *)(v4 + 120));
    MiScanPagefiles(a1);
  }
  if ( (unsigned int)MiNumberWsSwapPagefiles(a1) )
  {
    if ( !*(_QWORD *)(a1 + 1112) )
    {
      _InterlockedOr(v15, 0);
      UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
      if ( UnbiasedInterruptTime - *(_QWORD *)(a1 + 1120) >= 0x861C46800LL )
      {
        if ( byte_140C67E41 )
        {
          *(_QWORD *)(a1 + 1120) = UnbiasedInterruptTime - 33000000000LL;
        }
        else if ( (unsigned __int8)PsReferencePartitionSafe(*(_QWORD *)(a1 + 200)) )
        {
          *(_QWORD *)(a1 + 1088) = 0LL;
          *(_QWORD *)(a1 + 1104) = MiTrimUnusedPageFileRegionsWorker;
          *(_QWORD *)(a1 + 1112) = a1;
          ExQueueWorkItemToPartition(a1 + 1088);
        }
      }
    }
  }
  v12 = *(_QWORD *)(a1 + 17600);
  v13 = *(_QWORD *)(a1 + 17824);
  if ( v12 > v13 && v12 - v13 >= 0x320 )
    KeSetEvent((PRKEVENT)(a1 + 832), 0, 0);
  MiSignalLargePageRebuild(a1);
  return MiScheduleZeroPageThreads(a1);
}
