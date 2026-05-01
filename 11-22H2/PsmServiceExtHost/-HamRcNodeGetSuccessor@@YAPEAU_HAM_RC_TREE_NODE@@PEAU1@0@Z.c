/*
 * XREFs of ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x18001C970
 * Callers:
 *     ?HamSrvHostIdStoreReferenceId@@YAPEAU_HAM_HOSTID_ENTRY@@PEAU_HAM_HOSTID_STORE@@PEBGPEAXK_K@Z @ 0x180016010 (-HamSrvHostIdStoreReferenceId@@YAPEAU_HAM_HOSTID_ENTRY@@PEAU_HAM_HOSTID_STORE@@PEBGPEAXK_K@Z.c)
 *     ?HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800167B0 (-HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x18001C970 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     ?HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18001CB90 (-HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001D810 (-HampPkgUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HamSrvQueryActiveAppsInPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KKPEAPEAPEAGPEAK@Z @ 0x1800368F4 (-HamSrvQueryActiveAppsInPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KKPEAPEAPEAGPEAK@Z.c)
 *     ?HampPkgGetStateSnapshot@@YA?AT_HAM_STATE_SNAPSHOT@@PEAU_HAM_PACKAGE@@PEBG@Z @ 0x180037D5C (-HampPkgGetStateSnapshot@@YA-AT_HAM_STATE_SNAPSHOT@@PEAU_HAM_PACKAGE@@PEBG@Z.c)
 *     ?HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM_KEY@@P6AKPEAU_HAM_HOSTID_ENTRY@@PEAX@Z5@Z @ 0x18003F254 (-HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM.c)
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x180041F00 (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     ?HampManagerTracingControlCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x180043180 (-HampManagerTracingControlCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     ?HampPkgGetInterruptiveUIState@@YAKPEAU_HAM_PACKAGE@@PEBG@Z @ 0x18007EF88 (-HampPkgGetInterruptiveUIState@@YAKPEAU_HAM_PACKAGE@@PEBG@Z.c)
 *     ?HampPkgSuspend@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_CONTEXT@@PEAW4_HAM_APPLICATION_EXECUTION_STATE@@@Z @ 0x18007F1E8 (-HampPkgSuspend@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_CONTEXT@@PEAW4_HAM_APPLICATION_EXECUTION_S.c)
 *     ?RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18008221C (-RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180016EA0 (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x18001C970 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     CemRcTableGetNext @ 0x18003F740 (CemRcTableGetNext.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053740 (_guard_xfg_dispatch_icall_nop.c)
 */

struct _HAM_RC_TREE_NODE *__fastcall HamRcNodeGetSuccessor(struct _HAM_RC_TREE_NODE *a1, struct _HAM_RC_TREE_NODE *a2)
{
  struct _HAM_RC_TREE_NODE *v2; // r8
  char *v5; // rbp
  unsigned __int64 i; // rbx
  struct _HAM_RC_TREE_NODE *v7; // rax
  _QWORD *v8; // rcx
  __int64 v9; // rdi
  signed __int64 v10; // rax
  signed __int64 v11; // rcx
  bool v12; // zf
  signed __int64 v13; // rtt
  struct _HAM_RC_TREE_NODE *result; // rax
  struct _HAM_RC_TREE_NODE *Successor; // rdi
  struct _HAM_RC_TREE_NODE *First; // rsi
  unsigned __int64 v17; // rbp
  signed __int64 v18; // rax
  bool v19; // cc
  signed __int64 v20; // rax
  _QWORD **v21; // rax
  unsigned __int64 v22; // rcx
  _QWORD *v23; // rcx

