/*
 * XREFs of ?HampHostCleanup@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800362DC
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800121C0 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001BE00 (-RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x1800248A0 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpActivityHostFinalCleanup@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800362A4 (-RmpActivityHostFinalCleanup@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180036410 (CemRcObjectDereference.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall HampHostCleanup(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  void *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx

  v2 = (void *)*((_QWORD *)a1 + 72);
  if ( v2 )
    NtClose(v2);
  v3 = *((_QWORD *)a1 + 132);
  if ( v3 )
    CemRcObjectDereference(v3);
  if ( *((_QWORD *)a1 + 101) )
    (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)a1 - 2) + 40LL) + 176LL))();
  v4 = *((_QWORD *)a1 + 105);
  if ( v4 )
    TpReleaseTimer(v4);
  v5 = *((_QWORD *)a1 + 80);
  if ( v5 )
    TpReleaseWork(v5);
  v6 = *((_QWORD *)a1 + 79);
  if ( v6 )
    TpReleaseWork(v6);
  v7 = *((_QWORD *)a1 + 81);
  if ( v7 )
    TpReleaseWork(v7);
  v8 = *((_QWORD *)a1 + 73);
  if ( v8 )
    CemRcObjectDereference(v8);
  v9 = *((_QWORD *)a1 + 99);
  if ( v9 )
    CemRcObjectDereference(v9);
}
