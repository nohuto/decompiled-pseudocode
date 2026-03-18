/*
 * XREFs of ExQueueWorkItemToPrivatePool @ 0x140398000
 * Callers:
 *     ?SmAsyncReadQueueInsert@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASYNC_DIRECT_READ_CTX@1@K@Z @ 0x140397F20 (-SmAsyncReadQueueInsert@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASY.c)
 * Callees:
 *     ExpQueueWorkItem @ 0x1402EF0CC (ExpQueueWorkItem.c)
 *     ExpValidateWorkItem @ 0x140346210 (ExpValidateWorkItem.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

char __fastcall ExQueueWorkItemToPrivatePool(_QWORD *BugCheckParameter2, int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  char result; // al

  v4 = a4;
  if ( (unsigned __int64)(a4 - 1) > 6
    || (ExpValidateWorkItem(BugCheckParameter2, a2 + 32),
        (result = ExpQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), (int)BugCheckParameter2, a2, 0xFFFFFFFF, v4)) == 0) )
  {
    KeBugCheckEx(0xE4u, 5uLL, (ULONG_PTR)BugCheckParameter2, a2 + 32, 0xFFFFFFFFuLL);
  }
  return result;
}
