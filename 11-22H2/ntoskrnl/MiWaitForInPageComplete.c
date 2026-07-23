/*
 * XREFs of MiWaitForInPageComplete @ 0x1402A1680
 * Callers:
 *     MiIssueHardFault @ 0x1402A0F90 (MiIssueHardFault.c)
 *     MiPfCompleteInPageSupport @ 0x1402A39CC (MiPfCompleteInPageSupport.c)
 * Callees:
 *     MiDeleteControlArea @ 0x1402199F0 (MiDeleteControlArea.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14021ACC0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14021AEA4 (MiUnmapPageInHyperSpaceWorker.c)
 *     KiUnstackDetachProcess @ 0x14022D9E0 (KiUnstackDetachProcess.c)
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D340 (ExAcquireSpinLockExclusive.c)
 *     MiSearchNumaNodeTable @ 0x14026E9B0 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402711D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCopyPage @ 0x140283CF0 (MiCopyPage.c)
 *     MiGetSystemRegionType @ 0x140284750 (MiGetSystemRegionType.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402858B4 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiGetSharedVm @ 0x140286D54 (MiGetSharedVm.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x14028AE30 (RtlAvlRemoveNode.c)
 *     PfHardFaultLog @ 0x1402A2F88 (PfHardFaultLog.c)
 *     MmUnmapLockedPages @ 0x1402CB700 (MmUnmapLockedPages.c)
 *     MiValidateInPage @ 0x1402DC480 (MiValidateInPage.c)
 *     MmIsAddressValidEx @ 0x1402E5FB0 (MmIsAddressValidEx.c)
 *     MiLockPageInline @ 0x1402EF680 (MiLockPageInline.c)
 *     MiIsRetryIoStatus @ 0x1402F4998 (MiIsRetryIoStatus.c)
 *     MiCheckSlabPfnBitmap @ 0x140324550 (MiCheckSlabPfnBitmap.c)
 *     MiZeroPhysicalPage @ 0x14033905C (MiZeroPhysicalPage.c)
 *     MiPrefetchRestOfCluster @ 0x1403674AC (MiPrefetchRestOfCluster.c)
 *     MiFindContiguousPagesEx @ 0x1403BA9B8 (MiFindContiguousPagesEx.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     memset @ 0x140435400 (memset.c)
 *     MiValidatePagefilePageHash @ 0x14046ED1A (MiValidatePagefilePageHash.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     MiRetardMdl @ 0x14061CA30 (MiRetardMdl.c)
 *     MiFlushAllFilesystemPages @ 0x140629304 (MiFlushAllFilesystemPages.c)
 *     MiExceptionForMappedVa @ 0x140630B30 (MiExceptionForMappedVa.c)
 *     MiStoreFaultComplete @ 0x14065C278 (MiStoreFaultComplete.c)
 */

