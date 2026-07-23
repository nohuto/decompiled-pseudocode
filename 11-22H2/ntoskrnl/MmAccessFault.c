/*
 * XREFs of MmAccessFault @ 0x140235350
 * Callers:
 *     MiReleaseOutSwapReservations @ 0x1402004DC (MiReleaseOutSwapReservations.c)
 *     MiDeleteSubsectionPages @ 0x140218F10 (MiDeleteSubsectionPages.c)
 *     MiInPageSingleKernelStack @ 0x14021B110 (MiInPageSingleKernelStack.c)
 *     MiProbeLeafPteAccess @ 0x140236C30 (MiProbeLeafPteAccess.c)
 *     MiGetNextPageTablePte @ 0x14025CF80 (MiGetNextPageTablePte.c)
 *     MmCheckCachedPageStates @ 0x140265200 (MmCheckCachedPageStates.c)
 *     MiMakeSystemAddressValid @ 0x140277310 (MiMakeSystemAddressValid.c)
 *     MiLockCode @ 0x140282210 (MiLockCode.c)
 *     MiMakeDriverPagesPrivate @ 0x140291930 (MiMakeDriverPagesPrivate.c)
 *     MiWalkVaRange @ 0x140293C34 (MiWalkVaRange.c)
 *     MmProtectPool @ 0x140296EA0 (MmProtectPool.c)
 *     MmCopyToCachedPage @ 0x1402CD7D0 (MmCopyToCachedPage.c)
 *     MiWalkEntireImage @ 0x1402DAFE0 (MiWalkEntireImage.c)
 *     MiCheckProtoPtePageState @ 0x1402DBE30 (MiCheckProtoPtePageState.c)
 *     MiLockProtoPoolPageForce @ 0x1402DDFD4 (MiLockProtoPoolPageForce.c)
 *     MiInPagePageTable @ 0x1402E4D70 (MiInPagePageTable.c)
 *     MiLockPagedAddress @ 0x1402ED4F0 (MiLockPagedAddress.c)
 *     MiPrefetchVirtualMemory @ 0x1402EE1C8 (MiPrefetchVirtualMemory.c)
 *     MiMakeProtoAddressValid @ 0x1402F2450 (MiMakeProtoAddressValid.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x140324C6C (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiFaultInProbeAddress @ 0x14034B2CC (MiFaultInProbeAddress.c)
 *     KiPageFault @ 0x14042F300 (KiPageFault.c)
 *     ExpSvmServicePageFault @ 0x14060EA10 (ExpSvmServicePageFault.c)
 *     MiLockDriverPageRange @ 0x140619EA0 (MiLockDriverPageRange.c)
 *     MiProtectDriverSectionPte @ 0x14061A510 (MiProtectDriverSectionPte.c)
 *     MiInitializePrototypePtes @ 0x1406B0EE4 (MiInitializePrototypePtes.c)
 *     MmVirtualAccessFault @ 0x1408AC5C8 (MmVirtualAccessFault.c)
 * Callees:
 *     MiLocateAddress @ 0x140217260 (MiLocateAddress.c)
 *     MiUserFault @ 0x140235870 (MiUserFault.c)
 *     MiDispatchFault @ 0x140237F10 (MiDispatchFault.c)
 *     MiUnlockWorkingSetShared @ 0x14023C4E0 (MiUnlockWorkingSetShared.c)
 *     KeDelayExecutionThread @ 0x1402467F0 (KeDelayExecutionThread.c)
 *     MiSystemFault @ 0x140261080 (MiSystemFault.c)
 *     MiGetProtoPteAddress @ 0x140272D70 (MiGetProtoPteAddress.c)
 *     MiUnlockVadTree @ 0x140287758 (MiUnlockVadTree.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A1D0 (MiUnlockWorkingSetExclusive.c)
 *     MiLockVadTree @ 0x14028A7A0 (MiLockVadTree.c)
 *     MiIssueHardFault @ 0x1402A0F90 (MiIssueHardFault.c)
 *     MiSufficientAvailablePages @ 0x1402E35AC (MiSufficientAvailablePages.c)
 *     MiReplenishSlabAllocator @ 0x1402E6AC4 (MiReplenishSlabAllocator.c)
 *     MiReleaseFaultState @ 0x1402EF2A0 (MiReleaseFaultState.c)
 *     MiInitializePageFaultPacket @ 0x1402EF73C (MiInitializePageFaultPacket.c)
 *     MiIsRetryIoStatus @ 0x1402F4998 (MiIsRetryIoStatus.c)
 *     MiUnlockPageTableInternal @ 0x1403193E0 (MiUnlockPageTableInternal.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x140339B30 (MiEmptyDeferredWorkingSetEntries.c)
 *     MiRaisedIrqlFault @ 0x1403416F0 (MiRaisedIrqlFault.c)
 *     KeInvalidAccessAllowed @ 0x140341800 (KeInvalidAccessAllowed.c)
 *     MiReleaseFaultCharges @ 0x140363060 (MiReleaseFaultCharges.c)
 *     MiRetainSubsection @ 0x140364318 (MiRetainSubsection.c)
 *     MiDeprioritizeVad @ 0x1403C67DC (MiDeprioritizeVad.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     EtwTracePageFault @ 0x140466B76 (EtwTracePageFault.c)
 *     MiFaultGetFileExtents @ 0x140645EF4 (MiFaultGetFileExtents.c)
 *     MiWaitForFreePage @ 0x140653AB8 (MiWaitForFreePage.c)
 *     MiFreeTransitionPageHeatList @ 0x140653F18 (MiFreeTransitionPageHeatList.c)
 *     MiProcessTransitionHeatBatch @ 0x1406546A4 (MiProcessTransitionHeatBatch.c)
 *     MiReplenishTransitionPageHeatList @ 0x1406548CC (MiReplenishTransitionPageHeatList.c)
 *     MiCopyOnWriteCheckConditions @ 0x140666E90 (MiCopyOnWriteCheckConditions.c)
 *     MiHandleEnclaveFault @ 0x140A3CC94 (MiHandleEnclaveFault.c)
 */

