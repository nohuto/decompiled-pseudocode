/*
 * XREFs of ExRegisterHost @ 0x1408486C4
 * Callers:
 *     IopInitializeIoRate @ 0x1403CE444 (IopInitializeIoRate.c)
 *     EtwpInitializeProcessorTrace @ 0x140848440 (EtwpInitializeProcessorTrace.c)
 *     ExpInitSystemPhase1 @ 0x140AFCEF0 (ExpInitSystemPhase1.c)
 *     KeInitSystem @ 0x140B03800 (KeInitSystem.c)
 *     PspInitializeBackgroundActivityModeratorCallouts @ 0x140B1E364 (PspInitializeBackgroundActivityModeratorCallouts.c)
 *     PspInitializeDesktopActivityModeratorCallouts @ 0x140B1E3C4 (PspInitializeDesktopActivityModeratorCallouts.c)
 *     PspInitializeHwTraceCallouts @ 0x140B1E41C (PspInitializeHwTraceCallouts.c)
 *     PspInitializeMMCSSCallouts @ 0x140B1E47C (PspInitializeMMCSSCallouts.c)
 *     PspInitializeOctagonExtensionHost @ 0x140B1E4DC (PspInitializeOctagonExtensionHost.c)
 *     PspInitializeSecExtensionHost @ 0x140B1E534 (PspInitializeSecExtensionHost.c)
 *     PspInitializeNetRateControl @ 0x140B1E58C (PspInitializeNetRateControl.c)
 *     VmInitSystem @ 0x140B1E5EC (VmInitSystem.c)
 *     SepInitializeAuthorizationCallbacks @ 0x140B1E6B0 (SepInitializeAuthorizationCallbacks.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029F120 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ExpFindHost @ 0x14084881C (ExpFindHost.c)
 *     ExpDereferenceHost @ 0x140A0282C (ExpDereferenceHost.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExRegisterHost(_QWORD *a1, __int64 a2, unsigned __int16 *a3)
{
  char *PoolWithTag; // rax
  unsigned int v6; // edi
  _QWORD *v7; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rax
  signed __int8 v10; // cf
  __int64 v11; // rbp
  __int64 Host; // rbp
  _QWORD *v13; // rax
  char v14; // si

  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)*((_DWORD *)a3 + 2), 0x60uLL, 0x48457845u);
  v6 = 0;
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag[88] &= ~1u;
  *((_DWORD *)PoolWithTag + 4) = 1;
  *((_QWORD *)PoolWithTag + 10) = 0LL;
  *(_OWORD *)(PoolWithTag + 24) = *(_OWORD *)a3;
  *(_OWORD *)(PoolWithTag + 40) = *((_OWORD *)a3 + 1);
  *((_QWORD *)PoolWithTag + 7) = *((_QWORD *)a3 + 4);
  *((_QWORD *)PoolWithTag + 9) = 0LL;
  *((_QWORD *)PoolWithTag + 8) = 0LL;
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)PoolWithTag + 8);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = KeAbPreAcquire((__int64)&ExpHostListLock, 0LL);
  v10 = _interlockedbittestandset64((volatile signed __int32 *)&ExpHostListLock, 0LL);
  v11 = v9;
  if ( v10 )
    ExfAcquirePushLockExclusiveEx(&ExpHostListLock, v9, (__int64)&ExpHostListLock);
  if ( v11 )
    *(_BYTE *)(v11 + 18) = 1;
  Host = ExpFindHost(*a3, a3[1]);
  if ( Host )
  {
    v6 = -1073741771;
    ExpDereferenceHost(v7);
    ExpDereferenceHost(Host);
  }
  else
  {
    v13 = (_QWORD *)qword_140D3CF40;
    if ( *(__int64 **)qword_140D3CF40 != &ExpHostList )
      __fastfail(3u);
    *v7 = &ExpHostList;
    v7[1] = v13;
    *v13 = v7;
    qword_140D3CF40 = (__int64)v7;
    *a1 = v7;
  }
  v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpHostListLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
    ExfTryToWakePushLock(&ExpHostListLock);
  KeAbPostRelease((ULONG_PTR)&ExpHostListLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v6;
}
