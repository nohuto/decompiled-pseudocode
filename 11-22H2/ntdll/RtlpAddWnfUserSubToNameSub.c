/*
 * XREFs of RtlpAddWnfUserSubToNameSub @ 0x18005BE6C
 * Callers:
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18005BC2C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     NtSubscribeWnfStateChange @ 0x1800A2720 (NtSubscribeWnfStateChange.c)
 *     RtlpWnfETWEventSubscribe @ 0x1800E90B8 (RtlpWnfETWEventSubscribe.c)
 */

__int64 __fastcall RtlpAddWnfUserSubToNameSub(__int64 a1, __int64 a2)
{
  __int64 **v4; // r8
  __int64 ****v5; // rcx
  __int64 ***v6; // rax
  _DWORD *v7; // r9
  unsigned int v8; // edx
  _DWORD *v9; // rcx
  int v10; // eax
  ULONG v11; // r10d
  unsigned int i; // ecx
  WNF_CHANGE_STAMP v13; // edx
  NTSTATUS v14; // esi
  __int64 v15; // rdx
  __int64 *v17; // rcx
  WNF_CHANGE_STAMP v18; // eax
  unsigned __int64 SubscriptionId; // [rsp+50h] [rbp+8h] BYREF

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(qword_180184D10 + 8));
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
  v4 = (__int64 **)(a1 + 72);
  v5 = *(__int64 *****)(a1 + 80);
  v6 = (__int64 ***)(a2 + 8);
  if ( *v5 != (__int64 ***)(a1 + 72) )
    __fastfail(3u);
  *v6 = v4;
  *(_QWORD *)(a2 + 16) = v5;
  *v5 = v6;
  *(_QWORD *)(a1 + 80) = v6;
  *(_QWORD *)(a2 + 24) = a1;
  if ( *(_DWORD *)(a1 + 136) == 1 && (*(_DWORD *)(a2 + 64) & 0xFFFFFFEE) != 0 )
    *(_DWORD *)(a2 + 160) = 1;
  v7 = (_DWORD *)(a1 + 96);
  v8 = 0;
  v9 = (_DWORD *)(a1 + 96);
  do
  {
    v10 = *(_DWORD *)(a2 + 64);
    if ( _bittest(&v10, v8) )
      ++*v9;
    ++v8;
    ++v9;
  }
  while ( v8 < 5 );
  v11 = 0;
  for ( i = 0; i < 5; ++i )
  {
    if ( *v7 )
      v11 |= 1 << i;
    ++v7;
  }
  ++*(_DWORD *)(a1 + 88);
  if ( (*(_BYTE *)(a2 + 60) & 4) != 0 )
    ++*(_DWORD *)(a1 + 92);
  v13 = *(_DWORD *)(a2 + 56);
  if ( *(_DWORD *)(a1 + 24) < v13 )
  {
    v17 = *v4;
    while ( v17 != (__int64 *)v4 )
    {
      v18 = *((_DWORD *)v17 + 12);
      v17 = (__int64 *)*v17;
      if ( v13 <= v18 )
        v18 = v13;
      v13 = v18;
    }
  }
  *(_DWORD *)(a1 + 24) = v13;
  v14 = NtSubscribeWnfStateChange((PCWNF_STATE_NAME)(a1 + 16), v13, v11, &SubscriptionId);
  if ( v14 >= 0 )
    *(_QWORD *)(a1 + 8) = SubscriptionId;
  if ( RtlGetCurrentServiceSessionId() )
    v15 = (__int64)NtCurrentPeb()->SharedData + 564;
  else
    v15 = 2147353486LL;
  if ( *(_BYTE *)v15 && v14 >= 0 )
    RtlpWnfETWEventSubscribe(
      *(_QWORD *)(a1 + 16),
      a2,
      a1,
      *(_DWORD *)(a1 + 116),
      *(_QWORD *)(a2 + 32),
      *(_DWORD *)(a2 + 64));
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(qword_180184D10 + 8));
  return (unsigned int)v14;
}
