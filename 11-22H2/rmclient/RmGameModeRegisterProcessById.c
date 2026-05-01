/*
 * XREFs of RmGameModeRegisterProcessById @ 0x18001A2D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180005FC0 @ 0x180005FC0 (sub_180005FC0.c)
 */

__int64 __fastcall RmGameModeRegisterProcessById(int a1, __int64 a2, int a3)
{
  char v6; // si
  unsigned int Pointer; // ebx
  CLIENT_CALL_RETURN v8; // rax
  int v10; // [rsp+20h] [rbp-58h]
  int v11; // [rsp+30h] [rbp-48h]
  RPC_BINDING_HANDLE Binding[3]; // [rsp+48h] [rbp-30h] BYREF

  v6 = 0;
  if ( (int)sub_180005FC0(&unk_180022C90, Binding) >= 0 )
  {
    v6 = 1;
    v11 = a3;
    v10 = a1;
    v8.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180020FB0, 0, 0LL, Binding[0], v10, a2, v11).Pointer;
    Pointer = (unsigned int)v8.Pointer;
    Binding[1] = v8.Pointer;
    if ( SLODWORD(v8.Simple) >= 0 )
      Pointer = 0;
  }
  else
  {
    Pointer = -1073610725;
  }
  if ( v6 )
    RpcBindingFree(Binding);
  return Pointer;
}
