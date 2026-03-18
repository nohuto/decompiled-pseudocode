/*
 * XREFs of PubSebRegisterRpc @ 0x18001F600
 * Callers:
 *     ?EnsureWNFHandles@CLegacyRenderTarget@@IEAAJXZ @ 0x1800BBD28 (-EnsureWNFHandles@CLegacyRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?Insert@ContextTable@@QEAAKPEAU_SEB_RPC_PUBLISH_DATA@@PEAX@Z @ 0x18001F718 (-Insert@ContextTable@@QEAAKPEAU_SEB_RPC_PUBLISH_DATA@@PEAX@Z.c)
 *     ?PubSebiGetRpcBindingHandle@@YAJPEAPEAX@Z @ 0x18001F840 (-PubSebiGetRpcBindingHandle@@YAJPEAPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18026C340 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall PubSebRegisterRpc(__int64 a1, struct _SEB_RPC_PUBLISH_DATA **a2)
{
  int RpcBindingHandle; // ebx
  struct _SEB_RPC_PUBLISH_DATA *Heap; // rax
  struct _SEB_RPC_PUBLISH_DATA *v6; // rsi
  CLIENT_CALL_RETURN v7; // rcx
  void *v8; // r8
  void *v10; // [rsp+60h] [rbp+18h] BYREF
  void *v11; // [rsp+68h] [rbp+20h] BYREF

  v10 = 0LL;
  RpcBindingHandle = PubSebiGetRpcBindingHandle(&v11);
  if ( !RpcBindingHandle )
  {
    Heap = (struct _SEB_RPC_PUBLISH_DATA *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x10uLL);
    v6 = Heap;
    if ( !Heap )
    {
      LOWORD(RpcBindingHandle) = 8;
      return (unsigned __int16)RpcBindingHandle | 0x80070000;
    }
    *(_OWORD *)Heap = 0LL;
    RtlInitializeSRWLock(Heap);
    RpcBindingHandle = (unsigned int)NdrClientCall3(
                                       (MIDL_STUBLESS_PROXY_INFO *)&CSystemEventBrokerPublisher_ProxyInfo,
                                       0,
                                       0LL,
                                       v11,
                                       a1,
                                       &v10).Pointer;
    if ( RpcBindingHandle )
      goto LABEL_14;
    v8 = v10;
    if ( !v10 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgs();
      v8 = v10;
    }
    RpcBindingHandle = ContextTable::Insert((ContextTable *)v7.Pointer, v6, v8);
    if ( !RpcBindingHandle )
    {
      *a2 = v6;
      goto LABEL_8;
    }
    RpcBindingHandle = (unsigned int)NdrClientCall3(
                                       (MIDL_STUBLESS_PROXY_INFO *)&CSystemEventBrokerPublisher_ProxyInfo,
                                       2u,
                                       0LL,
                                       v11,
                                       &v10).Pointer;
    if ( RpcBindingHandle )
LABEL_14:
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
  }
LABEL_8:
  if ( RpcBindingHandle > 0 )
    return (unsigned __int16)RpcBindingHandle | 0x80070000;
  return (unsigned int)RpcBindingHandle;
}
