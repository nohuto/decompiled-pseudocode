/*
 * XREFs of RtlpRemoveUserSubFromNameSub @ 0x18005A51C
 * Callers:
 *     RtlUnsubscribeWnfNotificationWithCompletionCallback @ 0x180059680 (RtlUnsubscribeWnfNotificationWithCompletionCallback.c)
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x180059C2C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlUnsubscribeWnfStateChangeNotification @ 0x18005A480 (RtlUnsubscribeWnfStateChangeNotification.c)
 *     RtlUnsubscribeWnfNotificationWaitForCompletion @ 0x18005A4B0 (RtlUnsubscribeWnfNotificationWaitForCompletion.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     RtlpDecRefWnfUserSubscription @ 0x18005AEA4 (RtlpDecRefWnfUserSubscription.c)
 *     RtlpDecRefWnfNameSubscription @ 0x18005AF70 (RtlpDecRefWnfNameSubscription.c)
 *     NtSubscribeWnfStateChange @ 0x1800A7920 (NtSubscribeWnfStateChange.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpWnfETWEventUnsubscribe @ 0x1800EA11C (RtlpWnfETWEventUnsubscribe.c)
 */

__int64 __fastcall RtlpRemoveUserSubFromNameSub(char *BaseAddress, _QWORD *a2, _DWORD *a3)
{
  _RTL_SRWLOCK *v5; // rcx
  __int64 v7; // rcx
  _DWORD *v8; // r8
  unsigned int v9; // edx
  _DWORD *v10; // rcx
  int v11; // eax
  ULONG v12; // edx
  unsigned int i; // ecx
  unsigned __int32 v14; // edi
  NTSTATUS v15; // eax
  unsigned __int64 SubscriptionId; // [rsp+60h] [rbp+18h] BYREF

  v5 = (_RTL_SRWLOCK *)(qword_18017AAE0 + 8);
  *a3 = 0;
  RtlAcquireSRWLockExclusive(v5);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 8);
  if ( *((_DWORD *)a2 + 24) )
  {
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 8);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(qword_18017AAE0 + 8));
    return 3221225473LL;
  }
  else
  {
    if ( RtlGetCurrentServiceSessionId() )
      v7 = (__int64)NtCurrentPeb()->SharedData + 564;
    else
      v7 = 2147353486LL;
    if ( *(_BYTE *)v7 )
      RtlpWnfETWEventUnsubscribe(
        *((_QWORD *)BaseAddress + 2),
        (_DWORD)a2,
        (_DWORD)BaseAddress,
        *((_DWORD *)BaseAddress + 29),
        a2[4],
        *((_DWORD *)a2 + 16));
    v8 = BaseAddress + 96;
    v9 = 0;
    *((_DWORD *)a2 + 24) = 1;
    *a3 = 1;
    v10 = BaseAddress + 96;
    do
    {
      v11 = *((_DWORD *)a2 + 16);
      if ( _bittest(&v11, v9) )
        --*v10;
      ++v9;
      ++v10;
    }
    while ( v9 < 5 );
    v12 = 0;
    for ( i = 0; i < 5; ++i )
    {
      if ( *v8 )
        v12 |= 1 << i;
      ++v8;
    }
    --*((_DWORD *)BaseAddress + 22);
    if ( (*((_BYTE *)a2 + 60) & 4) != 0 )
      --*((_DWORD *)BaseAddress + 23);
    v14 = 0;
    if ( *((_QWORD *)BaseAddress + 1) )
    {
      v15 = NtSubscribeWnfStateChange(
              (PCWNF_STATE_NAME)BaseAddress + 2,
              *((_DWORD *)BaseAddress + 6),
              v12,
              &SubscriptionId);
      v14 = v15;
      if ( v15 < 0 )
      {
        if ( v15 == -1073741772 || v15 == -1073741431 )
          v14 = 0;
      }
      else
      {
        *((_QWORD *)BaseAddress + 1) = SubscriptionId;
      }
    }
    RtlpDecRefWnfUserSubscription(a2);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 8);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(qword_18017AAE0 + 8));
    RtlpDecRefWnfNameSubscription(BaseAddress);
    return v14;
  }
}
