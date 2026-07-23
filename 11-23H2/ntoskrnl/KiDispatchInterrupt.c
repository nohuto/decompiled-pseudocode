/*
 * XREFs of KiDispatchInterrupt @ 0x140249600
 * Callers:
 *     KiDpcInterrupt @ 0x1404276A0 (KiDpcInterrupt.c)
 *     KiDpcInterruptBypass @ 0x140427D70 (KiDpcInterruptBypass.c)
 * Callees:
 *     KiQueueReadyThread @ 0x1402345E0 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     KiEndThreadAccountingPeriodEx @ 0x140248520 (KiEndThreadAccountingPeriodEx.c)
 *     KiQuantumEnd @ 0x1402487C0 (KiQuantumEnd.c)
 *     KeIsUserVaAccessAllowed @ 0x140249CB0 (KeIsUserVaAccessAllowed.c)
 *     KiReadyDeferredReadyList @ 0x140249D60 (KiReadyDeferredReadyList.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x14024C820 (KiAbEntryGetLockedHeadEntry.c)
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x1402A8700 (KiAbTryIncrementIoWaiterCounts.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402A8F70 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KiAbProcessThreadLocks @ 0x1402BC5E0 (KiAbProcessThreadLocks.c)
 *     KiAbDetermineMaxWaiterPriority @ 0x1402BC9B0 (KiAbDetermineMaxWaiterPriority.c)
 *     ObReferenceObjectSafeWithTag @ 0x1402C38E0 (ObReferenceObjectSafeWithTag.c)
 *     ExGetExtensionTable @ 0x1402FA6D0 (ExGetExtensionTable.c)
 *     KiDeferGroupSchedulingPreemption @ 0x140307814 (KiDeferGroupSchedulingPreemption.c)
 *     KiAbIoBoostOwners @ 0x140318EB4 (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x140318FB8 (KiAbCpuBoostOwners.c)
 *     KiAbSetMinimumThreadPriority @ 0x1403190B8 (KiAbSetMinimumThreadPriority.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x140319354 (KiAbEntryUpdateWaiterTreePosition.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x140319430 (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x140319480 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x14031953C (KiAbOwnerComputeCpuPriorityKey.c)
 *     IoBoostThreadIoPriority @ 0x14031B5B0 (IoBoostThreadIoPriority.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapStacksAndRetireDpcList @ 0x140428630 (KiSwapStacksAndRetireDpcList.c)
 *     KiSwapContext @ 0x140428670 (KiSwapContext.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     VslKernelShadowStackAssist @ 0x14054C100 (VslKernelShadowStackAssist.c)
 */

