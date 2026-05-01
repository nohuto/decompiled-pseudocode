/*
 * XREFs of ?CrmpRegistrationContextStart@@YAJPEAU_CRMP_REGISTRATION_CONTEXT@@W4_CRM_CLIENT_ID@@PEAG@Z @ 0x180004BEC
 * Callers:
 *     CrmRegister @ 0x180004B50 (CrmRegister.c)
 * Callees:
 *     CempRpcBindToServer @ 0x180005AD0 (CempRpcBindToServer.c)
 */

__int64 __fastcall CrmpRegistrationContextStart(__int64 a1, int a2, __int64 a3)
{
  int v6; // edi
  int Pointer; // ebx
  CLIENT_CALL_RETURN v8; // rax
  int v10; // [rsp+28h] [rbp-60h]
  __int64 v11; // [rsp+48h] [rbp-40h] BYREF
  RPC_BINDING_HANDLE Binding[7]; // [rsp+50h] [rbp-38h] BYREF

  v6 = 0;
  v11 = 0LL;
  Pointer = CempRpcBindToServer(&unk_180021710);
  if ( Pointer >= 0 )
  {
    v6 = 1;
    v10 = a2;
    v8.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800216E0, 0, 0LL, Binding[0], &v11, v10, a3).Pointer;
    Pointer = (int)v8.Pointer;
    Binding[1] = v8.Pointer;
    if ( SLODWORD(v8.Simple) >= 0 )
    {
      *(_QWORD *)(a1 + 8) = v11;
      *(_DWORD *)a1 = a2;
      Pointer = 0;
    }
  }
  if ( v6 )
    RpcBindingFree(Binding);
  return (unsigned int)Pointer;
}
