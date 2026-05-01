/*
 * XREFs of ?HampWakeManagerAllocateState@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x18004A9A8
 * Callers:
 *     ?RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180049BB4 (-RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@2PEAT_HAM_STATE_CHANGE_FLAGS@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180006ABC (-HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_H.c)
 */

__int64 __fastcall HampWakeManagerAllocateState(struct _HAM_WAKE_REFERENCE_MANAGER *a1)
{
  __int64 result; // rax
  __int128 v2; // [rsp+60h] [rbp-18h] BYREF

  *(_QWORD *)&v2 = HampWakeManagerActivityCallback;
  *((_QWORD *)&v2 + 1) = 0LL;
  result = HampClientCreate(*(_QWORD *)a1, 0, 0LL, 0LL, 0, 0, 0, &v2, a1, 0LL, (struct _WNF_STATE_NAME **)a1 + 1);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
