/*
 * XREFs of MiUpdatePerSessionProto @ 0x14033E908
 * Callers:
 *     MiDereferenceSubsectionProtos @ 0x1407B6248 (MiDereferenceSubsectionProtos.c)
 *     MiCreatePerSessionProtos @ 0x1407B62B0 (MiCreatePerSessionProtos.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D340 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x140287FA0 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x14028AE30 (RtlAvlRemoveNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiUpdatePerSessionProto(__int64 a1, __int64 a2, unsigned __int64 a3, int a4)
{
  volatile LONG *v4; // r14
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  bool v10; // r8
  unsigned __int64 v11; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf

  v4 = (volatile LONG *)(a1 + 72);
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  if ( !a4 )
  {
    RtlAvlRemoveNode((unsigned __int64 *)(a2 + 24), (unsigned __int64 *)a3);
    goto LABEL_9;
  }
  v9 = *(_QWORD *)(a2 + 24);
  v10 = 0;
  if ( !v9 )
    goto LABEL_8;
  while ( *(_DWORD *)(a3 + 64) < *(_DWORD *)(v9 + 64) )
  {
    v11 = *(_QWORD *)v9;
    if ( !*(_QWORD *)v9 )
      goto LABEL_8;
LABEL_5:
    v9 = v11;
  }
  v11 = *(_QWORD *)(v9 + 8);
  if ( v11 )
    goto LABEL_5;
  v10 = 1;
LABEL_8:
  RtlAvlInsertNodeEx((unsigned __int64 *)(a2 + 24), v9, v10, a3);
LABEL_9:
  ExReleaseSpinLockExclusiveFromDpcLevel(v4);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v8 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
      v16 = (v15 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v15;
      if ( v16 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v8);
}
