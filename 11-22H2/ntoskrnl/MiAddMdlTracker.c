/*
 * XREFs of MiAddMdlTracker @ 0x14061C55C
 * Callers:
 *     MiProbeAndLockComplete @ 0x140238850 (MiProbeAndLockComplete.c)
 *     MiSwitchToTransition @ 0x1406331FC (MiSwitchToTransition.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140227700 (RtlCaptureStackBackTrace.c)
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260D40 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlAvlInsertNodeEx @ 0x140287FA0 (RtlAvlInsertNodeEx.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1402B6B00 (ExAllocateFromNPagedLookasideList.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     memset @ 0x140435400 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     MiGetInstructionPointer @ 0x140617C30 (MiGetInstructionPointer.c)
 *     ?Hash@MetroHash64@@SAXPEBE_KQEAE1@Z @ 0x14067BE00 (-Hash@MetroHash64@@SAXPEBE_KQEAE1@Z.c)
 */

void __fastcall MiAddMdlTracker(ULONG_PTR BugCheckParameter3, __int64 a2, int a3)
{
  PEPROCESS v3; // rsi
  unsigned __int64 v7; // rbx
  _QWORD *v8; // rax
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rdi
  _QWORD *v11; // rdx
  bool v12; // r8
  _QWORD *v13; // rax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  bool v19; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h]
  ULONG BackTraceHash; // [rsp+90h] [rbp+8h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+20h] BYREF

  v3 = *(PEPROCESS *)(BugCheckParameter3 + 16);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v3 || (v3 = PsInitialSystemProcess) != 0LL )
  {
    v7 = v3[1].ActiveProcessors.StaticBitmap[11];
    if ( v7 )
    {
      if ( *(_DWORD *)(v7 + 32) )
      {
        v8 = ExAllocateFromNPagedLookasideList(&stru_140C68400);
        v10 = (unsigned __int64)v8;
        if ( v8 )
        {
          v8[3] = BugCheckParameter3;
          v8[5] = a2;
          v8[4] = *(_QWORD *)(BugCheckParameter3 + 32);
          *((_DWORD *)v8 + 12) = *(_DWORD *)(BugCheckParameter3 + 44);
          *((_DWORD *)v8 + 13) = *(_DWORD *)(BugCheckParameter3 + 40);
          v8[8] = *(_QWORD *)(BugCheckParameter3 + 48);
          v23 = 0LL;
          MetroHash64::Hash(
            (const unsigned __int8 *)(BugCheckParameter3 + 48),
            8 * a2,
            (unsigned __int8 *const)&v23,
            v9);
          *(_DWORD *)(v10 + 60) = v23;
          BackTraceHash = 0;
          memset((void *)(v10 + 72), 0, 0x40uLL);
          if ( !RtlCaptureStackBackTrace(0, 8u, (PVOID *)(v10 + 72), &BackTraceHash) )
          {
            *(_QWORD *)(v10 + 80) = retaddr;
            *(_QWORD *)(v10 + 72) = MiGetInstructionPointer();
          }
          *(_DWORD *)(v10 + 56) = a3;
          *(_QWORD *)(v10 + 136) = v3;
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v7 + 24), &LockHandle);
          v11 = *(_QWORD **)v7;
          v12 = 0;
          if ( *(_QWORD *)v7 )
          {
            while ( 1 )
            {
              if ( BugCheckParameter3 >= v11[3] )
              {
                if ( BugCheckParameter3 <= v11[3] )
                  KeBugCheckEx(0xD9u, 1uLL, (ULONG_PTR)v11, BugCheckParameter3, *(_QWORD *)(v7 + 16));
                v13 = (_QWORD *)v11[1];
                if ( !v13 )
                {
                  v12 = 1;
                  break;
                }
              }
              else
              {
                v13 = (_QWORD *)*v11;
                if ( !*v11 )
                  break;
              }
              v11 = v13;
            }
          }
          RtlAvlInsertNodeEx((unsigned __int64 *)v7, (unsigned __int64)v11, v12, v10);
          *(_QWORD *)(v7 + 16) += a2;
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
              v18 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v19 = (v18 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v18;
              if ( v19 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
          __writecr8(OldIrql);
        }
        else
        {
          *(_DWORD *)(v7 + 32) = 0;
        }
      }
    }
  }
}
