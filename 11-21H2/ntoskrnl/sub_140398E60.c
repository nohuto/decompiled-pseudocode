/*
 * XREFs of sub_140398E60 @ 0x140398E60
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140398E60(struct _KDPC *Dpc, _DWORD *DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  int v4; // ebx
  PVOID v5; // rdi
  int v6; // eax

  v4 = DeferredContext[40];
  v5 = DeferredContext;
  KeAcquireSpinLockAtDpcLevel(&qword_140C54588);
  v6 = *((_DWORD *)v5 + 41);
  if ( v4 )
  {
    if ( dword_140C54590 == v6 && qword_140C54578 )
    {
      *((_QWORD *)v5 + 16) = 0LL;
      *((_QWORD *)v5 + 18) = sub_14038B6C0;
      *((_QWORD *)v5 + 19) = v5;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)v5 + 4, DelayedWorkQueue);
      v5 = 0LL;
    }
  }
  else if ( dword_140C54594 == v6 )
  {
    _InterlockedAnd(&dword_140CF5E54, 0xFFFFFFFE);
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C54588);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
}
