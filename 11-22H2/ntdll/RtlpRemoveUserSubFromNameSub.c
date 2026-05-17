/*
 * XREFs of RtlpRemoveUserSubFromNameSub @ 0x18004C6DC
 * Callers:
 *     RtlUnsubscribeWnfNotificationWaitForCompletion @ 0x18004C670 (RtlUnsubscribeWnfNotificationWaitForCompletion.c)
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18005BC2C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlUnsubscribeWnfStateChangeNotification @ 0x1800880D0 (RtlUnsubscribeWnfStateChangeNotification.c)
 *     RtlUnsubscribeWnfNotificationWithCompletionCallback @ 0x180088CC0 (RtlUnsubscribeWnfNotificationWithCompletionCallback.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     RtlpDecRefWnfUserSubscription @ 0x18004E3EC (RtlpDecRefWnfUserSubscription.c)
 *     RtlpDecRefWnfNameSubscription @ 0x18004FBF8 (RtlpDecRefWnfNameSubscription.c)
 *     NtSubscribeWnfStateChange @ 0x1800A2720 (NtSubscribeWnfStateChange.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpWnfETWEventUnsubscribe @ 0x1800E9174 (RtlpWnfETWEventUnsubscribe.c)
 */

__int64 __fastcall RtlpRemoveUserSubFromNameSub(__int64 a1, __int64 a2, _DWORD *a3)
{
  volatile signed __int64 *v5; // rcx
  __int64 v7; // rcx
  _DWORD *v8; // r8
  unsigned int v9; // edx
  _DWORD *v10; // rcx
  int v11; // eax
  unsigned int v12; // edx
  unsigned int i; // ecx
  unsigned int v14; // edi
  int v15; // eax
  void (__fastcall *v17)(__int64); // [rsp+50h] [rbp+8h] BYREF
  __int64 v18; // [rsp+58h] [rbp+10h] BYREF
  __int64 v19; // [rsp+60h] [rbp+18h] BYREF

  v17 = 0LL;
  v18 = 0LL;
  v5 = (volatile signed __int64 *)(qword_180184D10 + 8);
  *a3 = 0;
  RtlAcquireSRWLockExclusive(v5);
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 64));
  if ( *(_DWORD *)(a2 + 96) )
  {
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 64));
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(qword_180184D10 + 8));
    return 3221225473LL;
  }
  else
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v7 = (__int64)NtCurrentPeb()->SharedData + 564;
    else
      v7 = 2147353486LL;
    if ( *(_BYTE *)v7 )
      RtlpWnfETWEventUnsubscribe(
        *(_QWORD *)(a1 + 16),
        a2,
        a1,
        *(_DWORD *)(a1 + 116),
        *(_QWORD *)(a2 + 32),
        *(_DWORD *)(a2 + 64));
    v8 = (_DWORD *)(a1 + 96);
    v9 = 0;
    *(_DWORD *)(a2 + 96) = 1;
    *a3 = 1;
    v10 = (_DWORD *)(a1 + 96);
    do
    {
      v11 = *(_DWORD *)(a2 + 64);
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
    --*(_DWORD *)(a1 + 88);
    if ( (*(_BYTE *)(a2 + 60) & 4) != 0 )
      --*(_DWORD *)(a1 + 92);
    v14 = 0;
    if ( *(_QWORD *)(a1 + 8) )
    {
      v15 = NtSubscribeWnfStateChange(a1 + 16, *(unsigned int *)(a1 + 24), v12, &v19);
      v14 = v15;
      if ( v15 < 0 )
      {
        if ( v15 == -1073741772 || v15 == -1073741431 )
          v14 = 0;
      }
      else
      {
        *(_QWORD *)(a1 + 8) = v19;
      }
    }
    RtlpDecRefWnfUserSubscription(a2, &v17, &v18);
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 64));
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(qword_180184D10 + 8));
    if ( v17 )
      v17(v18);
    RtlpDecRefWnfNameSubscription(a1);
    return v14;
  }
}