__int64 __fastcall MiWaitForInPageComplete(__int64 a1, ULONG_PTR a2, unsigned int *a3)
{
  ULONG_PTR v3; // rbp
  __int64 v4; // r12
  ULONG_PTR v5; // r14
  __int64 v6; // r15
  ULONG_PTR v7; // rbx
  ULONG_PTR v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r13
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  bool v15; // zf
  int v16; // eax
  int v17; // r12d
  unsigned int v18; // esi
  unsigned int *v19; // r15
  ULONG_PTR v20; // r15
  int v21; // r15d
  __int64 result; // rax
  volatile signed __int64 *v23; // rcx
  unsigned __int64 v24; // r13
  unsigned int v25; // r15d
  void *v26; // rsi
  _BYTE *v27; // rdx
  unsigned __int64 v28; // rbp
  _QWORD *i; // rsi
  __int64 v30; // r13
  __int64 v31; // rcx
  ULONG_PTR v32; // r13
  int v33; // r12d
  _QWORD *v34; // rax
  unsigned __int64 v35; // r12
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v39; // eax
  int IsRetryIoStatus; // ebp
  ULONG_PTR v41; // rdi
  __int64 v42; // rbp
  unsigned __int64 v43; // rsi
  unsigned __int8 v44; // al
  struct _KPRCB *v45; // r9
  int v46; // eax
  _DWORD *v47; // r8
  int v48; // [rsp+70h] [rbp-88h]
  ULONG_PTR BugCheckParameter4; // [rsp+78h] [rbp-80h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+80h] [rbp-78h] BYREF
  unsigned __int64 v51; // [rsp+90h] [rbp-68h]
  __int64 v52; // [rsp+98h] [rbp-60h]
  _QWORD *v53; // [rsp+A0h] [rbp-58h]
  ULONG_PTR BugCheckParameter1; // [rsp+A8h] [rbp-50h]
  unsigned __int8 v55; // [rsp+100h] [rbp+8h] BYREF
  __int64 v56; // [rsp+108h] [rbp+10h]
  unsigned int *v57; // [rsp+110h] [rbp+18h]
  unsigned int v58; // [rsp+118h] [rbp+20h]

  v57 = a3;
  v3 = a2 + 272;
  v4 = *(_QWORD *)(a2 + 248);
  v5 = 0LL;
  v6 = *(_QWORD *)(a1 + 56);
  v7 = -1LL;
  BugCheckParameter1 = *(_QWORD *)(a2 + 232);
  BugCheckParameter4 = *(_QWORD *)(a2 + 224);
  v10 = *(_QWORD *)(a2 + 256);
  BugCheckParameter3[0] = -1LL;
  v55 = 0;
  if ( v10 )
    v3 = v10;
  v58 = 0;
  v52 = v4;
  v53 = (_QWORD *)(v3 + 48);
  if ( !_bittest64((const signed __int64 *)(v4 + 40), 0x28u)
    && *(__int64 *)(v4 + 8) > 0
    && !(unsigned int)MiCheckSlabPfnBitmap(v4, 1LL) )
  {
    v31 = (*(_QWORD *)(v4 + 40) >> 43) & 0x3FFLL;
    v32 = 0xAAAAAAAAAAAAAAABuLL * ((v4 + 0x220000000000LL) >> 4);
    v33 = ~(*(_DWORD *)(a1 + 80) << 12) & 0x20000 | 0x40000000;
    v56 = *(_QWORD *)(qword_140C674C8 + 8 * v31);
    if ( KeGetCurrentThread() == *(struct _KTHREAD **)&KeSwapProcessOrStackThread )
      v33 |= 8u;
    v34 = MiSearchNumaNodeTable(v32);
    MiFindContiguousPagesEx(
      v56,
      v32 + 1,
      qword_140C65CA0,
      0,
      0,
      1LL,
      *(unsigned __int8 *)(v52 + 34) >> 6,
      *((_DWORD *)v34 + 2),
      0x80000000,
      v33,
      0,
      0LL,
      (__int64)BugCheckParameter3);
  }
  v11 = *(_QWORD *)(a1 + 16);
  if ( (v11 & 1) != 0 )
  {
    v27 = (_BYTE *)(v11 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( *v27 == 2 )
    {
      if ( v6 )
        MiPrefetchRestOfCluster(a2, v27, v6);
    }
  }
  KeWaitForSingleObject((PVOID)(a2 + 32), WrPageIn, 0, 0, 0LL);
  if ( *(_QWORD *)(a2 + 264) )
    KeBugCheckEx(0x1Au, 0x61947uLL, a2, *(_QWORD *)(a2 + 264), 0LL);
  if ( v6 && (*(_BYTE *)(v6 + 187) & 0x60) == 0x60 && !*((_QWORD *)MiGetSharedVm(v6) + 4) )
    KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)(a2 + 104));
  if ( _bittest16((const signed __int16 *)(v3 + 10), 9u) )
  {
    MiRetardMdl(v3);
    *(_DWORD *)(a2 + 80) = -1073741670;
    *(_QWORD *)(a2 + 88) = 0LL;
  }
  if ( (*(_DWORD *)(a2 + 192) & 0x10) != 0 )
  {
    v30 = *(_QWORD *)(a2 + 336);
    if ( v30 )
    {
      v35 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v30 + 232));
      RtlAvlRemoveNode((unsigned __int64 *)(v30 + 240), (unsigned __int64 *)(a2 + 352));
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v30 + 232));
      if ( (_DWORD)KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
          && CurrentIrql <= 0xFu
          && (unsigned __int8)v35 <= 0xFu
          && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v39 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v35 + 1));
          v15 = (v39 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v39;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v35);
    }
  }
  v12 = *(unsigned int *)(a2 + 184);
  v13 = *(unsigned int *)(v3 + 40) + 4095LL + ((*(_DWORD *)(v3 + 32) + *(_DWORD *)(v3 + 44)) & 0xFFF);
  LODWORD(v56) = 0;
  v14 = v13 >> 12;
  v15 = (*(_DWORD *)(a2 + 192) & 0x100) == 0;
  v51 = v3 + 40 + 8 * v14;
  if ( !v15 )
    MiStoreFaultComplete(a2);
  v16 = *(_DWORD *)(a2 + 80);
  if ( *(_QWORD *)(a2 + 208) )
  {
    if ( v16 >= 0 )
    {
      LODWORD(v56) = MiValidateInPage(v14, a2);
      if ( (_DWORD)v56 == -1073740748 )
        *(_DWORD *)(a2 + 192) |= 0x100000u;
    }
    v23 = **(volatile signed __int64 ***)(a2 + 208);
    if ( _InterlockedExchangeAdd64(v23 + 14, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      MiDeleteControlArea((PVOID)v23);
  }
  else if ( v16 >= 0 && (*(_DWORD *)(a2 + 192) & 0x400000) != 0 )
  {
    LODWORD(v56) = MiValidatePagefilePageHash(a2);
  }
  v17 = *(_DWORD *)(a2 + 80);
  v48 = v58 & 1;
  if ( (v58 & 1) != 0 )
  {
    v18 = 2;
  }
  else
  {
    __incgsdword(0x2EA4u);
    __addgsdword(0x2EA0u, ((unsigned int)v12 >> 12) + ((v12 & 0xFFF) != 0));
    if ( v6 && (*(_DWORD *)(a2 + 192) & 8) == 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 168));
    v18 = 0;
  }
  v19 = v57;
  if ( *(_QWORD *)v57 )
    PfHardFaultLog(*(_QWORD *)v57, v18);
  v15 = (*(_BYTE *)(v3 + 10) & 1) == 0;
  *v19 = v18;
  if ( !v15 )
    MmUnmapLockedPages(*(PVOID *)(v3 + 24), (PMDL)v3);
  *(_DWORD *)(a2 + 188) = -1;
  if ( v17 >= 0 )
  {
    v20 = *(_QWORD *)(a2 + 88);
    if ( v20 != v12 )
    {
      if ( v20 || (*(_DWORD *)(a2 + 192) & 8) == 0 )
      {
        if ( (*(_DWORD *)(a2 + 192) & 0x200000) != 0 && !v48 )
          KeBugCheckEx(0x7Au, 4uLL, v20, a2, BugCheckParameter4);
        v24 = 8
            * ((((*(_DWORD *)(v3 + 32) + *(_DWORD *)(v3 + 44)) & 0xFFF)
              - (unsigned __int64)(unsigned int)(v12 - *(_DWORD *)(v3 + 40))
              + v20
              + 4095) >> 12)
            + 40;
        v25 = v20 & 0xFFF;
        if ( v25 )
        {
          v26 = (void *)(v25 + MiMapPageInHyperSpaceWorker(*(_QWORD *)(v3 + v24), &v55, 0x80000000));
          memset(v26, 0, 4096 - v25);
          MiUnmapPageInHyperSpaceWorker((unsigned __int64)v26, v55);
        }
        if ( v24 + v3 + 8 <= v51 )
          *(_DWORD *)(a2 + 188) = ((__int64)(v24 - 48) >> 3) + 1;
      }
      else
      {
        v17 = -1073741801;
      }
    }
    v21 = v56;
    if ( (_DWORD)v56 != -1073741761 )
      goto LABEL_30;
    IsRetryIoStatus = 0;
LABEL_84:
    if ( BugCheckParameter4 > 0x7FFFFFFEFFFFLL
      && (unsigned int)MiGetSystemRegionType(BugCheckParameter4) != 8
      && !(unsigned int)MiExceptionForMappedVa(BugCheckParameter4) )
    {
      if ( !IsRetryIoStatus )
      {
        v41 = BugCheckParameter1;
        if ( (unsigned __int8)MmIsAddressValidEx(BugCheckParameter1) )
          v7 = MI_READ_PTE_LOCK_FREE(v41);
        MiFlushAllFilesystemPages(1LL);
        if ( v21 < 0 )
          v17 = v21;
        KeBugCheckEx(0x7Au, v41, v17, v7, BugCheckParameter4);
      }
      if ( v21 != -1073741761 )
        v17 = -1073741801;
    }
    goto LABEL_30;
  }
  if ( v17 != -1073741807 )
  {
    if ( v17 == -2147483626 )
      goto LABEL_30;
    IsRetryIoStatus = MiIsRetryIoStatus((unsigned int)v17, *(unsigned int *)(v3 + 40));
    if ( IsRetryIoStatus && !dword_140C69758 && (!v48 || (v58 & 2) != 0) )
      dword_140C69758 = 32;
    if ( (*(_DWORD *)(a2 + 192) & 8) != 0 )
    {
      v17 = -1073741801;
      goto LABEL_30;
    }
    v21 = v56;
    goto LABEL_84;
  }
  if ( (*(_DWORD *)(a2 + 192) & 0x200000) != 0 )
    KeBugCheckEx(0x7Au, 3uLL, 0xFFFFFFFFC0000011uLL, a2, BugCheckParameter4);
  v28 = v51;
  for ( i = v53; (unsigned __int64)i <= v28; ++i )
    MiZeroPhysicalPage(6LL * *i, *i, 1LL, *(unsigned __int8 *)(48LL * *i - 0x220000000000LL + 34) >> 6);
  v17 = 0;
LABEL_30:
  if ( BugCheckParameter3[0] != -1LL )
  {
    v42 = v52;
    MiCopyPage(BugCheckParameter3[0], 0xAAAAAAAAAAAAAAABuLL * ((v52 + 0x220000000000LL) >> 4), 1);
    v5 = 48 * BugCheckParameter3[0] - 0x220000000000LL;
    *(_QWORD *)(v5 + 16) = ZeroPte;
    MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v5 + 16));
    if ( ((*(_QWORD *)(v5 + 40) >> 60) & 7) == 3 )
    {
      v43 = (unsigned __int8)MiLockPageInline(v5);
      *(_QWORD *)(v5 + 8) = *(_QWORD *)(v42 + 8);
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (_DWORD)KiIrqlFlags )
      {
        v44 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v44 <= 0xFu && (unsigned __int8)v43 <= 0xFu && v44 >= 2u )
        {
          v45 = KeGetCurrentPrcb();
          v46 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v43 + 1));
          v47 = v45->SchedulerAssist;
          v15 = (v46 & v47[5]) == 0;
          v47[5] &= v46;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(v45);
        }
      }
      __writecr8(v43);
    }
  }
  result = v58;
  *(_DWORD *)(a2 + 112) = v58;
  *(_QWORD *)(a2 + 104) = v5;
  *(_DWORD *)(a2 + 80) = v17;
  return result;
}
