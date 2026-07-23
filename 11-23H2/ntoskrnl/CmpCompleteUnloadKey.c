/*
 * XREFs of CmpCompleteUnloadKey @ 0x140688D18
 * Callers:
 *     CmpLateUnloadHiveWorker @ 0x140693350 (CmpLateUnloadHiveWorker.c)
 *     CmpPerformUnloadKey @ 0x140699394 (CmpPerformUnloadKey.c)
 * Callees:
 *     CmpDecrementAppHiveUnloadCount @ 0x140207A0C (CmpDecrementAppHiveUnloadCount.c)
 *     CmpUnJoinClassOfTrust @ 0x140207A48 (CmpUnJoinClassOfTrust.c)
 *     CmpRemoveHiveFromNamespace @ 0x140207A94 (CmpRemoveHiveFromNamespace.c)
 *     CmpDrainDelayDerefContext @ 0x14022D600 (CmpDrainDelayDerefContext.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     CmpInitializeDelayDerefContext @ 0x140231594 (CmpInitializeDelayDerefContext.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     EtwWrite @ 0x140257960 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1402584E0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x1404124A0 (ExfUnblockPushLock.c)
 *     ZwDeleteValueKey @ 0x14041CC90 (ZwDeleteValueKey.c)
 *     CmpRemoveLayerLinkForDiscardedKcb @ 0x14067F518 (CmpRemoveLayerLinkForDiscardedKcb.c)
 *     CmpVolumeContextDecrementRefCount @ 0x140688C2C (CmpVolumeContextDecrementRefCount.c)
 *     CmpDestroySecurityCache @ 0x140689124 (CmpDestroySecurityCache.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x1406891D8 (CmpVERemoveHiveFromSIDMappingTable.c)
 *     CmpCmdHiveClose @ 0x14068B0E4 (CmpCmdHiveClose.c)
 *     HvHiveCleanup @ 0x1407098E0 (HvHiveCleanup.c)
 *     CmpMarkKeyUnbacked @ 0x140710A0C (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140710A8C (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpDoFileSetSizeEx @ 0x14074D5E8 (CmpDoFileSetSizeEx.c)
 *     UNLOCK_HIVE_LOAD @ 0x140752020 (UNLOCK_HIVE_LOAD.c)
 *     CmpFlushHive @ 0x140753078 (CmpFlushHive.c)
 *     CmpCleanUpSubKeyInfo @ 0x14076ABB4 (CmpCleanUpSubKeyInfo.c)
 *     CmpDiscardKcb @ 0x14076AEF8 (CmpDiscardKcb.c)
 *     HvMarkBaseBlockDirty @ 0x140874A6C (HvMarkBaseBlockDirty.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 */

