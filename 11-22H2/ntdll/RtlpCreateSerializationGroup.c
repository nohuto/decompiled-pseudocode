/*
 * XREFs of RtlpCreateSerializationGroup @ 0x18005C28C
 * Callers:
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18005BC2C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026F00 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 */

__int64 __fastcall RtlpCreateSerializationGroup(int a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  _QWORD *i; // rax
  __int64 v6; // rbx
  __int64 result; // rax
  volatile signed __int64 *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  _QWORD *j; // rcx
  volatile signed __int32 *v12; // rdi
  __int64 **v13; // rdx
  __int64 *v14; // rcx

  RtlAcquireSRWLockShared((volatile signed __int64 *)(qword_180184D10 + 48), a2, a3, a4);
  for ( i = *(_QWORD **)(qword_180184D10 + 32); i != (_QWORD *)(qword_180184D10 + 32); i = (_QWORD *)*i )
  {
    v6 = (__int64)(i - 1);
    if ( *((_DWORD *)i - 1) == a1 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 32));
      RtlReleaseSRWLockShared((volatile signed __int64 *)(qword_180184D10 + 48));
      return v6;
    }
  }
  RtlReleaseSRWLockShared((volatile signed __int64 *)(qword_180184D10 + 48));
  result = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 40LL);
  v6 = result;
  if ( result )
  {
    *(_QWORD *)(result + 8) = 0LL;
    *(_QWORD *)(result + 16) = 0LL;
    *(_DWORD *)(result + 36) = 0;
    *(_DWORD *)result = 2623763;
    *(_QWORD *)(result + 24) = 0LL;
    v8 = (volatile signed __int64 *)(qword_180184D10 + 48);
    *(_DWORD *)(result + 4) = a1;
    *(_DWORD *)(result + 32) = 1;
    RtlAcquireSRWLockExclusive(v8);
    v9 = qword_180184D10;
    v10 = qword_180184D10 + 32;
    for ( j = *(_QWORD **)(qword_180184D10 + 32); j != (_QWORD *)v10; j = (_QWORD *)*j )
    {
      v12 = (volatile signed __int32 *)(j - 1);
      if ( *((_DWORD *)j - 1) == a1 )
      {
        _InterlockedIncrement(v12 + 8);
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)(qword_180184D10 + 48));
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
        return (__int64)v12;
      }
    }
    v13 = *(__int64 ***)(qword_180184D10 + 40);
    v14 = (__int64 *)(v6 + 8);
    if ( *v13 != (__int64 *)v10 )
      __fastfail(3u);
    *v14 = v10;
    *(_QWORD *)(v6 + 16) = v13;
    *v13 = v14;
    *(_QWORD *)(v10 + 8) = v14;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v9 + 48));
    return v6;
  }
  return result;
}
