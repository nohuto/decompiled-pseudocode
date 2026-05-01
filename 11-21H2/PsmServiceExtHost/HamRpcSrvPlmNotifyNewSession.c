/*
 * XREFs of HamRpcSrvPlmNotifyNewSession @ 0x180046790
 * Callers:
 *     <none>
 * Callees:
 *     CempRpcQueryClientInformation @ 0x18003378C (CempRpcQueryClientInformation.c)
 *     ?HamSrvPlmNotifyNewSession@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAEK@Z @ 0x1800467F0 (-HamSrvPlmNotifyNewSession@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAEK@Z.c)
 */

__int64 __fastcall HamRpcSrvPlmNotifyNewSession(void *a1, unsigned __int8 *a2, unsigned int a3)
{
  __int64 result; // rax
  unsigned int v6; // [rsp+58h] [rbp+20h] BYREF

  result = CempRpcQueryClientInformation(a1, 0LL, &v6, 0LL, 0LL, 0LL);
  if ( (int)result >= 0 )
    return HamSrvPlmNotifyNewSession((struct _RM_SERVICE_GLOBALS *)((char *)RmSvcGlobals + 2248), v6, a2, a3);
  return result;
}
