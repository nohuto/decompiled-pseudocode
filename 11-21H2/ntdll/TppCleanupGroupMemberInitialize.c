/*
 * XREFs of TppCleanupGroupMemberInitialize @ 0x18001B960
 * Callers:
 *     TppWorkInitialize @ 0x18001C310 (TppWorkInitialize.c)
 *     TpAllocIoCompletion @ 0x18007D500 (TpAllocIoCompletion.c)
 *     TppAllocAlpcCompletion @ 0x180081594 (TppAllocAlpcCompletion.c)
 *     TpAllocJobNotification @ 0x180085B30 (TpAllocJobNotification.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlQueryInformationActivationContext @ 0x18001BC10 (RtlQueryInformationActivationContext.c)
 *     RtlAddRefActivationContext @ 0x18001C2D0 (RtlAddRefActivationContext.c)
 *     RtlReleaseActivationContext @ 0x18001C640 (RtlReleaseActivationContext.c)
 *     TppPoolpReferenceGlobalPool @ 0x18001E58C (TppPoolpReferenceGlobalPool.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18001ED68 (TppPoolpDereferenceGlobalPool.c)
 *     TppPoolpFree @ 0x18008701C (TppPoolpFree.c)
 */

__int64 __fastcall TppCleanupGroupMemberInitialize(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5)
{
  volatile signed __int32 **v6; // rsi
  volatile signed __int32 *v7; // rcx
  unsigned int v8; // eax
  int v9; // r14d
  __int64 v10; // rcx
  int InformationActivationContext; // ebx
  __int64 *v12; // rdx
  __int64 v13; // rax
  __int64 **v14; // rcx
  volatile signed __int64 *v15; // rsi
  volatile signed __int32 *v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rcx
  void *v19; // rdx
  __int64 *v20; // rcx
  __int64 v22; // rcx
  __int128 v23; // [rsp+48h] [rbp-30h] BYREF

  v23 = 0LL;
  *(_DWORD *)a1 = 1;
  *(_QWORD *)(a1 + 8) = a5;
  *(_OWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 88) = a2;
  *(_DWORD *)(a1 + 168) = a4;
  v6 = (volatile signed __int32 **)(a1 + 144);
  if ( !a3 )
  {
    *v6 = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 96) = 0LL;
    *(_QWORD *)(a1 + 136) = 0LL;
    v7 = 0LL;
    goto LABEL_30;
  }
  v7 = *(volatile signed __int32 **)(a3 + 8);
  *v6 = v7;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a3 + 16);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a3 + 24);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 96) = *(_QWORD *)(a3 + 40);
  *(_QWORD *)(a1 + 136) = *(_QWORD *)(a3 + 32);
  if ( *(_DWORD *)a3 <= 1u )
  {
LABEL_30:
    v8 = 1;
    goto LABEL_4;
  }
  v8 = *(_DWORD *)(a3 + 60);
  if ( v8 >= 3 )
    return (unsigned int)-1073741811;
LABEL_4:
  *(_DWORD *)(a1 + 192) = v8;
  v9 = a4 & 2;
  if ( (a4 & 2) != 0 && v7 )
    return (unsigned int)-1073741811;
  *(_QWORD *)(a1 + 104) = NtCurrentTeb()->SubProcessTag;
  *(_GUID *)(a1 + 112) = NtCurrentTeb()->ActivityId;
  *(_QWORD *)(a1 + 48) = a1 + 40;
  *(_QWORD *)(a1 + 40) = a1 + 40;
  v10 = *(_QWORD *)(a1 + 96);
  if ( v10 )
  {
    if ( v10 != -1 )
      RtlAddRefActivationContext();
  }
  else
  {
    InformationActivationContext = RtlQueryInformationActivationContext(1, 0, 0, 1, (__int64)&v23, 16LL, 0LL);
    if ( InformationActivationContext < 0 )
      return (unsigned int)InformationActivationContext;
    if ( (BYTE8(v23) & 1) != 0 )
    {
      RtlReleaseActivationContext(v23);
      *(_QWORD *)&v23 = -1LL;
    }
    *(_QWORD *)(a1 + 96) = v23;
  }
  if ( *v6 )
  {
    _InterlockedAdd(*v6, 1u);
LABEL_12:
    InformationActivationContext = 0;
    if ( *v6 )
    {
      RtlAcquireSRWLockExclusive((unsigned __int64)(*v6 + 18), a2, a3, a4);
      v12 = (__int64 *)(a1 + 152);
      v13 = (__int64)(*v6 + 20);
      v14 = (__int64 **)*((_QWORD *)*v6 + 11);
      if ( *v14 != (__int64 *)v13 )
        __fastfail(3u);
      *v12 = v13;
      *(_QWORD *)(a1 + 160) = v14;
      *v14 = v12;
      *(_QWORD *)(v13 + 8) = v12;
      v15 = (volatile signed __int64 *)(*v6 + 18);
    }
    else
    {
      v15 = (volatile signed __int64 *)&TppCleanupGroupMemberpNoPoolListLock;
      RtlAcquireSRWLockExclusive((unsigned __int64)&TppCleanupGroupMemberpNoPoolListLock, a2, a3, a4);
      v17 = (_QWORD *)(a1 + 152);
      v18 = off_180174990;
      if ( *off_180174990 != (_UNKNOWN *)&TppCleanupGroupMemberpNoPoolList )
        __fastfail(3u);
      *v17 = &TppCleanupGroupMemberpNoPoolList;
      *(_QWORD *)(a1 + 160) = v18;
      *v18 = v17;
      off_180174990 = (_UNKNOWN **)(a1 + 152);
    }
    RtlReleaseSRWLockExclusive(v15);
    v16 = *(volatile signed __int32 **)(a1 + 16);
    if ( v16 )
    {
      _InterlockedAdd(v16, 1u);
      InformationActivationContext = 0;
    }
    goto LABEL_27;
  }
  if ( v9 )
  {
    v19 = &TppPoolpSerializedPoolLock;
    v20 = &TppPoolpSerializedPool;
  }
  else
  {
    v19 = &TppPoolpGlobalPoolLock;
    v20 = &TppPoolpGlobalPool;
  }
  InformationActivationContext = TppPoolpReferenceGlobalPool(v20, v19, v6);
  if ( InformationActivationContext >= 0 )
    goto LABEL_12;
LABEL_27:
  if ( InformationActivationContext < 0 )
  {
    v22 = *(_QWORD *)(a1 + 96);
    if ( (unsigned __int64)(v22 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      RtlReleaseActivationContext(v22);
  }
  return (unsigned int)InformationActivationContext;
}
