/*
 * XREFs of ?SubscribeToServices@TaskFlowImmersiveShellBroker@@UEAAJPEAUIServiceProvider@@@Z @ 0x18010F150
 * Callers:
 *     <none>
 * Callees:
 *     ?ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x18010F32C (-ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall TaskFlowImmersiveShellBroker::SubscribeToServices(
        TaskFlowImmersiveShellBroker *this,
        struct IServiceProvider *a2)
{
  bool v3; // di
  int v4; // eax
  int v6; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HKEY hKey; // [rsp+50h] [rbp+18h] BYREF

  hKey = 0LL;
  v3 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\TaskFlowDataEngine", 0, 0x20019u, &hKey) == 0;
  if ( hKey )
    RegCloseKey(hKey);
  if ( v3 )
  {
    v4 = TaskFlowImmersiveShellBroker::ReinitializeObjects((TaskFlowImmersiveShellBroker *)((char *)this - 80));
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x115,
        (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v4,
        v6);
    *((_DWORD *)this + 30) = 1;
  }
  return 0LL;
}
