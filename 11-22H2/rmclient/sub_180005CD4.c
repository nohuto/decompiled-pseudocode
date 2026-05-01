/*
 * XREFs of sub_180005CD4 @ 0x180005CD4
 * Callers:
 *     CrmRegister @ 0x180005C30 (CrmRegister.c)
 * Callees:
 *     sub_180005FC0 @ 0x180005FC0 (sub_180005FC0.c)
 */

__int64 __fastcall sub_180005CD4(__int64 a1, int a2, __int64 a3)
{
  int v6; // edi
  int Pointer; // ebx
  CLIENT_CALL_RETURN v8; // rax
  int v10; // [rsp+30h] [rbp-68h]
  __int64 v11; // [rsp+48h] [rbp-50h] BYREF
  __int64 v12; // [rsp+50h] [rbp-48h] BYREF
  RPC_BINDING_HANDLE Binding[8]; // [rsp+58h] [rbp-40h] BYREF

  v6 = 0;
  v11 = 0LL;
  v12 = 0LL;
  Pointer = sub_180005FC0(&unk_180020D10);
  if ( Pointer >= 0 )
  {
    v6 = 1;
    v10 = a2;
    v8.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800209B0, 0, 0LL, Binding[0], &v11, &v12, v10, a3).Pointer;
    Pointer = (int)v8.Pointer;
    Binding[1] = v8.Pointer;
    if ( SLODWORD(v8.Simple) >= 0 )
    {
      *(_DWORD *)a1 = a2;
      *(_QWORD *)(a1 + 8) = v11;
      *(_QWORD *)(a1 + 16) = v12;
      Pointer = 0;
    }
  }
  if ( v6 )
    RpcBindingFree(Binding);
  return (unsigned int)Pointer;
}
