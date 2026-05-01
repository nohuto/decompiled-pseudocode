/*
 * XREFs of ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x180010AD0
 * Callers:
 *     ?HampPkgGetStateSnapshot@@YA?AT_HAM_STATE_SNAPSHOT@@PEAU_HAM_PACKAGE@@PEBG@Z @ 0x180001A44 (-HampPkgGetStateSnapshot@@YA-AT_HAM_STATE_SNAPSHOT@@PEAU_HAM_PACKAGE@@PEBG@Z.c)
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x180010AD0 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     ?HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180010CE0 (-HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180011800 (-HampPkgUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
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
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x180010AD0 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     CemRcObjectDereference @ 0x180036410 (CemRcObjectDereference.c)
 *     CemRcTableGetNext @ 0x180043224 (CemRcTableGetNext.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 */

struct _HAM_RC_TREE_NODE *__fastcall HamRcNodeGetSuccessor(struct _HAM_RC_TREE_NODE *a1, struct _HAM_RC_TREE_NODE *a2)
{
  struct _HAM_RC_TREE_NODE *v2; // r8
  char *v5; // rsi
  unsigned __int64 i; // rbx
  struct _HAM_RC_TREE_NODE *v7; // rax
  _QWORD *v8; // rcx
  signed __int64 v9; // rax
  signed __int64 v10; // rcx
  bool v11; // zf
  signed __int64 v12; // rtt
  struct _HAM_RC_TREE_NODE *result; // rax
  struct _HAM_RC_TREE_NODE *Successor; // rsi
  struct _HAM_RC_TREE_NODE *First; // rdi
  unsigned __int64 v16; // rsi
  signed __int64 v17; // rax
  bool v18; // cc
  signed __int64 v19; // rax
  _QWORD **v20; // rax
  unsigned __int64 v21; // rcx
  _QWORD *v22; // rcx

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
    if ( i )
    {
      while ( !*(_QWORD *)(i + 24) )
      {
        v20 = *(_QWORD ***)(i + 8);
        v21 = i;
        if ( v20 )
        {
          v22 = *v20;
          for ( i = *(_QWORD *)(i + 8); v22; v22 = (_QWORD *)*v22 )
            i = (unsigned __int64)v22;
        }
        else
        {
          for ( i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
          {
            if ( *(_QWORD *)i == v21 )
              break;
            v21 = i;
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
    v9 = *((_QWORD *)a2 + 3);
    v10 = v9 - 1;
    v11 = v9 == 1;
    if ( v9 - 1 <= 0 )
    {
LABEL_26:
      if ( !v11 )
        __fastfail(0xEu);
      v16 = *((_QWORD *)a2 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( *((_QWORD *)a2 + 2) == -1LL )
      {
        if ( _InterlockedDecrement64((volatile signed __int64 *)a2 + 3) <= -1 )
          __fastfail(0xEu);
        (*(void (__fastcall **)(struct _HAM_RC_TREE_NODE *))(v16 + 24))(a2);
      }
      else
      {
        RtlAcquireSRWLockExclusive(v16 + 16);
        v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)a2 + 3, 0xFFFFFFFFFFFFFFFFuLL);
        v18 = v17 <= 1;
        v19 = v17 - 1;
        if ( v18 )
        {
          if ( v19 )
            __fastfail(0xEu);
          RtlReleaseSRWLockExclusive(v16 + 16);
          (*(void (__fastcall **)(struct _HAM_RC_TREE_NODE *))(v16 + 24))(a2);
        }
        else
        {
          RtlReleaseSRWLockExclusive(v16 + 16);
        }
      }
    }
    else
    {
      while ( 1 )
      {
        v12 = v9;
        v9 = _InterlockedCompareExchange64((volatile signed __int64 *)a2 + 3, v10, v9);
        if ( v12 == v9 )
          break;
        v10 = v9 - 1;
        v11 = v9 == 1;
        if ( v9 - 1 <= 0 )
          goto LABEL_26;
      }
    }
    return (struct _HAM_RC_TREE_NODE *)i;
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
LABEL_21:
    CemRcObjectDereference(Successor);
    return First;
  }
  if ( Successor )
    goto LABEL_21;
  return result;
}
