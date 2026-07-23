/*
 * XREFs of RtlpWnfNotificationThread @ 0x18004C860
 * Callers:
 *     <none>
 * Callees:
 *     TpSetWaitEx @ 0x180030910 (TpSetWaitEx.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x18004DD84 (RtlpWnfProcessCurrentDescriptor.c)
 *     NtGetCompleteWnfStateSubscription @ 0x1800A0CE0 (NtGetCompleteWnfStateSubscription.c)
 *     RtlpWnfCalculateAndSetNextTimer @ 0x1800E8D88 (RtlpWnfCalculateAndSetNextTimer.c)
 */

void __fastcall RtlpWnfNotificationThread(PTP_CALLBACK_INSTANCE a1, PVOID a2, PTP_WAIT a3)
{
  _WNF_STATE_NAME *p_StateName; // rsi
  ULONG EventMask; // ebp
  ULONG v5; // edi
  _WNF_DELIVERY_DESCRIPTOR *NewDeliveryDescriptor; // rbx
  NTSTATUS CompleteWnfStateSubscription; // eax
  ULONG64 OldSubscriptionId; // [rsp+30h] [rbp-38h] BYREF
  LARGE_INTEGER Timeout; // [rsp+38h] [rbp-30h] BYREF

  p_StateName = 0LL;
  Timeout.QuadPart = -50000000LL;
  OldSubscriptionId = 0LL;
  EventMask = 0;
  v5 = 0;
  NewDeliveryDescriptor = 0LL;
  if ( !qword_180184D10 )
    return;
  TpSetWaitEx(a3, a2, 0LL, 0LL);
  while ( 1 )
  {
    if ( !NewDeliveryDescriptor )
    {
      NewDeliveryDescriptor = (_WNF_DELIVERY_DESCRIPTOR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x1030uLL);
      if ( !NewDeliveryDescriptor )
        break;
    }
    CompleteWnfStateSubscription = NtGetCompleteWnfStateSubscription(
                                     p_StateName,
                                     &OldSubscriptionId,
                                     EventMask,
                                     v5,
                                     NewDeliveryDescriptor,
                                     0x1030u);
    if ( CompleteWnfStateSubscription < 0 )
    {
      if ( CompleteWnfStateSubscription == -2147483622 )
        goto LABEL_9;
      break;
    }
    v5 = RtlpWnfProcessCurrentDescriptor(NewDeliveryDescriptor);
    if ( v5 == 259 )
    {
      p_StateName = 0LL;
      EventMask = 0;
      OldSubscriptionId = 0LL;
      v5 = 0;
LABEL_15:
      NewDeliveryDescriptor = 0LL;
    }
    else
    {
      p_StateName = &NewDeliveryDescriptor->StateName;
      OldSubscriptionId = NewDeliveryDescriptor->SubscriptionId;
      EventMask = NewDeliveryDescriptor->EventMask;
      if ( v5 == -1073741267 )
      {
        RtlpWnfCalculateAndSetNextTimer();
        goto LABEL_15;
      }
    }
  }
  TpSetWaitEx(a3, a2, &Timeout, 0LL);
LABEL_9:
  if ( NewDeliveryDescriptor )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, NewDeliveryDescriptor);
}
