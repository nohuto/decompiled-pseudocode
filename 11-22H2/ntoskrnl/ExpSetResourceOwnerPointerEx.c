/*
 * XREFs of ExpSetResourceOwnerPointerEx @ 0x140319F90
 * Callers:
 *     ExSetResourceOwnerPointerEx @ 0x140319F00 (ExSetResourceOwnerPointerEx.c)
 *     ExSetResourceOwnerPointer @ 0x140319F40 (ExSetResourceOwnerPointer.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x14022FF50 (PsBoostThreadIoEx.c)
 *     KxWaitForLockOwnerShip @ 0x140260E00 (KxWaitForLockOwnerShip.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6890 (ObfReferenceObjectWithTag.c)
 *     KxWaitForLockChainValid @ 0x14031A4F0 (KxWaitForLockChainValid.c)
 *     PsBoostThreadIoQoS @ 0x14031A52C (PsBoostThreadIoQoS.c)
 *     ExpResourceEnforcesOwnershipTransfer @ 0x14031A564 (ExpResourceEnforcesOwnershipTransfer.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14045FB2E (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405715E8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiHaltOnAddressWakeEntireList @ 0x14057FFFC (KiHaltOnAddressWakeEntireList.c)
 *     ObpPushStackInfo @ 0x140582C68 (ObpPushStackInfo.c)
 *     PerfLogExecutiveResourceSetOwnerPointer @ 0x140600AD8 (PerfLogExecutiveResourceSetOwnerPointer.c)
 */

