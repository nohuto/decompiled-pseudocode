/*
 * XREFs of SmmGetLowerOrderFromPageCount @ 0x1C006FE50
 * Callers:
 *     SmmAllocateLogicalAddressAt @ 0x1C03C0F84 (SmmAllocateLogicalAddressAt.c)
 *     ?SmmCreateLogicalAllocator@@YAJ_KPEAPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z @ 0x1C03C10D4 (-SmmCreateLogicalAllocator@@YAJ_KPEAPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z.c)
 *     SmmInitializeLogicalAllocator @ 0x1C03C1540 (SmmInitializeLogicalAllocator.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmmGetLowerOrderFromPageCount(unsigned __int64 a1)
{
  __int64 result; // rax

  _BitScanReverse64((unsigned __int64 *)&result, a1);
  return result;
}
