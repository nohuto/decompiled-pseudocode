/*
 * XREFs of sub_140639090 @ 0x140639090
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void __fastcall sub_140639090(struct _KDPC *Dpc, _QWORD *DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  _QWORD *v4; // rax
  __int64 v5; // rbx

  v4 = &unk_140D32580;
  if ( DeferredContext )
    v4 = (_QWORD *)DeferredContext[183];
  v5 = v4[157];
  if ( _InterlockedIncrement((volatile signed __int32 *)(v5 + 928)) == 1 )
  {
    if ( DeferredContext )
      ObfReferenceObjectWithTag(DeferredContext, 0x53707845u);
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v5 + 896), DelayedWorkQueue);
  }
}
