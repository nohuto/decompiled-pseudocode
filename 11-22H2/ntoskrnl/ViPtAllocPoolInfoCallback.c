/*
 * XREFs of ViPtAllocPoolInfoCallback @ 0x140ADFB80
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall ViPtAllocPoolInfoCallback(_RTL_AVL_TABLE *a1, unsigned int a2)
{
  return ExAllocatePool2(64LL, a2, 0x6E496956u);
}
