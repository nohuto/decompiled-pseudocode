/*
 * XREFs of RtlpDecRefWnfUserSubscription @ 0x18005AEA4
 * Callers:
 *     RtlpRemoveUserSubFromNameSub @ 0x18005A51C (RtlpRemoveUserSubFromNameSub.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x18005A9B4 (RtlpWnfWalkUserSubscriptionList.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlpWakeByAddress @ 0x18005B0C4 (RtlpWakeByAddress.c)
 *     RtlpDecrementWnfSerializationGroup @ 0x18005B450 (RtlpDecrementWnfSerializationGroup.c)
 */

__int64 __fastcall RtlpDecRefWnfUserSubscription(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  _QWORD *v9; // rdx
  _DWORD *v10; // rdi
  signed __int32 v11[10]; // [rsp+0h] [rbp-28h] BYREF

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 80), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    v7 = *(_QWORD *)(a1 + 72);
    if ( v7 )
      RtlpDecrementWnfSerializationGroup(v7);
    v8 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(v8 + 8) != a1 + 8 || (v9 = *(_QWORD **)(a1 + 16), *v9 != a1 + 8) )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    v10 = *(_DWORD **)(a1 + 88);
    *a2 = *(_QWORD *)(a1 + 104);
    *a3 = *(_QWORD *)(a1 + 112);
    result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
    if ( v10 )
    {
      *v10 = 1;
      _InterlockedOr(v11, 0);
      return RtlpWakeByAddress(v10, 0LL);
    }
  }
  else
  {
    *a2 = 0LL;
    *a3 = 0LL;
  }
  return result;
}
