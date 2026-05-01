/*
 * XREFs of ?RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800837C4
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x180048C40 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180072ED8 (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?Rundown@ResourceManager@ExecutionModel@@QEAAXXZ @ 0x18008493C (-Rundown@ResourceManager@ExecutionModel@@QEAAXXZ.c)
 *     ?RmpEnforcerContextRundown@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180087AA0 (-RmpEnforcerContextRundown@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z @ 0x1800880D0 (-RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z.c)
 *     ?RmpGameModeRundown@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x18008BC14 (-RmpGameModeRundown@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpSystemNotificationContextRundown@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18008CACC (-RmpSystemNotificationContextRundown@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpPartitionTableRundown@@YAXPEAU_RM_PARTITION_TABLE@@@Z @ 0x18008D094 (-RmpPartitionTableRundown@@YAXPEAU_RM_PARTITION_TABLE@@@Z.c)
 */

void __fastcall RmpRundownAllModules(struct _RM_SERVICE_GLOBALS *a1)
{
  char *v1; // rbx
  ExecutionModel::ResourceManager *v3; // rcx
  struct _RM_SERVICE_GLOBALS **v4; // rbx
  struct _RM_SERVICE_GLOBALS *v5; // rdi
  __int64 v6; // rcx

  v1 = (char *)a1 + 2168;
  RtlAcquireSRWLockExclusive((char *)a1 + 2168);
  *((_DWORD *)a1 + 544) = GetCurrentThreadId();
  RmpAcquireGlobalLock();
  *((_DWORD *)a1 + 806) |= 1u;
  RmpReleaseGlobalLock();
  *((_DWORD *)a1 + 544) = 0;
  RtlReleaseSRWLockExclusive(v1);
  HampManagerRundown((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 2248));
  v3 = (ExecutionModel::ResourceManager *)*((_QWORD *)a1 + 404);
  if ( v3 )
    ExecutionModel::ResourceManager::Rundown(v3);
  RmpAcquireGlobalLock();
  v4 = *(struct _RM_SERVICE_GLOBALS ***)a1;
  if ( *(struct _RM_SERVICE_GLOBALS **)a1 != a1 )
  {
    do
    {
      v5 = *v4;
      RmpActivatorCleanup((struct _RM_ACTIVATOR *)(v4 - 1));
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4 - 1);
      v4 = (struct _RM_SERVICE_GLOBALS **)v5;
    }
    while ( v5 != a1 );
  }
  RmpReleaseGlobalLock();
  v6 = *((_QWORD *)a1 + 258);
  if ( v6 )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion(v6);
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
