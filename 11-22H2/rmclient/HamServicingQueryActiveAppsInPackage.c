/*
 * XREFs of HamServicingQueryActiveAppsInPackage @ 0x180002010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall HamServicingQueryActiveAppsInPackage(
        _QWORD *a1,
        __int64 a2,
        int a3,
        _QWORD *a4,
        _DWORD *a5)
{
  CLIENT_CALL_RETURN result; // rax
  _QWORD v8[4]; // [rsp+48h] [rbp-20h] BYREF
  int v9; // [rsp+70h] [rbp+8h] BYREF
  _QWORD *v10; // [rsp+88h] [rbp+20h]

  v10 = a4;
  v8[0] = 0LL;
  v9 = 0;
  result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180020920, 4u, 0LL, *a1, a2, a3, v8, &v9).Pointer;
  v8[1] = result.Pointer;
  if ( SLODWORD(result.Simple) >= 0 )
  {
    *a4 = v8[0];
    *a5 = v9;
    return 0LL;
  }
  return result;
}
