/*
 * XREFs of RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18005BC2C
 * Callers:
 *     RtlRegisterForWnfMetaNotification @ 0x18005B4F0 (RtlRegisterForWnfMetaNotification.c)
 *     RtlpFcStartSubscriptionManager @ 0x18005B990 (RtlpFcStartSubscriptionManager.c)
 *     RtlSubscribeWnfStateChangeNotification @ 0x18005BBE0 (RtlSubscribeWnfStateChangeNotification.c)
 *     RtlpCtContextInit @ 0x18010F0C4 (RtlpCtContextInit.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x180032A30 (RtlRunOnceExecuteOnce.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlpRemoveUserSubFromNameSub @ 0x18004C6DC (RtlpRemoveUserSubFromNameSub.c)
 *     RtlpDecrementWnfSerializationGroup @ 0x180050498 (RtlpDecrementWnfSerializationGroup.c)
 *     RtlpCreateWnfUserSubscription @ 0x18005BD7C (RtlpCreateWnfUserSubscription.c)
 *     RtlpAddWnfUserSubToNameSub @ 0x18005BE6C (RtlpAddWnfUserSubToNameSub.c)
 *     RtlpCreateWnfNameSubscription @ 0x18005BFEC (RtlpCreateWnfNameSubscription.c)
 *     RtlpCreateSerializationGroup @ 0x18005C28C (RtlpCreateSerializationGroup.c)
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
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v20; // [rsp+40h] [rbp-28h] BYREF
  __int64 v21; // [rsp+48h] [rbp-20h] BYREF

  v20 = 0LL;
  SerializationGroup = 0LL;
  if ( byte_1801843C8 )
  {
    return (unsigned int)-1073741558;
  }
  else
  {
    WnfUserSubscription = RtlRunOnceExecuteOnce(
                            &qword_180185040,
                            (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, unsigned __int64 *))RtlpInitializeWnf,
                            0LL,
                            0LL);
    if ( WnfUserSubscription >= 0 )
    {
      if ( !a7 || (SerializationGroup = RtlpCreateSerializationGroup()) != 0 )
      {
        WnfUserSubscription = RtlpCreateWnfUserSubscription((unsigned int)&v20, a3, a4, a5, SerializationGroup, a8, a9);
        if ( WnfUserSubscription < 0
          || (SerializationGroup = 0LL,
              WnfUserSubscription = RtlpCreateWnfNameSubscription(&v21, a2, a6),
              WnfUserSubscription < 0) )
        {
          v18 = v20;
        }
        else
        {
          v15 = v20;
          v16 = v21;
          v17 = v20;
          *a1 = v20;
          WnfUserSubscription = RtlpAddWnfUserSubToNameSub(v16, v17);
          if ( WnfUserSubscription < 0 )
          {
            *a1 = 0LL;
            RtlpRemoveUserSubFromNameSub(*(_QWORD *)(v15 + 24), v15, &v20);
          }
          v18 = 0LL;
          v20 = 0LL;
        }
        if ( v18 )
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v20);
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
