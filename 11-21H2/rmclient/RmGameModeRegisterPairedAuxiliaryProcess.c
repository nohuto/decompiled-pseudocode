/*
 * XREFs of RmGameModeRegisterPairedAuxiliaryProcess @ 0x180019490
 * Callers:
 *     <none>
 * Callees:
 *     CempRpcBindToServer @ 0x180005AD0 (CempRpcBindToServer.c)
 */

__int64 __fastcall RmGameModeRegisterPairedAuxiliaryProcess(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char v8; // si
  int Pointer; // ebx
  int v11; // [rsp+38h] [rbp-40h]
  char v12; // [rsp+40h] [rbp-38h]
  RPC_BINDING_HANDLE Binding[2]; // [rsp+50h] [rbp-28h] BYREF

  v8 = 0;
  if ( (int)CempRpcBindToServer(&unk_180023B70, Binding) >= 0 )
  {
    v8 = 1;
    v12 = 1;
    v11 = a4;
    Pointer = (unsigned int)NdrClientCall3(
                              (MIDL_STUBLESS_PROXY_INFO *)&stru_180022110,
                              5u,
                              0LL,
                              Binding[0],
                              a1,
                              a2,
                              a3,
                              v11,
                              v12).Pointer;
    if ( Pointer >= 0 )
      Pointer = 0;
  }
  else
  {
    Pointer = -1073610725;
  }
  if ( v8 )
    RpcBindingFree(Binding);
  return (unsigned int)Pointer;
}
