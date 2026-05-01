/*
 * XREFs of ?RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x180055918
 * Callers:
 *     ?RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001AE8C (-RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001E5A0 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180038054 (-RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCleanupRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x1800556B0 (-RmpActivityHostCleanupRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpActivityHostRemoveFromRemediationGroup(struct _RM_ACTIVITY_HOST *a1, char a2)
{
  __int64 v3; // rcx
  __int64 v4; // r9
  struct _RM_ACTIVITY_HOST **v5; // rax

  v3 = *((_QWORD *)a1 + 178);
  v4 = *((_QWORD *)a1 + 179);
  if ( *(struct _RM_ACTIVITY_HOST **)(v4 + 8) != (struct _RM_ACTIVITY_HOST *)((char *)a1 + 1432)
    || (v5 = (struct _RM_ACTIVITY_HOST **)*((_QWORD *)a1 + 180), *v5 != (struct _RM_ACTIVITY_HOST *)((char *)a1 + 1432)) )
  {
    __fastfail(3u);
  }
  *v5 = (struct _RM_ACTIVITY_HOST *)v4;
  *(_QWORD *)(v4 + 8) = v5;
  *((_QWORD *)a1 + 178) = 0LL;
  if ( *(_QWORD *)v3 == v3 && a2 )
    SetEvent(*(HANDLE *)(v3 + 16));
  RmpObjectRelease(a1);
}
