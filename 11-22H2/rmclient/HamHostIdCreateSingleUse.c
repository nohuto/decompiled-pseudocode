/*
 * XREFs of HamHostIdCreateSingleUse @ 0x18001DC60
 * Callers:
 *     <none>
 * Callees:
 *     sub_180005FC0 @ 0x180005FC0 (sub_180005FC0.c)
 */

__int64 __fastcall HamHostIdCreateSingleUse(__int64 a1)
{
  int Pointer; // ebx
  CLIENT_CALL_RETURN v3; // rax
  RPC_BINDING_HANDLE Binding; // [rsp+58h] [rbp+10h] BYREF
  CLIENT_CALL_RETURN v6; // [rsp+60h] [rbp+18h]

  Binding = 0LL;
  Pointer = sub_180005FC0(&unk_180020860, &Binding);
  if ( Pointer >= 0 )
  {
    v3.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 2u, 0LL, Binding, a1).Pointer;
    Pointer = (int)v3.Pointer;
    v6.Pointer = v3.Pointer;
    if ( SLODWORD(v3.Simple) >= 0 )
      Pointer = 0;
  }
  if ( Binding )
    RpcBindingFree(&Binding);
  return (unsigned int)Pointer;
}
