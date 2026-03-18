/*
 * XREFs of PsGetThreadProperty @ 0x140223C50
 * Callers:
 *     <none>
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x140211E70 (KxWaitForSpinLockAndAcquire.c)
 *     PspValidateThread @ 0x140223E40 (PspValidateThread.c)
 *     PsGetJobProperty @ 0x140223EC0 (PsGetJobProperty.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireSpinLockInstrumented @ 0x14045A310 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x14056E8CC (KiReleaseSpinLockInstrumented.c)
 */

PVOID __stdcall PsGetThreadProperty(PETHREAD Thread, ULONG_PTR Key, ULONG Flags)
{
  void *v3; // rbp
  char v4; // r14
  __int64 v6; // rcx
  ULONG_PTR v7; // r9
  _QWORD *v8; // rsi
  volatile signed __int32 *v9; // rdi
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // r15
  _DWORD *v12; // rcx
  _QWORD *v13; // rcx
  _QWORD *v14; // r15
  struct _KPRCB *v15; // rcx
  _DWORD *v16; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  _DWORD *SchedulerAssist; // r9
  int v20; // eax
  _DWORD *v21; // rcx
  int v22; // eax
  int v23; // eax
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r9
  _DWORD *v26; // r8
  int v27; // eax
  bool v28; // zf
  void *retaddr; // [rsp+48h] [rbp+0h]

  v3 = 0LL;
  v4 = Flags;
  if ( (Flags & 0xFFFFFFFE) != 0 || (int)PspValidateThread(Thread, Key, Flags, Key) < 0 )
    return 0LL;
  v8 = (_QWORD *)(v6 + 1560);
  v9 = (volatile signed __int32 *)(v6 + 1576);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    v7 = Key;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(v9);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v12 = CurrentPrcb->SchedulerAssist;
    if ( v12 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v20 = v12[6];
        v12[6] = v20 + 1;
        if ( v20 == -1 )
        {
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          v7 = Key;
        }
      }
    }
    if ( !_interlockedbittestandset64(v9, 0LL) )
      goto LABEL_7;
    v21 = CurrentPrcb->SchedulerAssist;
    if ( v21 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v22 = v21[6] - 1;
        v21[6] = v22;
        if ( !v22 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    KxWaitForSpinLockAndAcquire(v9);
  }
  v7 = Key;
LABEL_7:
  v13 = (_QWORD *)*v8;
  v14 = 0LL;
  if ( (_QWORD *)*v8 != v8 )
  {
    while ( v13[2] != v7 )
    {
      v13 = (_QWORD *)*v13;
      if ( v13 == v8 )
        goto LABEL_8;
    }
    v14 = v13;
    if ( v13 )
    {
      ObfReferenceObjectWithTag((PVOID)v13[3], 0x72507350u);
      v7 = Key;
    }
  }
LABEL_8:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseSpinLockInstrumented(v9, retaddr);
    v7 = Key;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)v9, 0LL);
  }
  v15 = KeGetCurrentPrcb();
  v16 = v15->SchedulerAssist;
  if ( v16 )
  {
    if ( v15->NestingLevel <= 1u )
    {
      v23 = v16[6] - 1;
      v16[6] = v23;
      if ( !v23 )
      {
        KiRemoveSystemWorkPriorityKick(v15);
        v7 = Key;
      }
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v24 = KeGetCurrentIrql();
      if ( v24 <= 0xFu && CurrentIrql <= 0xFu && v24 >= 2u )
      {
        v25 = KeGetCurrentPrcb();
        v26 = v25->SchedulerAssist;
        v27 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v28 = (v27 & v26[5]) == 0;
        v26[5] &= v27;
        if ( v28 )
          KiRemoveSystemWorkPriorityKick(v25);
        v7 = Key;
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( v14 )
    return (PVOID)v14[3];
  if ( (v4 & 1) != 0 )
    return v3;
  Blink = Thread[1].WaitBlock[3].WaitListEntry.Blink;
  if ( Blink == (struct _LIST_ENTRY *)-3LL )
    Blink = (struct _LIST_ENTRY *)Thread->Process[1].Affinity.StaticBitmap[16];
  if ( !Blink )
    return v3;
  return (PVOID)PsGetJobProperty(Blink, v7);
}
