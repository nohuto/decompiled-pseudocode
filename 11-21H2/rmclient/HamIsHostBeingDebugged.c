/*
 * XREFs of HamIsHostBeingDebugged @ 0x18001D400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall HamIsHostBeingDebugged(_QWORD *a1, __int64 a2, _BYTE *a3)
{
  __int64 v6; // rbx
  __int64 v7; // r14
  CLIENT_CALL_RETURN result; // rax
  ULONG v9; // [rsp+30h] [rbp-78h]
  int v10; // [rsp+38h] [rbp-70h]
  int v11; // [rsp+40h] [rbp-68h]
  char v12; // [rsp+B0h] [rbp+8h] BYREF
  _BYTE *v13; // [rsp+C0h] [rbp+18h]
  CLIENT_CALL_RETURN v14; // [rsp+C8h] [rbp+20h]

  v13 = a3;
  v12 = 0;
  v6 = *(_QWORD *)(a2 + 544);
  v7 = a2 + 464;
  v11 = *(_DWORD *)(a2 + 536);
  v10 = *(_DWORD *)(a2 + 532);
  v9 = RtlLengthSid((PSID)(a2 + 464));
  result.Pointer = NdrClientCall3(
                     (MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo,
                     0xFu,
                     0LL,
                     *a1,
                     a2,
                     v7,
                     v9,
                     v10,
                     v11,
                     v6,
                     &v12).Pointer;
  v14.Pointer = result.Pointer;
  if ( SLODWORD(result.Simple) >= 0 )
    *a3 = v12;
  return result;
}