BOOLEAN __fastcall CmpCompleteUnloadKey(ULONG_PTR BugCheckParameter4, __int64 a2, _DWORD *a3)
{
  ULONG_PTR v3; // rdi
  int v6; // r12d
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // ecx
  unsigned int v10; // ecx
  REGHANDLE v11; // r15
  unsigned int v12; // r9d
  __int64 v13; // rax
  unsigned int v14; // r9d
  ULONGLONG v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v24; // rdx
  _QWORD *v25; // rcx
  int v26; // r14d
  unsigned int v27; // ebx
  struct _PRIVILEGE_SET *v28; // rcx
  unsigned int v29; // esi
  unsigned int v30; // eax
  REGHANDLE v31; // rbx
  BOOLEAN result; // al
  signed __int32 v33[8]; // [rsp+0h] [rbp-A9h] BYREF
  PEVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-89h]
  __int64 v35; // [rsp+28h] [rbp-81h]
  __int16 v36; // [rsp+30h] [rbp-79h] BYREF
  int v37; // [rsp+38h] [rbp-71h] BYREF
  __int128 v38; // [rsp+40h] [rbp-69h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-59h] BYREF
  EVENT_DESCRIPTOR v40; // [rsp+60h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+70h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v42[4]; // [rsp+80h] [rbp-29h] BYREF

  v3 = *(_QWORD *)(BugCheckParameter4 + 32);
  v38 = 0LL;
  CmpInitializeDelayDerefContext(&v38);
  v6 = *(_DWORD *)(v3 + 4112) & 0x20;
  *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 4236), 1u) & 0x7F) + 4240) = 6;
  v7 = *(_QWORD *)(v3 + 4152);
  if ( v7 )
  {
    v8 = *(_QWORD *)(v3 + 64);
    v9 = *(_DWORD *)(v8 + 144);
    if ( *(_QWORD *)(v7 + 16) == v7 + 16 )
      v10 = v9 & 0xFFFFFFFE;
    else
      v10 = v9 | 1;
    *(_DWORD *)(v8 + 144) = v10;
    HvMarkBaseBlockDirty(v3);
  }
  *(_DWORD *)(v3 + 160) |= 0x40u;
  v11 = EtwpRegTraceHandle;
  v36 = 0;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_UNLOAD_START;
  if ( EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor) )
  {
    v12 = 0;
    if ( *(_QWORD *)(v3 + 1848) )
    {
      v42[0].Ptr = *(_QWORD *)(v3 + 1848);
      v12 = 1;
      v42[0].Size = *(unsigned __int16 *)(v3 + 1840);
      v42[0].Reserved = 0;
    }
    v13 = v12;
    v14 = v12 + 1;
    v42[v13].Ptr = (ULONGLONG)&v36;
    *(_QWORD *)&v42[v13].Size = 2LL;
    v15 = *(_QWORD *)(v3 + 1864);
    if ( v15 )
    {
      v16 = v14++;
      v42[v16].Ptr = v15;
      v42[v16].Size = *(unsigned __int16 *)(v3 + 1856);
      *(&v42[0].Reserved + 1 * v16) = 0;
    }
    v17 = v14;
    v42[v17].Ptr = (ULONGLONG)&v36;
    *(_QWORD *)&v42[v17].Size = 2LL;
    EtwWrite(v11, &EventDescriptor, 0LL, v14 + 1, v42);
  }
  CmpRemoveHiveFromNamespace(v3, BugCheckParameter4, (__int64)&v38);
  *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 4236), 1u) & 0x7F) + 4240) = 8;
  if ( v6 )
  {
    *(_DWORD *)(v3 + 4768) = 1;
    CmpDecrementAppHiveUnloadCount();
  }
  CmpFlushNotifiesOnKeyBodyList(BugCheckParameter4, 1LL, &v38);
  CmpMarkKeyUnbacked(BugCheckParameter4, &v38);
  CmpDiscardKcb(BugCheckParameter4);
  CmpRemoveLayerLinkForDiscardedKcb(BugCheckParameter4);
  LOBYTE(v18) = 1;
  CmpCleanUpSubKeyInfo(*(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 72) + 72LL), v18);
  CmpDrainDelayDerefContext((_QWORD **)&v38);
  CmpUnlockRegistry(v20, v19, v21, v22, UserData, v35);
  *a3 &= ~2u;
  if ( (*a3 & 4) != 0 )
  {
    UNLOCK_HIVE_LOAD();
    *a3 &= ~4u;
  }
  ZwDeleteValueKey(CmpHiveFileListHandle, (PUNICODE_STRING)(v3 + 1856));
  CmpDestroySecurityCache(v3);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  CmpUnJoinClassOfTrust(v3);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( (*(_DWORD *)(v3 + 160) & 0x400) != 0 )
  {
    v24 = *(_QWORD *)(v3 + 1624);
    if ( *(_QWORD *)(v24 + 8) != v3 + 1624 || (v25 = *(_QWORD **)(v3 + 1632), *v25 != v3 + 1624) )
      __fastfail(3u);
    *v25 = v24;
    *(_QWORD *)(v24 + 8) = v25;
  }
  CmpVERemoveHiveFromSIDMappingTable(v3);
  v26 = CmpFlushHive(v3);
  if ( v26 == -1073741811 )
    v26 = 0;
  v27 = *(_DWORD *)(v3 + 280) + 4096;
  HvHiveCleanup(v3);
  if ( v26 >= 0 && (*(_DWORD *)(v3 + 160) & 0x8000) == 0 && (__int64)(*(_QWORD *)(v3 + 1800) - v27) > 0x100000 )
    CmpDoFileSetSizeEx(v3, 0LL, v27, 0LL);
  CmpCmdHiveClose(v3);
  v28 = *(struct _PRIVILEGE_SET **)(v3 + 4792);
  if ( v28 )
    CmpVolumeContextDecrementRefCount(v28);
  if ( v6 )
  {
    *(_DWORD *)(v3 + 4768) = 0;
    _InterlockedOr(v33, 0);
    if ( *(_QWORD *)(v3 + 4776) )
      ExfUnblockPushLock((volatile __int64 *)(v3 + 4776), 0LL);
  }
  v29 = 0;
  if ( *(_DWORD *)(v3 + 2920) )
  {
    do
    {
      KeSetEvent(*(PRKEVENT *)(*(_QWORD *)(v3 + 2928) + 8LL * v29), 0, 0);
      ObfDereferenceObject(*(PVOID *)(*(_QWORD *)(v3 + 2928) + 8LL * v29));
      v30 = *(_DWORD *)(v3 + 2920);
      ++v29;
    }
    while ( v29 < v30 );
    if ( v30 )
      ExFreePoolWithTag(*(PVOID *)(v3 + 2928), 0);
  }
  v31 = EtwpRegTraceHandle;
  v37 = v26;
  v40 = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_UNLOAD_STOP;
  result = EtwEventEnabled(EtwpRegTraceHandle, &v40);
  if ( result )
  {
    *(_QWORD *)&v41.Size = 4LL;
    v41.Ptr = (ULONGLONG)&v37;
    return EtwWrite(v31, &v40, 0LL, 1u, &v41);
  }
  return result;
}
