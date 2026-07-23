/*
 * XREFs of KiDetachProcess @ 0x14022DD20
 * Callers:
 *     KiUnstackDetachProcess @ 0x14022D9E0 (KiUnstackDetachProcess.c)
 *     KeDetachProcess @ 0x140369CC0 (KeDetachProcess.c)
 * Callees:
 *     KiSetAddressPolicy @ 0x14022E140 (KiSetAddressPolicy.c)
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x140251F10 (KiAcquireKobjectLockSafe.c)
 *     HalRequestSoftwareInterrupt @ 0x140254BF0 (HalRequestSoftwareInterrupt.c)
 *     KiMoveApcState @ 0x14034A02C (KiMoveApcState.c)
 *     KeBugCheck @ 0x14041E370 (KeBugCheck.c)
 *     HvlSwitchVirtualAddressSpace @ 0x140549930 (HvlSwitchVirtualAddressSpace.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall KiDetachProcess(struct _KTHREAD *a1, char a2, _DWORD *SchedulerAssist, __int64 a4)
{
  __int64 v4; // r11
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v6; // r10
  volatile signed __int32 *p_Lock; // r13
  int v10; // ebp
  __int64 CurrentIrql; // r11
  $C71981A45BEB2B45F82C232A7085991E *v12; // rdi
  $115DCDF994C6370D29323EAB0E0C9502 *v13; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  struct _KTHREAD *v15; // rdx
  _LIST_ENTRY *v16; // rax
  unsigned __int64 v17; // rcx
  __int64 Process; // rdx
  unsigned __int64 v19; // r15
  __int64 v20; // r14
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rax
  unsigned __int64 result; // rax
  unsigned __int8 v24; // si
  unsigned __int32 v25; // eax
  struct _LIST_ENTRY *v26; // rcx
  _DWORD *v27; // r8
  unsigned __int32 v28; // ett
  signed __int64 *v29; // r13
  signed __int64 v30; // rax
  struct _LIST_ENTRY *Blink; // rax
  unsigned __int8 v32; // al
  struct _KPRCB *CurrentPrcb; // r10
  bool v34; // zf
  _DWORD *v35; // r10
  __int64 v36; // rdx
  struct _KPRCB *v37; // r10
  int v38; // eax
  int v39; // eax
  int v40; // [rsp+78h] [rbp+10h] BYREF
  int v41; // [rsp+80h] [rbp+18h] BYREF
  __int64 v42; // [rsp+88h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  LODWORD(v6) = 4;
  p_Lock = &CurrentThread->ApcState.Process->Header.Lock;
  v10 = a2 & 2;
  if ( (a2 & 2) != 0 )
  {
    LOBYTE(v4) = 15;
    v42 = v4;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    v42 = CurrentIrql;
    __writecr8(2uLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( (_BYTE)CurrentIrql == 2 )
        a4 = 4LL;
      else
        a4 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= a4;
    }
    v40 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v40);
      while ( CurrentThread->ThreadLock );
    }
    LOBYTE(v4) = v42;
    LODWORD(v6) = 4;
  }
  if ( CurrentThread->ApcState.KernelApcPending )
  {
    do
    {
      if ( CurrentThread->SpecialApcDisable || (_BYTE)v4 )
        break;
      CurrentThread->ThreadLock = 0LL;
      if ( (_DWORD)KiIrqlFlags )
      {
        v32 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v32 - 2) <= 0xDu )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          a4 = (__int64)CurrentPrcb->SchedulerAssist;
          v34 = (*(_DWORD *)(a4 + 20) & 0xFFFF0001) == 0;
          *(_DWORD *)(a4 + 20) &= 0xFFFF0001;
          if ( v34 )
          {
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            LOBYTE(v4) = v42;
          }
        }
      }
      __writecr8((unsigned __int8)v4);
      SchedulerAssist = (_DWORD *)KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)SchedulerAssist <= 0xFu )
      {
        v35 = KeGetCurrentPrcb()->SchedulerAssist;
        if ( (_BYTE)SchedulerAssist == 2 )
          LODWORD(v36) = 4;
        else
          v36 = (-1LL << ((unsigned __int8)SchedulerAssist + 1)) & 4;
        a4 = (unsigned int)v36 | v35[5];
        v35[5] = a4;
      }
      LOBYTE(v42) = (_BYTE)SchedulerAssist;
      v41 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v41);
        while ( CurrentThread->ThreadLock );
      }
      LOBYTE(v4) = v42;
    }
    while ( CurrentThread->ApcState.KernelApcPending );
    LODWORD(v6) = 4;
  }
  if ( !CurrentThread->ApcStateIndex
    || (CurrentThread->ApcState.InProgressFlags & 1) != 0
    || (v12 = &CurrentThread->152, ($C71981A45BEB2B45F82C232A7085991E *)v12->ApcState.ApcListHead[0].Flink != v12)
    || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
  {
    KeBugCheck(6u);
  }
  CurrentThread->MiscFlags |= 0x800u;
  v13 = &CurrentThread->600;
  if ( a1 == (struct _KTHREAD *)&CurrentThread->600 )
  {
    CurrentThread->ApcState.Process = CurrentThread->SavedApcState.Process;
    CurrentThread->ApcState.InProgressFlags = CurrentThread->SavedApcState.InProgressFlags;
    CurrentThread->ApcState.KernelApcPending = CurrentThread->SavedApcState.KernelApcPending;
    CurrentThread->ApcState.UserApcPendingAll = CurrentThread->SavedApcState.UserApcPendingAll;
    Flink = v13->SavedApcState.ApcListHead[0].Flink;
    if ( ($115DCDF994C6370D29323EAB0E0C9502 *)v13->SavedApcState.ApcListHead[0].Flink == v13 )
    {
      CurrentThread->ApcState.ApcListHead[0].Blink = CurrentThread->ApcState.ApcListHead;
      v12->ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v12;
      CurrentThread->ApcState.KernelApcPending = 0;
    }
    else
    {
      Blink = CurrentThread->SavedApcState.ApcListHead[0].Blink;
      v12->ApcState.ApcListHead[0].Flink = Flink;
      CurrentThread->ApcState.ApcListHead[0].Blink = Blink;
      Flink->Blink = (struct _LIST_ENTRY *)v12;
      Blink->Flink = (struct _LIST_ENTRY *)v12;
    }
    v15 = (struct _KTHREAD *)CurrentThread->SavedApcState.ApcListHead[1].Flink;
    v16 = &CurrentThread->ApcState.ApcListHead[1];
    if ( v15 == (struct _KTHREAD *)&CurrentThread->SavedApcStateFill[16] )
    {
      CurrentThread->ApcState.ApcListHead[1].Blink = &CurrentThread->ApcState.ApcListHead[1];
      v16->Flink = v16;
      CurrentThread->ApcState.UserApcPendingAll = 0;
    }
    else
    {
      v26 = CurrentThread->SavedApcState.ApcListHead[1].Blink;
      v16->Flink = (struct _LIST_ENTRY *)v15;
      CurrentThread->ApcState.ApcListHead[1].Blink = v26;
      v15->Header.WaitListHead.Flink = v16;
      v26->Flink = v16;
    }
    CurrentThread->SavedApcState.Process = 0LL;
    CurrentThread->ApcStateIndex = 0;
  }
  else
  {
    KiMoveApcState(a1, &CurrentThread->152);
  }
  if ( !v10 )
    CurrentThread->ThreadLock = 0LL;
  v17 = (unsigned __int64)KeGetCurrentPrcb();
  Process = (__int64)CurrentThread->ApcState.Process;
  v19 = *(unsigned __int8 *)(v17 + 209);
  v20 = 8LL * *(unsigned __int8 *)(v17 + 208) + 376;
  _interlockedbittestandset64((volatile signed __int32 *)(v20 + Process), v19);
  v21 = *(_QWORD *)(Process + 40);
  if ( KiKvaShadow )
  {
    v22 = *(_QWORD *)(Process + 40);
    if ( (v21 & 2) != 0 )
      v22 = v21 | 0x8000000000000000uLL;
    __writegsqword(0xA000u, v22);
    KiSetAddressPolicy(*(unsigned __int8 *)(Process + 912));
    LOBYTE(v4) = v42;
    LODWORD(v6) = 4;
  }
  result = (unsigned int)HvlEnlightenments;
  if ( (HvlEnlightenments & 1) != 0 )
  {
    result = HvlSwitchVirtualAddressSpace(v21);
    LOBYTE(v4) = v42;
    LODWORD(v6) = 4;
  }
  else
  {
    __writecr3(v21);
  }
  if ( !KiFlushPcid && KiKvaShadow )
  {
    v17 = __readcr4();
    if ( (v17 & 0x20080) != 0 )
    {
      result = v17 ^ 0x80;
      __writecr4(v17 ^ 0x80);
      __writecr4(v17);
    }
    else
    {
      result = __readcr3();
      __writecr3(result);
    }
  }
  _interlockedbittestandreset64((volatile signed __int32 *)((char *)p_Lock + v20), v19);
  CurrentThread->MiscFlags &= ~0x800u;
  if ( !v10 )
  {
    if ( (_DWORD)KiIrqlFlags )
    {
      v17 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && (unsigned __int8)v17 <= 0xFu
        && (unsigned __int8)v4 <= 0xFu
        && (unsigned __int8)v17 >= 2u )
      {
        v37 = KeGetCurrentPrcb();
        v17 = (unsigned int)(unsigned __int8)v4 + 1;
        Process = -1LL << ((unsigned __int8)v4 + 1);
        a4 = (__int64)v37->SchedulerAssist;
        v38 = ~(unsigned __int16)Process;
        v34 = (v38 & *(_DWORD *)(a4 + 20)) == 0;
        SchedulerAssist = (_DWORD *)((unsigned int)v38 & *(_DWORD *)(a4 + 20));
        *(_DWORD *)(a4 + 20) = (_DWORD)SchedulerAssist;
        if ( v34 )
        {
          KiRemoveSystemWorkPriorityKick(v37);
          LOBYTE(v4) = v42;
        }
        LODWORD(v6) = 4;
      }
    }
    result = (unsigned __int8)v4;
    __writecr8((unsigned __int8)v4);
  }
  if ( (a2 & 1) == 0 )
  {
    result = _InterlockedExchangeAdd(p_Lock + 210, 0xFFFFFFF8) & 0xFFFFFFF8;
    if ( (_DWORD)result == 8 )
    {
      v24 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v24 <= 0xFu )
      {
        v27 = KeGetCurrentPrcb()->SchedulerAssist;
        if ( v24 != 2 )
          v6 = (-1LL << (v24 + 1)) & 4;
        v27[5] |= v6;
      }
      KiAcquireKobjectLockSafe(p_Lock);
      v25 = *((_DWORD *)p_Lock + 210);
      if ( (v25 & 7) != 0 || (v17 = (unsigned __int64)(p_Lock + 12), *(_QWORD *)v17 == v17) || v25 >= 8 )
      {
LABEL_44:
        _InterlockedAnd(p_Lock, 0xFFFFFF7F);
      }
      else
      {
        while ( 1 )
        {
          v17 = v25 & 0xFFFFFFF8 | 3;
          v28 = v25;
          v25 = _InterlockedCompareExchange(p_Lock + 210, v17, v25);
          if ( v28 == v25 )
            break;
          if ( v25 >= 8 )
            goto LABEL_44;
        }
        _InterlockedAnd(p_Lock, 0xFFFFFF7F);
        v29 = (signed __int64 *)(p_Lock + 90);
        _m_prefetchw(&KiProcessOutSwapListHead);
        v30 = KiProcessOutSwapListHead;
        do
        {
          *v29 = v30;
          v17 = v30;
          v30 = _InterlockedCompareExchange64(&KiProcessOutSwapListHead, (signed __int64)v29, v30);
        }
        while ( v30 != v17 );
        if ( !v30 )
          KeSetEvent(&KiSwapEvent, 10, 0);
      }
      if ( (_DWORD)KiIrqlFlags )
      {
        v17 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
          && (unsigned __int8)v17 <= 0xFu
          && v24 <= 0xFu
          && (unsigned __int8)v17 >= 2u )
        {
          a4 = (__int64)KeGetCurrentPrcb();
          v17 = (unsigned int)v24 + 1;
          SchedulerAssist = *(_DWORD **)(a4 + 35000);
          v39 = ~(unsigned __int16)(-1LL << (v24 + 1));
          v34 = (v39 & SchedulerAssist[5]) == 0;
          Process = (unsigned int)v39 & SchedulerAssist[5];
          SchedulerAssist[5] = Process;
          if ( v34 )
            KiRemoveSystemWorkPriorityKick(a4);
        }
      }
      result = v24;
      __writecr8(v24);
    }
  }
  if ( ($C71981A45BEB2B45F82C232A7085991E *)v12->ApcState.ApcListHead[0].Flink != v12 )
  {
    LOBYTE(v17) = 1;
    CurrentThread->ApcState.KernelApcPending = 1;
    return HalRequestSoftwareInterrupt(v17, Process, SchedulerAssist, a4);
  }
  return result;
}
