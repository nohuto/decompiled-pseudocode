/*
 * XREFs of RmGameModeRegisterPairedAuxiliaryProcessById @ 0x18001A0C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180005FC0 @ 0x180005FC0 (sub_180005FC0.c)
 */

__int64 __fastcall RmGameModeRegisterPairedAuxiliaryProcessById(int a1, __int64 a2, int a3, int a4)
{
  char v8; // si
  int Pointer; // ebx
  int v11; // [rsp+20h] [rbp-58h]
  int v12; // [rsp+30h] [rbp-48h]
  int v13; // [rsp+38h] [rbp-40h]
  char v14; // [rsp+40h] [rbp-38h]
  RPC_BINDING_HANDLE Binding[2]; // [rsp+50h] [rbp-28h] BYREF

  v8 = 0;
  if ( (int)sub_180005FC0(&unk_180022C90, Binding) >= 0 )
  {
    v8 = 1;
    v14 = 1;
    v13 = a4;
    v12 = a3;
    v11 = a1;
    Pointer = (unsigned int)NdrClientCall3(
                              (MIDL_STUBLESS_PROXY_INFO *)&stru_180020FB0,
                              4u,
                              0LL,
                              Binding[0],
                              v11,
                              a2,
                              v12,
                              v13,
                              v14).Pointer;
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
