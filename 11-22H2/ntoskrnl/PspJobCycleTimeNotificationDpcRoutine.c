/*
 * XREFs of PspJobCycleTimeNotificationDpcRoutine @ 0x1405A4480
 * Callers:
 *     <none>
 * Callees:
 *     PspRequestDeferredJobNotification @ 0x140200C90 (PspRequestDeferredJobNotification.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x1402C3620 (ObReferenceObjectSafeWithTag.c)
 */

void __fastcall PspJobCycleTimeNotificationDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( ObReferenceObjectSafeWithTag((__int64)DeferredContext) )
  {
    if ( !PspRequestDeferredJobNotification((signed __int64)DeferredContext, 0x20000u) )
      ObfDereferenceObjectWithTag(DeferredContext, 0x746C6644u);
  }
}
