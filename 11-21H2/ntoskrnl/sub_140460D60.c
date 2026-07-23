/*
 * XREFs of sub_140460D60 @ 0x140460D60
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ExpInterlockedFlushSList @ 0x140429900 (ExpInterlockedFlushSList.c)
 *     sub_140460ED0 @ 0x140460ED0 (sub_140460ED0.c)
 */

void __fastcall sub_140460D60(struct _KDPC *Dpc, char *DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  PSLIST_ENTRY v5; // rax
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  v5 = ExpInterlockedFlushSList((PSLIST_HEADER)DeferredContext + 51);
  if ( v5 )
  {
    if ( !sub_140460ED0(DeferredContext + 832, v5, &v6) )
      KeSetEvent((PRKEVENT)(DeferredContext + 848), *((_DWORD *)DeferredContext + 262), 0);
  }
}
