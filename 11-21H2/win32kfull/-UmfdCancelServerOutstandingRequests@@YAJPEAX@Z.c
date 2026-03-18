/*
 * XREFs of ?UmfdCancelServerOutstandingRequests@@YAJPEAX@Z @ 0x1C00F7958
 * Callers:
 *     ?UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C00F7180 (-UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C00F77E8 (-UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ.c)
 * Callees:
 *     ?Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ @ 0x1C02DC998 (-Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ.c)
 */

PSLIST_ENTRY __fastcall UmfdCancelServerOutstandingRequests(union _SLIST_HEADER **a1)
{
  PSLIST_ENTRY result; // rax
  signed __int32 v3[10]; // [rsp+0h] [rbp-28h] BYREF

  while ( 1 )
  {
    result = ExpInterlockedPopEntrySList(*a1 + 1);
    _InterlockedOr(v3, 0);
    if ( !result )
      break;
    *((_DWORD *)&result->Next + 2) = 2;
    CMultipleConsumerWorkQueue::CWaitableWorkItem::Cancel((CMultipleConsumerWorkQueue::CWaitableWorkItem *)result);
  }
  return result;
}
