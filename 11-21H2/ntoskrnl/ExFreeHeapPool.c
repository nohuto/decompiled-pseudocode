/*
 * XREFs of ExFreeHeapPool @ 0x140348B40
 * Callers:
 *     ExAllocateContiguousHeapPool @ 0x140214694 (ExAllocateContiguousHeapPool.c)
 *     AppModelFreeUnicodeString @ 0x14022020C (AppModelFreeUnicodeString.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x140224210 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     ExFreePoolEx @ 0x140246BB0 (ExFreePoolEx.c)
 *     ExpFinalizeTimerDeletion @ 0x140250B40 (ExpFinalizeTimerDeletion.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402BA130 (NtWaitForWorkViaWorkerFactory.c)
 *     ExFreeCacheAwareRundownProtection @ 0x1402D2AA0 (ExFreeCacheAwareRundownProtection.c)
 *     ExpDeleteWorkerFactory @ 0x1402D53C0 (ExpDeleteWorkerFactory.c)
 *     ExAllocateHeapPool @ 0x1403497C0 (ExAllocateHeapPool.c)
 *     ExFreeAutoExpandPushLock @ 0x14039EB60 (ExFreeAutoExpandPushLock.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1403A0424 (ExpSaPageGroupDescriptorFree.c)
 *     ExpSaBinaryArrayRemove @ 0x1403A0690 (ExpSaBinaryArrayRemove.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1403A61E8 (ExpSaPageGroupDescriptorAllocate.c)
 *     BgpFwFreeMemory @ 0x1403A8CB4 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x1403AA2B8 (BgpFwAllocateMemory.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1403C5EDC (RtlpMuiRegAddAlternateCodePage.c)
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x1403C62EC (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     RtlpMuiRegLoadLicInformation @ 0x1403C64C0 (RtlpMuiRegLoadLicInformation.c)
 *     WheapCheckForAndReportErrorsFromPreviousSession @ 0x1403DAA2C (WheapCheckForAndReportErrorsFromPreviousSession.c)
 *     ExFreePool2 @ 0x14063A800 (ExFreePool2.c)
 *     ExPoolQueryLimits @ 0x14063AC94 (ExPoolQueryLimits.c)
 *     ExPoolSetLimit @ 0x14063AFCC (ExPoolSetLimit.c)
 *     ExpPlGrowTableIfNeeded @ 0x14063B798 (ExpPlGrowTableIfNeeded.c)
 *     ExpTrackTableInsertLimit @ 0x14063BE80 (ExpTrackTableInsertLimit.c)
 *     ExpNlsDeleteSiloState @ 0x14063C25C (ExpNlsDeleteSiloState.c)
 *     ExFreeCacheAwarePushLock @ 0x14063C290 (ExFreeCacheAwarePushLock.c)
 *     ExCreateDpcEvent @ 0x14063E200 (ExCreateDpcEvent.c)
 *     ExDeleteDpcEvent @ 0x14063E310 (ExDeleteDpcEvent.c)
 *     ExpPrepareNewAtsDevice @ 0x14063EF78 (ExpPrepareNewAtsDevice.c)
 *     ExShareAddressSpaceWithDevice @ 0x14063F7C0 (ExShareAddressSpaceWithDevice.c)
 *     ExpAllocateAsid @ 0x140640A9C (ExpAllocateAsid.c)
 *     ExpPrepareNewSvmDevice @ 0x140640FF0 (ExpPrepareNewSvmDevice.c)
 *     ExpResourceTimeoutCaptureLiveDump @ 0x140641EE0 (ExpResourceTimeoutCaptureLiveDump.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x140642A44 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x140642CDC (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     WheapFreeErrorRecord @ 0x140643F08 (WheapFreeErrorRecord.c)
 *     WheapFreeDriverPacketBuffer @ 0x140644808 (WheapFreeDriverPacketBuffer.c)
 *     WheapInitErrorReportDeviceDriver @ 0x140644930 (WheapInitErrorReportDeviceDriver.c)
 *     WheaPersistBadPageToBcd @ 0x140644D30 (WheaPersistBadPageToBcd.c)
 *     WheaPersistBadPageToRegistry @ 0x140644EEC (WheaPersistBadPageToRegistry.c)
 *     WheapProcessOfflineList @ 0x140646C90 (WheapProcessOfflineList.c)
 *     ApiSetReleaseSchema @ 0x140647164 (ApiSetReleaseSchema.c)
 *     ApiSetComposeSchema @ 0x14064717C (ApiSetComposeSchema.c)
 *     sub_140648860 @ 0x140648860 (sub_140648860.c)
 *     sub_140648D4C @ 0x140648D4C (sub_140648D4C.c)
 *     IpmiLibReadSmbiosRecord38 @ 0x140652A5C (IpmiLibReadSmbiosRecord38.c)
 *     _SafeReallocBlob @ 0x140655178 (_SafeReallocBlob.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     CcInitializeCacheManager @ 0x140AFC9DC (CcInitializeCacheManager.c)
 *     WheapInitializeErrorSourceTable @ 0x140AFF7C8 (WheapInitializeErrorSourceTable.c)
 *     ExpKeyedEventInitialization @ 0x140B2A324 (ExpKeyedEventInitialization.c)
 *     VhdiInitializeBootDisk @ 0x140B54800 (VhdiInitializeBootDisk.c)
 *     VhdiMountVhdFile @ 0x140B54AE4 (VhdiMountVhdFile.c)
 *     VhdiQueryVolumeVhdFilePath @ 0x140B54FF8 (VhdiQueryVolumeVhdFilePath.c)
 *     SbpAddTransportToInstance @ 0x140B55478 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140B55668 (SbpStartLanman.c)
 * Callees:
 *     ExpPoolTrackerReturnLimit @ 0x140216928 (ExpPoolTrackerReturnLimit.c)
 *     ExpRemovePoolTrackerExpansion @ 0x140221790 (ExpRemovePoolTrackerExpansion.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x14022FB20 (RtlCSparseBitmapBitmaskRead.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     PspReturnQuota @ 0x1403493B0 (PspReturnQuota.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1403494F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     RtlpHpVsContextFree @ 0x14034CEB0 (RtlpHpVsContextFree.c)
 *     RtlpHpSegPageRangeShrink @ 0x140350B40 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpQueryVA @ 0x140362864 (RtlpHpQueryVA.c)
 *     RtlpHpEnvGetHeapManager @ 0x140362B58 (RtlpHpEnvGetHeapManager.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x140364860 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     ExGetHeapFromVA @ 0x140366C48 (ExGetHeapFromVA.c)
 *     MiDeterminePoolType @ 0x140366FB0 (MiDeterminePoolType.c)
 *     ExpReturnPoolQuota @ 0x140367DEC (ExpReturnPoolQuota.c)
 *     RtlpHpLargeFree @ 0x140370928 (RtlpHpLargeFree.c)
 *     RtlpHpLfhBucketUpdateStats @ 0x140371654 (RtlpHpLfhBucketUpdateStats.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ExpHpIsSpecialPoolHeap @ 0x140461DE4 (ExpHpIsSpecialPoolHeap.c)
 *     KeCheckForTimer @ 0x14056DBFC (KeCheckForTimer.c)
 *     RtlpLogHeapFailure @ 0x1405F1BBC (RtlpLogHeapFailure.c)
 *     RtlpHpExtrasGet @ 0x1405F2F0C (RtlpHpExtrasGet.c)
 *     RtlpHpSizeHeap @ 0x1405F3028 (RtlpHpSizeHeap.c)
 *     VerifierFreeTrackedPool @ 0x1405FF880 (VerifierFreeTrackedPool.c)
 *     EtwTracePool @ 0x14062DEE4 (EtwTracePool.c)
 *     ExpCheckForResource @ 0x14063D44C (ExpCheckForResource.c)
 *     ExpCheckForLookaside @ 0x14063E4D0 (ExpCheckForLookaside.c)
 *     ExpCheckForWorker @ 0x14063F394 (ExpCheckForWorker.c)
 *     ExpFreeHeapSpecialPool @ 0x1406423A4 (ExpFreeHeapSpecialPool.c)
 *     VfPtFreePoolNotification @ 0x140A9D69C (VfPtFreePoolNotification.c)
 */

