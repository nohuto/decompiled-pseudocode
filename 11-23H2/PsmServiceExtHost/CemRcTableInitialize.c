/*
 * XREFs of CemRcTableInitialize @ 0x180011588
 * Callers:
 *     ?ArManagerInitialize@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x180011458 (-ArManagerInitialize@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 *     ?HamRcRootInitialize@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_ROOT@@@Z @ 0x1800114D0 (-HamRcRootInitialize@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_ROOT@@@Z.c)
 *     ?HamRcNodeInitialize@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_NODE@@2@Z @ 0x18001150C (-HamRcNodeInitialize@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_NODE@@2@Z.c)
 *     ?HamRcNodeInitializeFromRoot@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_ROOT@@PEAU_HAM_RC_TREE_NODE@@@Z @ 0x180041A3C (-HamRcNodeInitializeFromRoot@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_ROOT@@PEAU_HAM_RC_TR.c)
 *     ?HampManagerInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180046EDC (-HampManagerInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampClientInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@PEAXPEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@KKPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004E134 (-HampClientInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLB.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CemRcTableInitialize(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  a2[2] = 0LL;
  a2[3] = 0LL;
  a2[4] = 0LL;
  a2[5] = 0LL;
  *a2 = 0LL;
  a2[1] = 0LL;
  RtlInitializeSRWLock(a2 + 2);
  result = RtlInitializeConditionVariable(a2 + 4);
  a2[3] = a1;
  return result;
}
