/*
 * XREFs of PopFxQueueWorkItem @ 0x14028C22C
 * Callers:
 *     PopFxQueueWorkOrder @ 0x14028C1CC (PopFxQueueWorkOrder.c)
 *     PopFxHandleReportDevicePoweredOn @ 0x14028D050 (PopFxHandleReportDevicePoweredOn.c)
 *     PopHandleDevicePowerIrpCompletion @ 0x14028E1A0 (PopHandleDevicePowerIrpCompletion.c)
 * Callees:
 *     ExInterlockedInsertTailList @ 0x14028C2A0 (ExInterlockedInsertTailList.c)
 *     KeReleaseSemaphoreEx @ 0x1402B71A0 (KeReleaseSemaphoreEx.c)
 *     ExTryQueueWorkItem @ 0x1402B9B30 (ExTryQueueWorkItem.c)
 */

__int64 __fastcall PopFxQueueWorkItem(__int64 a1, struct _LIST_ENTRY *a2)
{
  __int64 result; // rax
  int v5; // r9d
  char v6; // [rsp+50h] [rbp+18h] BYREF

  result = ExTryQueueWorkItem(a2, 48LL);
  if ( !(_BYTE)result )
  {
    ExInterlockedInsertTailList((PLIST_ENTRY)(a1 + 16), a2, (PKSPIN_LOCK)(a1 + 8));
    return KeReleaseSemaphoreEx((int)a1 + 32, 0, 1, v5, 8, (__int64)&v6);
  }
  return result;
}
