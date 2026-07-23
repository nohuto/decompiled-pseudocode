/*
 * XREFs of ExpReleaseResourceForThreadLite @ 0x1402604E0
 * Callers:
 *     CcUnpinFileDataEx @ 0x14025D6F0 (CcUnpinFileDataEx.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x140260360 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     SeAccessCheckByType @ 0x1402B3A90 (SeAccessCheckByType.c)
 *     SepMandatoryIntegrityCheck @ 0x1402B5E70 (SepMandatoryIntegrityCheck.c)
 * Callees:
 *     ExpReleaseResourceSharedForThreadLite @ 0x14023D860 (ExpReleaseResourceSharedForThreadLite.c)
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KeWakeWaitChain @ 0x140260820 (KeWakeWaitChain.c)
 *     ExpFreeOwnerEntry @ 0x140260A40 (ExpFreeOwnerEntry.c)
 *     KxWaitForLockOwnerShip @ 0x140260E00 (KxWaitForLockOwnerShip.c)
 *     KeCaptureWaitChainHeadEx @ 0x1402BB76C (KeCaptureWaitChainHeadEx.c)
 *     KxWaitForLockChainValid @ 0x14031A4F0 (KxWaitForLockChainValid.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14045FB2E (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405715E8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiHaltOnAddressWakeEntireList @ 0x14057FFFC (KiHaltOnAddressWakeEntireList.c)
 *     PerfLogExecutiveResourceRelease @ 0x1406008E4 (PerfLogExecutiveResourceRelease.c)
 */

