/*
 * XREFs of NtGetCompleteWnfStateSubscription @ 0x140711D60
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ExpWnfDeliverThreadNotifications @ 0x140711EC0 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x140712184 (ExpWnfCompleteThreadSubscriptions.c)
 *     ProbeForWrite @ 0x140729580 (ProbeForWrite.c)
 */

NTSTATUS __cdecl NtGetCompleteWnfStateSubscription(
        PWNF_STATE_NAME OldDescriptorStateName,
        ULONG64 *OldSubscriptionId,
        ULONG OldDescriptorEventMask,
        ULONG OldDescriptorStatus,
        PWNF_DELIVERY_DESCRIPTOR NewDeliveryDescriptor,
        ULONG DescriptorSize)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v8; // ebx
  unsigned __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v13; // [rsp+50h] [rbp-18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = -1073741811;
  v9 = KeGetCurrentThread()->ApcState.Process[1].EndPadding[0];
  if ( v9 )
  {
    if ( !OldDescriptorStateName || !OldSubscriptionId )
      goto LABEL_11;
    if ( OldDescriptorEventMask && (!OldDescriptorStatus || OldDescriptorStatus == -1073741267) )
    {
      v10 = 0x7FFFFFFF0000LL;
      v11 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)OldDescriptorStateName < 0x7FFFFFFF0000LL )
        v11 = (__int64)OldDescriptorStateName;
      v13 = *(_QWORD *)v11;
      if ( (unsigned __int64)OldSubscriptionId < 0x7FFFFFFF0000LL )
        v10 = (__int64)OldSubscriptionId;
      v8 = ExpWnfCompleteThreadSubscriptions(
             v9,
             (unsigned int)&v13,
             *(_QWORD *)v10,
             OldDescriptorEventMask,
             OldDescriptorStatus);
      if ( v8 >= 0 )
      {
LABEL_11:
        if ( DescriptorSize )
        {
          if ( DescriptorSize < 0x1030 )
          {
            v8 = -1073741789;
          }
          else
          {
            ProbeForWrite(NewDeliveryDescriptor, DescriptorSize, 8u);
            v8 = ExpWnfDeliverThreadNotifications(v9, NewDeliveryDescriptor, DescriptorSize);
          }
        }
      }
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v8;
}
