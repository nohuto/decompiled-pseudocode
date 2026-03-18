/*
 * XREFs of PfTFreeTraceDump @ 0x1402FA264
 * Callers:
 *     PfGetCompletedTrace @ 0x14075EA38 (PfGetCompletedTrace.c)
 *     PfTTraceListFree @ 0x140760440 (PfTTraceListFree.c)
 * Callees:
 *     PfpRepurposeNameLoggingTrace @ 0x14074ACAC (PfpRepurposeNameLoggingTrace.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall PfTFreeTraceDump(_DWORD *a1)
{
  if ( a1[7] == 1 )
    PfpRepurposeNameLoggingTrace(a1);
  else
    ExFreePoolWithTag(a1, 0);
}
