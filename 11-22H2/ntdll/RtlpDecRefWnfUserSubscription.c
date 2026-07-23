/*
 * XREFs of RtlpDecRefWnfUserSubscription @ 0x18004E3EC
 * Callers:
 *     RtlpRemoveUserSubFromNameSub @ 0x18004C6DC (RtlpRemoveUserSubFromNameSub.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x18004DF68 (RtlpWnfWalkUserSubscriptionList.c)
 * Callees:
 *     RtlpWakeByAddress @ 0x18002A1DC (RtlpWakeByAddress.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlpDecrementWnfSerializationGroup @ 0x180050498 (RtlpDecrementWnfSerializationGroup.c)
 */

LOGICAL __fastcall RtlpDecRefWnfUserSubscription(volatile signed __int32 *BaseAddress, _QWORD *a2, _QWORD *a3)
{
  LOGICAL result; // eax
  volatile signed __int32 **v7; // rdx
  PVOID *v8; // rcx
  _DWORD *v9; // rdi
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  result = _InterlockedExchangeAdd(BaseAddress + 20, 0xFFFFFFFF);
  if ( result == 1 )
  {
    if ( *((_QWORD *)BaseAddress + 9) )
      RtlpDecrementWnfSerializationGroup();
    v7 = (volatile signed __int32 **)*((_QWORD *)BaseAddress + 1);
    if ( v7[1] != BaseAddress + 2 || (v8 = (PVOID *)*((_QWORD *)BaseAddress + 2), *v8 != BaseAddress + 2) )
      __fastfail(3u);
    *v8 = v7;
    v7[1] = (volatile signed __int32 *)v8;
    v9 = (_DWORD *)*((_QWORD *)BaseAddress + 11);
    *a2 = *((_QWORD *)BaseAddress + 13);
    *a3 = *((_QWORD *)BaseAddress + 14);
    result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)BaseAddress);
    if ( v9 )
    {
      *v9 = 1;
      _InterlockedOr(v10, 0);
      return RtlpWakeByAddress((unsigned __int64)v9, 0);
    }
  }
  else
  {
    *a2 = 0LL;
    *a3 = 0LL;
  }
  return result;
}
