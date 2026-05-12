/*
 * XREFs of PortTraceErrorRegisterDriver @ 0x1C00B0B60
 * Callers:
 *     PortTraceInitTracing @ 0x1C0078F74 (PortTraceInitTracing.c)
 * Callees:
 *     PortpErrorInitDpc @ 0x1C0078CD8 (PortpErrorInitDpc.c)
 *     PortpErrorInitRecords @ 0x1C00B0B84 (PortpErrorInitRecords.c)
 */

void __fastcall PortTraceErrorRegisterDriver(char *DeferredContext)
{
  PortpErrorInitRecords();
  PortpErrorInitDpc(DeferredContext);
}
