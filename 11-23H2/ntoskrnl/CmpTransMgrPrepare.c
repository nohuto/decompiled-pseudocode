/*
 * XREFs of CmpTransMgrPrepare @ 0x140768C8C
 * Callers:
 *     CmKtmNotification @ 0x140697D50 (CmKtmNotification.c)
 *     CmpRmUnDoPhase @ 0x140A1F308 (CmpRmUnDoPhase.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExAcquireRundownProtection_0 @ 0x14028B5F0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExReleaseFastMutexUnsafe @ 0x140302880 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403028F0 (ExAcquireFastMutexUnsafe.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     HvpMarkDirty @ 0x140747300 (HvpMarkDirty.c)
 *     CmpGetNextActiveHive @ 0x140752250 (CmpGetNextActiveHive.c)
 *     CmpFlushHive @ 0x140753078 (CmpFlushHive.c)
 *     CmpTransMgrSyncHive @ 0x1407E7C80 (CmpTransMgrSyncHive.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF5230 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x140AF5250 (CmpAttachToRegistryProcess.c)
 *     CmpLockRegistry @ 0x140AF54A0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 *     HvLockHiveFlusherExclusive @ 0x140AF5670 (HvLockHiveFlusherExclusive.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140AF568C (HvUnlockHiveFlusherExclusive.c)
 *     CmListGetNextElement @ 0x140AF56A8 (CmListGetNextElement.c)
 */

__int64 __fastcall CmpTransMgrPrepare(__int64 a1, __int64 a2, _DWORD *a3, _BYTE *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  char v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 NextElement; // rax
  struct _EX_RUNDOWN_REF *v15; // rdi
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 *NextActiveHive; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  ULONG_PTR v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // edi
  __int64 v27; // r8
  __int64 v28; // r9
  ULONG_PTR v29; // rbp
  __int64 v30; // rcx
  struct _EX_RUNDOWN_REF *v32; // rbx
  struct _EX_RUNDOWN_REF *v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // [rsp+20h] [rbp-78h] BYREF
  _OWORD v41[3]; // [rsp+28h] [rbp-70h] BYREF

  *a4 = 0;
  *a3 = 0;
  memset(v41, 0, sizeof(v41));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  v9 = 1;
  *(_DWORD *)(a2 + 48) |= 1u;
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegion();
  if ( *(_QWORD *)(a2 + 16) == a2 + 16 )
  {
    *a4 = 1;
    return 0;
  }
  CmpAttachToRegistryProcess(v41);
  CmpLockRegistry(v11, v10, v12, v13);
  v40 = 0LL;
  while ( 1 )
  {
    NextElement = CmListGetNextElement(a2 + 16, &v40, 0LL);
    if ( !NextElement )
      break;
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(NextElement + 48) + 32LL) + 4152LL) == a1 )
      ++*a3;
  }
  v15 = *(struct _EX_RUNDOWN_REF **)(a1 + 80);
  if ( v15 )
  {
    v32 = v15 + 205;
    if ( ExAcquireRundownProtection_0(v15 + 205) )
    {
      CmpUnlockRegistry(v30, v18, v19, v20);
      v26 = CmpTransMgrSyncHive((ULONG_PTR)v15);
      v33 = v32;
LABEL_26:
      ExReleaseRundownProtection_0(v33);
      goto LABEL_22;
    }
    v26 = 0;
    goto LABEL_21;
  }
  for ( i = 0LL; ; i = (struct _EX_RUNDOWN_REF *)v21 )
  {
    NextActiveHive = CmpGetNextActiveHive(i);
    v21 = (ULONG_PTR)NextActiveHive;
    if ( !NextActiveHive )
      break;
    if ( NextActiveHive[519] == a1 )
    {
      v22 = *((unsigned int *)NextActiveHive + 40);
      if ( (v22 & 2) == 0 )
      {
        v23 = *(unsigned int *)(a2 + 112);
        if ( (_DWORD)v23 )
        {
          v22 = 0LL;
          while ( NextActiveHive != *(__int64 **)(a2 + 8 * v22 + 120) )
          {
            v22 = (unsigned int)(v22 + 1);
            if ( (unsigned int)v22 >= (unsigned int)v23 )
              goto LABEL_10;
          }
        }
        CmpUnlockRegistry(v22, v23, v19, v20);
        v26 = CmpTransMgrSyncHive(v21);
        if ( v26 < 0 )
        {
          v33 = (struct _EX_RUNDOWN_REF *)(v21 + 1640);
          goto LABEL_26;
        }
        CmpLockRegistry(v25, v24, v27, v28);
      }
    }
LABEL_10:
    ;
  }
  v29 = qword_140C028D0;
  v30 = *(unsigned int *)(*(_QWORD *)(qword_140C028D0 + 64) + 144LL);
  if ( (v30 & 1) != 0 )
    goto LABEL_20;
  HvLockHiveFlusherExclusive(qword_140C028D0);
  v34 = KeAbPreAcquire(v29 + 80, 0LL);
  v35 = v34;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 80), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v29 + 80), v34, v29 + 80);
  if ( v35 )
    *(_BYTE *)(v35 + 18) = 1;
  v26 = HvpMarkDirty(v29, 0, 32, 0);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v29 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v29 + 80));
  KeAbPostRelease(v29 + 80);
  if ( v26 >= 0 )
  {
    *(_DWORD *)(*(_QWORD *)(v29 + 64) + 144LL) |= 1u;
    HvUnlockHiveFlusherExclusive(v29);
    CmpUnlockRegistry(v37, v36, v38, v39);
    v9 = 0;
    if ( (int)CmpFlushHive(v29, 0) < 0 )
    {
      v26 = -1073741670;
      goto LABEL_22;
    }
LABEL_20:
    v26 = 0;
    if ( !v9 )
      goto LABEL_22;
    goto LABEL_21;
  }
  HvUnlockHiveFlusherExclusive(v29);
LABEL_21:
  CmpUnlockRegistry(v30, v18, v19, v20);
LABEL_22:
  CmpDetachFromRegistryProcess(v41);
  return (unsigned int)v26;
}