__int64 __fastcall ExpReleaseResourceForThreadLite(ULONG_PTR BugCheckParameter1, ULONG_PTR BugCheckParameter2)
{
  volatile __int64 *v2; // r8
  __int64 CurrentIrql; // r9
  __int64 v6; // r12
  __int64 v7; // rdx
  struct _KTHREAD *CurrentThread; // r8
  __int16 v9; // cx
  bool v10; // r15
  _QWORD *v11; // r14
  unsigned int v12; // edi
  unsigned int v13; // edi
  int v14; // ecx
  unsigned int v15; // r13d
  _DWORD *v16; // rdi
  int v17; // edx
  unsigned int v18; // esi
  __int64 v19; // rax
  unsigned __int64 v20; // rdi
  __int64 v21; // r8
  __int64 result; // rax
  unsigned int v23; // esi
  _DWORD *SchedulerAssist; // r10
  __int64 v25; // r11
  unsigned __int64 v26; // r14
  __int64 v27; // rax
  int v28; // edx
  unsigned __int8 v29; // cl
  unsigned __int8 v30; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v32; // r8
  bool v33; // zf
  unsigned __int8 v34; // cl
  struct _KPRCB *v35; // r9
  _DWORD *v36; // r8
  int v37; // eax
  signed __int32 v38[8]; // [rsp+0h] [rbp-60h] BYREF
  volatile signed __int64 *v39; // [rsp+30h] [rbp-30h] BYREF
  volatile signed __int64 *v40; // [rsp+38h] [rbp-28h]
  __int64 v41; // [rsp+40h] [rbp-20h]
  void *retaddr; // [rsp+88h] [rbp+28h]
  __int64 v43; // [rsp+90h] [rbp+30h] BYREF
  __int64 v44; // [rsp+A0h] [rbp+40h] BYREF

  v2 = (volatile __int64 *)(BugCheckParameter1 + 96);
  v41 = 0LL;
  v40 = (volatile signed __int64 *)(BugCheckParameter1 + 96);
  v39 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v6 = (unsigned __int8)v39 - 1LL;
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( (_BYTE)CurrentIrql == 2 )
      LODWORD(v25) = 4;
    else
      v25 = (v6 << ((unsigned __int8)CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v25;
  }
  LOBYTE(v41) = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v39, v2);
  }
  else
  {
    v7 = _InterlockedExchange64(v2, (__int64)&v39);
    if ( v7 )
      KxWaitForLockOwnerShip(&v39, v7, v2, CurrentIrql);
  }
  CurrentThread = KeGetCurrentThread();
  v9 = *(_WORD *)(BugCheckParameter1 + 26);
  if ( ((v9 & 1) != 0 || ExpResourceEnforceOwnerTransfer)
    && (BugCheckParameter2 & 3) != 3
    && (struct _KTHREAD *)BugCheckParameter2 != CurrentThread )
  {
    KeBugCheckEx(0x16Eu, BugCheckParameter1, (ULONG_PTR)CurrentThread, BugCheckParameter2, 0LL);
  }
  if ( (v9 & 0x80u) == 0 )
    return ExpReleaseResourceSharedForThreadLite(BugCheckParameter1, BugCheckParameter2, &v39);
  v44 = 0LL;
  v10 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  if ( (v9 & 1) != 0 || ExpResourceEnforceOwnerTransfer )
  {
    v11 = (_QWORD *)(BugCheckParameter1 + 48);
    if ( *(_QWORD *)(BugCheckParameter1 + 48) != BugCheckParameter2 )
      KeBugCheckEx(0xE3u, BugCheckParameter1, BugCheckParameter2, *(_QWORD *)(BugCheckParameter1 + 16), 1uLL);
  }
  else
  {
    v11 = (_QWORD *)(BugCheckParameter1 + 48);
  }
  v12 = *(_DWORD *)(BugCheckParameter1 + 56) & 7 | (8 * (*(_DWORD *)(BugCheckParameter1 + 56) >> 3) - 8);
  *(_DWORD *)(BugCheckParameter1 + 56) = v12;
  v13 = v12 >> 3;
  if ( v13 )
  {
    v15 = *(_DWORD *)(BugCheckParameter1 + 68);
    v23 = 65586;
    KxReleaseQueuedSpinLock(&v39);
    result = (unsigned int)KiIrqlFlags;
    v26 = (unsigned __int8)v41;
    if ( (_DWORD)KiIrqlFlags )
    {
      v30 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v30 <= 0xFu && (unsigned __int8)v41 <= 0xFu && v30 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v32 = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(v6 << ((unsigned __int8)v41 + 1));
        v33 = ((unsigned int)result & v32[5]) == 0;
        v32[5] &= result;
        if ( v33 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v26);
    goto LABEL_27;
  }
  ExpFreeOwnerEntry(v11);
  v14 = *(_DWORD *)(BugCheckParameter1 + 72);
  v15 = *(_DWORD *)(BugCheckParameter1 + 68);
  v16 = (_DWORD *)(BugCheckParameter1 + 76);
  v43 = 0LL;
  if ( v14 )
  {
    v27 = *(_QWORD *)(BugCheckParameter1 + 32);
    *(_QWORD *)(BugCheckParameter1 + 32) = 0LL;
    v28 = *(_DWORD *)(BugCheckParameter1 + 64);
    v44 = v27;
    *(_DWORD *)(BugCheckParameter1 + 72) = 0;
    *(_WORD *)(BugCheckParameter1 + 26) &= ~0x80u;
    v17 = v14 + v28 - 1;
  }
  else if ( *v16 )
  {
    KeCaptureWaitChainHeadEx(BugCheckParameter1 + 40, &v44, &v43);
    v17 = *(_DWORD *)(BugCheckParameter1 + 64);
    --*v16;
  }
  else
  {
    *(_WORD *)(BugCheckParameter1 + 24) = 0;
    *(_WORD *)(BugCheckParameter1 + 26) &= ~0x80u;
    v17 = 0;
  }
  *(_DWORD *)(BugCheckParameter1 + 64) = v17;
  if ( !*v16 && !*(_DWORD *)(BugCheckParameter1 + 72) )
    *(_WORD *)(BugCheckParameter1 + 26) &= 0xF9u;
  v18 = *(unsigned __int8 *)(BugCheckParameter1 + 27);
  if ( v43 )
  {
    *v11 = v43;
    *(_DWORD *)(BugCheckParameter1 + 56) = *(_DWORD *)(BugCheckParameter1 + 56) & 7 | 8;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
  {
    _m_prefetchw(&v39);
    v19 = (__int64)v39;
    if ( !v39 )
    {
      if ( (volatile signed __int64 **)_InterlockedCompareExchange64(v40, 0LL, (signed __int64)&v39) == &v39 )
        goto LABEL_23;
      v19 = KxWaitForLockChainValid(&v39);
    }
    v39 = 0LL;
    v29 = (unsigned __int8)v40;
    if ( ((v29 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v19 + 8), (__int64)v40)) & 4) != 0 )
    {
      _InterlockedOr(v38, 0);
      KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v19 + 8) >> 5) & 0x7F], 0LL));
    }
    goto LABEL_23;
  }
  KiReleaseQueuedSpinLockInstrumented(&v39, retaddr);
LABEL_23:
  v20 = (unsigned __int8)v41;
  if ( (_DWORD)KiIrqlFlags )
  {
    v34 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v34 <= 0xFu && (unsigned __int8)v41 <= 0xFu && v34 >= 2u )
    {
      v35 = KeGetCurrentPrcb();
      v36 = v35->SchedulerAssist;
      v37 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v41 + 1));
      v33 = (v37 & v36[5]) == 0;
      v36[5] &= v37;
      if ( v33 )
        KiRemoveSystemWorkPriorityKick(v35);
    }
  }
  __writecr8(v20);
  v21 = 3LL;
  if ( !v43 )
    v21 = 1LL;
  result = KeWakeWaitChain(&v44, v18, v21);
  v23 = 65570;
  v13 = 0;
LABEL_27:
  __incgsdword(0x8A6Cu);
  if ( v10 )
    return PerfLogExecutiveResourceRelease(v23, BugCheckParameter1, v13, v15);
  return result;
}