  v2 = (struct _HAM_RC_TREE_NODE *)(*((_QWORD *)a2 + 4) & 0xFFFFFFFFFFFFFFFCuLL);
  if ( v2 == (struct _HAM_RC_TREE_NODE *)((char *)a1 + 40) )
  {
    v5 = (char *)v2 + 16;
    RtlAcquireSRWLockShared((char *)v2 + 16);
    i = *((_QWORD *)a2 + 1);
    v7 = a2;
    if ( i )
    {
      v8 = *(_QWORD **)i;
      if ( *(_QWORD *)i )
      {
        do
        {
          i = (unsigned __int64)v8;
          v8 = (_QWORD *)*v8;
        }
        while ( v8 );
      }
    }
    else
    {
      for ( i = *((_QWORD *)a2 + 2) & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
      {
        if ( *(struct _HAM_RC_TREE_NODE **)i == v7 )
          break;
        v7 = (struct _HAM_RC_TREE_NODE *)i;
      }
    }
    v9 = 0LL;
    if ( i )
    {
      while ( !*(_QWORD *)(i + 24) )
      {
        v21 = *(_QWORD ***)(i + 8);
        v22 = i;
        if ( v21 )
        {
          v23 = *v21;
          for ( i = *(_QWORD *)(i + 8); v23; v23 = (_QWORD *)*v23 )
            i = (unsigned __int64)v23;
        }
        else
        {
          for ( i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
          {
            if ( *(_QWORD *)i == v22 )
              break;
            v22 = i;
          }
        }
        if ( !i )
          goto LABEL_6;
      }
      if ( _InterlockedIncrement64((volatile signed __int64 *)(i + 24)) <= 1 )
        __fastfail(0xEu);
    }
    else
    {
LABEL_6:
      i = 0LL;
    }
    RtlReleaseSRWLockShared(v5);
    _m_prefetchw((char *)a2 + 24);
    v10 = *((_QWORD *)a2 + 3);
    v11 = v10 - 1;
    v12 = v10 == 1;
    if ( v10 - 1 <= 0 )
    {
LABEL_29:
      if ( !v12 )
        __fastfail(0xEu);
      v17 = *((_QWORD *)a2 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( *((_QWORD *)a2 + 2) == -1LL )
      {
        if ( _InterlockedDecrement64((volatile signed __int64 *)a2 + 3) <= -1 )
          __fastfail(0xEu);
        (*(void (__fastcall **)(struct _HAM_RC_TREE_NODE *))(v17 + 24))(a2);
      }
      else
      {
        RtlAcquireSRWLockExclusive(v17 + 16);
        v18 = _InterlockedExchangeAdd64((volatile signed __int64 *)a2 + 3, 0xFFFFFFFFFFFFFFFFuLL);
        v19 = v18 <= 1;
        v20 = v18 - 1;
        if ( v19 )
        {
          if ( v20 )
            __fastfail(0xEu);
          RtlReleaseSRWLockExclusive(v17 + 16);
          (*(void (__fastcall **)(struct _HAM_RC_TREE_NODE *))(v17 + 24))(a2);
        }
        else
        {
          RtlReleaseSRWLockExclusive(v17 + 16);
        }
      }
    }
    else
    {
      while ( 1 )
      {
        v13 = v10;
        v10 = _InterlockedCompareExchange64((volatile signed __int64 *)a2 + 3, v11, v10);
        if ( v13 == v10 )
          break;
        v11 = v10 - 1;
        v12 = v10 == 1;
        if ( v10 - 1 <= 0 )
          goto LABEL_29;
      }
    }
    if ( i )
      return (struct _HAM_RC_TREE_NODE *)i;
    return (struct _HAM_RC_TREE_NODE *)v9;
  }
  Successor = (struct _HAM_RC_TREE_NODE *)((char *)v2 - 40);
  if ( _InterlockedIncrement64((volatile signed __int64 *)v2 - 2) <= 1 )
    __fastfail(0xEu);
  result = (struct _HAM_RC_TREE_NODE *)CemRcTableGetNext(a2);
  First = result;
  if ( !result )
  {
    Successor = HamRcNodeGetSuccessor(a1, Successor);
    if ( !Successor )
      return 0LL;
    while ( 1 )
    {
      First = HamRcNodeGetFirst(Successor, 1);
      if ( First )
        break;
      Successor = HamRcNodeGetSuccessor(a1, Successor);
      if ( !Successor )
        return 0LL;
    }
LABEL_26:
    CemRcObjectDereference(Successor);
    return First;
  }
  if ( Successor )
    goto LABEL_26;
  return result;
}
