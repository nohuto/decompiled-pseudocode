/*
 * XREFs of CMFFreeFn @ 0x140885820
 * Callers:
 *     XpressDecodeClose @ 0x140679D3C (XpressDecodeClose.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall CMFFreeFn(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0);
}
