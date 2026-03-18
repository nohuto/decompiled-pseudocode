/*
 * XREFs of PopInvokeStateHandlerTargetProcessor @ 0x140AA8520
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x140428EF0 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x140435A00 (memset.c)
 *     PopHandleNextState @ 0x140AA811C (PopHandleNextState.c)
 */

void __fastcall PopInvokeStateHandlerTargetProcessor(
        struct _KDPC *Dpc,
        union _SLIST_HEADER *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v5; // r8
  struct _SLIST_ENTRY v6[10]; // [rsp+20h] [rbp-B8h] BYREF

  memset(v6, 0, sizeof(v6));
  RtlpInterlockedPushEntrySList(DeferredContext + 4, &v6[9]);
  do
    PopHandleNextState((__int64)DeferredContext, (__int64)v6, v5);
  while ( LODWORD(v6[0].Next) != 16 );
}
