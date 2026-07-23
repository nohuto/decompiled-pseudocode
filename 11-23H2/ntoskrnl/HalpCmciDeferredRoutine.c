/*
 * XREFs of HalpCmciDeferredRoutine @ 0x140505C60
 * Callers:
 *     <none>
 * Callees:
 *     HalpCmciPollProcessor @ 0x140380438 (HalpCmciPollProcessor.c)
 *     HalpCmcStartPolling @ 0x1403B4B48 (HalpCmcStartPolling.c)
 */

void __fastcall HalpCmciDeferredRoutine(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(DeferredContext + 172);
  if ( DeferredContext[128] )
    HalpCmcStartPolling(v4, (__int64)DeferredContext);
  else
    HalpCmciPollProcessor(v4);
}
