/*
 * XREFs of ?Init@ResourceManagerClientProxy@@IEAAJXZ @ 0x18000A6A4
 * Callers:
 *     ?CreateResourceManagerClientProxy@@YAJPEAPEAUIResourceManager@ExecutionModel@@@Z @ 0x18000A630 (-CreateResourceManagerClientProxy@@YAJPEAPEAUIResourceManager@ExecutionModel@@@Z.c)
 * Callees:
 *     CempRpcBindToServer @ 0x180005AD0 (CempRpcBindToServer.c)
 *     RmpClientWnfCreateSubscription @ 0x180005CB0 (RmpClientWnfCreateSubscription.c)
 */

__int64 __fastcall ResourceManagerClientProxy::Init(RPC_BINDING_HANDLE *this)
{
  RPC_BINDING_HANDLE *v1; // rsi
  int v3; // eax
  int Pointer; // ebx
  int Subscription; // eax

  v1 = this + 2;
  v3 = CempRpcBindToServer(&unk_180021F60, this + 2);
  Pointer = v3 | 0x10000000;
  if ( v3 >= 0 )
  {
    Pointer = (unsigned int)NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180021F30, 0, 0LL, *v1, this + 3, this + 4).Pointer;
    if ( Pointer >= 0 )
    {
      Subscription = RmpClientWnfCreateSubscription(
                       this + 4,
                       (__int64)ResourceManagerClientProxy::LegacyResourceSetCallbackHandlerThunk,
                       (__int64)this,
                       this + 5);
      if ( Subscription >= 0 )
      {
        *((_BYTE *)this + 568) = 1;
        return 0;
      }
      Pointer = Subscription | 0x10000000;
    }
  }
  if ( this[3] )
    NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180021F30, 1u, 0LL);
  if ( *v1 )
  {
    RpcBindingFree(v1);
    *v1 = 0LL;
  }
  return (unsigned int)Pointer;
}
