/*
 * XREFs of CmShutdownSystem1 @ 0x140616114
 * Callers:
 *     CmShutdownSystem @ 0x140A11588 (CmShutdownSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     CmShutdownCmRM @ 0x140697CA4 (CmShutdownCmRM.c)
 *     CmCloseRmHandle @ 0x140699F38 (CmCloseRmHandle.c)
 *     CmCloseTmHandle @ 0x140699F60 (CmCloseTmHandle.c)
 *     UNLOCK_HIVE_LOAD @ 0x140752020 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x140752098 (LOCK_HIVE_LOAD.c)
 *     CmpGetNextActiveHive @ 0x140752250 (CmpGetNextActiveHive.c)
 *     CmpFlushHive @ 0x140753078 (CmpFlushHive.c)
 *     CmpLockRegistryExclusive @ 0x1407693DC (CmpLockRegistryExclusive.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x1408274A4 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x14082752C (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     HvMarkBaseBlockDirty @ 0x140874A6C (HvMarkBaseBlockDirty.c)
 *     CmpRecordShutdownStopTime @ 0x140A1192C (CmpRecordShutdownStopTime.c)
 *     CmpShutdownWorkers @ 0x140A11E40 (CmpShutdownWorkers.c)
 *     CmFcShutdownSystem @ 0x140A11EF8 (CmFcShutdownSystem.c)
 *     CmpTraceShutdownFlushStart @ 0x140A132F8 (CmpTraceShutdownFlushStart.c)
 *     CmpTraceShutdownFlushStop @ 0x140A13368 (CmpTraceShutdownFlushStop.c)
 *     CmpTraceShutdownStart @ 0x140A13448 (CmpTraceShutdownStart.c)
 *     CmpWaitForHiveLoadUnloadRundownRelease @ 0x140A1F924 (CmpWaitForHiveLoadUnloadRundownRelease.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF5230 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x140AF5250 (CmpAttachToRegistryProcess.c)
 *     CmpLockRegistry @ 0x140AF54A0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 *     HvLockHiveFlusherExclusive @ 0x140AF5670 (HvLockHiveFlusherExclusive.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140AF568C (HvUnlockHiveFlusherExclusive.c)
 */

__int64 __fastcall CmShutdownSystem1(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 i; // rcx
  __int64 v5; // rdx
  void *v6; // rdi
  void *v7; // rsi
  __int64 NextActiveHive; // rbx
  __int64 j; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // eax
  unsigned int v13; // eax
  __int64 v14; // rbx
  ULONG_PTR v15; // r8
  __int64 v16; // rdx
  int v17; // ecx
  unsigned int v18; // ecx
  __int64 k; // rcx
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 m; // rcx
  __int64 v23; // rbx
  ULONG_PTR n; // rcx
  __int64 v25; // rax
  ULONG_PTR v26; // rbx
  _OWORD v28[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(&v28[1], 0, 32);
  CmpTraceShutdownStart(a1, a2, a3, a4, 0LL, 0LL);
  CmpWaitForHiveLoadUnloadRundownRelease();
  CmpAttachToRegistryProcess(v28);
  for ( i = 0LL; ; i = NextActiveHive )
  {
    NextActiveHive = CmpGetNextActiveHive(i);
    if ( !NextActiveHive )
      break;
    LOCK_HIVE_LOAD();
    CmpLockRegistryExclusive();
    LOBYTE(v5) = 1;
    v6 = (void *)CmCloseRmHandle(*(_QWORD *)(NextActiveHive + 4152), v5);
    v7 = (void *)CmCloseTmHandle(*(_QWORD *)(NextActiveHive + 4152));
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    if ( v6 )
    {
      ZwClose(v6);
      ZwClose(v7);
    }
  }
  LOCK_HIVE_LOAD();
  CmpLockRegistryExclusive();
  for ( j = CmpGetNextActiveHive(0LL); ; j = CmpGetNextActiveHive(v14) )
  {
    v14 = j;
    if ( !j )
      break;
    v10 = *(_QWORD *)(j + 4152);
    if ( v10 )
    {
      v11 = *(_QWORD *)(j + 64);
      v12 = *(_DWORD *)(v11 + 144);
      if ( *(_QWORD *)(v10 + 16) == v10 + 16 )
        v13 = v12 & 0xFFFFFFFE;
      else
        v13 = v12 | 1;
      *(_DWORD *)(v11 + 144) = v13;
      HvMarkBaseBlockDirty(v14);
    }
  }
  v15 = qword_140C028D0;
  if ( CmRmSystem )
  {
    v16 = *(_QWORD *)(qword_140C028D0 + 64);
    v17 = *(_DWORD *)(v16 + 144);
    if ( *((PVOID *)CmRmSystem + 2) == (char *)CmRmSystem + 16 )
      v18 = v17 & 0xFFFFFFFE;
    else
      v18 = v17 | 1;
    *(_DWORD *)(v16 + 144) = v18;
    HvMarkBaseBlockDirty(v15);
  }
  for ( k = 0LL; ; k = v21 )
  {
    v20 = CmpGetNextActiveHive(k);
    v21 = v20;
    if ( !v20 )
      break;
    CmShutdownCmRM(*(_QWORD *)(v20 + 4152), 0LL);
  }
  if ( !(_BYTE)CmFirstTime )
    CmpShutdownWorkers();
  CmpUnlockRegistry();
  UNLOCK_HIVE_LOAD();
  CmFcShutdownSystem(1LL);
  CmpRecordShutdownStopTime();
  for ( m = 0LL; ; m = v23 )
  {
    v23 = CmpGetNextActiveHive(m);
    if ( !v23 )
      break;
    CmpLockRegistry();
    HvLockHiveFlusherExclusive(v23);
    *(_DWORD *)(v23 + 164) |= 2u;
    HvUnlockHiveFlusherExclusive(v23);
    CmpUnlockRegistry();
  }
  CmpTraceShutdownFlushStart();
  for ( n = 0LL; ; n = v26 )
  {
    v25 = CmpGetNextActiveHive(n);
    v26 = v25;
    if ( !v25 )
      break;
    CmpBecomeActiveFlusherAndReconciler(v25);
    CmpLockRegistry();
    HvLockHiveFlusherExclusive(v26);
    *(_DWORD *)(v26 + 164) |= 4u;
    HvUnlockHiveFlusherExclusive(v26);
    CmpUnlockRegistry();
    CmpFinishBeingActiveFlusherAndReconciler(v26);
    if ( !BYTE1(NlsMbOemCodePageTag) && (*(_DWORD *)(v26 + 160) & 2) == 0 )
      *(_BYTE *)(v26 + 4784) = (int)CmpFlushHive(v26) >= 0;
  }
  CmpTraceShutdownFlushStop();
  return CmpDetachFromRegistryProcess(v28);
}
