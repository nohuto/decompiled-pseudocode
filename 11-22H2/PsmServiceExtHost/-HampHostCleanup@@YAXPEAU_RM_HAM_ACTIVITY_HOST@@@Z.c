/*
 * XREFs of ?HampHostCleanup@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000BEEC
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001E5A0 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180032530 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053740 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall HampHostCleanup(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  void *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  v2 = (void *)*((_QWORD *)a1 + 72);
  if ( v2 )
    NtClose(v2);
  v3 = *((_QWORD *)a1 + 133);
  if ( v3 )
    CemRcObjectDereference(v3);
  if ( *((_QWORD *)a1 + 101) )
  {
    v4 = 48LL;
    if ( a1 )
      v4 = (__int64)a1 - 16;
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)v4 + 40LL) + 176LL))();
  }
  v5 = *((_QWORD *)a1 + 105);
  if ( v5 )
    TpReleaseTimer(v5);
  if ( *((_QWORD *)a1 + 80) )
    TpReleaseWork();
  if ( *((_QWORD *)a1 + 79) )
    TpReleaseWork();
  if ( *((_QWORD *)a1 + 81) )
    TpReleaseWork();
  v6 = *((_QWORD *)a1 + 73);
  if ( v6 )
    CemRcObjectDereference(v6);
  v7 = *((_QWORD *)a1 + 99);
  if ( v7 )
    CemRcObjectDereference(v7);
}
