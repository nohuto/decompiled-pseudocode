/*
 * XREFs of HalpCmciDeferredRoutine @ 0x140505710
 * Callers:
 *     <none>
 * Callees:
 *     HalpCmciPollProcessor @ 0x140380298 (HalpCmciPollProcessor.c)
 *     HalpCmcStartPolling @ 0x1403B4968 (HalpCmcStartPolling.c)
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
