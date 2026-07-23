/*
 * XREFs of PopFxQueueWorkItem @ 0x14028C10C
 * Callers:
 *     PopFxQueueWorkOrder @ 0x14028C0AC (PopFxQueueWorkOrder.c)
 *     PopFxHandleReportDevicePoweredOn @ 0x14028CF30 (PopFxHandleReportDevicePoweredOn.c)
 *     PopHandleDevicePowerIrpCompletion @ 0x14028E080 (PopHandleDevicePowerIrpCompletion.c)
 * Callees:
 *     ExInterlockedInsertTailList @ 0x14028C180 (ExInterlockedInsertTailList.c)
 *     KeReleaseSemaphoreEx @ 0x1402B7170 (KeReleaseSemaphoreEx.c)
 *     ExTryQueueWorkItem @ 0x1402B9B00 (ExTryQueueWorkItem.c)
 */

__int64 __fastcall PopFxQueueWorkItem(__int64 a1, _LIST_ENTRY *a2)
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
