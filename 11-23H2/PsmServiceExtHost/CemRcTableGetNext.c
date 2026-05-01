/*
 * XREFs of CemRcTableGetNext @ 0x18003F6C0
 * Callers:
 *     ?HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180015EEC (-HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180016EA0 (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x18001C970 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     ?HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18001CB90 (-HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?ArManagerRestartActivitiesForPhase@@YAXPEAU_ACTIVITY_RESTARTER@@W4_AR_STATE_CHANGE_EVENT@@@Z @ 0x18004B1A0 (-ArManagerRestartActivitiesForPhase@@YAXPEAU_ACTIVITY_RESTARTER@@W4_AR_STATE_CHANGE_EVENT@@@Z.c)
 *     ?HampClientGetNext@@YAPEAU_HAM_CLIENT_CONTEXT@@PEAU1@@Z @ 0x18004E0D0 (-HampClientGetNext@@YAPEAU_HAM_CLIENT_CONTEXT@@PEAU1@@Z.c)
 *     ?HampWakeManagerNotifyConnectedStandbyExit@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x1800555CA (-HampWakeManagerNotifyConnectedStandbyExit@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?ArManagerRundown@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x18006C880 (-ArManagerRundown@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 *     ?HampWakeManagerPreRundown@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x180080E6C (-HampWakeManagerPreRundown@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     CempRcTableGetFirstActiveObject @ 0x180016FE8 (CempRcTableGetFirstActiveObject.c)
 */

unsigned __int64 __fastcall CemRcTableGetNext(_QWORD *a1)
{
  unsigned __int64 v2; // rsi
  _QWORD *v3; // rcx
  _QWORD *v4; // rax
  __int64 i; // rcx
  _QWORD *v6; // rdx
  unsigned __int64 FirstActiveObject; // rbx

  v2 = a1[4] & 0xFFFFFFFFFFFFFFFCuLL;
  RtlAcquireSRWLockShared(v2 + 16);
  v3 = (_QWORD *)a1[1];
  v4 = a1;
  if ( v3 )
  {
    v6 = (_QWORD *)*v3;
    if ( *v3 )
    {
      do
      {
        v3 = v6;
        v6 = (_QWORD *)*v6;
      }
      while ( v6 );
    }
  }
  else
  {
    for ( i = a1[2]; ; i = v3[2] )
    {
      v3 = (_QWORD *)(i & 0xFFFFFFFFFFFFFFFCuLL);
      if ( !v3 || (_QWORD *)*v3 == v4 )
        break;
      v4 = v3;
    }
  }
  FirstActiveObject = CempRcTableGetFirstActiveObject((unsigned __int64)v3);
  RtlReleaseSRWLockShared(v2 + 16);
  CemRcObjectDereference(a1);
  return FirstActiveObject;
}
