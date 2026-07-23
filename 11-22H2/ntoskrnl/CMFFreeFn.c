/*
 * XREFs of CMFFreeFn @ 0x140885CF0
 * Callers:
 *     XpressDecodeClose @ 0x140679DAC (XpressDecodeClose.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall CMFFreeFn(_RTL_AVL_TABLE *a1, PVOID a2)
{
  ExFreePoolWithTag(a2, 0);
}
