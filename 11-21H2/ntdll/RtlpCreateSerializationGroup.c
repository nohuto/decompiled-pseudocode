/*
 * XREFs of RtlpCreateSerializationGroup @ 0x18005A284
 * Callers:
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x180059C2C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockShared @ 0x18003A9D0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003AB90 (RtlReleaseSRWLockShared.c)
 */

__int64 __fastcall RtlpCreateSerializationGroup(int a1)
{
  _QWORD *i; // rax
  __int64 v3; // rbx
  __int64 result; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  _QWORD *j; // rcx
  volatile signed __int32 *v12; // rdi
  __int64 **v13; // rdx
  __int64 *v14; // rcx

  RtlAcquireSRWLockShared((volatile signed __int64 *)(qword_18017AAE0 + 48));
  for ( i = *(_QWORD **)(qword_18017AAE0 + 32); i != (_QWORD *)(qword_18017AAE0 + 32); i = (_QWORD *)*i )
  {
    v3 = (__int64)(i - 1);
    if ( *((_DWORD *)i - 1) == a1 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v3 + 32));
      RtlReleaseSRWLockShared((volatile signed __int64 *)(qword_18017AAE0 + 48));
      return v3;
    }
  }
  RtlReleaseSRWLockShared((volatile signed __int64 *)(qword_18017AAE0 + 48));
  result = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 40LL);
  v3 = result;
  if ( result )
  {
    *(_QWORD *)(result + 8) = 0LL;
    *(_QWORD *)(result + 16) = 0LL;
    *(_DWORD *)(result + 36) = 0;
    *(_DWORD *)result = 2623763;
    *(_QWORD *)(result + 24) = 0LL;
    v8 = qword_18017AAE0 + 48;
    *(_DWORD *)(result + 4) = a1;
    *(_DWORD *)(result + 32) = 1;
    RtlAcquireSRWLockExclusive(v8, v5, v6, v7);
    v9 = qword_18017AAE0;
    v10 = qword_18017AAE0 + 32;
    for ( j = *(_QWORD **)(qword_18017AAE0 + 32); j != (_QWORD *)v10; j = (_QWORD *)*j )
    {
      v12 = (volatile signed __int32 *)(j - 1);
      if ( *((_DWORD *)j - 1) == a1 )
      {
        _InterlockedIncrement(v12 + 8);
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)(qword_18017AAE0 + 48));
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v3);
        return (__int64)v12;
      }
    }
    v13 = *(__int64 ***)(qword_18017AAE0 + 40);
    v14 = (__int64 *)(v3 + 8);
    if ( *v13 != (__int64 *)v10 )
      __fastfail(3u);
    *v14 = v10;
    *(_QWORD *)(v3 + 16) = v13;
    *v13 = v14;
    *(_QWORD *)(v10 + 8) = v14;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v9 + 48));
    return v3;
  }
  return result;
}
