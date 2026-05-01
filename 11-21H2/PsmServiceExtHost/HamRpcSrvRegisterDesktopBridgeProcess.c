/*
 * XREFs of HamRpcSrvRegisterDesktopBridgeProcess @ 0x18003A640
 * Callers:
 *     <none>
 * Callees:
 *     ?HamSrvRegisterDesktopBridgeProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXK1@Z @ 0x18003A66C (-HamSrvRegisterDesktopBridgeProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXK1@Z.c)
 */

int __fastcall HamRpcSrvRegisterDesktopBridgeProcess(__int64 a1, void *a2, unsigned int a3, void *a4)
{
  int result; // eax

  result = HamSrvRegisterDesktopBridgeProcess((struct _RM_SERVICE_GLOBALS *)((char *)RmSvcGlobals + 2248), a2, a3, a4);
  if ( result >= 0 )
    return 0;
  return result;
}
