/*
 * XREFs of TppCleanupGroupMemberDestroy @ 0x180033038
 * Callers:
 *     TppSimplepFree @ 0x180032EC0 (TppSimplepFree.c)
 *     TpSimpleTryPost @ 0x180032F00 (TpSimpleTryPost.c)
 *     TppWorkInitialize @ 0x1800331F4 (TppWorkInitialize.c)
 *     TppAllocAlpcCompletion @ 0x18004B874 (TppAllocAlpcCompletion.c)
 *     TpAllocIoCompletion @ 0x18004BD00 (TpAllocIoCompletion.c)
 *     TpAllocJobNotification @ 0x180050B40 (TpAllocJobNotification.c)
 *     TppDestroyTimer @ 0x18007B3AC (TppDestroyTimer.c)
 *     TppWorkpFree @ 0x18007C340 (TppWorkpFree.c)
 *     TppIopFree @ 0x180081F80 (TppIopFree.c)
 *     TppAlpcpFree @ 0x1800869E0 (TppAlpcpFree.c)
 *     TppJobpFree @ 0x180088360 (TppJobpFree.c)
 * Callees:
 *     TppPoolpDereferenceGlobalPool @ 0x18002FB10 (TppPoolpDereferenceGlobalPool.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseActivationContext @ 0x180033D90 (RtlReleaseActivationContext.c)
 *     TppCallbackEpilog @ 0x18003620C (TppCallbackEpilog.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     TppCleanupGroupRemoveMember @ 0x18007B408 (TppCleanupGroupRemoveMember.c)
 *     TppCallbackCheckThreadBeforeCallback @ 0x18007E30C (TppCallbackCheckThreadBeforeCallback.c)
 *     TppPoolpFree @ 0x1800858AC (TppPoolpFree.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall TppCleanupGroupMemberDestroy(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  volatile signed __int32 *v7; // rcx
  __int64 result; // rax
  void (__fastcall *v9)(_QWORD, _QWORD); // rdi
  void *v10; // rdx
  __int64 *v11; // rcx
  __int64 v12; // r11
  volatile signed __int32 *v13; // r8
  _QWORD *v14; // rax
  __int64 v15; // r8
  _QWORD *v16; // rdx
  _BYTE v17[88]; // [rsp+30h] [rbp-118h] BYREF
  void (__fastcall *v18)(_QWORD, _QWORD); // [rsp+88h] [rbp-C0h]
  __int64 v19; // [rsp+90h] [rbp-B8h]

  if ( a1[2] )
  {
    TppCleanupGroupRemoveMember(a1);
    v13 = (volatile signed __int32 *)a1[2];
    if ( _InterlockedExchangeAdd(v13, 0xFFFFFFFF) == 1 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)TppHeapTag, v13);
  }
  v2 = a1[12];
  if ( v2 != -1 )
    RtlReleaseActivationContext(v2);
  v3 = a1[18];
  if ( v3 )
  {
    RtlAcquireSRWLockExclusive(v3 + 72);
    v4 = a1 + 19;
    v5 = a1[19];
    v6 = (_QWORD *)a1[20];
    if ( *(_QWORD **)(v5 + 8) != a1 + 19 || (_QWORD *)*v6 != v4 )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    a1[20] = a1 + 19;
    *v4 = v4;
    RtlReleaseSRWLockExclusive(a1[18] + 72LL);
    v7 = (volatile signed __int32 *)a1[18];
    if ( v7 == (volatile signed __int32 *)TppPoolpGlobalPool )
    {
      v10 = &TppPoolpGlobalPoolLock;
      v11 = &TppPoolpGlobalPool;
    }
    else
    {
      if ( v7 != (volatile signed __int32 *)TppPoolpSerializedPool )
      {
        result = (unsigned int)_InterlockedExchangeAdd(v7, 0xFFFFFFFF);
        if ( (_DWORD)result == 1 )
          result = TppPoolpFree(v7);
        goto LABEL_13;
      }
      v10 = &TppPoolpSerializedPoolLock;
      v11 = &TppPoolpSerializedPool;
    }
    result = TppPoolpDereferenceGlobalPool((const void **)v11, (__int64)v10);
    goto LABEL_13;
  }
  RtlAcquireSRWLockExclusive(&TppCleanupGroupMemberpNoPoolListLock);
  v14 = a1 + 19;
  v15 = a1[19];
  v16 = (_QWORD *)a1[20];
  if ( *(_QWORD **)(v15 + 8) != a1 + 19 || (_QWORD *)*v16 != v14 )
    __fastfail(3u);
  *v16 = v15;
  *(_QWORD *)(v15 + 8) = v16;
  a1[20] = a1 + 19;
  *v14 = v14;
  result = RtlReleaseSRWLockExclusive(&TppCleanupGroupMemberpNoPoolListLock);
LABEL_13:
  v9 = (void (__fastcall *)(_QWORD, _QWORD))a1[4];
  if ( v9 )
  {
    memset_thunk_772440563353939046(v17, 0, 0x100uLL);
    v18 = v9;
    v19 = a1[11];
    TppCallbackCheckThreadBeforeCallback(v17);
    v9(v17, v12);
    return TppCallbackEpilog(v17);
  }
  return result;
}
