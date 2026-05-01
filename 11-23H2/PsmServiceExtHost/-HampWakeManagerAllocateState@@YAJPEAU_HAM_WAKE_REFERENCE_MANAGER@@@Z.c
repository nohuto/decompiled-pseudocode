/*
 * XREFs of ?HampWakeManagerAllocateState@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x180044B34
 * Callers:
 *     ?HampManagerAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180044AB8 (-HampManagerAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 * Callees:
 *     ?HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@2PEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004DCE8 (-HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_H.c)
 */

__int64 __fastcall HampWakeManagerAllocateState(struct _HAM_WAKE_REFERENCE_MANAGER *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  char *v4; // [rsp+50h] [rbp-48h]
  _QWORD v5[2]; // [rsp+60h] [rbp-38h] BYREF
  _OWORD v6[2]; // [rsp+70h] [rbp-28h] BYREF

  v5[0] = HampWakeManagerActivityCallback;
  v5[1] = 0LL;
  v4 = (char *)a1 + 8;
  v1 = *(_QWORD *)a1;
  memset(v6, 0, sizeof(v6));
  result = HampClientCreate(v1, 0LL, 0LL, 0LL, 0, 0, 0, v5, a1, v6, v4);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
