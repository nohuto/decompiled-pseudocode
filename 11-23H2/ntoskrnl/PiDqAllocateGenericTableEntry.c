/*
 * XREFs of PiDqAllocateGenericTableEntry @ 0x1407E6850
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDqAllocateGenericTableEntry(_RTL_AVL_TABLE *a1, unsigned int a2)
{
  return ExAllocatePool2(256LL, a2, 1483763280LL);
}
