/*
 * XREFs of ExInitLicenseData @ 0x1408114F8
 * Callers:
 *     sub_140609258 @ 0x140609258 (sub_140609258.c)
 *     Phase1InitializationIoReady @ 0x140B532AC (Phase1InitializationIoReady.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D390 (PsGetCurrentServerSiloGlobals.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     PsGetCurrentServerSilo @ 0x140289E70 (PsGetCurrentServerSilo.c)
 *     PsIsHostSilo @ 0x1402AF8D0 (PsIsHostSilo.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     ClipInitHandles @ 0x1403750E0 (ClipInitHandles.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     memset @ 0x140435400 (memset.c)
 *     ExpSetKernelDataProtection @ 0x1407AEDE0 (ExpSetKernelDataProtection.c)
 *     sub_140812060 @ 0x140812060 (sub_140812060.c)
 *     ExGetExpirationDate @ 0x140812204 (ExGetExpirationDate.c)
 *     ntoskrnl_24 @ 0x1409F9AC0 (ntoskrnl_24.c)
 *     SLUpdateLicenseDataInternal @ 0x1409FA744 (SLUpdateLicenseDataInternal.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     sub_140B3C244 @ 0x140B3C244 (sub_140B3C244.c)
 */

_QWORD *ExInitLicenseData()
{
  _QWORD *v0; // rdi
  char v1; // r12
  __int64 CurrentServerSilo; // rax
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v4; // rbx
  char v5; // al
  struct _KTHREAD *v6; // rax
  char v7; // al
  _QWORD *result; // rax
  struct _KTHREAD *v9; // rax
  int v10; // r15d
  char v11; // r14
  char v12; // cl
  __int64 v13; // rdx
  __int128 *v14; // rcx
  __int64 v15; // r8
  unsigned __int64 v16; // rax
  struct _KTHREAD *v17; // rax
  char v18; // al
  struct _KTHREAD *v19; // rax
  __int64 v20; // rax
  char v21; // si
  int ExpirationDate; // eax
  LARGE_INTEGER v23; // rcx
  bool v24; // sf
  unsigned int v25; // eax
  LARGE_INTEGER Time; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v27[5]; // [rsp+28h] [rbp-48h] BYREF
  char v28; // [rsp+50h] [rbp-20h]
  int v29; // [rsp+51h] [rbp-1Fh]
  __int16 v30; // [rsp+55h] [rbp-1Bh]
  char v31; // [rsp+57h] [rbp-19h]
  __int128 v32; // [rsp+58h] [rbp-18h] BYREF

  Time.QuadPart = 0LL;
  v0 = (_QWORD *)*((_QWORD *)PsGetCurrentServerSiloGlobals() + 113);
  v1 = *((_BYTE *)v0 + 46992);
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( PsIsHostSilo(CurrentServerSilo) )
  {
    ClipInitHandles();
    sub_140B3C244();
  }
  CurrentThread = KeGetCurrentThread();
  v4 = v0 + 5855;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v0 + 5855), 0LL);
  v29 = 0;
  v30 = 0;
  v31 = 0;
  memset(v27, 0, 32);
  v27[4] = 10800LL;
  v28 = 1;
  if ( InitSafeBootMode || InitIsWinPEMode )
    v28 = 0;
  ExpSetKernelDataProtection((__int64)v0, (__int64)v27, -1, 1);
  v5 = _InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v5 & 2) != 0 && (v5 & 4) == 0 )
    ExfTryToWakePushLock(v0 + 5855);
  KeAbPostRelease((ULONG_PTR)(v0 + 5855));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v6 = KeGetCurrentThread();
  --v6->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v0 + 5855), 0LL);
  *((_DWORD *)v0 + 2) = 0;
  v7 = _InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v7 & 2) != 0 && (v7 & 4) == 0 )
    ExfTryToWakePushLock(v0 + 5855);
  KeAbPostRelease((ULONG_PTR)(v0 + 5855));
  result = KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( *v0 )
  {
    v9 = KeGetCurrentThread();
    --v9->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v0 + 5855), 0LL);
    v10 = sub_140812060(v0);
    if ( v10 == -1073741762 )
      *((_BYTE *)v0 + 46992) = 1;
    v11 = *((_BYTE *)v0 + 46992);
    v12 = _InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v12 & 2) != 0 && (v12 & 4) == 0 )
      ExfTryToWakePushLock(v0 + 5855);
    KeAbPostRelease((ULONG_PTR)(v0 + 5855));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( !v1 && v11 )
      ntoskrnl_24(&KernelLicensingCacheCorrupt);
    if ( v10 >= 0 && !v11 )
    {
      v13 = *(unsigned int *)(*v0 + 81920LL);
      if ( qword_140D53510 )
        ((void (__fastcall *)(_QWORD *, __int64))qword_140D53510)(v0, v13);
      else
        SLUpdateLicenseDataInternal(v0, v13, *v0);
    }
    v14 = &v32;
    v15 = 16LL;
    do
    {
      v16 = __rdtsc();
      *(_BYTE *)v14 = v16;
      v14 = (__int128 *)((char *)v14 + 1);
      --v15;
    }
    while ( v15 );
    v17 = KeGetCurrentThread();
    --v17->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v0 + 5855), 0LL);
    *(_OWORD *)((char *)v0 + 46993) = v32;
    v18 = _InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v18 & 2) != 0 && (v18 & 4) == 0 )
      ExfTryToWakePushLock(v0 + 5855);
    KeAbPostRelease((ULONG_PTR)(v0 + 5855));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v19 = KeGetCurrentThread();
    --v19->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v0 + 5855), 0LL);
    v20 = PsGetCurrentServerSilo();
    if ( !PsIsHostSilo(v20) && *v0 )
      ExFreePoolWithTag((PVOID)*v0, 0x69534C53u);
    *v0 = 0LL;
    if ( !v0[5854] )
    {
      v25 = *((_DWORD *)v0 + 11706);
      if ( v25 )
      {
        memset(v0 + 3, 0, 16LL * v25);
        *((_DWORD *)v0 + 11706) = 0;
      }
    }
    v21 = _InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v21 & 2) != 0 && (v21 & 4) == 0 )
      ExfTryToWakePushLock(v0 + 5855);
    KeAbPostRelease((ULONG_PTR)(v0 + 5855));
    result = KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( !ExpSystemSetupInProgress )
  {
    ExpirationDate = ExGetExpirationDate(&Time);
    v23 = Time;
    v24 = ExpirationDate < 0;
    result = (_QWORD *)MmWriteableSharedUserData;
    if ( v24 )
      v23.QuadPart = 0LL;
    *(LARGE_INTEGER *)(MmWriteableSharedUserData + 712) = v23;
  }
  return result;
}
