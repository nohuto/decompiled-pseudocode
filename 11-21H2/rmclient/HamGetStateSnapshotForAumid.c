/*
 * XREFs of HamGetStateSnapshotForAumid @ 0x180005170
 * Callers:
 *     <none>
 * Callees:
 *     CempRpcBindToServer @ 0x180005AD0 (CempRpcBindToServer.c)
 */

__int64 __fastcall HamGetStateSnapshotForAumid(__int64 a1, void *a2, int a3, _BYTE *a4)
{
  int Pointer; // ebx
  CLIENT_CALL_RETURN v9; // rax
  ULONG v11; // [rsp+30h] [rbp-58h]
  int v12; // [rsp+38h] [rbp-50h]
  _BYTE v13[4]; // [rsp+50h] [rbp-38h] BYREF
  int v14; // [rsp+54h] [rbp-34h]
  RPC_BINDING_HANDLE Binding[3]; // [rsp+58h] [rbp-30h] BYREF

  Binding[0] = 0LL;
  if ( RtlValidSid(a2) )
  {
    Pointer = CempRpcBindToServer(&unk_1800217A0);
    if ( Pointer >= 0 )
    {
      v12 = a3;
      v11 = RtlLengthSid(a2);
      v9.Pointer = NdrClientCall3(
                     (MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo,
                     0x15u,
                     0LL,
                     Binding[0],
                     a1,
                     a2,
                     v11,
                     v12,
                     v13).Pointer;
      Pointer = (int)v9.Pointer;
      Binding[1] = v9.Pointer;
      v14 = (int)v9.Pointer;
      if ( SLODWORD(v9.Simple) >= 0 )
      {
        *a4 = v13[0];
        Pointer = 0;
      }
    }
  }
  else
  {
    Pointer = -1073741584;
  }
  if ( Binding[0] )
    RpcBindingFree(Binding);
  return (unsigned int)Pointer;
}
