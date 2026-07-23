/*
 * XREFs of PopPowerRequestStatsDatabaseAllocate @ 0x1407EA480
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopPowerRequestStatsDatabaseAllocate(_RTL_AVL_TABLE *a1, unsigned int a2)
{
  return ExAllocatePool2(256LL, a2, 1414616912LL);
}