__int64 __fastcall ExpSetResourceOwnerPointerEx(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter4,
        char a3,
        ULONG_PTR CurrentPrcb)
{
  bool v7; // r14
  ULONG_PTR CurrentThread; // rsi
  unsigned __int64 v9; // r8
  unsigned int v10; // r15d
  unsigned __int8 CurrentIrql; // dl
  __int64 v12; // rdi
  signed __int64 *v13; // rdx
  __int64 v14; // rax
  _QWORD *v15; // rdi
  ULONG_PTR v16; // r15
  unsigned __int64 v17; // rcx
  ULONG_PTR v18; // rax
  ULONG_PTR v19; // r15
  unsigned int v20; // ecx
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  int v23; // r12d
  ULONG_PTR v24; // r15
  signed __int64 v25; // rsi
  unsigned int v26; // eax
  __int64 v27; // rax
  __int64 result; // rax
  unsigned __int64 v29; // rbx
  _DWORD *SchedulerAssist; // r10
  __int64 v31; // r11
  int v32; // eax
  int *v33; // r12
  int v34; // eax
  ULONG_PTR v35; // rdi
  _QWORD *v36; // rcx
  unsigned __int8 v37; // cl
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  unsigned __int8 v42; // cl
  bool v43; // zf
  signed __int32 v44[8]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v45; // [rsp+30h] [rbp-48h] BYREF
  volatile signed __int64 *v46; // [rsp+38h] [rbp-40h]
  __int64 v47; // [rsp+40h] [rbp-38h]
  void *retaddr; // [rsp+78h] [rbp+0h]

  v47 = 0LL;
  v7 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  CurrentThread = (ULONG_PTR)KeGetCurrentThread();
  v9 = BugCheckParameter1 + 96;
  v46 = (volatile signed __int64 *)(BugCheckParameter1 + 96);
  v45 = 0LL;
  v10 = 65792;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v12 = (unsigned __int8)v45 - 1LL;
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v31) = 4;
    else
      v31 = (v12 << (CurrentIrql + 1)) & 4;
    CurrentPrcb = (unsigned int)v31 | SchedulerAssist[5];
    SchedulerAssist[5] = CurrentPrcb;
  }
  LOBYTE(v47) = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v45, v9);
  }
  else
  {
    v13 = (signed __int64 *)_InterlockedExchange64((volatile __int64 *)v9, (__int64)&v45);
    if ( v13 )
      KxWaitForLockOwnerShip((signed __int64)&v45, v13);
  }
  if ( *(char *)(BugCheckParameter1 + 26) < 0 )
  {
    if ( (unsigned __int8)ExpResourceEnforcesOwnershipTransfer(BugCheckParameter1)
      && *(_QWORD *)(BugCheckParameter1 + 48) != CurrentThread )
    {
      KeBugCheckEx(0xE3u, BugCheckParameter1, CurrentThread, *(_QWORD *)(BugCheckParameter1 + 16), 5uLL);
    }
    if ( (a3 & 1) != 0 )
    {
      if ( (BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL) != CurrentThread )
        KeBugCheckEx(
          0x132u,
          BugCheckParameter1,
          *(_QWORD *)(BugCheckParameter1 + 16),
          CurrentThread,
          BugCheckParameter4);
      ObfReferenceObjectWithTag((PVOID)(BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL), 0x746C6644u);
      *(_DWORD *)(BugCheckParameter1 + 56) |= 2u;
    }
    else
    {
      v39 = *(_DWORD *)(BugCheckParameter1 + 56);
      if ( (v39 & 1) != 0 )
      {
        PsBoostThreadIoEx(*(_QWORD *)(BugCheckParameter1 + 48), 1, 0, 0LL);
        *(_DWORD *)(BugCheckParameter1 + 56) &= ~1u;
        v39 = *(_DWORD *)(BugCheckParameter1 + 56);
      }
      if ( (v39 & 4) != 0 )
      {
        PsBoostThreadIoQoS(*(_QWORD *)(BugCheckParameter1 + 48), 1LL, v9);
        *(_DWORD *)(BugCheckParameter1 + 56) &= ~4u;
      }
    }
    *(_QWORD *)(BugCheckParameter1 + 48) = BugCheckParameter4;
    __incgsdword(0x8AD4u);
    if ( v7 )
      v10 = 65824;
  }
  else
  {
    v14 = *(_QWORD *)(BugCheckParameter1 + 48);
    v15 = (_QWORD *)(BugCheckParameter1 + 48);
    if ( v14 == BugCheckParameter4 )
    {
      v19 = BugCheckParameter1 + 48;
    }
    else
    {
      v16 = *(_QWORD *)(BugCheckParameter1 + 16);
      v17 = v14 != 0;
      v9 = *(unsigned int *)(BugCheckParameter1 + 64) + (unsigned __int64)*(unsigned int *)(BugCheckParameter1 + 72);
      CurrentPrcb = v16;
      if ( v16 && (v18 = v16 + 16LL * *(unsigned int *)(v16 + 8), v19 = v16 + 16, v17 < v9) )
      {
        while ( *(_QWORD *)v19 != BugCheckParameter4 )
        {
          if ( !*(_QWORD *)v19 || (++v17, v17 != v9) )
          {
            v19 += 16LL;
            if ( v19 != v18 )
              continue;
          }
          goto LABEL_12;
        }
        KeGetCurrentThread()->ResourceIndex = (__int64)(v19 - CurrentPrcb) >> 4;
      }
      else
      {
LABEL_12:
        v19 = 0LL;
      }
    }
    if ( (CurrentThread & 3) != 0 )
      v20 = 0;
    else
      v20 = *(unsigned __int8 *)(CurrentThread + 1120);
    if ( *v15 != CurrentThread )
    {
      v21 = *v15 != 0LL;
      if ( !v20
        || (v22 = *(_QWORD *)(BugCheckParameter1 + 16)) == 0
        || v20 >= *(_DWORD *)(v22 + 8)
        || (v15 = (_QWORD *)(v22 + 16LL * v20), *v15 != CurrentThread) )
      {
        v35 = *(_QWORD *)(BugCheckParameter1 + 16);
        CurrentPrcb = v35;
        v9 = *(unsigned int *)(BugCheckParameter1 + 64) + (unsigned __int64)*(unsigned int *)(BugCheckParameter1 + 72);
        if ( !v35 || (v36 = (_QWORD *)(v35 + 16LL * *(unsigned int *)(v35 + 8)), v15 = (_QWORD *)(v35 + 16), v21 >= v9) )
LABEL_107:
          KeBugCheckEx(0xE3u, BugCheckParameter1, CurrentThread, CurrentPrcb, 4uLL);
        while ( *v15 != CurrentThread )
        {
          if ( !*v15 || (++v21, v21 != v9) )
          {
            v15 += 2;
            if ( v15 != v36 )
              continue;
          }
          goto LABEL_107;
        }
        KeGetCurrentThread()->ResourceIndex = (__int64)((__int64)v15 - CurrentPrcb) >> 4;
      }
    }
    v23 = a3 & 1;
    if ( v19 )
    {
      if ( v23 )
      {
        if ( (BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL) != CurrentThread )
          KeBugCheckEx(
            0x132u,
            BugCheckParameter1,
            *(_QWORD *)(BugCheckParameter1 + 16),
            CurrentThread,
            BugCheckParameter4);
        v38 = *((_DWORD *)v15 + 2);
        v33 = (int *)(v15 + 1);
        if ( (v38 & 1) != 0 )
        {
          v40 = *(_DWORD *)(v19 + 8);
          if ( (v40 & 1) != 0 )
            PsBoostThreadIoEx(*v15, 1, 0, 0LL);
          else
            *(_DWORD *)(v19 + 8) = v40 | 1;
          *v33 &= ~1u;
          v38 = *v33;
        }
        if ( (v38 & 4) != 0 )
        {
          v41 = *(_DWORD *)(v19 + 8);
          if ( (v41 & 4) != 0 )
            PsBoostThreadIoQoS(*v15, 1LL, v9);
          else
            *(_DWORD *)(v19 + 8) = v41 | 4;
          *v33 &= ~4u;
        }
        if ( (*(_DWORD *)(v19 + 8) & 2) == 0 )
        {
          ObfReferenceObjectWithTag((PVOID)*v15, 0x746C6644u);
          *(_DWORD *)(v19 + 8) |= 2u;
        }
      }
      else
      {
        v32 = *((_DWORD *)v15 + 2);
        v33 = (int *)(v15 + 1);
        if ( (v32 & 1) != 0 )
        {
          PsBoostThreadIoEx(*v15, 1, 0, 0LL);
          *v33 &= ~1u;
          v32 = *v33;
        }
        if ( (v32 & 4) != 0 )
        {
          PsBoostThreadIoQoS(*v15, 1LL, v9);
          *v33 &= ~4u;
        }
      }
      v26 = 35548;
      *(_DWORD *)(v19 + 8) = (*v33 + (*(_DWORD *)(v19 + 8) & 0xFFFFFFF8)) ^ (*v33 ^ *(_DWORD *)(v19 + 8)) & 7;
      *v33 &= 7u;
      *v15 = 0LL;
      --*(_DWORD *)(BugCheckParameter1 + 64);
    }
    else
    {
      if ( v23 )
      {
        v24 = BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( (BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL) != CurrentThread )
          KeBugCheckEx(
            0x132u,
            BugCheckParameter1,
            *(_QWORD *)(BugCheckParameter1 + 16),
            CurrentThread,
            BugCheckParameter4);
        if ( ObpTraceFlags )
          ObpPushStackInfo(v24 - 48);
        v25 = _InterlockedIncrement64((volatile signed __int64 *)(v24 - 48));
        if ( v25 <= 1 )
          KeBugCheckEx(0x18u, 0LL, BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL, 0x10uLL, v25);
        *((_DWORD *)v15 + 2) |= 2u;
      }
      else
      {
        v34 = *((_DWORD *)v15 + 2);
        if ( (v34 & 1) != 0 )
        {
          PsBoostThreadIoEx(*v15, 1, 0, 0LL);
          *((_DWORD *)v15 + 2) &= ~1u;
          v34 = *((_DWORD *)v15 + 2);
        }
        if ( (v34 & 4) != 0 )
        {
          PsBoostThreadIoQoS(*v15, 1LL, v9);
          *((_DWORD *)v15 + 2) &= ~4u;
        }
      }
      *v15 = BugCheckParameter4;
      v26 = 35544;
    }
    __incgsdword(v26);
    v12 = -1LL;
    if ( v7 )
      v10 = 65856;
    else
      v10 = 65792;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v45, retaddr);
    goto LABEL_33;
  }
  _m_prefetchw(&v45);
  v27 = v45;
  if ( !v45 )
  {
    if ( (__int64 *)_InterlockedCompareExchange64(v46, 0LL, (signed __int64)&v45) == &v45 )
      goto LABEL_33;
    v27 = KxWaitForLockChainValid(&v45);
  }
  v45 = 0LL;
  v37 = (unsigned __int8)v46;
  if ( ((v37 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v27 + 8), (__int64)v46)) & 4) != 0 )
  {
    _InterlockedOr(v44, 0);
    KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v27 + 8) >> 5) & 0x7F], 0LL));
  }
LABEL_33:
  result = (unsigned int)KiIrqlFlags;
  v29 = (unsigned __int8)v47;
  if ( (_DWORD)KiIrqlFlags )
  {
    v42 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v42 <= 0xFu && (unsigned __int8)v47 <= 0xFu && v42 >= 2u )
    {
      CurrentPrcb = (ULONG_PTR)KeGetCurrentPrcb();
      v9 = *(_QWORD *)(CurrentPrcb + 35000);
      result = ~(unsigned __int16)(v12 << ((unsigned __int8)v47 + 1));
      v43 = ((unsigned int)result & *(_DWORD *)(v9 + 20)) == 0;
      *(_DWORD *)(v9 + 20) &= result;
      if ( v43 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v29);
  if ( v7 )
    return PerfLogExecutiveResourceSetOwnerPointer(v10, BugCheckParameter1, v9, CurrentPrcb);
  return result;
}
