/*
 * XREFs of CMFFreeFn @ 0x140885A60
 * Callers:
 *     XpressDecodeClose @ 0x14067A28C (XpressDecodeClose.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall CMFFreeFn(_RTL_AVL_TABLE *a1, PVOID a2)
{
  ExFreePoolWithTag(a2, 0);
}
