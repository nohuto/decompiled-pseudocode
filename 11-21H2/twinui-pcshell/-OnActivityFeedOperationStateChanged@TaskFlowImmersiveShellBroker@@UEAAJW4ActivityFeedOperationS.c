/*
 * XREFs of ?OnActivityFeedOperationStateChanged@TaskFlowImmersiveShellBroker@@UEAAJW4ActivityFeedOperationScope@@W4ActivityFeedOperationState@@@Z @ 0x1803C6140
 * Callers:
 *     <none>
 * Callees:
 *     ?ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1800A78B4 (-ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall TaskFlowImmersiveShellBroker::OnActivityFeedOperationStateChanged(__int64 a1)
{
  LARGE_INTEGER *v1; // rcx
  int v2; // eax
  const char *v3; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (LARGE_INTEGER *)(a1 - 144);
  try
  {
    v2 = TaskFlowImmersiveShellBroker::ReinitializeObjects(v1);
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x263,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x266,
                           (int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
                           v3);
  }
  return result;
}
