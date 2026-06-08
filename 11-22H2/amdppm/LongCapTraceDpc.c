/*
 * XREFs of LongCapTraceDpc @ 0x1C0007450
 * Callers:
 *     <none>
 * Callees:
 *     QueueCapWork @ 0x1C00074C0 (QueueCapWork.c)
 */

void __fastcall LongCapTraceDpc(struct _KDPC *Dpc, char *DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  QueueCapWork(DeferredContext, DeferredContext + 928, &PPM_ETW_LONG_CAP_INFO, &PPM_ETW_LONG_CAP_INFO_HV);
}