__int64 __fastcall KiDispatchInterrupt(char a1, __int64 a2)
{
  __int16 v3; // r8
  unsigned __int64 v4; // rax
  __int64 CurrentPrcb; // rsi
  ULONG_PTR v6; // r14
  struct _KPRCB *v7; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  __int64 result; // rax
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r8
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  bool v17; // zf
  struct _KPRCB *v18; // rcx
  signed __int32 *v19; // r8
  signed __int32 v20; // eax
  signed __int32 v21; // ett
  int v22; // ecx
  __int64 p_AbSelfIoBoostsList; // r12
  int v24; // ecx
  unsigned int v25; // r13d
  __int64 v26; // rcx
  __int64 v27; // rcx
  ULONG_PTR v28; // rbx
  __int64 v29; // rax
  char v30; // cl
  int v31; // r15d
  __int64 LockedHeadEntry; // rax
  __int64 v33; // rdi
  __int64 v34; // rax
  char v35; // r14
  char v36; // al
  char v37; // dl
  int v38; // r10d
  char CpuPriorityKey; // r12
  __int64 v40; // r14
  _DWORD *v41; // rbx
  __int64 ExtensionTable; // rax
  _QWORD *i; // rcx
  volatile signed __int16 *v44; // rbx
  __int64 v45; // rbx
  char IsUserVaAccessAllowed; // di
  __int64 v47; // r8
  signed __int32 v48[8]; // [rsp+0h] [rbp-89h] BYREF
  _QWORD *v49; // [rsp+40h] [rbp-49h] BYREF
  __int64 v50; // [rsp+48h] [rbp-41h] BYREF
  _SINGLE_LIST_ENTRY *v51; // [rsp+50h] [rbp-39h]
  ULONG_PTR v52; // [rsp+58h] [rbp-31h]
  struct _KPRCB *v53; // [rsp+60h] [rbp-29h]
  unsigned __int64 v54; // [rsp+68h] [rbp-21h] BYREF
  __int128 v55; // [rsp+70h] [rbp-19h] BYREF
  __int64 v56; // [rsp+80h] [rbp-9h]
  __int128 v57; // [rsp+88h] [rbp-1h]
  int v58; // [rsp+F0h] [rbp+67h] BYREF
  int v59; // [rsp+F8h] [rbp+6Fh] BYREF
  int v60; // [rsp+100h] [rbp+77h]
  int v61; // [rsp+108h] [rbp+7Fh] BYREF

  if ( a2 )
  {
    v3 = *(_WORD *)(a2 + 368);
    v4 = *(_QWORD *)(a2 + 360);
    if ( v3 == 51 )
    {
      if ( v4 > qword_140D1F378 && v4 <= qword_140D1F368 )
        *(_QWORD *)(a2 + 360) = qword_140D1F378;
    }
    else if ( v3 == 16
           && v4 > (unsigned __int64)&ExpInterlockedPopEntrySListResume
           && v4 <= (unsigned __int64)&ExpInterlockedPopEntrySListEnd )
    {
      *(_QWORD *)(a2 + 360) = &ExpInterlockedPopEntrySListResume;
      if ( (_BYTE)KiKernelCetEnabled )
        VslKernelShadowStackAssist(3, *(_QWORD *)(a2 + 216), 0, 0, (__int64)&ExpInterlockedPopEntrySListResume, 4);
    }
  }
  _disable();
  CurrentPrcb = (__int64)KeGetCurrentPrcb();
  v6 = *(_QWORD *)(CurrentPrcb + 8);
  v52 = v6;
  *(_BYTE *)(v6 + 390) = a1;
  if ( (*(_BYTE *)(CurrentPrcb + 13244) & 0xBF) != 0 )
    KiSwapStacksAndRetireDpcList(CurrentPrcb, *(_QWORD *)(CurrentPrcb + 13216));
  v7 = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)v7->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v9 = *SchedulerAssist;
    do
    {
      v10 = v9;
      v9 = _InterlockedCompareExchange(SchedulerAssist, v9 & 0xFFDFFFFF, v9);
    }
    while ( v10 != v9 );
    if ( (v9 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(v7);
  }
  _enable();
  result = *(unsigned __int8 *)(CurrentPrcb + 13241);
  if ( (_BYTE)result )
  {
    *(_BYTE *)(CurrentPrcb + 13241) = 0;
    return KiQuantumEnd();
  }
  if ( *(_QWORD *)(CurrentPrcb + 16) )
  {
    if ( (*(_BYTE *)(v6 + 2) & 4) == 0 || (result = KiDeferGroupSchedulingPreemption(v6, CurrentPrcb), !(_BYTE)result) )
    {
      _disable();
      *(_BYTE *)(CurrentPrcb + 32) = 1;
      v12 = __rdtsc();
      v13 = v12 - *(_QWORD *)(CurrentPrcb + 33152);
      *(_QWORD *)(v6 + 72) += v13;
      v14 = *(unsigned int *)(v6 + 80);
      v15 = v13 * *(unsigned int *)(CurrentPrcb + 33208);
      *(_QWORD *)(CurrentPrcb + 33152) = v12;
      v16 = (v15 >> 16) + v14;
      if ( v16 > 0xFFFFFFFF )
        LODWORD(v16) = -1;
      v17 = (*(_BYTE *)(v6 + 2) & 0xBE) == 0;
      *(_DWORD *)(v6 + 80) = v16;
      if ( !v17 )
        KiEndThreadAccountingPeriodEx(CurrentPrcb, v6, v13, 1u);
      v18 = KeGetCurrentPrcb();
      v19 = (signed __int32 *)v18->SchedulerAssist;
      if ( v19 )
      {
        _m_prefetchw(v19);
        v20 = *v19;
        do
        {
          v21 = v20;
          v20 = _InterlockedCompareExchange(v19, v20 & 0xFFDFFFFF, v20);
        }
        while ( v21 != v20 );
        if ( (v20 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v18);
      }
      _enable();
      v22 = *(unsigned __int8 *)(v6 + 792) | *(unsigned __int8 *)(v6 + 870);
      v50 = 0LL;
      if ( v22 == 63 )
        goto LABEL_87;
      v53 = KeGetCurrentPrcb();
      v49 = 0LL;
      p_AbSelfIoBoostsList = (__int64)&v53->AbSelfIoBoostsList;
      v60 = 0;
      v24 = *(unsigned __int8 *)(v6 + 792) | *(unsigned __int8 *)(v6 + 870);
      v51 = &v53->AbSelfIoBoostsList;
      if ( v24 == 63 )
        goto LABEL_86;
      v25 = (*(unsigned __int8 *)(v6 + 792) | *(unsigned __int8 *)(v6 + 870)) ^ 0x3F;
      v17 = !_BitScanForward((unsigned int *)&v26, v25);
      v60 = v26;
      if ( v17 )
        goto LABEL_86;
      while ( 1 )
      {
        v25 &= v25 - 1;
        v27 = 96 * v26;
        v28 = v27 + v6 + 1696;
        v57 = 0LL;
        v29 = *(_QWORD *)v28;
        *(_QWORD *)&v57 = v29;
        if ( !v29 || (v29 & 2) != 0 || (v29 & 1) != 0 )
          goto LABEL_81;
        if ( v29 < 0 )
        {
          if ( (*(_BYTE *)(v28 + 19) & 1) != 0 )
            goto LABEL_81;
          if ( *(_BYTE *)(v28 + 17) )
          {
            v30 = *(_BYTE *)(v28 - 96LL * *(unsigned __int8 *)(v28 + 16) - 1501);
            if ( v30 > 30 )
              v30 = 30;
            if ( v30 == *(_BYTE *)(v28 + 48) )
              goto LABEL_81;
          }
          else if ( (unsigned __int8)KiAbOwnerComputeCpuPriorityKey(v27 + v6 + 1696) == *(_BYTE *)(v28 + 48) )
          {
            goto LABEL_81;
          }
        }
        v31 = 0;
        v56 = 0LL;
        v58 = 0;
        v55 = 0LL;
        v59 = 0;
        LockedHeadEntry = KiAbEntryGetLockedHeadEntry(v28, 1LL, &v55);
        v33 = LockedHeadEntry;
        if ( LockedHeadEntry )
        {
          if ( *(_BYTE *)(v28 + 17) )
          {
            if ( v28 != LockedHeadEntry )
              KiAbEntryUpdateWaiterTreePosition(v28, LockedHeadEntry);
            v34 = *(_QWORD *)(v33 + 56);
            if ( v34 )
              v35 = *(_BYTE *)(v34 + 24);
            else
              v35 = 30;
            LOBYTE(v58) = v35;
            if ( !*(_BYTE *)(v33 + 17) )
            {
              v36 = KiAbOwnerComputeCpuPriorityKey(v33);
              v37 = v35;
              if ( v36 < v35 )
                v37 = v36;
              v35 = v37;
              LOBYTE(v58) = v37;
            }
            KiAbTryIncrementIoWaiterCounts(v28, v33);
            CpuPriorityKey = KiAbEntryGetCpuPriorityKey(v28);
            if ( v35 < CpuPriorityKey )
            {
              if ( v38 )
              {
LABEL_69:
                v40 = (__int64)v51;
                KiAbIoBoostOwners(v33, v38, (unsigned int)&v50, (unsigned int)&v49, (__int64)v51);
              }
              else
              {
                v40 = (__int64)v51;
              }
              KiAbCpuBoostOwners(v33, (unsigned __int8)CpuPriorityKey, (unsigned int)&v50, (unsigned int)&v49, v40);
              v6 = v52;
              p_AbSelfIoBoostsList = (__int64)v51;
LABEL_72:
              KxReleaseQueuedSpinLock(&v55);
              if ( v31 )
              {
                v41 = (_DWORD *)(v28 - 96LL * *(unsigned __int8 *)(v28 + 16) - 1696);
                if ( (unsigned __int8)ObReferenceObjectSafeWithTag(v41, 1953261124LL) )
                {
                  if ( (v31 & 1) != 0 )
                    IoBoostThreadIoPriority(v41, 2LL, 0x80000000LL);
                  if ( (v31 & 2) != 0 )
                  {
                    if ( v41[362] )
                    {
                      ExtensionTable = ExGetExtensionTable(IopIoRateExtensionHost);
                      if ( ExtensionTable )
                      {
                        (*(void (__fastcall **)(_DWORD *))(ExtensionTable + 16))(v41);
                        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
                      }
                    }
                  }
                  ObDereferenceObjectDeferDeleteWithTag(v41, 0x746C6644u);
                }
              }
              goto LABEL_81;
            }
            if ( v38 )
              goto LABEL_69;
            v6 = v52;
            p_AbSelfIoBoostsList = (__int64)v51;
          }
          else
          {
            if ( v28 != LockedHeadEntry )
              KiAbEntryUpdateOwnerTreePosition(v28, LockedHeadEntry);
            KiAbDetermineMaxWaiterPriority(v33, &v58);
            if ( v58 )
            {
              if ( (unsigned int)KiAbSetMinimumThreadPriority(
                                   v28,
                                   (unsigned int)&v58,
                                   (unsigned int)&v50,
                                   (unsigned int)&v49,
                                   p_AbSelfIoBoostsList,
                                   (__int64)&v59)
                && v28 != v33 )
              {
                KiAbEntryUpdateOwnerTreePosition(v28, v33);
              }
              v31 = v59;
              goto LABEL_72;
            }
          }
          KxReleaseQueuedSpinLock(&v55);
        }
LABEL_81:
        v17 = !_BitScanForward((unsigned int *)&v26, v25);
        v60 = v26;
        if ( v17 )
        {
          for ( i = v49; v49; i = v49 )
          {
            v44 = (volatile signed __int16 *)(i - 101);
            v49 = (_QWORD *)*i;
            *i = 1LL;
            _InterlockedOr(v48, 0);
            if ( *((_BYTE *)i - 15) )
              KiAbProcessThreadLocks((_DWORD)i - 808, 0, 1, 0, (__int64)&v50, (__int64)&v49, p_AbSelfIoBoostsList);
            _InterlockedDecrement16(v44 + 434);
          }
LABEL_86:
          KiReadyDeferredReadyList(v53, &v50);
LABEL_87:
          v61 = 0;
          v54 = CurrentPrcb & 0xFFFFFFFFFFFFFFFEuLL;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(CurrentPrcb + 48), 0LL) )
          {
            do
              KeYieldProcessorEx(&v61);
            while ( *(_QWORD *)(CurrentPrcb + 48) );
          }
          v45 = *(_QWORD *)(CurrentPrcb + 16);
          *(_QWORD *)(CurrentPrcb + 16) = 0LL;
          *(_QWORD *)(CurrentPrcb + 8) = v45;
          if ( *(_BYTE *)(v45 + 388) == 1 )
            *(_DWORD *)(v45 + 132) = *(_DWORD *)(v45 + 132) - *(_DWORD *)(v45 + 436) + MEMORY[0xFFFFF78000000320];
          *(_BYTE *)(v45 + 388) = 2;
          *(_BYTE *)(v6 + 643) = 31;
          KiQueueReadyThread(CurrentPrcb, (__int64 *)&v54, v6);
          IsUserVaAccessAllowed = KeIsUserVaAccessAllowed(0LL);
          if ( KeSmapEnabled )
            __asm { stac }
          LOBYTE(v47) = 1;
          result = KiSwapContext(v6, v45, v47);
          if ( !IsUserVaAccessAllowed && KeSmapEnabled )
            __asm { clac }
          return result;
        }
      }
    }
  }
  return result;
}
