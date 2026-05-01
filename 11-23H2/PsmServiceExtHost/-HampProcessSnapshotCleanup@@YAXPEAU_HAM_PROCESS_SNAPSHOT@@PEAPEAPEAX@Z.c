/*
 * XREFs of ?HampProcessSnapshotCleanup@@YAXPEAU_HAM_PROCESS_SNAPSHOT@@PEAPEAPEAX@Z @ 0x18004C1DC
 * Callers:
 *     ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001BB50 (-HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETTINGS_CONTEXT@@@Z @ 0x180021270 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETT.c)
 *     ?RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x1800325CC (-RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 *     ?HampClientPkgEnableServicing@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@PEAPEAPEAXPEAK@Z @ 0x18004EC38 (-HampClientPkgEnableServicing@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@PEAP.c)
 *     ?HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006EE3C (-HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostPlmServiceDesktopBridgeHost@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18006F6E0 (-HampHostPlmServiceDesktopBridgeHost@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x1800110C0 (-HampFreeHeap@@YAXPEAX@Z.c)
 */

void __fastcall HampProcessSnapshotCleanup(struct _HAM_PROCESS_SNAPSHOT *a1, void ***a2)
{
  __int64 i; // rsi
  void *v5; // rcx

  if ( a2 && *((_DWORD *)a1 + 4) )
  {
    *a2 = *(void ***)a1;
    *(_QWORD *)a1 = 0LL;
  }
  else
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 4); i = (unsigned int)(i + 1) )
      NtClose(*(HANDLE *)(*(_QWORD *)a1 + 8 * i));
    if ( *(_QWORD *)a1 )
      HampFreeHeap(*(void **)a1);
    if ( a2 )
      *a2 = 0LL;
  }
  v5 = (void *)*((_QWORD *)a1 + 1);
  if ( v5 )
    HampFreeHeap(v5);
}
