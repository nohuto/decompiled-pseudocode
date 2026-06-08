/*
 * XREFs of CpcAcquirePerformanceCallback @ 0x1C0007580
 * Callers:
 *     <none>
 * Callees:
 *     CpcConsolidateCommandCompletion @ 0x1C0003EE2 (CpcConsolidateCommandCompletion.c)
 */

__int64 __fastcall CpcAcquirePerformanceCallback(__int64 a1, __int64 a2)
{
  return CpcConsolidateCommandCompletion(*(_QWORD *)(a2 + 176));
}
