/*
 * XREFs of CmShutdownSystem1 @ 0x14053EBD8
 * Callers:
 *     CmShutdownSystem @ 0x140911B58 (CmShutdownSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     CmpFlushHive @ 0x1406885A4 (CmpFlushHive.c)
 *     UNLOCK_HIVE_LOAD @ 0x14068934C (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x1406893EC (LOCK_HIVE_LOAD.c)
 *     CmShutdownCmRM @ 0x14069FD1C (CmShutdownCmRM.c)
 *     CmCloseTmHandle @ 0x14069FFC0 (CmCloseTmHandle.c)
 *     CmCloseRmHandle @ 0x14069FFE8 (CmCloseRmHandle.c)
 *     HvMarkBaseBlockDirty @ 0x1406CA514 (HvMarkBaseBlockDirty.c)
 *     CmpGetNextActiveHive @ 0x14071B350 (CmpGetNextActiveHive.c)
 *     CmpLockRegistryExclusive @ 0x14071B6EC (CmpLockRegistryExclusive.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x14083D1A4 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x14083D56C (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpTraceShutdownFlushStart @ 0x140910FCC (CmpTraceShutdownFlushStart.c)
 *     CmpTraceShutdownFlushStop @ 0x14091103C (CmpTraceShutdownFlushStop.c)
 *     CmpTraceShutdownStart @ 0x14091111C (CmpTraceShutdownStart.c)
 *     CmFcShutdownSystem @ 0x140911208 (CmFcShutdownSystem.c)
 *     CmpRecordShutdownStopTime @ 0x140911EA8 (CmpRecordShutdownStopTime.c)
 *     CmpWaitForHiveLoadUnloadRundownRelease @ 0x14091CA34 (CmpWaitForHiveLoadUnloadRundownRelease.c)
 *     CmpShutdownWorkers @ 0x14091D790 (CmpShutdownWorkers.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140AB41E0 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140AB41FC (HvLockHiveFlusherExclusive.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140AB4370 (CmpLockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140AB4550 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AB4580 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmShutdownSystem1(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 i; // rcx
  __int64 v5; // rdx
  void *v6; // rdi
  void *v7; // rsi
  __int64 NextActiveHive; // rbx
  __int64 j; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // edx
  __int64 v13; // rbx
  __int64 v14; // r9
  __int64 v15; // rcx
  unsigned int v16; // edx
  __int64 k; // rcx
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 m; // rcx
  __int64 v21; // rbx
  ULONG_PTR n; // rcx
  __int64 v23; // rax
  ULONG_PTR v24; // rbx
  _OWORD v26[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(&v26[1], 0, 32);
  CmpTraceShutdownStart(a1, a2, a3, a4, 0LL, 0LL);
  CmpWaitForHiveLoadUnloadRundownRelease();
  CmpAttachToRegistryProcess(v26);
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
  for ( j = CmpGetNextActiveHive(0LL); ; j = CmpGetNextActiveHive(v13) )
  {
    v13 = j;
    if ( !j )
      break;
    v10 = *(_QWORD *)(j + 4152);
    if ( v10 )
    {
      v11 = *(_QWORD *)(j + 64);
      v12 = *(_DWORD *)(v11 + 144) & 0xFFFFFFFE;
      if ( *(_QWORD *)(v10 + 16) != v10 + 16 )
        v12 = *(_DWORD *)(v11 + 144) | 1;
      *(_DWORD *)(v11 + 144) = v12;
      HvMarkBaseBlockDirty(j);
    }
  }
  if ( CmRmSystem )
  {
    v14 = *(_QWORD *)(qword_140C02770 + 64);
    v15 = qword_140C02770;
    v16 = *(_DWORD *)(v14 + 144) & 0xFFFFFFFE;
    if ( *((PVOID *)CmRmSystem + 2) != (char *)CmRmSystem + 16 )
      v16 = *(_DWORD *)(v14 + 144) | 1;
    *(_DWORD *)(v14 + 144) = v16;
    HvMarkBaseBlockDirty(v15);
  }
  for ( k = 0LL; ; k = v19 )
  {
    v18 = CmpGetNextActiveHive(k);
    v19 = v18;
    if ( !v18 )
      break;
    CmShutdownCmRM(*(_QWORD *)(v18 + 4152), 0LL);
  }
  if ( !(_BYTE)CmFirstTime )
    CmpShutdownWorkers();
  CmpUnlockRegistry();
  UNLOCK_HIVE_LOAD();
  CmFcShutdownSystem(1LL);
  CmpRecordShutdownStopTime();
  for ( m = 0LL; ; m = v21 )
  {
    v21 = CmpGetNextActiveHive(m);
    if ( !v21 )
      break;
    CmpLockRegistry();
    HvLockHiveFlusherExclusive(v21);
    *(_DWORD *)(v21 + 164) |= 2u;
    HvUnlockHiveFlusherExclusive(v21);
    CmpUnlockRegistry();
  }
  CmpTraceShutdownFlushStart();
  for ( n = 0LL; ; n = v24 )
  {
    v23 = CmpGetNextActiveHive(n);
    v24 = v23;
    if ( !v23 )
      break;
    CmpBecomeActiveFlusherAndReconciler(v23);
    CmpLockRegistry();
    HvLockHiveFlusherExclusive(v24);
    *(_DWORD *)(v24 + 164) |= 4u;
    HvUnlockHiveFlusherExclusive(v24);
    CmpUnlockRegistry();
    CmpFinishBeingActiveFlusherAndReconciler(v24);
    if ( !BYTE1(NlsMbOemCodePageTag) && (*(_DWORD *)(v24 + 160) & 2) == 0 )
      *(_BYTE *)(v24 + 4784) = (int)CmpFlushHive(v24) >= 0;
  }
  CmpTraceShutdownFlushStop();
  return CmpDetachFromRegistryProcess(v26);
}
