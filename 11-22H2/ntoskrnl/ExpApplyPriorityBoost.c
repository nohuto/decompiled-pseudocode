/*
 * XREFs of ExpApplyPriorityBoost @ 0x1402A8420
 * Callers:
 *     ExpApplyPrewaitBoost @ 0x1402A7A00 (ExpApplyPrewaitBoost.c)
 *     ExpConvertExclusiveToSharedLite @ 0x1403472EC (ExpConvertExclusiveToSharedLite.c)
 *     ExpApplyRewaitBoost @ 0x14036B1F0 (ExpApplyRewaitBoost.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x14022FF50 (PsBoostThreadIoEx.c)
 *     ObpIncrPointerCount @ 0x14025A124 (ObpIncrPointerCount.c)
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260D40 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x140260E00 (KxWaitForLockOwnerShip.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B270 (ExReleaseRundownProtection_0.c)
 *     PsGetBaseIoPriorityThread @ 0x1402A7AA0 (PsGetBaseIoPriorityThread.c)
 *     ExpOwnerEntryToThread @ 0x1402A8A68 (ExpOwnerEntryToThread.c)
 *     PsGetIoPriorityThread @ 0x1402A8A90 (PsGetIoPriorityThread.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402A8BC0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6890 (ObfReferenceObjectWithTag.c)
 *     ExGetExtensionTable @ 0x1402FA440 (ExGetExtensionTable.c)
 *     KeSetPriorityBoost @ 0x140307860 (KeSetPriorityBoost.c)
 *     KiAbQueueAutoBoostDpc @ 0x140307C18 (KiAbQueueAutoBoostDpc.c)
 *     KxWaitForLockChainValid @ 0x14031A4F0 (KxWaitForLockChainValid.c)
 *     KeAbProcessEffectiveIoPriorityChange @ 0x14031AEEC (KeAbProcessEffectiveIoPriorityChange.c)
 *     IoBoostThreadIoPriority @ 0x14031B140 (IoBoostThreadIoPriority.c)
 *     KiAbThreadInsertList @ 0x14035F9D0 (KiAbThreadInsertList.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14045FB2E (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405715E8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiHaltOnAddressWakeEntireList @ 0x14057FFFC (KiHaltOnAddressWakeEntireList.c)
 *     ObpPushStackInfo @ 0x140582C68 (ObpPushStackInfo.c)
 */