__int64 __fastcall MmAccessFault(
        ULONG_PTR BugCheckParameter2,
        signed __int64 BugCheckParameter1,
        char a3,
        ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v5; // r14
  ULONG_PTR v6; // rdi
  ULONG_PTR v7; // rbx
  int v8; // ecx
  unsigned int v9; // r15d
  unsigned int FileExtents; // ebx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdi
  char v16; // al
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  _BYTE *v25; // rax
  _SLIST_ENTRY *v26; // rbx
  unsigned __int64 v27; // rdx
  PVOID v28; // rcx
  __int64 **Address; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  PVOID ProtoPteAddress; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  struct _KTHREAD *v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rbx
  __int64 v38; // rax
  unsigned __int64 v39; // rcx
  int v40; // edx
  ULONG_PTR v41; // r9
  __int64 v42; // r8
  _BYTE *v43; // rax
  __int64 v44; // [rsp+30h] [rbp-89h] BYREF
  unsigned __int64 v45[2]; // [rsp+40h] [rbp-79h] BYREF
  ULONG_PTR v46; // [rsp+50h] [rbp-69h]
  ULONG_PTR v47; // [rsp+58h] [rbp-61h]
  unsigned __int64 v48; // [rsp+60h] [rbp-59h]
  unsigned __int64 v49; // [rsp+68h] [rbp-51h]
  __int64 v50; // [rsp+70h] [rbp-49h]
  __int128 v51; // [rsp+78h] [rbp-41h] BYREF
  __int128 v52; // [rsp+88h] [rbp-31h]
  PVOID P[2]; // [rsp+98h] [rbp-21h]
  PSLIST_ENTRY ListEntry[2]; // [rsp+A8h] [rbp-11h] BYREF
  __int128 v55; // [rsp+B8h] [rbp-1h]

  v44 = 0LL;
  v5 = BugCheckParameter4;
  v6 = BugCheckParameter1;
  v7 = BugCheckParameter2;
  if ( (BugCheckParameter2 & 9) == 9 )
    KeBugCheckEx(0x1Au, 0x61941uLL, BugCheckParameter1, BugCheckParameter2, BugCheckParameter4);
  if ( BugCheckParameter1 >> 47 != -1 && BugCheckParameter1 >> 47 != 0 )
  {
    if ( a3 == 1 )
      return 3221225477LL;
    v43 = (_BYTE *)(BugCheckParameter4 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( (BugCheckParameter4 & 1) != 0 )
    {
      if ( *v43 == 1 || *v43 == 3 || *v43 == 6 )
        return 3221225477LL;
    }
    else if ( (unsigned __int8)KeInvalidAccessAllowed(BugCheckParameter4, 0LL) )
    {
      return 3221225477LL;
    }
    KeBugCheckEx(0x50u, v6, v7, v5, 4uLL);
  }
  if ( (BugCheckParameter2 & 0x8000) != 0 )
  {
    if ( a3 == 1 )
      return MiHandleEnclaveFault(BugCheckParameter1);
    else
      return 3221226658LL;
  }
  v51 = 0LL;
  v52 = 0LL;
  *(_OWORD *)P = 0LL;
  *(_OWORD *)ListEntry = 0LL;
  v55 = 0LL;
  v47 = (((unsigned __int64)BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v48 = ((v47 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v49 = ((v48 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v50 = ((v49 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = 0;
  if ( (v7 & 0x40) != 0 )
  {
    v8 = 16;
    v7 &= ~2uLL;
  }
  v45[1] = v7;
  v45[0] = BugCheckParameter1;
  v46 = BugCheckParameter4;
  DWORD2(v52) = ((unsigned __int8)v8 ^ (unsigned __int8)(32 * a3)) & 0x20 ^ v8;
  if ( KeGetCurrentIrql() > 1u )
    return MiRaisedIrqlFault(v45);
  while ( 1 )
  {
    v9 = 4096;
    if ( v6 < 0xFFFF800000000000uLL || (v19 = MiSystemFault(v45), FileExtents = v19, v19 == 192) )
    {
      FileExtents = MiUserFault(v45);
      if ( FileExtents != -1073741802 )
        goto LABEL_18;
    }
    else if ( v19 != -1073741802 )
    {
      goto LABEL_25;
    }
    FileExtents = MiDispatchFault(v45, &v44);
    if ( FileExtents == -1073741802 )
    {
      v27 = v45[0];
      if ( v45[0] < 0xFFFF800000000000uLL
        && P[1] != (PVOID)qword_140C65B28
        && (!qword_140C65B30 || P[1] != (PVOID)qword_140C65B30) )
      {
        v28 = P[0];
        if ( !P[0] )
        {
          MiLockVadTree(1LL);
          Address = MiLocateAddress(v45[0]);
          LOBYTE(v30) = 17;
          P[0] = Address;
          MiUnlockVadTree(1LL, v30);
          v28 = P[0];
          v27 = v45[0];
        }
        v31 = 4LL;
        if ( SBYTE8(v52) < 0 )
          v31 = 2LL;
        ProtoPteAddress = (PVOID)MiGetProtoPteAddress(v28, v27 >> 12, v31, ListEntry);
        if ( !ProtoPteAddress )
        {
          LOBYTE(v33) = 17;
          MiReleaseFaultState(&v51, v33, 0LL);
          P[1] = 0LL;
          FileExtents = -1073741819;
          goto LABEL_59;
        }
        if ( P[1] != ProtoPteAddress )
          P[1] = ProtoPteAddress;
        MiRetainSubsection((ULONG_PTR)ListEntry[0]);
      }
      DWORD2(v52) &= ~0x80u;
      FileExtents = 0;
    }
    else
    {
      v13 = v44;
      if ( v44 )
      {
        v22 = *(_QWORD *)(v44 + 256);
        v9 = *(_DWORD *)(v44 + 312);
        if ( v22 )
          v9 = *(_DWORD *)(v22 + 40);
        if ( a3 == 1 )
          *(_DWORD *)(v44 + 192) |= 0x40000u;
        if ( (*(_DWORD *)(v13 + 192) & 1) != 0 && *(int *)(v13 + 80) >= 0 )
        {
          FileExtents = MiFaultGetFileExtents(v45);
          P[1] = 0LL;
          goto LABEL_18;
        }
        FileExtents = MiIssueHardFault(v45);
      }
      P[1] = 0LL;
    }
    v14 = v52;
    v15 = v51;
    if ( (_QWORD)v52 )
    {
      if ( WORD5(v51) )
      {
        MiEmptyDeferredWorkingSetEntries(&v51);
        v14 = v52;
      }
      MiUnlockPageTableInternal(v15, v14);
      v16 = BYTE13(v51) | 2;
      *(_QWORD *)&v52 = 0LL;
      BYTE13(v51) |= 2u;
    }
    else
    {
      v16 = BYTE13(v51);
    }
    if ( (v16 & 1) != 0 )
      MiUnlockWorkingSetExclusive(v15, BYTE12(v51));
    else
      MiUnlockWorkingSetShared(v15, BYTE12(v51));
LABEL_18:
    if ( (BYTE8(v52) & 1) != 0 )
      MiDeprioritizeVad(P[0]);
    if ( ListEntry[1] )
    {
      if ( ListEntry[1] == (PSLIST_ENTRY)-1LL )
      {
        MiReplenishTransitionPageHeatList();
      }
      else
      {
        MiProcessTransitionHeatBatch();
        MiFreeTransitionPageHeatList(ListEntry[1]);
      }
      ListEntry[1] = 0LL;
    }
    if ( (_QWORD)v55 )
    {
      MiReplenishSlabAllocator(v55, *((_QWORD *)&v55 + 1));
      *(_QWORD *)&v55 = 0LL;
    }
    else if ( (v46 & 1) != 0 && *(_BYTE *)(v46 & 0xFFFFFFFFFFFFFFFEuLL) == 5 )
    {
      v34 = *(_QWORD *)((v46 & 0xFFFFFFFFFFFFFFFEuLL) + 48);
      if ( v34 )
        MiReplenishSlabAllocator(v34, 1LL);
    }
    if ( (*(_BYTE *)(v51 + 184) & 7) != 0 )
    {
      if ( (*(_DWORD *)(v51 + 4) & 0xFFF) != 0 )
        goto LABEL_25;
      v20 = v51;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( CurrentThread->Priority < 16 )
        goto LABEL_25;
      if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0xC) != 0
        || (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 2) != 0 )
      {
        goto LABEL_25;
      }
      v20 = v51;
      if ( (__int64)(*(_QWORD *)(v51 + 128) - *(_QWORD *)(v51 + 112)) <= 100 )
        goto LABEL_25;
    }
    v21 = *(_QWORD *)(qword_140C674C8 + 8LL * *(unsigned __int16 *)(v20 + 174));
    if ( v21 && !(unsigned int)MiSufficientAvailablePages(v21, 1056LL, v11, v12) )
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
LABEL_25:
    if ( !FileExtents )
      goto LABEL_30;
    if ( FileExtents == -1073740748 )
    {
      FileExtents = 873;
      goto LABEL_30;
    }
    if ( (FileExtents & 0x80000000) == 0 )
    {
LABEL_28:
      if ( !P[1] && (PerfGlobalGroupMask & 0x1000) != 0 )
      {
        v41 = 0LL;
        if ( (v46 & 1) == 0 )
          v41 = v46;
        v42 = DWORD2(v52) >> 5;
        LOBYTE(v42) = (BYTE8(v52) & 0x20) != 0;
        EtwTracePageFault(FileExtents, v45[0], v42, v41);
      }
      goto LABEL_30;
    }
LABEL_59:
    if ( !(unsigned int)MiIsRetryIoStatus(FileExtents, v9) )
      goto LABEL_28;
    v35 = KeGetCurrentThread();
    if ( ((__int64)v35[1].Queue & 4) != 0 || (*((_DWORD *)&v35[1].SwapListEntry + 3) & 0xC) != 0 )
    {
      FileExtents = -1073741801;
    }
    else if ( (v46 & 1) != 0
           && *(_BYTE *)(v46 & 0xFFFFFFFFFFFFFFFEuLL) == 5
           && (*(_DWORD *)((v46 & 0xFFFFFFFFFFFFFFFEuLL) + 56) & 0xC) != 0 )
    {
      FileExtents = -1073741608;
    }
    else
    {
      v36 = *(unsigned __int16 *)(v51 + 174);
      v37 = *(_QWORD *)(qword_140C674C8 + 8 * v36);
      if ( (BYTE8(v52) & 0x40) != 0
        || !(unsigned int)MiSufficientAvailablePages(*(_QWORD *)(qword_140C674C8 + 8 * v36), 1056LL, v23, v24)
        || *(_QWORD *)(v37 + 17280) < 0x400uLL )
      {
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
      }
      v38 = *(_QWORD *)(v37 + 17216);
      v39 = v38 - 1;
      if ( !v38 )
        v39 = 0LL;
      if ( v39 < 0x9F )
      {
        v40 = *((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3);
        if ( (v40 & 0xC) != 8
          && (v39 < 0x20 && (_UNKNOWN *)v37 == &MiSystemPartition
           || ((v40 & 2) == 0 || v39 < 0x21) && (*(_DWORD *)(v37 + 4) & 0x10) == 0) )
        {
          MiWaitForFreePage(v37);
        }
      }
      FileExtents = 873;
    }
LABEL_30:
    if ( (BYTE8(v52) & 2) != 0 )
      MiCopyOnWriteCheckConditions(v51, 3221225495LL);
    if ( (BYTE8(v52) & 4) != 0 )
      MiCopyOnWriteCheckConditions(v51, 3221226548LL);
    if ( !P[1] )
      break;
    v25 = (_BYTE *)(v5 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( (v5 & 1) == 0 )
      goto LABEL_64;
    if ( *v25 == 1 || *v25 == 2 )
    {
      v25[1] = 1;
LABEL_64:
      v5 = 0LL;
      goto LABEL_65;
    }
    if ( *v25 != 6 )
      goto LABEL_64;
LABEL_65:
    v26 = ListEntry[0];
    MiInitializePageFaultPacket(2, P[1], 0, v5, (__int64)v45);
    DWORD2(v52) |= 8u;
    v6 = v45[0];
    ListEntry[0] = v26;
  }
  if ( ListEntry[0] )
    MiReleaseFaultCharges((ULONG_PTR)ListEntry[0]);
  return FileExtents;
}
