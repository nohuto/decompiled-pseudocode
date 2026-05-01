/*
 * XREFs of sub_180005900 @ 0x180005900
 * Callers:
 *     sub_180005824 @ 0x180005824 (sub_180005824.c)
 * Callees:
 *     sub_180005FC0 @ 0x180005FC0 (sub_180005FC0.c)
 *     sub_1800061F0 @ 0x1800061F0 (sub_1800061F0.c)
 *     sub_180014FB0 @ 0x180014FB0 (sub_180014FB0.c)
 */

__int64 __fastcall sub_180005900(__int64 a1, void *a2, int a3, _QWORD *a4)
{
  char v7; // si
  CLIENT_CALL_RETURN v8; // rbx
  int v9; // eax
  int v11; // [rsp+28h] [rbp-B0h]
  RPC_BINDING_HANDLE Binding; // [rsp+68h] [rbp-70h] BYREF
  _QWORD v13[2]; // [rsp+70h] [rbp-68h] BYREF
  CLIENT_CALL_RETURN v14; // [rsp+80h] [rbp-58h]
  CLIENT_CALL_RETURN v15; // [rsp+88h] [rbp-50h]
  CLIENT_CALL_RETURN v16; // [rsp+90h] [rbp-48h]
  CLIENT_CALL_RETURN v17; // [rsp+98h] [rbp-40h]
  CLIENT_CALL_RETURN v18; // [rsp+A0h] [rbp-38h]
  CLIENT_CALL_RETURN v19; // [rsp+A8h] [rbp-30h]

  v7 = 0;
  v13[0] = 0LL;
  LODWORD(v8.Pointer) = sub_180005FC0(a2);
  if ( SLODWORD(v8.Simple) >= 0 )
  {
    v7 = 1;
    switch ( *(_BYTE *)(a1 + 156) )
    {
      case 0:
        v11 = a3;
        v8.Pointer = NdrClientCall3(
                       (MIDL_STUBLESS_PROXY_INFO *)&stru_1800207A0,
                       0,
                       0LL,
                       Binding,
                       a1,
                       v11,
                       *a4,
                       a4 + 1,
                       a4 + 2,
                       a1 + 16,
                       v13).Pointer;
        v13[1] = v8.Pointer;
        break;
      case 1:
        v14.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800209E0, 0, 0LL, Binding, a1, a1 + 16).Pointer;
        LODWORD(v8.Pointer) = v14.Pointer;
        break;
      case 2:
        v15.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180020B88, 0, 0LL, Binding, a1, a1 + 16).Pointer;
        LODWORD(v8.Pointer) = v15.Pointer;
        break;
      case 3:
        v16.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180020EF0, 0, 0LL, Binding, a1, a1 + 16).Pointer;
        LODWORD(v8.Pointer) = v16.Pointer;
        break;
      case 4:
        v18.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180020920, 0, 0LL, Binding, a1).Pointer;
        LODWORD(v8.Pointer) = v18.Pointer;
        break;
      case 5:
        v19.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180020CE0, 0, 0LL, Binding, a1).Pointer;
        LODWORD(v8.Pointer) = v19.Pointer;
        break;
      case 6:
        v17.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180020B58, 0, 0LL, Binding, *a4, a1, a1 + 16).Pointer;
        LODWORD(v8.Pointer) = v17.Pointer;
        break;
      default:
        LODWORD(v8.Pointer) = -1073741127;
        break;
    }
    if ( SLODWORD(v8.Simple) >= 0 )
    {
      *(_QWORD *)(a1 + 8) = v13[0];
      if ( *(_BYTE *)(a1 + 156) )
      {
        if ( *(_BYTE *)(a1 + 156) != 1 && (unsigned int)*(unsigned __int8 *)(a1 + 156) - 2 >= 2 )
        {
LABEL_20:
          LODWORD(v8.Pointer) = 0;
          goto LABEL_21;
        }
      }
      else
      {
        LODWORD(v8.Pointer) = sub_180014FB0(a1, a4);
        if ( SLODWORD(v8.Simple) < 0 )
          goto LABEL_21;
      }
      v9 = sub_1800061F0(a1 + 16, sub_1800065E0, a1 + 24, a1 + 24);
      if ( v9 >= 0 )
        v9 = 0;
      LODWORD(v8.Pointer) = v9;
      if ( v9 >= 0 )
        goto LABEL_20;
    }
  }
LABEL_21:
  if ( v7 )
    RpcBindingFree(&Binding);
  return LODWORD(v8.Pointer);
}
