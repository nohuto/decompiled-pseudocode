/*
 * XREFs of PfTFreeTraceDump @ 0x1402FA4F4
 * Callers:
 *     PfGetCompletedTrace @ 0x14075EC28 (PfGetCompletedTrace.c)
 *     PfTTraceListFree @ 0x140760630 (PfTTraceListFree.c)
 * Callees:
 *     PfpRepurposeNameLoggingTrace @ 0x14074AE9C (PfpRepurposeNameLoggingTrace.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall PfTFreeTraceDump(_DWORD *a1)
{
  if ( a1[7] == 1 )
    PfpRepurposeNameLoggingTrace(a1);
  else
    ExFreePoolWithTag(a1, 0);
}
