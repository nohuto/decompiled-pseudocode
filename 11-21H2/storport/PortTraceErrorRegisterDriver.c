/*
 * XREFs of PortTraceErrorRegisterDriver @ 0x1C0094250
 * Callers:
 *     PortTraceInitTracing @ 0x1C0069774 (PortTraceInitTracing.c)
 * Callees:
 *     PortpErrorInitDpc @ 0x1C00694D8 (PortpErrorInitDpc.c)
 *     PortpErrorInitRecords @ 0x1C0094274 (PortpErrorInitRecords.c)
 */

void __fastcall PortTraceErrorRegisterDriver(char *DeferredContext)
{
  PortpErrorInitRecords();
  PortpErrorInitDpc(DeferredContext);
}
