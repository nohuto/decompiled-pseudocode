/*
 * XREFs of MiCheckLostBadPageNode @ 0x140629DF4
 * Callers:
 *     MiGetListOfPendingBadPages @ 0x14062A548 (MiGetListOfPendingBadPages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x140288350 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

char __fastcall MiCheckLostBadPageNode(unsigned __int64 a1)
{
  bool v2; // si
  _QWORD *Pool; // rax
  _QWORD *v4; // rdi
  unsigned __int64 v5; // rbp
  _QWORD *v6; // rax
  bool v7; // r8
  _QWORD *v8; // rdx
  _QWORD *v9; // rax
  bool v10; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax

  v2 = 0;
  Pool = MiAllocatePool(64, 0x20uLL, 0x6C42694Du);
  v4 = Pool;
  if ( !Pool )
    return (char)Pool;
  v5 = ExAcquireSpinLockExclusive(&dword_140C67310);
  if ( (*(_BYTE *)(a1 + 35) & 0x40) == 0 )
    goto LABEL_18;
  v6 = (_QWORD *)qword_140C67300;
  if ( qword_140C67300 )
  {
    do
    {
      if ( a1 <= v6[3] )
      {
        if ( a1 >= v6[3] )
          break;
        v6 = (_QWORD *)*v6;
      }
      else
      {
        v6 = (_QWORD *)v6[1];
      }
    }
    while ( v6 );
    if ( v6 )
      goto LABEL_18;
  }
  v4[3] = a1;
  v7 = 0;
  v8 = (_QWORD *)qword_140C67300;
  if ( !qword_140C67300 )
    goto LABEL_17;
  while ( a1 < v8[3] )
  {
    v9 = (_QWORD *)*v8;
    if ( !*v8 )
      goto LABEL_17;
LABEL_15:
    v8 = v9;
  }
  v9 = (_QWORD *)v8[1];
  if ( v9 )
    goto LABEL_15;
  v7 = 1;
LABEL_17:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140C67300, (unsigned __int64)v8, v7, (unsigned __int64)v4);
  v10 = qword_140C67318-- == 1;
  v4 = 0LL;
  v2 = v10;
LABEL_18:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C67310);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v5 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
      v10 = (v14 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v14;
      if ( v10 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v5);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  LOBYTE(Pool) = v2;
  return (char)Pool;
}
