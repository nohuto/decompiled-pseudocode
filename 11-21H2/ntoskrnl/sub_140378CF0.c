/*
 * XREFs of sub_140378CF0 @ 0x140378CF0
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     _local_unwind @ 0x1403E0F50 (_local_unwind.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14042C210 @ 0x14042C210 (sub_14042C210.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall sub_140378CF0(
        struct _KDPC *Dpc,
        __int64 DeferredContext,
        unsigned __int64 SystemArgument1,
        unsigned __int64 SystemArgument2)
{
  _QWORD *v8; // rdi
  __int64 v9; // rdi
  _DWORD v10[86]; // [rsp+0h] [rbp-168h] BYREF
  _DWORD *v11; // [rsp+158h] [rbp-10h]

  v11 = v10;
  memset(&v10[40], 0, 0x62uLL);
  if ( DeferredContext >> 47 != -1 && DeferredContext >> 47 != 0 )
  {
    v10[12] = 0;
    Dpc->Type = 0;
    Dpc->DeferredContext = (PVOID)(SystemArgument2 >> 8);
    *(_QWORD *)((char *)&v10[62] + 2) = SystemArgument1;
    *(_QWORD *)((char *)&v10[60] + 2) = __ROL8__(DeferredContext, SystemArgument1);
    *(_QWORD *)((char *)&v10[42] + 2) = __ROR8__(Dpc, SystemArgument1);
    Dpc->SystemArgument1 = (PVOID)((unsigned __int64)Dpc->SystemArgument1 ^ SystemArgument2);
    Dpc->SystemArgument2 = (PVOID)((unsigned __int64)Dpc->SystemArgument2 ^ SystemArgument1);
    sub_14042C210(DeferredContext);
  }
  v8 = &unk_140D32580;
  if ( DeferredContext )
    v8 = *(_QWORD **)(DeferredContext + 1464);
  v9 = v8[157];
  if ( _InterlockedIncrement((volatile signed __int32 *)(v9 + 928)) == 1 )
  {
    if ( DeferredContext )
      ObfReferenceObjectWithTag((PVOID)DeferredContext, 0x53707845u);
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v9 + 736), DelayedWorkQueue);
  }
}
