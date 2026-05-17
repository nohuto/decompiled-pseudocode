/*
 * XREFs of TppCleanupGroupMemberInitialize @ 0x1800333E4
 * Callers:
 *     TppWorkInitialize @ 0x180033354 (TppWorkInitialize.c)
 *     TppAllocAlpcCompletion @ 0x18004B9D4 (TppAllocAlpcCompletion.c)
 *     TpAllocIoCompletion @ 0x18004BE60 (TpAllocIoCompletion.c)
 *     TpAllocJobNotification @ 0x180050CA0 (TpAllocJobNotification.c)
 * Callees:
 *     TppPoolpDereferenceGlobalPool @ 0x18002FCE0 (TppPoolpDereferenceGlobalPool.c)
 *     TppPoolpReferenceGlobalPool @ 0x180031978 (TppPoolpReferenceGlobalPool.c)
 *     RtlQueryInformationActivationContext @ 0x180033680 (RtlQueryInformationActivationContext.c)
 *     RtlAddRefActivationContext @ 0x180033D60 (RtlAddRefActivationContext.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseActivationContext @ 0x180033EF0 (RtlReleaseActivationContext.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     TppPoolpFree @ 0x1800850AC (TppPoolpFree.c)
 */

__int64 __fastcall TppCleanupGroupMemberInitialize(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  volatile signed __int32 **v6; // rsi
  unsigned int v7; // eax
  int v8; // r14d
  __int64 v9; // rcx
  __int64 v10; // rdx
  int InformationActivationContext; // ebx
  __int64 v12; // r8
  __int64 *v13; // rdx
  __int64 v14; // rax
  __int64 **v15; // rcx
  void *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  volatile signed __int32 *v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // rcx
  _PEB_LDR_DATA *v23; // rdx
  __int64 *v24; // rcx
  __int64 v26; // rcx
  __int128 v27; // [rsp+48h] [rbp-30h] BYREF

  v27 = 0LL;
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
    goto LABEL_30;
  }
  *v6 = *(volatile signed __int32 **)(a3 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a3 + 16);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a3 + 24);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 96) = *(_QWORD *)(a3 + 40);
  *(_QWORD *)(a1 + 136) = *(_QWORD *)(a3 + 32);
  if ( *(_DWORD *)a3 <= 1u )
  {
LABEL_30:
    v7 = 1;
    goto LABEL_4;
  }
  v7 = *(_DWORD *)(a3 + 60);
  if ( v7 >= 3 )
    return (unsigned int)-1073741811;
LABEL_4:
  *(_DWORD *)(a1 + 192) = v7;
  v8 = a4 & 2;
  if ( (a4 & 2) != 0 && *v6 )
    return (unsigned int)-1073741811;
  *(_QWORD *)(a1 + 104) = NtCurrentTeb()->SubProcessTag;
  *(_GUID *)(a1 + 112) = NtCurrentTeb()->ActivityId;
  *(_QWORD *)(a1 + 48) = a1 + 40;
  *(_QWORD *)(a1 + 40) = a1 + 40;
  v9 = *(_QWORD *)(a1 + 96);
  if ( v9 )
  {
    if ( v9 != -1 )
      RtlAddRefActivationContext(v9, a1, a3);
  }
  else
  {
    InformationActivationContext = RtlQueryInformationActivationContext(1, 0, 0, 1, (__int64)&v27, 16LL, 0LL);
    if ( InformationActivationContext < 0 )
      return (unsigned int)InformationActivationContext;
    if ( (BYTE8(v27) & 1) != 0 )
    {
      RtlReleaseActivationContext(v27, v10, v12, a4);
      *(_QWORD *)&v27 = -1LL;
    }
    *(_QWORD *)(a1 + 96) = v27;
  }
  if ( *v6 )
  {
    _InterlockedAdd(*v6, 1u);
LABEL_12:
    InformationActivationContext = 0;
    if ( *v6 )
    {
      RtlAcquireSRWLockExclusive(*v6 + 18);
      v13 = (__int64 *)(a1 + 152);
      v14 = (__int64)(*v6 + 20);
      v15 = (__int64 **)*((_QWORD *)*v6 + 11);
      if ( *v15 != (__int64 *)v14 )
        __fastfail(3u);
      *v13 = v14;
      *(_QWORD *)(a1 + 160) = v15;
      *v15 = v13;
      *(_QWORD *)(v14 + 8) = v13;
      v16 = (void *)(*v6 + 18);
    }
    else
    {
      v16 = &TppCleanupGroupMemberpNoPoolListLock;
      RtlAcquireSRWLockExclusive(&TppCleanupGroupMemberpNoPoolListLock);
      v21 = (_QWORD *)(a1 + 152);
      v22 = off_18017E9F0;
      if ( *off_18017E9F0 != (_UNKNOWN *)&TppCleanupGroupMemberpNoPoolList )
        __fastfail(3u);
      *v21 = &TppCleanupGroupMemberpNoPoolList;
      *(_QWORD *)(a1 + 160) = v22;
      *v22 = v21;
      off_18017E9F0 = (_UNKNOWN **)(a1 + 152);
    }
    RtlReleaseSRWLockExclusive(v16);
    v20 = *(volatile signed __int32 **)(a1 + 16);
    if ( v20 )
    {
      _InterlockedAdd(v20, 1u);
      InformationActivationContext = 0;
    }
    goto LABEL_27;
  }
  if ( v8 )
  {
    v23 = (_PEB_LDR_DATA *)&TppPoolpSerializedPoolLock;
    v24 = &TppPoolpSerializedPool;
  }
  else
  {
    v23 = (_PEB_LDR_DATA *)&TppPoolpGlobalPoolLock;
    v24 = &TppPoolpGlobalPool;
  }
  InformationActivationContext = TppPoolpReferenceGlobalPool((volatile signed __int32 **)v24, v23, v6, a4);
  if ( InformationActivationContext >= 0 )
    goto LABEL_12;
LABEL_27:
  if ( InformationActivationContext < 0 )
  {
    v26 = *(_QWORD *)(a1 + 96);
    if ( (unsigned __int64)(v26 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      RtlReleaseActivationContext(v26, v17, v18, v19);
  }
  return (unsigned int)InformationActivationContext;
}
