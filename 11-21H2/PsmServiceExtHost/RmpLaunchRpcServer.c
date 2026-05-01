/*
 * XREFs of RmpLaunchRpcServer @ 0x1800493D4
 * Callers:
 *     RmpLaunchAllRpcServers @ 0x180049284 (RmpLaunchAllRpcServers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpLaunchRpcServer(RPC_IF_HANDLE IfSpec, __int64 a2, void *a3, RPC_BINDING_VECTOR **a4)
{
  RPC_STATUS v7; // eax
  unsigned int v8; // edi

  *a4 = 0LL;
  if ( !(unsigned int)RpcServerRegisterIf3(IfSpec, 0LL, 0LL, 41LL, 1234, 0, 0LL, a2) )
  {
    if ( a3 )
      v7 = RpcServerInqBindingsEx(a3, a4);
    else
      v7 = RpcServerInqBindings(a4);
    if ( !v7 && !RpcEpRegisterW(IfSpec, *a4, 0LL, 0LL) )
      return 0;
    RpcServerUnregisterIf(IfSpec, 0LL, 0);
  }
  v8 = -1073741823;
  if ( *a4 )
  {
    RpcBindingVectorFree(a4);
    *a4 = 0LL;
  }
  return v8;
}
