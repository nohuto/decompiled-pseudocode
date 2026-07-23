/*
 * XREFs of RtlpSubscribeWnfStateChangeNotificationInternal @ 0x180059C2C
 * Callers:
 *     RtlRegisterForWnfMetaNotification @ 0x180059840 (RtlRegisterForWnfMetaNotification.c)
 *     RtlpFcStartSubscriptionManager @ 0x180059B2C (RtlpFcStartSubscriptionManager.c)
 *     RtlSubscribeWnfStateChangeNotification @ 0x180059BE0 (RtlSubscribeWnfStateChangeNotification.c)
 *     RtlpCtContextInit @ 0x18010EE94 (RtlpCtContextInit.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x1800163A0 (RtlRunOnceExecuteOnce.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlpAddWnfUserSubToNameSub @ 0x180059D7C (RtlpAddWnfUserSubToNameSub.c)
 *     RtlpCreateWnfNameSubscription @ 0x180059EFC (RtlpCreateWnfNameSubscription.c)
 *     RtlpCreateWnfUserSubscription @ 0x18005A194 (RtlpCreateWnfUserSubscription.c)
 *     RtlpCreateSerializationGroup @ 0x18005A284 (RtlpCreateSerializationGroup.c)
 *     RtlpRemoveUserSubFromNameSub @ 0x18005A51C (RtlpRemoveUserSubFromNameSub.c)
 *     RtlpDecrementWnfSerializationGroup @ 0x18005B450 (RtlpDecrementWnfSerializationGroup.c)
 */

__int64 __fastcall RtlpSubscribeWnfStateChangeNotificationInternal(
        PVOID *a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9)
{
  __int64 SerializationGroup; // rsi
  NTSTATUS WnfUserSubscription; // edi
  PVOID *v15; // rbx
  PVOID v16; // rax
  PVOID BaseAddress; // [rsp+40h] [rbp-28h] BYREF
  __int64 v19; // [rsp+48h] [rbp-20h] BYREF

  BaseAddress = 0LL;
  SerializationGroup = 0LL;
  if ( byte_18017A188 )
  {
    return (unsigned int)-1073741558;
  }
  else
  {
    WnfUserSubscription = RtlRunOnceExecuteOnce(&stru_18017AE00, RtlpInitializeWnf, 0LL, 0LL);
    if ( WnfUserSubscription >= 0 )
    {
      if ( !a7 || (SerializationGroup = RtlpCreateSerializationGroup()) != 0 )
      {
        WnfUserSubscription = RtlpCreateWnfUserSubscription(
                                (unsigned int)&BaseAddress,
                                a3,
                                a4,
                                a5,
                                SerializationGroup,
                                a8,
                                a9);
        if ( WnfUserSubscription < 0
          || (SerializationGroup = 0LL,
              WnfUserSubscription = RtlpCreateWnfNameSubscription(&v19, a2, a6),
              WnfUserSubscription < 0) )
        {
          v16 = BaseAddress;
        }
        else
        {
          v15 = (PVOID *)BaseAddress;
          *a1 = BaseAddress;
          WnfUserSubscription = RtlpAddWnfUserSubToNameSub(v19, v15);
          if ( WnfUserSubscription < 0 )
          {
            *a1 = 0LL;
            RtlpRemoveUserSubFromNameSub(v15[3], v15);
          }
          v16 = 0LL;
          BaseAddress = 0LL;
        }
        if ( v16 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
        if ( SerializationGroup )
          RtlpDecrementWnfSerializationGroup(SerializationGroup);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return (unsigned int)WnfUserSubscription;
}
