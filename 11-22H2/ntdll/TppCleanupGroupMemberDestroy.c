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

void __fastcall TppCleanupGroupMemberDestroy(_QWORD *a1)
{
  _ACTIVATION_CONTEXT *v2; // rcx
  _RTL_SRWLOCK *v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  PVOID v7; // rcx
  void (__fastcall *v8)(_QWORD, _QWORD); // rdi
  _RTL_SRWLOCK *v9; // rdx
  const void **v10; // rcx
  __int64 v11; // r11
  void *v12; // r8
  _QWORD *v13; // rax
  __int64 v14; // r8
  _QWORD *v15; // rdx
  _BYTE v16[88]; // [rsp+30h] [rbp-118h] BYREF
  void (__fastcall *v17)(_QWORD, _QWORD); // [rsp+88h] [rbp-C0h]
  __int64 v18; // [rsp+90h] [rbp-B8h]

  if ( a1[2] )
  {
    TppCleanupGroupRemoveMember(a1);
    v12 = (void *)a1[2];
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v12, 0xFFFFFFFF) == 1 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag, v12);
  }
  v2 = (_ACTIVATION_CONTEXT *)a1[12];
  if ( v2 != (_ACTIVATION_CONTEXT *)-1LL )
    RtlReleaseActivationContext(v2);
  v3 = (_RTL_SRWLOCK *)a1[18];
  if ( v3 )
  {
    RtlAcquireSRWLockExclusive(v3 + 9);
    v4 = a1 + 19;
    v5 = a1[19];
    v6 = (_QWORD *)a1[20];
    if ( *(_QWORD **)(v5 + 8) != a1 + 19 || (_QWORD *)*v6 != v4 )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    a1[20] = a1 + 19;
    *v4 = v4;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1[18] + 72LL));
    v7 = (PVOID)a1[18];
    if ( v7 == TppPoolpGlobalPool )
    {
      v9 = &TppPoolpGlobalPoolLock;
      v10 = (const void **)&TppPoolpGlobalPool;
    }
    else
    {
      if ( v7 != (PVOID)TppPoolpSerializedPool )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7, 0xFFFFFFFF) == 1 )
          TppPoolpFree(v7);
        goto LABEL_13;
      }
      v9 = (_RTL_SRWLOCK *)&TppPoolpSerializedPoolLock;
      v10 = (const void **)&TppPoolpSerializedPool;
    }
    TppPoolpDereferenceGlobalPool(v10, v9);
    goto LABEL_13;
  }
  RtlAcquireSRWLockExclusive(&TppCleanupGroupMemberpNoPoolListLock);
  v13 = a1 + 19;
  v14 = a1[19];
  v15 = (_QWORD *)a1[20];
  if ( *(_QWORD **)(v14 + 8) != a1 + 19 || (_QWORD *)*v15 != v13 )
    __fastfail(3u);
  *v15 = v14;
  *(_QWORD *)(v14 + 8) = v15;
  a1[20] = a1 + 19;
  *v13 = v13;
  RtlReleaseSRWLockExclusive(&TppCleanupGroupMemberpNoPoolListLock);
LABEL_13:
  v8 = (void (__fastcall *)(_QWORD, _QWORD))a1[4];
  if ( v8 )
  {
    memset_thunk_772440563353939046(v16, 0, 0x100uLL);
    v17 = v8;
    v18 = a1[11];
    TppCallbackCheckThreadBeforeCallback(v16);
    v8(v16, v11);
    TppCallbackEpilog(v16);
  }
}
