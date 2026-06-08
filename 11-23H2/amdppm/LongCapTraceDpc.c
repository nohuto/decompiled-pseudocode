/*
 * XREFs of LongCapTraceDpc @ 0x1C0007940
 * Callers:
 *     <none>
 * Callees:
 *     QueueCapWork @ 0x1C00079B0 (QueueCapWork.c)
 */

void __fastcall LongCapTraceDpc(struct _KDPC *Dpc, char *DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  QueueCapWork(DeferredContext, DeferredContext + 928, &PPM_ETW_LONG_CAP_INFO, &PPM_ETW_LONG_CAP_INFO_HV);
}
