/*
 * XREFs of ?PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z @ 0x18026C12C
 * Callers:
 *     ??1CLegacyRenderTarget@@MEAA@XZ @ 0x18001C54C (--1CLegacyRenderTarget@@MEAA@XZ.c)
 *     ?SignalSEB@CLegacyRenderTarget@@AEAAX_NI@Z @ 0x1800BBC90 (-SignalSEB@CLegacyRenderTarget@@AEAAX_NI@Z.c)
 * Callees:
 *     ?PubSebiGetRpcBindingHandle@@YAJPEAPEAX@Z @ 0x18001F840 (-PubSebiGetRpcBindingHandle@@YAJPEAPEAX@Z.c)
 *     ?Find@ContextTable@@QEAAPEAXPEAU_SEB_RPC_PUBLISH_DATA@@@Z @ 0x18001FA1C (-Find@ContextTable@@QEAAPEAXPEAU_SEB_RPC_PUBLISH_DATA@@@Z.c)
 */

__int64 __fastcall PubSebiUpdateLevelEventRpc(struct _SEB_RPC_PUBLISH_DATA *a1, unsigned __int8 a2)
{
  int v2; // esi
  int RpcBindingHandle; // ebx
  ContextTable *v5; // rcx
  __int64 v6; // rbx
  bool v7; // zf
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  void *v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = a2;
  if ( !a1 )
  {
    LOWORD(RpcBindingHandle) = 87;
    return (unsigned __int16)RpcBindingHandle | 0x80070000;
  }
  RpcBindingHandle = PubSebiGetRpcBindingHandle(&v12);
  if ( !RpcBindingHandle )
  {
    v6 = ContextTable::Find(v5, a1);
    if ( !v6 )
    {
      LOWORD(RpcBindingHandle) = 6;
      return (unsigned __int16)RpcBindingHandle | 0x80070000;
    }
    RtlAcquireSRWLockExclusive(a1);
    *((_DWORD *)a1 + 2) = GetCurrentThreadId();
    if ( (_BYTE)v2 )
    {
      v7 = *((_DWORD *)a1 + 3) == 0;
    }
    else
    {
      if ( !*((_DWORD *)a1 + 3) )
      {
        RpcBindingHandle = 50;
LABEL_16:
        RtlReleaseSRWLockExclusive(a1);
        *((_DWORD *)a1 + 2) = 0;
        goto LABEL_17;
      }
      v7 = *((_DWORD *)a1 + 3) == 1;
    }
    if ( !v7
      || (RpcBindingHandle = (unsigned int)NdrClientCall3(
                                             (MIDL_STUBLESS_PROXY_INFO *)&CSystemEventBrokerPublisher_ProxyInfo,
                                             1u,
                                             0LL,
                                             v12,
                                             v2,
                                             v6).Pointer) == 0 )
    {
      v8 = *((_DWORD *)a1 + 3);
      v9 = v8 - 1;
      v10 = v8 + 1;
      if ( !(_BYTE)v2 )
        v10 = v9;
      RpcBindingHandle = 0;
      *((_DWORD *)a1 + 3) = v10;
    }
    goto LABEL_16;
  }
LABEL_17:
  if ( RpcBindingHandle > 0 )
    return (unsigned __int16)RpcBindingHandle | 0x80070000;
  return (unsigned int)RpcBindingHandle;
}
