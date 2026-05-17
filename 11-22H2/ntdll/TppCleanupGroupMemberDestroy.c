/*
 * XREFs of TppCleanupGroupMemberDestroy @ 0x180033198
 * Callers:
 *     TppSimplepFree @ 0x180033020 (TppSimplepFree.c)
 *     TpSimpleTryPost @ 0x180033060 (TpSimpleTryPost.c)
 *     TppWorkInitialize @ 0x180033354 (TppWorkInitialize.c)
 *     TppAllocAlpcCompletion @ 0x18004B9D4 (TppAllocAlpcCompletion.c)
 *     TpAllocIoCompletion @ 0x18004BE60 (TpAllocIoCompletion.c)
 *     TpAllocJobNotification @ 0x180050CA0 (TpAllocJobNotification.c)
 *     TppDestroyTimer @ 0x18007AD3C (TppDestroyTimer.c)
 *     TppWorkpFree @ 0x18007BCD0 (TppWorkpFree.c)
 *     TppIopFree @ 0x180081910 (TppIopFree.c)
 *     TppAlpcpFree @ 0x1800861E0 (TppAlpcpFree.c)
 *     TppJobpFree @ 0x180087B60 (TppJobpFree.c)
 * Callees:
 *     TppPoolpDereferenceGlobalPool @ 0x18002FCE0 (TppPoolpDereferenceGlobalPool.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseActivationContext @ 0x180033EF0 (RtlReleaseActivationContext.c)
 *     TppCallbackEpilog @ 0x18003636C (TppCallbackEpilog.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     TppCleanupGroupRemoveMember @ 0x18007AD98 (TppCleanupGroupRemoveMember.c)
 *     TppCallbackCheckThreadBeforeCallback @ 0x18007DC9C (TppCallbackCheckThreadBeforeCallback.c)
 *     TppPoolpFree @ 0x1800850AC (TppPoolpFree.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall TppCleanupGroupMemberDestroy(_QWORD *a1, __int64 a2, volatile signed __int32 *a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  volatile signed __int32 *v10; // rcx
  __int64 result; // rax
  void (__fastcall *v12)(_QWORD, _QWORD); // rdi
  void *v13; // rdx
  __int64 *v14; // rcx
  __int64 v15; // r11
  _QWORD *v16; // rax
  __int64 v17; // r8
  _QWORD *v18; // rdx
  _BYTE v19[88]; // [rsp+30h] [rbp-118h] BYREF
  void (__fastcall *v20)(_QWORD, _QWORD); // [rsp+88h] [rbp-C0h]
  __int64 v21; // [rsp+90h] [rbp-B8h]

  if ( a1[2] )
  {
    TppCleanupGroupRemoveMember(a1);
    a3 = (volatile signed __int32 *)a1[2];
    if ( _InterlockedExchangeAdd(a3, 0xFFFFFFFF) == 1 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)TppHeapTag, a3);
  }
  v5 = a1[12];
  if ( v5 != -1 )
    RtlReleaseActivationContext(v5, a2, a3, a4);
  v6 = a1[18];
  if ( v6 )
  {
    RtlAcquireSRWLockExclusive(v6 + 72);
    v7 = a1 + 19;
    v8 = a1[19];
    v9 = (_QWORD *)a1[20];
    if ( *(_QWORD **)(v8 + 8) != a1 + 19 || (_QWORD *)*v9 != v7 )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    a1[20] = a1 + 19;
    *v7 = v7;
    RtlReleaseSRWLockExclusive(a1[18] + 72LL);
    v10 = (volatile signed __int32 *)a1[18];
    if ( v10 == (volatile signed __int32 *)TppPoolpGlobalPool )
    {
      v13 = &TppPoolpGlobalPoolLock;
      v14 = &TppPoolpGlobalPool;
    }
    else
    {
      if ( v10 != (volatile signed __int32 *)TppPoolpSerializedPool )
      {
        result = (unsigned int)_InterlockedExchangeAdd(v10, 0xFFFFFFFF);
        if ( (_DWORD)result == 1 )
          result = TppPoolpFree(v10);
        goto LABEL_13;
      }
      v13 = &TppPoolpSerializedPoolLock;
      v14 = &TppPoolpSerializedPool;
    }
    result = TppPoolpDereferenceGlobalPool((const void **)v14, (__int64)v13);
    goto LABEL_13;
  }
  RtlAcquireSRWLockExclusive(&TppCleanupGroupMemberpNoPoolListLock);
  v16 = a1 + 19;
  v17 = a1[19];
  v18 = (_QWORD *)a1[20];
  if ( *(_QWORD **)(v17 + 8) != a1 + 19 || (_QWORD *)*v18 != v16 )
    __fastfail(3u);
  *v18 = v17;
  *(_QWORD *)(v17 + 8) = v18;
  a1[20] = a1 + 19;
  *v16 = v16;
  result = RtlReleaseSRWLockExclusive(&TppCleanupGroupMemberpNoPoolListLock);
LABEL_13:
  v12 = (void (__fastcall *)(_QWORD, _QWORD))a1[4];
  if ( v12 )
  {
    memset_thunk_772440563353939046(v19, 0, 0x100uLL);
    v20 = v12;
    v21 = a1[11];
    TppCallbackCheckThreadBeforeCallback(v19);
    v12(v19, v15);
    return TppCallbackEpilog(v19);
  }
  return result;
}
