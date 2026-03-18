/*
 * XREFs of IntPartFree @ 0x1C005ED10
 * Callers:
 *     ProcessorpFindIdtEntriesApic @ 0x1C009B600 (ProcessorpFindIdtEntriesApic.c)
 *     IntPartArbInit @ 0x1C00A319C (IntPartArbInit.c)
 * Callees:
 *     <none>
 */

void __fastcall IntPartFree(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
