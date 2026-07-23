/*
 * XREFs of PiSwAllocateGenericTableEntry @ 0x140861D10
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiSwAllocateGenericTableEntry(_RTL_AVL_TABLE *a1, unsigned int a2)
{
  return ExAllocatePool2(256LL, a2, 1466986064LL);
}
