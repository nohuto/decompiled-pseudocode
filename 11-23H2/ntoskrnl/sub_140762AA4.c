/*
 * XREFs of sub_140762AA4 @ 0x140762AA4
 * Callers:
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x1407617D0 (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 *     sub_140762140 @ 0x140762140 (sub_140762140.c)
 *     sub_1407627D8 @ 0x1407627D8 (sub_1407627D8.c)
 *     WbGetHeapExecutedBlock @ 0x140762918 (WbGetHeapExecutedBlock.c)
 *     WbHeapExecuteCall @ 0x140762C10 (WbHeapExecuteCall.c)
 *     WbHeapExecutionUnloadModule @ 0x1407E06B8 (WbHeapExecutionUnloadModule.c)
 *     WbFreeWarbirdProcess @ 0x1407E0EC0 (WbFreeWarbirdProcess.c)
 * Callees:
 *     sub_1407619FC @ 0x1407619FC (sub_1407619FC.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

signed __int64 __fastcall sub_140762AA4(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rdi
  __int64 v5; // rdx

  v2 = 0LL;
  if ( a2 )
  {
    v2 = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 80));
    if ( !v2 )
    {
      v5 = *(_QWORD *)(a2 + 40);
      if ( v5 )
      {
        sub_1407619FC(a1, v5);
        *(_QWORD *)(a2 + 40) = 0LL;
        *(_QWORD *)(a2 + 24) = 0LL;
        *(_QWORD *)(a2 + 32) = 0LL;
        *(_DWORD *)(a2 + 72) = 0;
      }
      ExFreePoolWithTag((PVOID)a2, 0);
    }
  }
  return v2;
}
