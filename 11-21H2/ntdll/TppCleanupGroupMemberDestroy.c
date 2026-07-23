/*
 * XREFs of TppCleanupGroupMemberDestroy @ 0x18001C480
 * Callers:
 *     TppWorkInitialize @ 0x18001C310 (TppWorkInitialize.c)
 *     TpSimpleTryPost @ 0x18001CC80 (TpSimpleTryPost.c)
 *     TppSimplepFree @ 0x18001CDC0 (TppSimplepFree.c)
 *     TppDestroyTimer @ 0x18001F830 (TppDestroyTimer.c)
 *     TppWorkpFree @ 0x18001F860 (TppWorkpFree.c)
 *     TpAllocIoCompletion @ 0x18007D500 (TpAllocIoCompletion.c)
 *     TppAllocAlpcCompletion @ 0x180081594 (TppAllocAlpcCompletion.c)
 *     TpAllocJobNotification @ 0x180085B30 (TpAllocJobNotification.c)
 *     TppIopFree @ 0x1800869B0 (TppIopFree.c)
 *     TppAlpcpFree @ 0x18008A250 (TppAlpcpFree.c)
 *     TppJobpFree @ 0x18008B830 (TppJobpFree.c)
 * Callees:
 *     TppCallbackEpilog @ 0x180017620 (TppCallbackEpilog.c)
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseActivationContext @ 0x18001C640 (RtlReleaseActivationContext.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18001ED68 (TppPoolpDereferenceGlobalPool.c)
 *     TppCleanupGroupRemoveMember @ 0x18001FB70 (TppCleanupGroupRemoveMember.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     TppCallbackCheckThreadBeforeCallback @ 0x180082C4C (TppCallbackCheckThreadBeforeCallback.c)
 *     TppPoolpFree @ 0x18008701C (TppPoolpFree.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     memset @ 0x1800AAE00 (memset.c)
 */

void __fastcall TppCleanupGroupMemberDestroy(_QWORD *a1)
{
  _ACTIVATION_CONTEXT *v2; // rcx
  _RTL_SRWLOCK *v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  PVOID v7; // rcx
  void (__fastcall *v8)(_QWORD *, __int64); // rdi
  _RTL_SRWLOCK *v9; // rdx
  __int64 *v10; // rcx
  void *v11; // r8
  __int64 v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // r8
  _QWORD *v15; // rdx
  _QWORD v16[32]; // [rsp+30h] [rbp-118h] BYREF

  if ( a1[2] )
  {
    TppCleanupGroupRemoveMember(a1);
    v11 = (void *)a1[2];
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v11, 0xFFFFFFFF) == 1 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag, v11);
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
      v10 = (__int64 *)&TppPoolpGlobalPool;
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
      v10 = &TppPoolpSerializedPool;
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
  v8 = (void (__fastcall *)(_QWORD *, __int64))a1[4];
  if ( v8 )
  {
    memset(v16, 0, 0xF8uLL);
    v16[11] = v8;
    v12 = a1[11];
    v16[12] = v12;
    TppCallbackCheckThreadBeforeCallback(v16);
    v8(v16, v12);
    TppCallbackEpilog((unsigned int *)v16);
  }
}
