/*
 * XREFs of sub_140A9DAF0 @ 0x140A9DAF0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A9DAF0(_RTL_AVL_TABLE *a1, unsigned int a2)
{
  return ExAllocatePool2(64LL, a2, 0x6E496956u);
}
