/*
 * XREFs of QuickCapTraceDpc @ 0x1C00058A0
 * Callers:
 *     <none>
 * Callees:
 *     QueueCapWork @ 0x1C000C330 (QueueCapWork.c)
 */

void __fastcall QuickCapTraceDpc(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  QueueCapWork(DeferredContext, DeferredContext + 776, &PPM_ETW_QUICK_CAP_INFO, &PPM_ETW_QUICK_CAP_INFO_HV);
}
