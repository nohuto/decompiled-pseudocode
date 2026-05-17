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

void __fastcall TppCleanupGroupMemberDestroy(
        _QWORD *a1,
        unsigned __int64 a2,
        volatile signed __int32 *a3,
        unsigned __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  volatile signed __int32 *v11; // rcx
  void (__fastcall *v12)(unsigned __int64 *, unsigned __int64); // rdi
  void *v13; // rdx
  __int64 *v14; // rcx
  unsigned __int64 v15; // rbx
  _QWORD *v16; // rax
  __int64 v17; // r8
  _QWORD *v18; // rdx
  unsigned __int64 v19[32]; // [rsp+30h] [rbp-118h] BYREF

  if ( a1[2] )
  {
    TppCleanupGroupRemoveMember(a1);
    a3 = (volatile signed __int32 *)a1[2];
    if ( _InterlockedExchangeAdd(a3, 0xFFFFFFFF) == 1 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)TppHeapTag, a3);
  }
  v5 = a1[12];
  if ( v5 != -1 )
    RtlReleaseActivationContext(v5);
  v6 = a1[18];
  if ( v6 )
  {
    RtlAcquireSRWLockExclusive(v6 + 72, a2, (unsigned __int64)a3, a4);
    v7 = a1 + 19;
    v8 = a1[19];
    v9 = (_QWORD *)a1[20];
    if ( *(_QWORD **)(v8 + 8) != a1 + 19 || (_QWORD *)*v9 != v7 )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    a1[20] = a1 + 19;
    *v7 = v7;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1[18] + 72LL));
    v11 = (volatile signed __int32 *)a1[18];
    if ( v11 == (volatile signed __int32 *)TppPoolpGlobalPool )
    {
      v13 = &TppPoolpGlobalPoolLock;
      v14 = &TppPoolpGlobalPool;
    }
    else
    {
      if ( v11 != (volatile signed __int32 *)TppPoolpSerializedPool )
      {
        if ( _InterlockedExchangeAdd(v11, 0xFFFFFFFF) == 1 )
          TppPoolpFree(v11, v10);
        goto LABEL_13;
      }
      v13 = &TppPoolpSerializedPoolLock;
      v14 = &TppPoolpSerializedPool;
    }
    TppPoolpDereferenceGlobalPool(v14, v13);
    goto LABEL_13;
  }
  RtlAcquireSRWLockExclusive((unsigned __int64)&TppCleanupGroupMemberpNoPoolListLock, a2, (unsigned __int64)a3, a4);
  v16 = a1 + 19;
  v17 = a1[19];
  v18 = (_QWORD *)a1[20];
  if ( *(_QWORD **)(v17 + 8) != a1 + 19 || (_QWORD *)*v18 != v16 )
    __fastfail(3u);
  *v18 = v17;
  *(_QWORD *)(v17 + 8) = v18;
  a1[20] = a1 + 19;
  *v16 = v16;
  RtlReleaseSRWLockExclusive(&TppCleanupGroupMemberpNoPoolListLock);
LABEL_13:
  v12 = (void (__fastcall *)(unsigned __int64 *, unsigned __int64))a1[4];
  if ( v12 )
  {
    memset(v19, 0, 0xF8uLL);
    v19[11] = (unsigned __int64)v12;
    v15 = a1[11];
    v19[12] = v15;
    TppCallbackCheckThreadBeforeCallback(v19);
    v12(v19, v15);
    TppCallbackEpilog(v19);
  }
}
