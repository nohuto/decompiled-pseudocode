/*
 * XREFs of HamHostIdRetrieveDynamicId @ 0x180001A30
 * Callers:
 *     <none>
 * Callees:
 *     CempRpcBindToServer @ 0x180005AD0 (CempRpcBindToServer.c)
 */

__int64 __fastcall HamHostIdRetrieveDynamicId(PSID Sid, int a2, __int64 a3, __int64 a4)
{
  int Pointer; // ebx
  CLIENT_CALL_RETURN v9; // rax
  ULONG v11; // [rsp+28h] [rbp-60h]
  int v12; // [rsp+30h] [rbp-58h]
  RPC_BINDING_HANDLE Binding; // [rsp+58h] [rbp-30h]
  CLIENT_CALL_RETURN v14; // [rsp+60h] [rbp-28h]

  Binding = 0LL;
  Pointer = CempRpcBindToServer(&unk_180021830);
  if ( Pointer >= 0 )
  {
    v12 = a2;
    v11 = RtlLengthSid(Sid);
    v9.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180021800, 3u, 0LL, Binding, Sid, v11, v12, a3, a4).Pointer;
    Pointer = (int)v9.Pointer;
    v14.Pointer = v9.Pointer;
    if ( SLODWORD(v9.Simple) >= 0 )
      return 0;
  }
  return (unsigned int)Pointer;
}