__int64 __fastcall ExpApplyPriorityBoost(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  bool v5; // zf
  __int16 v7; // r15
  int IoPriorityThread; // r12d
  int v10; // r8d
  int v11; // eax
  int v12; // r15d
  int v13; // r14d
  unsigned __int8 CurrentIrql; // dl
  signed __int64 *v15; // rdx
  unsigned __int8 v16; // dl
  char v17; // cl
  __int64 v18; // rax
  int v19; // edx
  int v20; // r8d
  __int64 v21; // rsi
  volatile signed __int64 *v22; // rax
  unsigned __int8 OldIrql; // r10
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  unsigned __int64 v25; // rbx
  _DWORD *SchedulerAssist; // r10
  __int64 v27; // r11
  __int64 v28; // rsi
  unsigned int v29; // r14d
  __int64 v30; // rax
  __int64 v31; // r13
  unsigned int v32; // eax
  int v33; // eax
  unsigned __int8 v34; // r10
  __int16 v35; // ax
  __int64 v36; // rcx
  unsigned __int8 Lock; // cl
  unsigned __int8 v38; // cl
  unsigned __int8 v39; // r10
  _DWORD *v40; // r8
  __int64 v41; // r9
  __int64 ExtensionTable; // rax
  unsigned __int8 v43; // cl
  struct _KPRCB *v44; // r11
  _DWORD *v45; // r9
  int v46; // eax
  unsigned __int8 v47; // cl
  struct _KPRCB *v48; // r11
  _DWORD *v49; // r9
  int v50; // eax
  unsigned __int8 v51; // cl
  struct _KPRCB *v52; // r11
  _DWORD *v53; // r9
  int v54; // eax
  __int64 v55; // rax
  unsigned __int8 v56; // cl
  struct _KPRCB *v57; // r9
  _DWORD *v58; // r8
  signed __int32 v59[8]; // [rsp+0h] [rbp-68h] BYREF
  int v60; // [rsp+20h] [rbp-48h]
  int v61; // [rsp+24h] [rbp-44h]
  __int64 CurrentPrcb; // [rsp+28h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  void *retaddr; // [rsp+88h] [rbp+20h]
  unsigned __int8 v65; // [rsp+90h] [rbp+28h]
  unsigned __int8 v66; // [rsp+90h] [rbp+28h]
  unsigned __int8 v67; // [rsp+90h] [rbp+28h]
  int v68; // [rsp+A8h] [rbp+40h]

  result = 0LL;
  v5 = (*(_BYTE *)(a1 + 26) & 8) == 0;
  v7 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !v5 )
    return result;
  IoPriorityThread = PsGetIoPriorityThread(a3, a2, a3, a4);
  if ( IoPriorityThread <= 2 )
    IoPriorityThread = 2;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
  v10 = v7 & 0xFF00;
  v11 = v7 & 4;
  v12 = v7 & 2;
  v60 = v10;
  v61 = v11;
  LockHandle.LockQueue.Next = 0LL;
  v13 = 0;
  v68 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = 4LL;
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v27) = 4;
    else
      v27 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v27;
  }
  LockHandle.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, a1 + 96);
  }
  else
  {
    v15 = (signed __int64 *)_InterlockedExchange64((volatile __int64 *)(a1 + 96), (__int64)&LockHandle);
    if ( !v15 )
      goto LABEL_7;
    KxWaitForLockOwnerShip((signed __int64)&LockHandle, v15);
  }
  v10 = v60;
