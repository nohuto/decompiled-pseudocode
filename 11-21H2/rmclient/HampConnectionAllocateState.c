/*
 * XREFs of HampConnectionAllocateState @ 0x1800047D0
 * Callers:
 *     HampConnectionCreate @ 0x180004700 (HampConnectionCreate.c)
 * Callees:
 *     CempRpcBindToServer @ 0x180005AD0 (CempRpcBindToServer.c)
 *     HamIpcChannelAllocateState @ 0x180005C80 (HamIpcChannelAllocateState.c)
 */

__int64 __fastcall HampConnectionAllocateState(__int64 a1, void *a2, int a3, __int64 a4)
{
  char v7; // si
  int Pointer; // ebx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  CLIENT_CALL_RETURN v12; // rax
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  CLIENT_CALL_RETURN v16; // rax
  int v18; // [rsp+28h] [rbp-80h]
  RPC_BINDING_HANDLE Binding[9]; // [rsp+48h] [rbp-60h] BYREF

  v7 = 0;
  Pointer = CempRpcBindToServer(a2);
  if ( Pointer < 0 )
    goto LABEL_22;
  v7 = 1;
  v9 = *(_DWORD *)(a1 + 112);
  if ( !v9 )
  {
    v18 = a3;
    v12.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 0, 0LL, Binding[0], a1, v18, a1 + 8).Pointer;
    Binding[7] = v12.Pointer;
    goto LABEL_6;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v12.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180021D50, 0, 0LL, Binding[0], a1, a1 + 8).Pointer;
    Binding[6] = v12.Pointer;
    goto LABEL_6;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    v12.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180021B10, 0, 0LL, Binding[0], a1, a1 + 8).Pointer;
    Binding[5] = v12.Pointer;
LABEL_6:
    Pointer = (int)v12.Pointer;
    goto LABEL_18;
  }
  v13 = v11 - 1;
  if ( !v13 )
  {
    v12.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180022040, 0, 0LL, Binding[0], a1, a1 + 8).Pointer;
    Binding[4] = v12.Pointer;
    goto LABEL_6;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    v12.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180021D80, 0, 0LL, Binding[0], a1).Pointer;
    Binding[3] = v12.Pointer;
    goto LABEL_6;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    v12.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180021DB0, 0, 0LL, Binding[0], a1).Pointer;
    Binding[2] = v12.Pointer;
    goto LABEL_6;
  }
  if ( v15 == 1 )
  {
    v16.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180021CC0, 0, 0LL, Binding[0], a4, a1, a1 + 8).Pointer;
    Pointer = (int)v16.Pointer;
    Binding[1] = v16.Pointer;
  }
  else
  {
    Pointer = -1073741127;
  }
LABEL_18:
  if ( Pointer >= 0 )
  {
    if ( *(_DWORD *)(a1 + 112) > 3u || (Pointer = HamIpcChannelAllocateState(a1 + 16, a1 + 8), Pointer >= 0) )
      Pointer = 0;
  }
LABEL_22:
  if ( v7 )
    RpcBindingFree(Binding);
  return (unsigned int)Pointer;
}
