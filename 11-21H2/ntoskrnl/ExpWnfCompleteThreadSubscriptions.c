/*
 * XREFs of ExpWnfCompleteThreadSubscriptions @ 0x1407931C0
 * Callers:
 *     NtGetCompleteWnfStateSubscription @ 0x140792DB0 (NtGetCompleteWnfStateSubscription.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029F120 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029F350 (ExfAcquirePushLockSharedEx.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1407938B0 (ExpWnfNotifyNameSubscribers.c)
 *     ExpCaptureWnfStateName @ 0x14079474C (ExpCaptureWnfStateName.c)
 *     ExpWnfLookupNameInstance @ 0x140798234 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x140798334 (ExpWnfResolveScopeInstance.c)
 */

__int64 __fastcall ExpWnfCompleteThreadSubscriptions(_QWORD *a1, __int64 a2, __int64 a3, int a4, int a5)
{
  struct _EX_RUNDOWN_REF *v7; // rdi
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 *v12; // rbx
  int v13; // r15d
  int v14; // eax
  __int64 *v15; // rcx
  __int64 **v16; // rax
  __int64 v17; // rcx
  __int64 v19; // rdx
  __int64 v20; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int64 v21; // [rsp+38h] [rbp-18h] BYREF
  int v22[2]; // [rsp+40h] [rbp-10h] BYREF

  v21 = 0LL;
  v7 = 0LL;
  LODWORD(v20) = 0;
  if ( (int)ExpCaptureWnfStateName(a2, &v21, 0LL) < 0 )
    return 3221225485LL;
  v9 = KeAbPreAcquire((__int64)(a1 + 10), 0LL);
  if ( _InterlockedCompareExchange64(a1 + 10, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(a1 + 10, 0, v9, (__int64)(a1 + 10));
  if ( v9 )
    *(_BYTE *)(v9 + 18) = 1;
  v10 = KeAbPreAcquire((__int64)(a1 + 13), 0LL);
  v11 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1 + 26, 0LL) )
    ExfAcquirePushLockExclusiveEx(a1 + 13, v10, (__int64)(a1 + 13));
  if ( v11 )
    *(_BYTE *)(v11 + 18) = 1;
  v12 = (__int64 *)a1[14];
  if ( v12 == a1 + 14 )
  {
LABEL_35:
    v13 = v20;
  }
  else
  {
    while ( *(v12 - 11) != a3 || v21 != *(v12 - 6) )
    {
      v12 = (__int64 *)*v12;
      if ( v12 == a1 + 14 )
        goto LABEL_35;
    }
    v13 = 1;
    if ( a4 != *((_DWORD *)v12 + 6) || *((int *)v12 + 4) <= 1 )
      goto LABEL_26;
    v14 = *((_DWORD *)v12 + 5);
    if ( v14 )
    {
      *((_DWORD *)v12 + 4) = 1;
      if ( a5 == -1073741267 && (v14 & 1) == 0 )
        *((_DWORD *)v12 + 5) = v14 | 1;
LABEL_20:
      if ( (*((_BYTE *)v12 + 20) & 1) == 0 && (v12[3] & 1) != 0 )
      {
        v17 = *(v12 - 7);
        if ( v17 )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v17 + 164), 0xFFFFFFFF) == 1
            && ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(v12 - 7) + 8)) )
          {
            v7 = (struct _EX_RUNDOWN_REF *)*(v12 - 7);
          }
        }
      }
      *((_DWORD *)v12 + 6) = 0;
      goto LABEL_26;
    }
    if ( !a5 )
    {
      *((_DWORD *)v12 + 4) = 0;
      v15 = (__int64 *)*v12;
      if ( *(__int64 **)(*v12 + 8) != v12 || (v16 = (__int64 **)v12[1], *v16 != v12) )
        __fastfail(3u);
      *v16 = v15;
      v15[1] = (__int64)v16;
      if ( *((_DWORD *)v12 + 4) == 3 )
        goto LABEL_26;
      goto LABEL_20;
    }
    *((_DWORD *)v12 + 4) = 3;
  }
LABEL_26:
  if ( (_InterlockedExchangeAdd64(a1 + 13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 13);
  KeAbPostRelease((ULONG_PTR)(a1 + 13));
  if ( _InterlockedCompareExchange64(a1 + 10, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(a1 + 10);
  KeAbPostRelease((ULONG_PTR)(a1 + 10));
  if ( !v13 && (a4 & 1) != 0 )
  {
    v19 = a1[1];
    v20 = 0LL;
    *(_QWORD *)v22 = 0LL;
    ExpWnfResolveScopeInstance((int)v22, v19, 0, (v21 >> 6) & 0xF, 0LL);
    if ( (int)ExpWnfLookupNameInstance(*(_QWORD *)v22, v21, &v20) >= 0 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v20 + 164), 0xFFFFFFFF) == 1 )
        v7 = (struct _EX_RUNDOWN_REF *)v20;
      else
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v20 + 8));
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)v22 + 8LL));
  }
  if ( v7 )
  {
    ExpWnfNotifyNameSubscribers(v7, 8LL, 1LL, 1LL);
    ExReleaseRundownProtection(v7 + 1);
  }
  return 0LL;
}
