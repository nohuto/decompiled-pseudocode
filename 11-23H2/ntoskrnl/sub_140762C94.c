/*
 * XREFs of sub_140762C94 @ 0x140762C94
 * Callers:
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x1407619C0 (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 *     sub_140762330 @ 0x140762330 (sub_140762330.c)
 *     sub_1407629C8 @ 0x1407629C8 (sub_1407629C8.c)
 *     WbGetHeapExecutedBlock @ 0x140762B08 (WbGetHeapExecutedBlock.c)
 *     WbHeapExecuteCall @ 0x140762E00 (WbHeapExecuteCall.c)
 *     WbHeapExecutionUnloadModule @ 0x1407E0988 (WbHeapExecutionUnloadModule.c)
 *     WbFreeWarbirdProcess @ 0x1407E1190 (WbFreeWarbirdProcess.c)
 * Callees:
 *     sub_140761BEC @ 0x140761BEC (sub_140761BEC.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

signed __int64 __fastcall sub_140762C94(__int64 a1, __int64 a2)
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
        sub_140761BEC(a1, v5);
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
