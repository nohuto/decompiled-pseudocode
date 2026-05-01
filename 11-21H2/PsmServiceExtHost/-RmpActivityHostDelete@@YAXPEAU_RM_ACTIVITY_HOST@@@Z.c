/*
 * XREFs of ?RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000B0E0
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800121C0 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RmpActivityHostCleanupCommonState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000B1D0 (-RmpActivityHostCleanupCommonState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostRemoveFromTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000B220 (-RmpActivityHostRemoveFromTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPolicyResizeScratchBuffers@@YAJPEAU_RM_POLICY_WORK_BUFFER@@KK@Z @ 0x18002727C (-RmpPolicyResizeScratchBuffers@@YAJPEAU_RM_POLICY_WORK_BUFFER@@KK@Z.c)
 *     ?RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002CA0C (-RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x1800874A8 (-RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 */

void __fastcall RmpActivityHostDelete(struct _RM_ACTIVITY_HOST *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax

  if ( *((_QWORD *)a1 + 180) )
    RmpActivityHostRemoveFromRemediationGroup(a1, 1u);
  if ( *((_QWORD *)a1 + 109) )
  {
    (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)a1 + 6) + 40LL) + 176LL))();
    *((_QWORD *)a1 + 109) = 0LL;
  }
  v2 = *((_QWORD *)a1 + 134);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*((_QWORD *)a1 + 6) + 40LL) + 192LL))(v2, 0LL);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)a1 + 6) + 40LL) + 176LL))(*((_QWORD *)a1 + 134));
    *((_QWORD *)a1 + 134) = 0LL;
  }
  RmpActivityHostRemoveFromTables(a1);
  RmpPsmAppFamilyTableTryRemoveActivityHost(a1);
  RmpActivityHostCleanupCommonState(a1);
  v3 = *((_QWORD *)a1 + 7);
  RmpPolicyResizeScratchBuffers((struct _RM_POLICY_WORK_BUFFER *)(v3 + 160), --*(_DWORD *)(v3 + 208), 0);
  RmpObjectRelease(a1);
}