__int64 __fastcall ExFreeHeapPool(ULONG_PTR BugCheckParameter3)
{
  char v2; // al
  int v3; // eax
  __int64 v4; // rcx
  ULONG_PTR v5; // rax
  unsigned __int64 v6; // rbx
  ULONG_PTR v7; // rdi
  int v8; // r12d
  unsigned int v9; // ebp
  int v10; // r15d
  __int64 v11; // r14
  __int64 v12; // rax
  int v13; // r11d
  __int64 v14; // r9
  unsigned int v15; // edx
  int v16; // eax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  int v20; // ecx
  unsigned int v21; // esi
  int v22; // eax
  unsigned __int64 v23; // rbx
  ULONG_PTR v24; // r8
  char v25; // cl
  ULONG_PTR v26; // rdx
  char v27; // al
  char v28; // al
  __int64 v29; // rdx
  __int64 result; // rax
  __int64 v31; // rdx
  int v32; // ecx
  __int64 v33; // r8
  ULONG_PTR v34; // rdx
  __int16 v35; // ax
  ULONG_PTR v36; // rbp
  struct _KPROCESS *BugCheckParameter4; // r14
  __int64 v38; // rcx
  __int64 v39; // rcx
  int v40; // edi
  KIRQL v41; // r13
  __int64 v42; // r8
  volatile signed __int32 *v43; // r10
  unsigned __int64 v44; // r9
  int v45; // r11d
  unsigned int v46; // edx
  __int64 v47; // rcx
  ULONG_PTR v48; // rdi
  int v49; // eax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 HeapManager; // rax
  __int64 v54; // rax
  unsigned __int64 v55; // rax
  __int64 HeapFromVA; // rax
  unsigned __int64 v57; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v61; // eax
  bool v62; // zf
  char v63; // cl
  int v64; // ecx
  __int128 v65; // [rsp+30h] [rbp-78h]
  __int128 v66; // [rsp+40h] [rbp-68h] BYREF
  __int128 v67; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v68; // [rsp+B0h] [rbp+8h] BYREF
  int v69; // [rsp+B4h] [rbp+Ch]
  unsigned __int64 *v70; // [rsp+B8h] [rbp+10h] BYREF

  if ( BugCheckParameter3 >= 0xFFFF800000000000uLL && byte_140C53F50[((BugCheckParameter3 >> 39) & 0x1FF) - 256] == 1 )
    v2 = 5;
  else
    v2 = 3;
  v65 = 0LL;
  *(_WORD *)((char *)&v65 + 1) = 1;
  LOBYTE(v65) = v2;
  if ( (_WORD)BugCheckParameter3 )
  {
    v3 = 0;
LABEL_6:
    v4 = v3;
    v68 = 0x100000;
    v69 = 0x1000000;
    v5 = BugCheckParameter3 & ~(*(&v68 + v3) - 1LL);
    v6 = (RtlpHpHeapGlobals ^ v5 ^ *(_QWORD *)(v5 + 16) ^ 0xA2E64EADA2E64EADuLL) - 192 * v4 - 320;
    goto LABEL_7;
  }
  v66 = v65;
  HeapManager = RtlpHpEnvGetHeapManager(&v66);
  v54 = RtlCSparseBitmapBitmaskRead(HeapManager + 16, 2 * ((BugCheckParameter3 - *(_QWORD *)(HeapManager + 8)) >> 20));
  if ( v54 )
  {
    v3 = v54 - 1;
    if ( v3 != 2 )
      goto LABEL_6;
  }
  v70 = 0LL;
  v68 = 0;
  v67 = v65;
  RtlpHpQueryVA(BugCheckParameter3, &v67, &v70, &v68);
  v6 = *v70;
LABEL_7:
  if ( !v6 )
    KeBugCheckEx(0xC2u, 0LL, 0LL, BugCheckParameter3, 0LL);
  if ( ExpSpecialAllocations && (unsigned int)ExpHpIsSpecialPoolHeap(v6) )
  {
    if ( _InterlockedExchangeAdd(&ExpSpecialAllocations, 0xFFFFFFFF) == 1 )
      _InterlockedDecrement(&dword_140C53440);
    return ExpFreeHeapSpecialPool(v6, BugCheckParameter3);
  }
  if ( (BugCheckParameter3 & 0xFFF) != 0 )
  {
    v7 = BugCheckParameter3 - 16;
    if ( (*(_BYTE *)(BugCheckParameter3 - 13) & 8) == 0
      || ExpSpecialAllocations
      && (HeapFromVA = ExGetHeapFromVA(BugCheckParameter3), (unsigned int)ExpHpIsSpecialPoolHeap(HeapFromVA)) )
    {
LABEL_11:
      if ( (*(_BYTE *)(v7 + 3) & 4) != 0 )
      {
        v7 += -16LL * (unsigned __int8)*(_WORD *)v7;
        *(_BYTE *)(v7 + 3) |= 4u;
      }
      v8 = v7 + 16;
      v9 = *(_DWORD *)(v7 + 4);
      v10 = *(unsigned __int8 *)(v7 + 3);
      v11 = 16LL * (unsigned __int8)*(_WORD *)(v7 + 2);
      goto LABEL_14;
    }
    if ( BugCheckParameter3 >= 0xFFFF800000000000uLL )
    {
      v32 = (unsigned __int8)byte_140C53F50[((BugCheckParameter3 >> 39) & 0x1FF) - 256];
      if ( v32 == 1 )
      {
        v33 = 1LL;
        goto LABEL_60;
      }
      if ( v32 != 5 && (_BYTE)v32 == 6 )
      {
        v33 = 1LL;
        goto LABEL_60;
      }
    }
    v33 = 0LL;
LABEL_60:
    v34 = BugCheckParameter3 - 16;
    if ( (*(_BYTE *)(v7 + 3) & 4) != 0 )
      v34 = -16LL * (unsigned __int8)*(_WORD *)v7 + v7;
    v35 = *(_WORD *)(v34 + 2);
    v36 = *(unsigned int *)(v34 + 4);
    if ( (v35 & 0x800) != 0 )
    {
      BugCheckParameter4 = (struct _KPROCESS *)(ExpPoolQuotaCookie ^ v34 ^ *(_QWORD *)(v34 + 8));
      *(_QWORD *)(v34 + 8) = ExpPoolQuotaCookie ^ v34;
      if ( (unsigned __int64)&BugCheckParameter4[-1].EndPadding[2] + 7 <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        if ( (unsigned __int64)BugCheckParameter4 < 0xFFFF800000000000uLL
          || (BugCheckParameter4->Header.Type & 0x7F) != 3 )
        {
          KeBugCheckEx(0xC2u, 0xDuLL, BugCheckParameter3, v36, (ULONG_PTR)BugCheckParameter4);
        }
        if ( BugCheckParameter4 != PsInitialSystemProcess )
          PspReturnQuota(
            BugCheckParameter4[1].Affinity.StaticBitmap[27],
            BugCheckParameter4,
            v33,
            16LL * (unsigned __int8)v35);
        ObDereferenceObjectDeferDeleteWithTag(BugCheckParameter4, v36);
      }
    }
    goto LABEL_11;
  }
  v40 = MiDeterminePoolType(BugCheckParameter3);
  if ( v40 == 32 )
  {
    v40 = 0;
    v41 = ExAcquireSpinLockShared(&ExpLargePoolTableLock);
    goto LABEL_79;
  }
  v41 = ExAcquireSpinLockShared(&ExpLargePoolTableLock);
  if ( (v40 & 0x20) == 0 )
  {
LABEL_79:
    v42 = PoolBigPageTable;
    v43 = &ExpPoolBigEntriesInUse;
    v44 = PoolBigPageTableSize;
    goto LABEL_80;
  }
  v55 = KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25];
  v42 = *(_QWORD *)(v55 + 824);
  v43 = (volatile signed __int32 *)(v55 + 792);
  v44 = *(_QWORD *)(v55 + 832);
