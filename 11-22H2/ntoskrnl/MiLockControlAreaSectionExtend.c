/*
 * XREFs of MiLockControlAreaSectionExtend @ 0x140293024
 * Callers:
 *     MmExtendSection @ 0x1407065B4 (MmExtendSection.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D340 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeAbPostReleaseEx @ 0x1402BD4C0 (KeAbPostReleaseEx.c)
 *     KeAbPreWait @ 0x1402FD270 (KeAbPreWait.c)
 *     KeWaitForGate @ 0x14034A780 (KeWaitForGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiLockControlAreaSectionExtend(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile LONG *v5; // r13
  __int64 v6; // rbp
  KIRQL v7; // al
  __int64 *v8; // rcx
  unsigned __int64 v9; // rsi
  __int64 v10; // rax
  __int64 *v11; // r12
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  bool v19; // zf
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r9
  int v22; // eax
  _DWORD *v23; // r8

  CurrentThread = KeGetCurrentThread();
  if ( *(_DWORD *)(a2 + 8) == 16 )
    --CurrentThread->SpecialApcDisable;
  else
    --CurrentThread->KernelApcDisable;
  v5 = (volatile LONG *)(BugCheckParameter2 + 72);
  while ( 1 )
  {
    v6 = 0LL;
    v7 = ExAcquireSpinLockExclusive(v5);
    v8 = *(__int64 **)(BugCheckParameter2 + 80);
    v9 = v7;
    if ( v8 )
    {
      while ( 1 )
      {
        v11 = v8;
        if ( (*(_DWORD *)(a2 + 8) & (_DWORD)v8[1]) != 0 )
          break;
        v8 = (__int64 *)*v8;
        if ( !v8 )
          goto LABEL_5;
      }
      v12 = KeAbPreAcquire(BugCheckParameter2, 0LL);
      v6 = v12;
      v8 = v11;
      if ( v12 )
      {
        KeAbPreWait(v12, v13, v14);
        v8 = v11;
      }
    }
LABEL_5:
    *(_DWORD *)(a2 + 20) = 0;
    *(_QWORD *)(a2 + 32) = a2 + 24;
    *(_QWORD *)(a2 + 24) = a2 + 24;
    *(_WORD *)(a2 + 16) = 263;
    *(_BYTE *)(a2 + 18) = 6;
    *(_QWORD *)a2 = *(_QWORD *)(BugCheckParameter2 + 80);
    *(_QWORD *)(BugCheckParameter2 + 80) = a2;
    if ( !v8 )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel(v5);
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v9 <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v19 = (v18 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v18;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v9);
    KeWaitForGate(a2 + 16, 18LL);
    if ( v6 )
    {
      KeAbPreAcquire(BugCheckParameter2, v6);
      KeAbPostReleaseEx(BugCheckParameter2);
    }
  }
  v10 = KeAbPreAcquire(BugCheckParameter2, 0LL);
  if ( v10 )
    *(_BYTE *)(v10 + 18) = 1;
  ExReleaseSpinLockExclusiveFromDpcLevel(v5);
  if ( (_DWORD)KiIrqlFlags )
  {
    v20 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v20 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v20 >= 2u )
    {
      v21 = KeGetCurrentPrcb();
      v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
      v23 = v21->SchedulerAssist;
      v19 = (v22 & v23[5]) == 0;
      v23[5] &= v22;
      if ( v19 )
        KiRemoveSystemWorkPriorityKick(v21);
    }
  }
  __writecr8(v9);
}
