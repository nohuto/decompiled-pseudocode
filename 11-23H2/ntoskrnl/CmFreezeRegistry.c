/*
 * XREFs of CmFreezeRegistry @ 0x140A135B0
 * Callers:
 *     NtFreezeRegistry @ 0x140A0DAB0 (NtFreezeRegistry.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KiSetTimerEx @ 0x1402528E0 (KiSetTimerEx.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     CmpDisableLazyFlush @ 0x140616A44 (CmpDisableLazyFlush.c)
 *     CmpGetNextActiveHive @ 0x140752250 (CmpGetNextActiveHive.c)
 *     CmpFlushHive @ 0x140753078 (CmpFlushHive.c)
 *     CmpLockRegistryExclusive @ 0x1407693DC (CmpLockRegistryExclusive.c)
 *     HvMarkBaseBlockDirty @ 0x140874A6C (HvMarkBaseBlockDirty.c)
 *     CmThawRegistry @ 0x140A137E0 (CmThawRegistry.c)
 *     CmpAcquireShutdownRundown @ 0x140AF5380 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140AF5470 (CmpReleaseShutdownRundown.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmFreezeRegistry(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r14d
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 *i; // rax
  volatile signed __int64 *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rbp
  struct _EX_RUNDOWN_REF *v15; // rdi
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF *j; // rcx
  __int64 *NextActiveHive; // rax
  struct _EX_RUNDOWN_REF *v24; // rdi

  v3 = a1;
  v4 = 0;
  if ( (unsigned __int8)CmpAcquireShutdownRundown(a1, a2, a3) )
  {
    CmpLockRegistryExclusive();
    if ( CmpFreezeThawState )
    {
      v4 = -1073741431;
      CmpUnlockRegistry(v6, v5, v7, v8);
    }
    else
    {
      for ( i = CmpGetNextActiveHive(0LL); ; i = CmpGetNextActiveHive(v15) )
      {
        v15 = (struct _EX_RUNDOWN_REF *)i;
        if ( !i )
          break;
        if ( (i[20] & 3) == 0 )
        {
          *(_OWORD *)(i[8] + 4056) = *(_OWORD *)(i[8] + 112);
          *(_OWORD *)(i[8] + 4040) = *(_OWORD *)(i[8] + 148);
          *(_OWORD *)(i[8] + 4072) = *(_OWORD *)(i[8] + 128);
          *(_OWORD *)(i[8] + 112) = 0LL;
          *(_OWORD *)(i[8] + 148) = 0LL;
          *(_OWORD *)(i[8] + 128) = 0LL;
          *(_DWORD *)(i[8] + 164) = 0;
          if ( (i[514] & 0x300) != 0x100 && !*((_DWORD *)i + 26) )
          {
            v12 = i + 10;
            v13 = KeAbPreAcquire((__int64)(i + 10), 0LL);
            v14 = v13;
            if ( _interlockedbittestandset64((volatile signed __int32 *)&v15[10], 0LL) )
              ExfAcquirePushLockExclusiveEx(&v15[10].Count, v13, (__int64)&v15[10]);
            if ( v14 )
              *(_BYTE *)(v14 + 18) = 1;
            HvMarkBaseBlockDirty((__int64)v15);
            if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)&v15[10]);
            KeAbPostRelease((ULONG_PTR)&v15[10]);
          }
        }
      }
      v16 = CmFreezeThawTimeoutInSeconds;
      CmpFreezeThawState = 1;
      if ( v3 )
        v16 = v3;
      KiSetTimerEx((__int64)&CmpFreezeThawTimer, -10000000LL * v16, 0, 0, (__int64)&CmpFreezeThawDpc);
      CmpDisableLazyFlush(2u);
      CmpUnlockRegistry(v18, v17, v19, v20);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      for ( j = 0LL; ; j = v24 )
      {
        NextActiveHive = CmpGetNextActiveHive(j);
        v24 = (struct _EX_RUNDOWN_REF *)NextActiveHive;
        if ( !NextActiveHive )
          break;
        if ( (NextActiveHive[20] & 3) == 0 )
        {
          v4 = CmpFlushHive((ULONG_PTR)NextActiveHive, 0xDu);
          if ( v4 < 0 )
          {
            ExReleaseRundownProtection_0(v24 + 205);
            CmThawRegistry();
            v4 = -1073741491;
            break;
          }
        }
      }
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
    CmpReleaseShutdownRundown(v10, v9);
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return (unsigned int)v4;
}