LABEL_7:
  if ( v61 )
    *(_WORD *)(a1 + 26) |= 4u;
  if ( v12 )
    *(_WORD *)(a1 + 26) |= 2u;
  if ( v10 )
  {
    v16 = *(_BYTE *)(a3 + 195);
    if ( (char)v16 > (int)*(unsigned __int8 *)(a1 + 27) )
    {
      v17 = 15;
      if ( v16 < 0xFu )
        v17 = *(_BYTE *)(a3 + 195);
      *(_BYTE *)(a1 + 27) = v17;
    }
  }
  v18 = ExpOwnerEntryToThread(a1 + 48);
  v21 = v18;
  if ( v18 )
  {
    if ( v19 && (*(_DWORD *)(a1 + 56) & 1) == 0 && (unsigned int)PsGetBaseIoPriorityThread(v18) < 2 )
    {
      v13 = CurrentPrcb;
      v68 = CurrentPrcb;
      PsBoostThreadIoEx(v21, 0, 0, 0LL);
      *(_DWORD *)(a1 + 56) |= 1u;
      v20 = v60;
    }
    if ( v12 && (*(_DWORD *)(a1 + 56) & 4) == 0 )
    {
      v13 |= 2u;
      v68 = v13;
      if ( _InterlockedIncrement((volatile signed __int32 *)(v21 + 1444)) == 1 && *(_BYTE *)(v21 + 793) )
      {
        v38 = KeGetCurrentIrql();
        v67 = v38;
        __writecr8(2uLL);
        if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v38 <= 0xFu )
        {
          v40 = KeGetCurrentPrcb()->SchedulerAssist;
          if ( v38 == 2 )
            LODWORD(v41) = CurrentPrcb;
          else
            v41 = (-1LL << (v38 + 1)) & 4;
          v40[5] |= v41;
        }
        CurrentPrcb = (__int64)KeGetCurrentPrcb();
        if ( (unsigned int)KiAbThreadInsertList(v21, CurrentPrcb + 35704, v21 + 808) )
          KiAbQueueAutoBoostDpc(CurrentPrcb);
        v39 = v67;
        if ( (_DWORD)KiIrqlFlags )
        {
          v43 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v43 <= 0xFu && v67 <= 0xFu && v43 >= 2u )
          {
            v44 = KeGetCurrentPrcb();
            v45 = v44->SchedulerAssist;
            v46 = ~(unsigned __int16)(-1LL << (v67 + 1));
            v5 = (v46 & v45[5]) == 0;
            v45[5] &= v46;
            if ( v5 )
            {
              KiRemoveSystemWorkPriorityKick(v44);
              v39 = v67;
            }
          }
        }
        __writecr8(v39);
      }
      *(_DWORD *)(a1 + 56) |= 4u;
      v20 = v60;
    }
    if ( v20 && *(unsigned __int8 *)(a1 + 27) > *(char *)(v21 + 195) )
    {
      v13 |= 0xFF00u;
      v68 = v13;
    }
    if ( v13 )
    {
      v22 = (volatile signed __int64 *)(v21 - 48);
      if ( ObpTraceFlags )
      {
        ObpPushStackInfo(v21 - 48);
        v22 = (volatile signed __int64 *)(v21 - 48);
      }
      ObpIncrPointerCount(v22);
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      OldIrql = LockHandle.OldIrql;
      v65 = LockHandle.OldIrql;
      if ( (_DWORD)KiIrqlFlags )
      {
        v47 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v47 <= 0xFu && LockHandle.OldIrql <= 0xFu && v47 >= 2u )
        {
          v48 = KeGetCurrentPrcb();
          v49 = v48->SchedulerAssist;
          v50 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v5 = (v50 & v49[5]) == 0;
          v49[5] &= v50;
          if ( v5 )
          {
            KiRemoveSystemWorkPriorityKick(v48);
            OldIrql = v65;
          }
        }
      }
      __writecr8(OldIrql);
      if ( (v13 & 4) != 0 )
      {
        ++ExpResourceIoBoosted;
        IoBoostThreadIoPriority(v21, (unsigned int)IoPriorityThread, 0LL);
      }
      if ( (v13 & 2) != 0 )
      {
        if ( *(_DWORD *)(v21 + 1448) )
        {
          ExtensionTable = ExGetExtensionTable(IopIoRateExtensionHost);
          if ( ExtensionTable )
          {
            (*(void (__fastcall **)(__int64))(ExtensionTable + 16))(v21);
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
          }
        }
      }
      if ( (v13 & 0xFF00) != 0 )
      {
        __incgsdword(0x8AE8u);
        KeSetPriorityBoost(v21, *(unsigned __int8 *)(a1 + 27));
      }
      v68 = 0;
      ObDereferenceObjectDeferDeleteWithTag((PVOID)v21, 0x746C6644u);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 96), &LockHandle);
    }
  }
  if ( *(char *)(a1 + 26) >= 0 )
  {
    v28 = *(_QWORD *)(a1 + 16);
    if ( v28 )
    {
      v29 = 1;
      LODWORD(CurrentPrcb) = *(_DWORD *)(v28 + 8);
      if ( (unsigned int)CurrentPrcb > 1 )
      {
        do
        {
          v28 += 16LL;
          v30 = ExpOwnerEntryToThread(v28);
          v31 = v30;
          if ( !v30 )
            goto LABEL_54;
          if ( v61 && (*(_DWORD *)(v28 + 8) & 1) == 0 && (unsigned int)PsGetBaseIoPriorityThread(v30) < 2 )
          {
            v68 |= 4u;
            PsBoostThreadIoEx(v31, 0, 0, 0LL);
            *(_DWORD *)(v28 + 8) |= 1u;
          }
          if ( v12 && (*(_DWORD *)(v28 + 8) & 4) == 0 )
          {
            v68 |= 2u;
            if ( _InterlockedIncrement((volatile signed __int32 *)(v31 + 1444)) == 1 )
              KeAbProcessEffectiveIoPriorityChange(v31, 0LL);
            *(_DWORD *)(v28 + 8) |= 4u;
          }
          if ( v60 )
          {
            v33 = v68;
            if ( *(unsigned __int8 *)(a1 + 27) > *(char *)(v31 + 195) )
            {
              v33 = v68 | 0xFF00;
              v68 |= 0xFF00u;
            }
          }
          else
          {
            v33 = v68;
          }
          if ( v33 )
          {
            ObfReferenceObjectWithTag((PVOID)v31, 0x746C6644u);
            KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
            v34 = LockHandle.OldIrql;
            v66 = LockHandle.OldIrql;
            if ( (_DWORD)KiIrqlFlags )
            {
              v51 = KeGetCurrentIrql();
              if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v51 <= 0xFu && LockHandle.OldIrql <= 0xFu && v51 >= 2u )
              {
                v52 = KeGetCurrentPrcb();
                v53 = v52->SchedulerAssist;
                v54 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v5 = (v54 & v53[5]) == 0;
                v53[5] &= v54;
                if ( v5 )
                {
                  KiRemoveSystemWorkPriorityKick(v52);
                  v34 = v66;
                }
              }
            }
            __writecr8(v34);
            v35 = v68;
            if ( (v68 & 4) != 0 )
            {
              ++ExpResourceIoBoostedShared;
              IoBoostThreadIoPriority(v31, (unsigned int)IoPriorityThread, 0LL);
              v35 = v68;
            }
            if ( (v35 & 2) != 0 && *(_DWORD *)(v31 + 1448) )
            {
              v55 = ExGetExtensionTable(IopIoRateExtensionHost);
              if ( v55 )
              {
                (*(void (__fastcall **)(__int64))(v55 + 16))(v31);
                ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
              }
              v35 = v68;
            }
            if ( (v35 & 0xFF00) != 0 )
            {
              __incgsdword(0x8AECu);
              KeSetPriorityBoost(v31, *(unsigned __int8 *)(a1 + 27));
            }
            ObDereferenceObjectDeferDeleteWithTag((PVOID)v31, 0x746C6644u);
            v68 = 0;
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 96), &LockHandle);
            v36 = *(_QWORD *)(a1 + 16);
            if ( !v36 )
              break;
            v32 = CurrentPrcb;
            if ( *(_DWORD *)(v36 + 8) != (_DWORD)CurrentPrcb )
              break;
          }
          else
          {
LABEL_54:
            v32 = CurrentPrcb;
          }
          ++v29;
        }
        while ( v29 < v32 );
      }
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
  {
    _m_prefetchw(&LockHandle);
    Next = LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
        goto LABEL_44;
      Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    Lock = (unsigned __int8)LockHandle.LockQueue.Lock;
    if ( ((Lock ^ (unsigned __int8)_InterlockedExchange64(
                                     (volatile __int64 *)&Next->Lock,
                                     (__int64)LockHandle.LockQueue.Lock)) & 4) != 0 )
    {
      _InterlockedOr(v59, 0);
      KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)&Next->Lock >> 5) & 0x7F], 0LL));
    }
    goto LABEL_44;
  }
  KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
LABEL_44:
  result = (unsigned int)KiIrqlFlags;
  v25 = LockHandle.OldIrql;
  if ( (_DWORD)KiIrqlFlags )
  {
    v56 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v56 <= 0xFu && LockHandle.OldIrql <= 0xFu && v56 >= 2u )
    {
      v57 = KeGetCurrentPrcb();
      v58 = v57->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v5 = ((unsigned int)result & v58[5]) == 0;
      v58[5] &= result;
      if ( v5 )
        result = KiRemoveSystemWorkPriorityKick(v57);
    }
  }
  __writecr8(v25);
  return result;
}
