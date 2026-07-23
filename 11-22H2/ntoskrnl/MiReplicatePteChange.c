/*
 * XREFs of MiReplicatePteChange @ 0x140367CB0
 * Callers:
 *     MiWriteTopLevelPxe @ 0x140201D04 (MiWriteTopLevelPxe.c)
 *     MiInitializeSystemPageTable @ 0x1402E45A8 (MiInitializeSystemPageTable.c)
 *     MiUnlockNestedPageTableWritePte @ 0x1402E5B30 (MiUnlockNestedPageTableWritePte.c)
 *     MiReplacePfnWithGapMapping @ 0x14038D978 (MiReplacePfnWithGapMapping.c)
 *     MiInitializeShadowPageTable @ 0x140820480 (MiInitializeShadowPageTable.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260D40 (KeAcquireInStackQueuedSpinLock.c)
 *     MiPteInShadowRange @ 0x140271240 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x140284750 (MiGetSystemRegionType.c)
 *     MiGetLeafVa @ 0x1402E5A20 (MiGetLeafVa.c)
 *     MiWritePteShadow @ 0x140356D4C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140356DAC (MiPteHasShadow.c)
 *     MiReplicatePteChangeToProcess @ 0x140367E94 (MiReplicatePteChangeToProcess.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiReplicatePteChange(unsigned __int64 a1, __int64 a2, int a3)
{
  _KPROCESS *Process; // r15
  unsigned __int64 LeafVa; // rax
  unsigned __int64 v8; // rdi
  __int64 *v9; // r14
  __int64 *i; // rsi
  _KPROCESS *v11; // rcx
  int DirectoryTableBase_high; // eax
  _QWORD *v13; // rsi
  __int64 v14; // rbp
  __int64 *v15; // rdi
  BOOL v16; // eax
  __int64 v17; // r8
  int v18; // edx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v24; // eax
  bool v25; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  Process = KeGetCurrentThread()->ApcState.Process;
  LeafVa = MiGetLeafVa(a1);
  if ( (unsigned int)MiGetSystemRegionType(LeafVa) == 1 )
  {
    v8 = Process[1].Affinity.StaticBitmap[25];
    v9 = (__int64 *)(v8 + 16);
  }
  else
  {
    v8 = 0LL;
    v9 = &qword_140C65B18;
  }
  if ( !a3 )
    KeAcquireInStackQueuedSpinLock(&qword_140C698C0, &LockHandle);
  if ( v8 )
  {
    v13 = (_QWORD *)(v8 + 104);
    v14 = 2LL;
    do
    {
      if ( *v13 )
        MiReplicatePteChangeToProcess(*v13, a1);
      ++v13;
      --v14;
    }
    while ( v14 );
  }
  for ( i = (__int64 *)*v9; i != v9; i = (__int64 *)*i )
  {
    v11 = (_KPROCESS *)((char *)i + (v8 != 0 ? -1184LL : -1984LL));
    DirectoryTableBase_high = HIDWORD(v11[1].DirectoryTableBase);
    if ( (DirectoryTableBase_high & 0x800000) == 0 )
    {
      if ( (DirectoryTableBase_high & 0xC00) != 0 && (DirectoryTableBase_high & 0x80u) == 0 )
      {
        if ( v11 != Process )
          MiReplicatePteChangeToProcess(v11, a1);
      }
      else
      {
        _InterlockedOr((volatile signed __int32 *)&v11[1].DirectoryTableBase + 1, 0x800000u);
      }
    }
  }
  if ( v8 )
  {
    v15 = (__int64 *)(KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25] + 744);
    v16 = MiPteInShadowRange((unsigned __int64)v15);
    v18 = 0;
    if ( (a2 & 1) == 0 )
    {
      if ( v16 )
      {
        if ( MiPteHasShadow() )
          v18 = 1;
      }
      goto LABEL_25;
    }
    if ( v16 )
    {
      if ( MiPteHasShadow() )
      {
        v18 = 1;
        if ( HIBYTE(word_140C66DFC) )
          goto LABEL_25;
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
      {
        goto LABEL_25;
      }
      a2 |= 0x8000000000000000uLL;
    }
LABEL_25:
    *v15 = a2;
    if ( v18 )
      MiWritePteShadow((__int64)v15, a2, v17);
  }
  if ( !a3 )
  {
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && LockHandle.OldIrql <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v24 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v25 = (v24 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v24;
        if ( v25 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
  }
}
