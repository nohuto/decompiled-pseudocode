/*
 * XREFs of ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180001BA8
 * Callers:
 *     ?HampPkgGetStateSnapshot@@YA?AT_HAM_STATE_SNAPSHOT@@PEAU_HAM_PACKAGE@@PEBG@Z @ 0x180001A44 (-HampPkgGetStateSnapshot@@YA-AT_HAM_STATE_SNAPSHOT@@PEAU_HAM_PACKAGE@@PEBG@Z.c)
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180001BA8 (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x180010AD0 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     ?HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180010CE0 (-HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180027440 (-HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM_KEY@@P6AKPEAU_HAM_HOSTID_ENTRY@@PEAX@Z5@Z @ 0x180027DFC (-HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM.c)
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x180046464 (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     ?HampManagerTracingControlCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1800471D0 (-HampManagerTracingControlCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     ?HamSrvQueryActiveAppsInPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KKPEAPEAPEAGPEAK@Z @ 0x180070694 (-HamSrvQueryActiveAppsInPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KKPEAPEAPEAGPEAK@Z.c)
 *     ?HampPkgGetInterruptiveUIState@@YAKPEAU_HAM_PACKAGE@@PEBG@Z @ 0x1800789E4 (-HampPkgGetInterruptiveUIState@@YAKPEAU_HAM_PACKAGE@@PEBG@Z.c)
 *     ?HampPkgSuspend@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_CONTEXT@@PEAW4_HAM_APPLICATION_EXECUTION_STATE@@@Z @ 0x180078C24 (-HampPkgSuspend@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_CONTEXT@@PEAW4_HAM_APPLICATION_EXECUTION_S.c)
 *     ?RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180083618 (-RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180001BA8 (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     CemRcTableGetFirst @ 0x180005910 (CemRcTableGetFirst.c)
 *     CemRcObjectDereference @ 0x180036410 (CemRcObjectDereference.c)
 *     CemRcTableGetNext @ 0x180043224 (CemRcTableGetNext.c)
 */

struct _HAM_RC_TREE_NODE *__fastcall HamRcNodeGetFirst(struct _HAM_RC_TREE_NODE *a1, int a2)
{
  unsigned __int64 v2; // rbx
  char *v4; // rdi
  __int64 v5; // rax
  struct _HAM_RC_TREE_NODE *i; // rbx
  struct _HAM_RC_TREE_NODE *j; // rax
  struct _HAM_RC_TREE_NODE *v9; // rdi
  struct _HAM_RC_TREE_NODE **v10; // rax
  struct _HAM_RC_TREE_NODE *v11; // rcx
  struct _HAM_RC_TREE_NODE *v12; // rcx

  v2 = (unsigned __int64)a1 + 40;
  if ( a2 == 1 )
  {
    v4 = (char *)a1 + 56;
    RtlAcquireSRWLockShared((char *)a1 + 56);
    v5 = *(_QWORD *)(v2 + 8);
    if ( (v5 & 1) == 0 )
    {
      i = *(struct _HAM_RC_TREE_NODE **)(v2 + 8);
      goto LABEL_4;
    }
    if ( v5 != 1 )
    {
      i = (struct _HAM_RC_TREE_NODE *)(v5 ^ (v2 | 1));
LABEL_4:
      while ( i )
      {
        if ( *((_QWORD *)i + 3) )
        {
          if ( _InterlockedIncrement64((volatile signed __int64 *)i + 3) <= 1 )
            __fastfail(0xEu);
          goto LABEL_7;
        }
        v10 = (struct _HAM_RC_TREE_NODE **)*((_QWORD *)i + 1);
        v11 = i;
        if ( v10 )
        {
          v12 = *v10;
          for ( i = (struct _HAM_RC_TREE_NODE *)*((_QWORD *)i + 1); v12; v12 = *(struct _HAM_RC_TREE_NODE **)v12 )
            i = v12;
        }
        else
        {
          while ( 1 )
          {
            i = (struct _HAM_RC_TREE_NODE *)(*((_QWORD *)i + 2) & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !i || *(struct _HAM_RC_TREE_NODE **)i == v11 )
              break;
            v11 = i;
          }
        }
      }
    }
    i = 0LL;
LABEL_7:
    RtlReleaseSRWLockShared(v4);
  }
  else
  {
    for ( j = (struct _HAM_RC_TREE_NODE *)CemRcTableGetFirst((char *)a1 + 40);
          ;
          j = (struct _HAM_RC_TREE_NODE *)CemRcTableGetNext(v9) )
    {
      v9 = j;
      if ( !j )
        break;
      i = HamRcNodeGetFirst(j, a2 - 1);
      if ( i )
      {
        CemRcObjectDereference(v9);
        return i;
      }
    }
    return 0LL;
  }
  return i;
}
