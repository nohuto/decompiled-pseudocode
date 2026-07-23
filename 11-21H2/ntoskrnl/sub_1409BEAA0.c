/*
 * XREFs of sub_1409BEAA0 @ 0x1409BEAA0
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1405EDBA0 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1409BEAA0(void *a1)
{
  ExFreePoolWithTag(a1, 0x67744364u);
}
