/*
 * XREFs of EtwpTiAsyncVadQueryEventWrite @ 0x1403642EC
 * Callers:
 *     EtwpTiVadQueryEventWrite @ 0x140364274 (EtwpTiVadQueryEventWrite.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 *     EtwpTiAllocVadQueryEventWriteWorkItemContext @ 0x14036435C (EtwpTiAllocVadQueryEventWriteWorkItemContext.c)
 */

void __fastcall EtwpTiAsyncVadQueryEventWrite(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( (int)EtwpTiAllocVadQueryEventWriteWorkItemContext(a1, a2, a3, a4) >= 0 )
  {
    MEMORY[0] = 0LL;
    MEMORY[0x10] = EtwpTiVadQueryEventWriteCallback;
    MEMORY[0x18] = 0LL;
    ExQueueWorkItem(0LL, DelayedWorkQueue);
  }
}
