/*
 * XREFs of ExpWnfSubscribeNameInstance @ 0x140713C00
 * Callers:
 *     ExpWnfSubscribeWnfStateChange @ 0x140712AD4 (ExpWnfSubscribeWnfStateChange.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExAcquireRundownProtection_0 @ 0x14028B5F0 (ExAcquireRundownProtection_0.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD2D0 (ExfAcquirePushLockSharedEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExpWnfUpdateSubscription @ 0x140714020 (ExpWnfUpdateSubscription.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140714638 (ExpWnfNotifyNameSubscribers.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall ExpWnfSubscribeNameInstance(
        __int64 a1,
        struct _KPROCESS *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        char a7,
        signed __int64 *a8,
        _QWORD *a9,
        _QWORD *a10,
        _DWORD *a11)
{
  unsigned __int64 v11; // rsi
  unsigned int v12; // edi
  __int64 v14; // r14
  signed __int64 *v17; // rsi
  unsigned __int64 v18; // r14
  int updated; // r14d
  char *Pool2; // rax
  char *v21; // r15
  signed __int64 v22; // r12
  unsigned __int64 *v23; // rsi
  __int64 v24; // rax
  __int64 v25; // r14
  volatile signed __int64 *v26; // r14
  __int64 v27; // rax
  signed __int8 v28; // cf
  unsigned __int64 *v29; // rcx
  unsigned __int64 v30; // rax
  unsigned __int64 **v31; // rdx
  _QWORD *v32; // rdx
  _QWORD *v33; // rax
  signed __int32 v34; // ecx
  int v35; // eax
  __int64 v36; // rdx
  int v38; // [rsp+50h] [rbp-20h] BYREF
  int v39; // [rsp+54h] [rbp-1Ch] BYREF
  __int64 v40; // [rsp+58h] [rbp-18h] BYREF
  unsigned __int64 v41; // [rsp+60h] [rbp-10h]
  __int64 v42; // [rsp+68h] [rbp-8h]
  int v45; // [rsp+C8h] [rbp+58h]

  v45 = a4;
  v11 = a2[1].EndPadding[0];
  v12 = 0;
  v14 = a3;
  v40 = 0LL;
  v41 = v11;
  *a11 = 0;
  v38 = 0;
  v39 = 0;
  if ( a7 == 1 )
  {
    v17 = (signed __int64 *)(v11 + 80);
    v18 = KeAbPreAcquire((__int64)v17, 0LL);
    if ( _InterlockedCompareExchange64(v17, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v17, 0LL, v18, (__int64)v17);
    if ( v18 )
      *(_BYTE *)(v18 + 18) = 1;
    updated = ExpWnfUpdateSubscription(a1, v41, a3, a4, a6, (__int64)&v40, (__int64)&v38, (__int64)&v39, (__int64)a8);
    if ( _InterlockedCompareExchange64(v17, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v17);
    KeAbPostRelease((ULONG_PTR)v17);
    if ( updated >= 0 )
      goto LABEL_46;
    v11 = v41;
    v14 = a3;
  }
  Pool2 = (char *)ExAllocatePool2((PsInitialSystemProcess != a2) + 256LL, 136LL, 543583831LL);
  v21 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  memset(Pool2, 0, 0x88uLL);
  *(_DWORD *)v21 = 8915205;
  *((_DWORD *)v21 + 24) = a5;
  *((_DWORD *)v21 + 25) = a6;
  *((_QWORD *)v21 + 10) = v14;
  *((_QWORD *)v21 + 11) = a4;
  *((_QWORD *)v21 + 1) = 0LL;
  *((_QWORD *)v21 + 7) = *(_QWORD *)(a1 + 40);
  if ( a7 )
  {
    do
      v22 = _InterlockedIncrement64(&ExpWnfSubcriptionIdCounter);
    while ( !v22 );
    if ( a8 )
      *a8 = v22;
  }
  else
  {
    v22 = (signed __int64)v21;
    if ( a9 )
      *a9 = v21;
  }
  v23 = (unsigned __int64 *)(v11 + 80);
  v24 = KeAbPreAcquire((__int64)v23, 0LL);
  v25 = v24;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v23, 0LL) )
    ExfAcquirePushLockExclusiveEx(v23, v24, (__int64)v23);
  if ( v25 )
    *(_BYTE *)(v25 + 18) = 1;
  v26 = (volatile signed __int64 *)(a1 + 112);
  v27 = KeAbPreAcquire(a1 + 112, 0LL);
  v28 = _interlockedbittestandset64((volatile signed __int32 *)(a1 + 112), 0LL);
  v42 = v27;
  if ( v28 )
  {
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 112), v27, a1 + 112);
    v27 = v42;
  }
  if ( v27 )
    *(_BYTE *)(v27 + 18) = 1;
  if ( *(_QWORD *)(a1 + 48) )
  {
    if ( a7 != 1
      || (int)ExpWnfUpdateSubscription(a1, v41, a3, v45, a6, (__int64)&v40, (__int64)&v38, (__int64)&v39, (__int64)a8) < 0 )
    {
      *((_QWORD *)v21 + 5) = a2;
      *((_QWORD *)v21 + 6) = a1;
      *((_QWORD *)v21 + 2) = v22;
      ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)v21 + 1);
      if ( a9 )
        ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)v21 + 1);
      v29 = (unsigned __int64 *)(v21 + 24);
      v30 = v41 + 88;
      v31 = *(unsigned __int64 ***)(v41 + 96);
      if ( *v31 != (unsigned __int64 *)(v41 + 88)
        || (*v29 = v30,
            *((_QWORD *)v21 + 4) = v31,
            *v31 = v29,
            *(_QWORD *)(v30 + 8) = v29,
            v32 = *(_QWORD **)(a1 + 128),
            v33 = v21 + 64,
            *v32 != a1 + 120) )
      {
        __fastfail(3u);
      }
      *v33 = a1 + 120;
      *((_QWORD *)v21 + 9) = v32;
      *v32 = v33;
      *(_QWORD *)(a1 + 128) = v33;
      if ( (v21[100] & 1) != 0 )
      {
        v34 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 160), 1u);
        v35 = v38;
        if ( !v34 )
          v35 = 1;
        v38 = v35;
      }
      if ( (_InterlockedExchangeAdd64(v26, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 112));
      KeAbPostRelease(a1 + 112);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v23);
      KeAbPostRelease((ULONG_PTR)v23);
      *a10 = v21;
      goto LABEL_39;
    }
    if ( (_InterlockedExchangeAdd64(v26, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 112));
    KeAbPostRelease(a1 + 112);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v23);
    KeAbPostRelease((ULONG_PTR)v23);
    ExFreePoolWithTag(v21, 0x20666E57u);
LABEL_46:
    *a10 = v40;
LABEL_39:
    v36 = 0LL;
    if ( v39 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 164), 0xFFFFFFFF) == 1 )
      v36 = 8LL;
    if ( v38 > 0 )
    {
      v36 = (unsigned int)v36 | 2;
    }
    else if ( v38 < 0 )
    {
      v36 = (unsigned int)v36 | 4;
    }
    if ( (_DWORD)v36 )
    {
      LOBYTE(v12) = a7 != 0;
      ExpWnfNotifyNameSubscribers(a1, v36, 1LL, v12);
      *a11 = 1;
    }
    return 0LL;
  }
  if ( (_InterlockedExchangeAdd64(v26, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 112));
  KeAbPostRelease(a1 + 112);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v23);
  KeAbPostRelease((ULONG_PTR)v23);
  ExFreePoolWithTag(v21, 0x20666E57u);
  return 3221225524LL;
}
