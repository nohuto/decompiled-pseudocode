/*
 * XREFs of MiGetProcessHotPatchContext @ 0x140A37540
 * Callers:
 *     MiApplyImageHotPatchRequest @ 0x140A35890 (MiApplyImageHotPatchRequest.c)
 *     MiDeleteHotPatchEntry @ 0x140A36A00 (MiDeleteHotPatchEntry.c)
 *     MiLogHotPatchRundown @ 0x140A39960 (MiLogHotPatchRundown.c)
 *     MiQueryProcessActivePatches @ 0x140A3B84C (MiQueryProcessActivePatches.c)
 * Callees:
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall MiGetProcessHotPatchContext(__int64 a1, int a2)
{
  _QWORD *result; // rax
  _QWORD *Pool; // rax
  signed __int64 v5; // rbx

  result = *(_QWORD **)(a1 + 2552);
  if ( !result )
  {
    if ( a2 && (Pool = MiAllocatePool(64, 0x28uLL, 0x43505048u)) != 0LL )
    {
      Pool[2] = 0LL;
      Pool[1] = Pool;
      *Pool = Pool;
      Pool[4] = Pool + 3;
      Pool[3] = Pool + 3;
      v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 2552), (signed __int64)Pool, 0LL);
      if ( !v5 )
        return Pool;
      ExFreePoolWithTag(Pool, 0);
      return (_QWORD *)v5;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
