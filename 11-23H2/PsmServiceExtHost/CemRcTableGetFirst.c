/*
 * XREFs of CemRcTableGetFirst @ 0x180016F78
 * Callers:
 *     ?HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180015EEC (-HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180016EA0 (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     ?HamSrvQueryActiveAppsInPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KKPEAPEAPEAGPEAK@Z @ 0x1800368C4 (-HamSrvQueryActiveAppsInPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KKPEAPEAPEAGPEAK@Z.c)
 *     ?ArManagerRestartActivitiesForPhase@@YAXPEAU_ACTIVITY_RESTARTER@@W4_AR_STATE_CHANGE_EVENT@@@Z @ 0x18004B1A0 (-ArManagerRestartActivitiesForPhase@@YAXPEAU_ACTIVITY_RESTARTER@@W4_AR_STATE_CHANGE_EVENT@@@Z.c)
 *     ?HampClientGetFirst@@YAPEAU_HAM_CLIENT_CONTEXT@@PEAU_CEM_RC_TABLE@@@Z @ 0x18004E0A8 (-HampClientGetFirst@@YAPEAU_HAM_CLIENT_CONTEXT@@PEAU_CEM_RC_TABLE@@@Z.c)
 *     ?HampWakeManagerNotifyConnectedStandbyExit@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x1800555CA (-HampWakeManagerNotifyConnectedStandbyExit@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?ArManagerRundown@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x18006C880 (-ArManagerRundown@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 *     ?HampWakeManagerPreRundown@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x180080E6C (-HampWakeManagerPreRundown@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 * Callees:
 *     CempRcTableGetFirstActiveObject @ 0x180016FE8 (CempRcTableGetFirstActiveObject.c)
 */

__int64 __fastcall CemRcTableGetFirst(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 FirstActiveObject; // rbx

  v1 = a1 + 16;
  RtlAcquireSRWLockShared(a1 + 16);
  v3 = *(_QWORD *)(a1 + 8);
  if ( (v3 & 1) != 0 )
  {
    if ( v3 == 1 )
      v4 = 0LL;
    else
      v4 = v3 ^ (a1 | 1);
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 8);
  }
  FirstActiveObject = CempRcTableGetFirstActiveObject(v4);
  RtlReleaseSRWLockShared(v1);
  return FirstActiveObject;
}
