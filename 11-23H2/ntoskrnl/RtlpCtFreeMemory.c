/*
 * XREFs of RtlpCtFreeMemory @ 0x1409C23E0
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1405B1510 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpCtFreeMemory(void *a1)
{
  ExFreePoolWithTag(a1, 0x67744364u);
}
