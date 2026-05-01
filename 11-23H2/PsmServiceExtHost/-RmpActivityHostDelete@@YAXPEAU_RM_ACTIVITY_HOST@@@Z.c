/*
 * XREFs of ?RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180038054
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001E5A0 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003534C (-RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPolicyResizeScratchBuffers@@YAJPEAU_RM_POLICY_WORK_BUFFER@@KK@Z @ 0x1800381A0 (-RmpPolicyResizeScratchBuffers@@YAJPEAU_RM_POLICY_WORK_BUFFER@@KK@Z.c)
 *     ?RmpActivityHostCleanupCommonState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180038364 (-RmpActivityHostCleanupCommonState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostRemoveFromTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003839C (-RmpActivityHostRemoveFromTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053500 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x180055918 (-RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 */

void __fastcall RmpActivityHostDelete(unsigned __int64 a1)
{
  char *v2; // rbx
  _QWORD *v3; // rsi
  __int64 v4; // rcx
  unsigned __int64 v5; // rbx
  __int64 v6; // rax

  if ( *(_QWORD *)(a1 + 1424) )
    RmpActivityHostRemoveFromRemediationGroup((struct _RM_ACTIVITY_HOST *)a1, 1u);
  v2 = (char *)(a1 + 64);
  if ( *(_QWORD *)(a1 + 872) )
  {
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)((a1 & -(__int64)(v2 != 0LL)) + 0x30) + 40LL) + 176LL))();
    *(_QWORD *)(a1 + 872) = 0LL;
  }
  v3 = (_QWORD *)(a1 + 1072);
  v4 = *(_QWORD *)(a1 + 1072);
  if ( v4 )
  {
    v5 = a1 & -(__int64)(v2 != 0LL);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(v5 + 48) + 40LL) + 192LL))(v4, 0LL);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(v5 + 48) + 40LL) + 176LL))(*v3);
    *v3 = 0LL;
  }
  RmpActivityHostRemoveFromTables((struct _RM_ACTIVITY_HOST *)a1);
  RmpPsmAppFamilyTableTryRemoveActivityHost((struct _RM_ACTIVITY_HOST *)a1);
  RmpActivityHostCleanupCommonState((struct _RM_ACTIVITY_HOST *)a1);
  v6 = *(_QWORD *)(a1 + 56);
  RmpPolicyResizeScratchBuffers((struct _RM_POLICY_WORK_BUFFER *)(v6 + 160), --*(_DWORD *)(v6 + 208), 0);
  RmpObjectRelease((struct _RM_OBJECT_HEADER *)a1);
}
