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
        _QWORD *a1,
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
  int WnfUserSubscription; // edi
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v18; // [rsp+40h] [rbp-28h] BYREF
  __int64 v19; // [rsp+48h] [rbp-20h] BYREF

  v18 = 0LL;
  SerializationGroup = 0LL;
  if ( byte_18017A188 )
  {
    return (unsigned int)-1073741558;
  }
  else
  {
    WnfUserSubscription = RtlRunOnceExecuteOnce(
                            &qword_18017AE00,
                            (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, __int64 *))RtlpInitializeWnf,
                            0LL,
                            0LL);
    if ( WnfUserSubscription >= 0 )
    {
      if ( !a7 || (SerializationGroup = RtlpCreateSerializationGroup()) != 0 )
      {
        WnfUserSubscription = RtlpCreateWnfUserSubscription((unsigned int)&v18, a3, a4, a5, SerializationGroup, a8, a9);
        if ( WnfUserSubscription < 0
          || (SerializationGroup = 0LL,
              WnfUserSubscription = RtlpCreateWnfNameSubscription(&v19, a2, a6),
              WnfUserSubscription < 0) )
        {
          v16 = v18;
        }
        else
        {
          v15 = v18;
          *a1 = v18;
          WnfUserSubscription = RtlpAddWnfUserSubToNameSub(v19, v15);
          if ( WnfUserSubscription < 0 )
          {
            *a1 = 0LL;
            RtlpRemoveUserSubFromNameSub(*(_QWORD *)(v15 + 24), v15, &v18);
          }
          v16 = 0LL;
          v18 = 0LL;
        }
        if ( v16 )
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v18);
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
