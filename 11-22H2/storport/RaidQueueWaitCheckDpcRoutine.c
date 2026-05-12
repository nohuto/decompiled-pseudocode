/*
 * XREFs of RaidQueueWaitCheckDpcRoutine @ 0x1C001F1D0
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterCheckWaitTimeout @ 0x1C001F1FC (RaidAdapterCheckWaitTimeout.c)
 */

void __fastcall RaidQueueWaitCheckDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  _DWORD *v4; // rcx

  v4 = (_DWORD *)DeferredContext[8];
  if ( v4 && *v4 == 1094997074 && v4[22] != 5 )
    RaidAdapterCheckWaitTimeout(v4, DeferredContext, SystemArgument1, SystemArgument2);
}