LABEL_80:
  v45 = 1;
  v46 = (((40543 * (unsigned __int64)(unsigned int)(BugCheckParameter3 >> 12)) >> 32) ^ (40543
                                                                                       * (BugCheckParameter3 >> 12))) & (v44 - 1);
  while ( *(_QWORD *)(32LL * v46 + v42) != BugCheckParameter3 )
  {
    if ( ++v46 >= v44 )
    {
      if ( !v45 )
      {
LABEL_119:
        if ( (v40 & 0x21) != 0
          || v42 != PoolBigPageTable
          || (unsigned int)MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process) == -1
          || (v57 = KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25],
              v42 = *(_QWORD *)(v57 + 824),
              v43 = (volatile signed __int32 *)(v57 + 792),
              v44 = *(_QWORD *)(v57 + 832),
              !v42)
          || !v44 )
        {
          KeBugCheckEx(0x19u, 0x22uLL, BugCheckParameter3, v40, 0LL);
        }
        goto LABEL_80;
      }
      v46 = 0;
      v45 = 0;
    }
  }
  v47 = v42 + 32LL * v46;
  if ( !v47 )
    goto LABEL_119;
  v9 = *(_DWORD *)(v47 + 8);
  v11 = *(_QWORD *)(v47 + 16);
  v10 = (*(_DWORD *)(v47 + 12) >> 8) & 0xFFF;
  if ( (*(_DWORD *)(v47 + 12) & 0x800) != 0 )
    v48 = BugCheckParameter3 ^ ExpPoolQuotaCookie ^ *(_QWORD *)(v47 + 24);
  else
    v48 = -1LL;
  _InterlockedDecrement(v43);
  *(_QWORD *)(v47 + 24) = 0LL;
  _InterlockedIncrement64((volatile signed __int64 *)v47);
  ExReleaseSpinLockSharedFromDpcLevel(&ExpLargePoolTableLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && v41 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v61 = ~(unsigned __int16)(-1LL << (v41 + 1));
        v62 = (v61 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v61;
        if ( v62 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v41);
  if ( v48 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    ExpReturnPoolQuota((PVOID)v48, v11);
  v7 = BugCheckParameter3;
  v8 = BugCheckParameter3;
LABEL_14:
  if ( (ExpPoolFlags & 0x207) != 0 )
  {
    if ( (ExpPoolFlags & 0x200) != 0 && !v10 )
      ExpCheckForLookaside(v7, v11);
    if ( (ExpPoolFlags & 1) != 0 )
      KeCheckForTimer(v7);
    if ( (ExpPoolFlags & 4) != 0 )
      ExpCheckForResource(v7, v11);
    if ( (ExpPoolFlags & 2) != 0 )
      ExpCheckForWorker(v7);
  }
  if ( (ExpPoolFlags & 0x10) != 0 )
    VfPtFreePoolNotification(v7, v9, v11, BugCheckParameter3);
  if ( v9 == PoolHitTag )
    __debugbreak();
  v12 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    v12 = EtwTracePool(3618, v10, v9, v8, v11);
  if ( (v10 & 0x20) != 0 )
  {
    v13 = ExpSessionPoolTrackTableMask;
    v14 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25] + 896);
  }
  else
  {
    LODWORD(v12) = KeGetPcr()->Prcb.Number;
    v13 = PoolTrackTableMask;
    v14 = (__int64)*(&ExPoolTagTables + v12);
  }
  v15 = v13 & ((40543 * v9) ^ ((40543 * (unsigned __int64)v9) >> 32));
  while ( 1 )
  {
    v16 = *(_DWORD *)(v14 + 80LL * v15);
    v17 = v14 + 80LL * v15;
    if ( v16 == v9 )
      break;
    if ( v16 || (v10 & 0x20) != 0 || (v49 = *(_DWORD *)(PoolTrackTable + 80LL * v15)) == 0 )
    {
      v15 = v13 & (v15 + 1);
      if ( v15 == (v13 & ((40543 * v9) ^ ((40543 * (unsigned __int64)v9) >> 32))) )
      {
        ExpRemovePoolTrackerExpansion(v9, v11, v10);
        goto LABEL_29;
      }
    }
    else
    {
      *(_DWORD *)v17 = v49;
      v50 = *(_QWORD *)(PoolTrackTable + 80LL * v15 + 72);
      if ( v50 )
        *(_QWORD *)(v17 + 72) = v50;
    }
  }
  ExpPoolTrackerReturnLimit((v10 & 1) == 0, v11, v17);
LABEL_29:
  if ( (v10 & 0x40) != 0 )
    VerifierFreeTrackedPool(BugCheckParameter3, v11);
  v19 = *(_QWORD *)(v6 + 40);
  if ( (unsigned __int64)(v11 - 513) <= 0xD7F && v19 )
  {
    v38 = v19
        + (((unsigned int)*((unsigned __int8 *)RtlpLfhBucketIndexMap + ((unsigned __int64)(unsigned int)(v11 + 15) >> 4))
          - 33
          + 1LL) << 6);
    ++*(_DWORD *)(v38 + 28);
    if ( *(_WORD *)v38 < *(_WORD *)(v38 + 16) )
      return (__int64)RtlpInterlockedPushEntrySList((PSLIST_HEADER)v38, (PSLIST_ENTRY)v7);
    ++*(_DWORD *)(v38 + 32);
  }
  v20 = *(_DWORD *)(v6 + 220);
  v21 = *(_DWORD *)(v6 + 20) & 0x11000001;
  if ( v20 && v20 == KeGetCurrentThread()[1].CurrentRunTime )
    v21 = *(_DWORD *)(v6 + 20) & 0x11000000 | 1;
  if ( (v21 & 0x1000000) != 0
    || !*(_DWORD *)(v6 + 24)
    || (result = RtlpHpExtrasGet(v6, v7, v21, 0LL), v18 = result, (unsigned __int64)(result - 1) > 0xFFFFFFFFFFFFFFFDuLL)
    || (v63 = *(_BYTE *)(result + 2), (v63 & 0xF) == 0)
    || (v64 = v63 & 0xF) != 0
    && (_WORD)v64 == 1
    && (result = ((__int64 (__fastcall *)(unsigned __int64, ULONG_PTR, __int64, __int64))CLFS_LSN_NULL_EXT)(
                   v6,
                   v7,
                   3LL,
                   result + 16),
        (int)result >= 0) )
  {
    if ( (*(_DWORD *)(v6 + 20) & 0x10000000) != 0 && RtlpHpSizeHeap(v6, v7, v21, v18) == -1 )
    {
      LODWORD(v31) = v6;
      return RtlpLogHeapFailure(9, v31, v7, 0, 0LL, 0LL);
    }
    if ( (_WORD)v7 )
    {
      v22 = 0;
    }
    else
    {
      v67 = *(_OWORD *)v6;
      v51 = RtlpHpEnvGetHeapManager(&v67);
      v52 = RtlCSparseBitmapBitmaskRead(v51 + 16, 2 * ((v7 - *(_QWORD *)(v51 + 8)) >> 20));
      if ( !v52 )
        return RtlpHpLargeFree(v6, v7, v21);
      v22 = v52 - 1;
      if ( v22 == 2 )
        return RtlpHpLargeFree(v6, v7, v21);
    }
    v68 = 0;
    v23 = 192LL * v22 + 320 + v6;
    v24 = v7 & *(_QWORD *)v23;
    if ( (RtlpHpHeapGlobals ^ v23 ^ v24 ^ *(_QWORD *)(v24 + 0x10)) == 0xA2E64EADA2E64EADuLL )
    {
      v25 = *(_BYTE *)(v23 + 8);
      v26 = v24 + 32 * ((unsigned __int64)(unsigned int)(v7 - v24) >> v25);
      if ( v26 )
      {
        v27 = *(_BYTE *)(v26 + 24);
        if ( (v27 & 1) != 0 )
        {
          if ( (v27 & 2) != 0 )
          {
            if ( (v27 & 0xCu) >= 8 || (((1 << v25) - 1) & v7) == 0 )
            {
LABEL_46:
              if ( v7 <= (v26 & *(_QWORD *)v23) + ((__int64)(v26 - (v26 & *(_QWORD *)v23)) >> 5 << v25) )
                return RtlpHpSegPageRangeShrink(v23, v26, v24, v21);
              v28 = *(_BYTE *)(v26 + 24) & 0xC;
              v29 = (v26 & *(_QWORD *)v23) + ((__int64)(v26 - (v26 & *(_QWORD *)v23)) >> 5 << v25);
              if ( v28 == 8 )
                return RtlpHpLfhSubsegmentFreeBlock(*(_QWORD *)(v23 + 24), v29, v7, v21);
              result = RtlpHpVsContextFree(*(_QWORD *)(v23 + 32), v29, v7, v21, (__int64)&v68);
              if ( (_DWORD)result )
              {
                v39 = *(_QWORD *)(v23 + 24);
                result = (unsigned int)*(unsigned __int16 *)(v39 + 60) - 16;
                if ( v68 <= (unsigned int)result )
                  return RtlpHpLfhBucketUpdateStats(v39, v68, 0LL);
              }
              return result;
            }
          }
          else
          {
            v26 -= 32LL * *(unsigned __int8 *)(v26 + 31);
            v24 = *(unsigned __int8 *)(v26 + 24);
            if ( (v24 & 3) == 3 )
            {
              LOBYTE(v24) = v24 & 0xC;
              if ( (unsigned __int8)v24 >= 8u )
                goto LABEL_46;
            }
          }
        }
      }
    }
    v31 = *(_QWORD *)(v23 + 56);
    return RtlpLogHeapFailure(9, v31, v7, 0, 0LL, 0LL);
  }
  return result;
}
