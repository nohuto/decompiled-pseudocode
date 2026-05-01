/*
 * XREFs of ?RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800823C0
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x1800439F0 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180074DA0 (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?Rundown@ResourceManager@ExecutionModel@@QEAAXXZ @ 0x180083024 (-Rundown@ResourceManager@ExecutionModel@@QEAAXXZ.c)
 *     ?RmpEnforcerContextRundown@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18008573C (-RmpEnforcerContextRundown@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpPartitionTableRundown@@YAXPEAU_RM_PARTITION_TABLE@@@Z @ 0x180085E24 (-RmpPartitionTableRundown@@YAXPEAU_RM_PARTITION_TABLE@@@Z.c)
 *     ?RmpGameModeRundown@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180089874 (-RmpGameModeRundown@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpSystemNotificationContextRundown@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18008A78C (-RmpSystemNotificationContextRundown@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 */

void __fastcall RmpRundownAllModules(struct _RM_SERVICE_GLOBALS *a1)
{
  char *v1; // rbx
  ExecutionModel::ResourceManager *v3; // rcx

  v1 = (char *)a1 + 2168;
  RtlAcquireSRWLockExclusive((char *)a1 + 2168);
  *((_DWORD *)a1 + 544) = GetCurrentThreadId();
  RmpAcquireGlobalLock();
  *((_DWORD *)a1 + 882) |= 1u;
  RmpReleaseGlobalLock();
  *((_DWORD *)a1 + 544) = 0;
  RtlReleaseSRWLockExclusive(v1);
  HampManagerRundown((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 2248));
  v3 = (ExecutionModel::ResourceManager *)*((_QWORD *)a1 + 442);
  if ( v3 )
    ExecutionModel::ResourceManager::Rundown(v3);
  if ( *((_QWORD *)a1 + 258) )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion();
    *((_QWORD *)a1 + 258) = 0LL;
  }
  RmpEnforcerContextRundown(a1);
  RmpGameModeRundown((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 2096));
  RmpPartitionTableRundown((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 312));
  RmpSystemNotificationContextRundown(a1);
  if ( *((_QWORD *)a1 + 70) )
  {
    RmpAcquireGlobalLock();
    TpSetTimer(*((_QWORD *)a1 + 70), 0LL, 0LL, 0LL);
    RmpReleaseGlobalLock();
    TpWaitForTimer(*((_QWORD *)a1 + 70), 1LL);
  }
}
