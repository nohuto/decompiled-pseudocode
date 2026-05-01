/*
 * XREFs of sub_18001EF4C @ 0x18001EF4C
 * Callers:
 *     HamRegisterDesktopProcessWithAppContainerToken @ 0x180001AF0 (HamRegisterDesktopProcessWithAppContainerToken.c)
 * Callees:
 *     sub_180005FC0 @ 0x180005FC0 (sub_180005FC0.c)
 */

__int64 __fastcall sub_18001EF4C(__int64 a1, __int64 a2)
{
  int Pointer; // ebx
  CLIENT_CALL_RETURN v5; // rax
  RPC_BINDING_HANDLE Binding; // [rsp+70h] [rbp+18h] BYREF
  CLIENT_CALL_RETURN v8; // [rsp+78h] [rbp+20h]

  Pointer = sub_180005FC0(&unk_1800207D0, &Binding);
  if ( Pointer >= 0 )
  {
    v5.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800207A0, 7u, 0LL, Binding, a1, a2).Pointer;
    Pointer = (int)v5.Pointer;
    v8.Pointer = v5.Pointer;
    if ( LODWORD(v5.Pointer) == -2147483638 )
      Pointer = 0;
    if ( Pointer >= 0 )
      Pointer = 0;
  }
  if ( Binding )
    RpcBindingFree(&Binding);
  return (unsigned int)Pointer;
}
