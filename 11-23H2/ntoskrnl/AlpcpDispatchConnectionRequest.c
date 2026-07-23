/*
 * XREFs of AlpcpDispatchConnectionRequest @ 0x140716258
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x140715DD4 (AlpcpProcessConnectionRequest.c)
 *     NtSecureConnectPort @ 0x1407C4100 (NtSecureConnectPort.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230E80 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     ObReferenceObjectSafe @ 0x1403379A0 (ObReferenceObjectSafe.c)
 *     PsGetProcessJob @ 0x1403610D0 (PsGetProcessJob.c)
 *     PsGetJobEffectiveFreezeCount @ 0x1405A41C8 (PsGetJobEffectiveFreezeCount.c)
 *     AlpcpSetOwnerPortMessage @ 0x14071C1F4 (AlpcpSetOwnerPortMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x14073A070 (AlpcpCompleteDispatchMessage.c)
 */

__int64 __fastcall AlpcpDispatchConnectionRequest(__int64 *a1)
{
  __int64 v1; // r13
  __int64 v2; // rsi
  int v4; // r12d
  __int64 *v5; // r15
  volatile signed __int64 *v6; // rbx
  __int64 v7; // rbp
  volatile signed __int64 *v8; // rdi
  signed __int64 v9; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  signed __int32 v11; // eax
  unsigned int v13; // ebx
  __int64 v14; // rcx
  __int64 ProcessJob; // rax
  signed __int64 v16; // rsi

  v1 = *a1;
  v2 = a1[1];
  v4 = *((_DWORD *)a1 + 12);
  a1[4] = 0LL;
  a1[3] = 0LL;
  a1[5] = 0LL;
  v5 = *(__int64 **)(v1 + 16);
  v6 = v5 - 2;
  ExAcquirePushLockSharedEx((ULONG_PTR)(v5 - 2), 0LL);
  v7 = *v5;
  if ( *v5 && ObReferenceObjectSafe(*v5) )
  {
    v8 = (volatile signed __int64 *)(v7 + 352);
    ExAcquirePushLockSharedEx(v7 + 352, 0LL);
    if ( (*(_DWORD *)(v7 + 416) & 0x20) != 0 )
    {
      if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v5 - 2);
      KeAbPostRelease((ULONG_PTR)(v5 - 2));
      if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v7 + 352));
      KeAbPostRelease(v7 + 352);
      v13 = -1073741769;
      goto LABEL_38;
    }
    if ( (*(_DWORD *)(*a1 + 256) & 0x800000) == 0 || (*(_DWORD *)(a1[1] + 40) & 0x200) != 0 )
    {
      v9 = 0LL;
    }
    else
    {
      v9 = 0LL;
      v14 = 0LL;
      if ( (*(_QWORD *)(v7 + 24) & 1) == 0 )
        v14 = *(_QWORD *)(v7 + 24);
      if ( v14 )
      {
        ProcessJob = PsGetProcessJob(v14);
        v9 = 0LL;
        if ( ProcessJob )
        {
          if ( (unsigned int)PsGetJobEffectiveFreezeCount(ProcessJob) )
          {
            v16 = (unsigned int)(v9 + 17);
            if ( v16 != _InterlockedCompareExchange64(v6, v9, v16) )
              ExfReleasePushLockShared(v5 - 2);
            KeAbPostRelease((ULONG_PTR)(v5 - 2));
            if ( v16 != _InterlockedCompareExchange64(v8, 0LL, v16) )
              ExfReleasePushLockShared((signed __int64 *)(v7 + 352));
            KeAbPostRelease(v7 + 352);
            v13 = -1073741770;
LABEL_38:
            ObfDereferenceObject((PVOID)v7);
            return v13;
          }
        }
      }
    }
    if ( (unsigned __int64)*(unsigned __int16 *)(v2 + 242) > *(_QWORD *)(v7 + 272) )
    {
      if ( _InterlockedCompareExchange64(v6, v9, 17LL) != 17 )
        ExfReleasePushLockShared(v5 - 2);
      KeAbPostRelease((ULONG_PTR)(v5 - 2));
      if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v7 + 352));
      KeAbPostRelease(v7 + 352);
      v13 = -1073741789;
      goto LABEL_38;
    }
    if ( (v4 & 0x20000) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0x20) != 0 )
      {
        if ( _InterlockedCompareExchange64(v6, v9, 17LL) != 17 )
          ExfReleasePushLockShared(v5 - 2);
        KeAbPostRelease((ULONG_PTR)(v5 - 2));
        if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v7 + 352));
        KeAbPostRelease(v7 + 352);
        v13 = -1073741823;
        goto LABEL_38;
      }
      ++*(_WORD *)(v2 - 30);
      _InterlockedExchange64((volatile __int64 *)&CurrentThread[1].RelativeTimerBias, v2);
      ++*(_WORD *)(v2 - 30);
      *(_QWORD *)(v2 + 32) = CurrentThread;
    }
    *(_DWORD *)(v2 + 40) &= ~0x200u;
    *(_WORD *)(v2 + 244) |= 0x2000u;
    v11 = _InterlockedIncrement((volatile signed __int32 *)(v7 + 400));
    *(_QWORD *)(v2 + 120) = v9;
    *(_DWORD *)(v2 + 44) = v11;
    *(_QWORD *)(v2 + 184) = v5;
    *(_QWORD *)(v2 + 192) = v7;
    AlpcpSetOwnerPortMessage(v2, v1);
    a1[4] = v7;
    a1[2] = (__int64)v5;
    AlpcpCompleteDispatchMessage(a1);
    return 0LL;
  }
  if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v5 - 2);
  KeAbPostRelease((ULONG_PTR)(v5 - 2));
  return 3221225527LL;
}
