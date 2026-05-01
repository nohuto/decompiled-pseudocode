/*
 * XREFs of ?HampPkgNotifyDebugModeChanged@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180078B84
 * Callers:
 *     ?HampClientPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x1800786F0 (-HampClientPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 *     ?HampClientPkgEnableDebugging@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z @ 0x180078788 (-HampClientPkgEnableDebugging@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z.c)
 * Callees:
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180016A20 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A34C (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A9F4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x180046464 (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 */

void __fastcall HampPkgNotifyDebugModeChanged(struct _HAM_PACKAGE *a1)
{
  __int64 v1; // r8
  struct _RM_HAM_ACTIVITY_HOST *v2; // rax
  struct _RM_HAM_ACTIVITY_HOST *v3; // rbx

  v1 = 0LL;
  while ( 1 )
  {
    v2 = HampHostEnumerateHostsInNode(a1, 3, v1);
    v3 = v2;
    if ( !v2 )
      break;
    RtlWakeAllConditionVariable((char *)v2 + 696);
    HampHostAcquireLockExclusiveEx(v3, 0);
    HampHostCheckQueueStateWorker(v3, 0);
    HampHostReleaseLockExclusiveEx(v3);
    v1 = (__int64)v3;
    a1 = *(struct _HAM_PACKAGE **)(*((_QWORD *)v3 + 99) + 88LL);
  }
}
